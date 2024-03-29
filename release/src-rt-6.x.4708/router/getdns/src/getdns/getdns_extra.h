/**
 * \file
 * \brief Public interface to getdns that is ADDITIONAL to the official getdns API, include
 *        in your application to use additional functionality offered by
 *        this implementation.
 */

/*
 * Copyright (c) 2013, NLNet Labs, Verisign, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * * Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * * Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 * * Neither the names of the copyright holders nor the
 *   names of its contributors may be used to endorse or promote products
 *   derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL Verisign, Inc. BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _GETDNS_EXTRA_H_
#define _GETDNS_EXTRA_H_

#include <getdns/getdns.h>
#include <sys/time.h>
#include <stdio.h>
#include <time.h>
#include <stdarg.h>

#ifdef __cplusplus
extern "C" {
#endif

/** \addtogroup valuesandtexts Values and texts
 *  @{
 */

/**
 * \addtogroup returntypestext Return values and texts
 *  @{
 */
#define GETDNS_RETURN_IO_ERROR ((getdns_return_t) 397 )
#define GETDNS_RETURN_IO_ERROR_TEXT "An input/output error occurred. Inspect errno for details."
#define GETDNS_RETURN_NO_UPSTREAM_AVAILABLE ((getdns_return_t) 398 )
#define GETDNS_RETURN_NO_UPSTREAM_AVAILABLE_TEXT "None of the configured upstreams could be used to send queries on the specified transports"
#define GETDNS_RETURN_NEED_MORE_SPACE ((getdns_return_t) 399 )
#define GETDNS_RETURN_NEED_MORE_SPACE_TEXT "The buffer was too small"
/** @}
  */


/**
 * \addtogroup contextcodetypestext Context code values and texts
 *  @{
 */
#define GETDNS_CONTEXT_CODE_TLS_AUTHENTICATION 618
#define GETDNS_CONTEXT_CODE_TLS_AUTHENTICATION_TEXT "Change related to getdns_context_set_tls_authentication"
#define GETDNS_CONTEXT_CODE_EDNS_CLIENT_SUBNET_PRIVATE 619
#define GETDNS_CONTEXT_CODE_EDNS_CLIENT_SUBNET_PRIVATE_TEXT "Change related to getdns_context_set_edns_client_subnet_private"
#define GETDNS_CONTEXT_CODE_TLS_QUERY_PADDING_BLOCKSIZE 620
#define GETDNS_CONTEXT_CODE_TLS_QUERY_PADDING_BLOCKSIZE_TEXT "Change related to getdns_context_set_tls_query_padding_blocksize"
#define GETDNS_CONTEXT_CODE_PUBKEY_PINSET 621
#define GETDNS_CONTEXT_CODE_PUBKEY_PINSET_TEXT "Change related to getdns_context_set_pubkey_pinset"
#define GETDNS_CONTEXT_CODE_ROUND_ROBIN_UPSTREAMS 622
#define GETDNS_CONTEXT_CODE_ROUND_ROBIN_UPSTREAMS_TEXT "Change related to getdns_context_set_round_robin_upstreams"
#define GETDNS_CONTEXT_CODE_TLS_BACKOFF_TIME 623
#define GETDNS_CONTEXT_CODE_TLS_BACKOFF_TIME_TEXT "Change related to getdns_context_set_tls_backoff_time"
#define GETDNS_CONTEXT_CODE_TLS_CONNECTION_RETRIES 624
#define GETDNS_CONTEXT_CODE_TLS_CONNECTION_RETRIES_TEXT "Change related to getdns_context_set_tls_connection_retries"

#define GETDNS_CONTEXT_CODE_TRUST_ANCHORS_URL 625
#define GETDNS_CONTEXT_CODE_TRUST_ANCHORS_URL_TEXT "Change related to getdns_context_set_trust_anchors_url"
#define GETDNS_CONTEXT_CODE_TRUST_ANCHORS_VERIFY_CA 626
#define GETDNS_CONTEXT_CODE_TRUST_ANCHORS_VERIFY_CA_TEXT "Change related to getdns_context_set_trust_anchors_verify_ca"
#define GETDNS_CONTEXT_CODE_TRUST_ANCHORS_VERIFY_EMAIL 627
#define GETDNS_CONTEXT_CODE_TRUST_ANCHORS_VERIFY_EMAIL_TEXT "Change related to getdns_context_set_trust_anchors_verify_email"
#define GETDNS_CONTEXT_CODE_APPDATA_DIR 628
#define GETDNS_CONTEXT_CODE_APPDATA_DIR_TEXT "Change related to getdns_context_set_appdata_dir"
#define GETDNS_CONTEXT_CODE_RESOLVCONF 629
#define GETDNS_CONTEXT_CODE_RESOLVCONF_TEXT "Change related to getdns_context_set_resolvconf"
#define GETDNS_CONTEXT_CODE_HOSTS 630
#define GETDNS_CONTEXT_CODE_HOSTS_TEXT "Change related to getdns_context_set_hosts"
#define GETDNS_CONTEXT_CODE_TLS_CA_PATH 631
#define GETDNS_CONTEXT_CODE_TLS_CA_PATH_TEXT "Change related to getdns_context_set_tls_ca_path"
#define GETDNS_CONTEXT_CODE_TLS_CA_FILE 632
#define GETDNS_CONTEXT_CODE_TLS_CA_FILE_TEXT "Change related to getdns_context_set_tls_ca_file"
#define GETDNS_CONTEXT_CODE_TLS_CIPHER_LIST 633
#define GETDNS_CONTEXT_CODE_TLS_CIPHER_LIST_TEXT "Change related to getdns_context_set_tls_cipher_list"
#define GETDNS_CONTEXT_CODE_TLS_CURVES_LIST 634
#define GETDNS_CONTEXT_CODE_TLS_CURVES_LIST_TEXT "Change related to getdns_context_set_tls_curves_list"
#define GETDNS_CONTEXT_CODE_TLS_CIPHERSUITES 635
#define GETDNS_CONTEXT_CODE_TLS_CIPHERSUITES_TEXT "Change related to getdns_context_set_tls_ciphersuites"
#define GETDNS_CONTEXT_CODE_TLS_MIN_VERSION 636
#define GETDNS_CONTEXT_CODE_TLS_MIN_VERSION_TEXT "Change related to getdns_context_set_tls_min_version"
#define GETDNS_CONTEXT_CODE_TLS_MAX_VERSION 637
#define GETDNS_CONTEXT_CODE_TLS_MAX_VERSION_TEXT "Change related to getdns_context_set_tls_max_version"
#define GETDNS_CONTEXT_CODE_TRUST_ANCHORS_BACKOFF_TIME 638
#define GETDNS_CONTEXT_CODE_TRUST_ANCHORS_BACKOFF_TIME_TEXT "Change related to getdns_context_set_trust_anchors_backoff_time"


/** @}
  */


/**
 * \defgroup versions Version values
 *  @{
 */
#define GETDNS_VERSION "1.5.2"
#define GETDNS_NUMERIC_VERSION 0x01050200
#define GETDNS_API_VERSION "December 2015"
#define GETDNS_API_NUMERIC_VERSION 0x07df0c00
/** @}
  */


/* an alias for REQUIRED */
#define GETDNS_AUTHENTICATION_HOSTNAME GETDNS_AUTHENTICATION_REQUIRED

/**
  * \defgroup authvaulesandtext Authentication values and texts
  * @{
  */
/* Authentication options used when doing TLS */
typedef enum getdns_tls_authentication_t {
	GETDNS_AUTHENTICATION_NONE = 1300,
	GETDNS_AUTHENTICATION_REQUIRED = 1301
} getdns_tls_authentication_t;

#define GETDNS_AUTHENTICATION_NONE_TEXT "See getdns_context_set_tls_authentication()"
#define GETDNS_AUTHENTICATION_REQUIRED_TEXT "See getdns_context_set_tls_authentication()"
/** @}
  */


/**
 * \addtogroup suffixappendtypestext Suffix appending values and texts
 *  @{
 */
#define GETDNS_APPEND_NAME_TO_SINGLE_LABEL_FIRST ((getdns_append_name_t) 554 )
#define GETDNS_APPEND_NAME_TO_SINGLE_LABEL_FIRST_TEXT "See getdns_context_set_append_name()"
/** @}
  */

/**
 * \addtogroup transporttypestext Transport arrangements and texts
 *  @{
 */

/**
 * WARNING! Do not use the constants below.  They will be removed from future
 * releases.  Please use the getdns_context_set_dns_transport_list with the
 * GETDNS_TRANSPORT_UDP, GETDNS_TRANSPORT_TCP and GETDNS_TRANSPORT_TLS
 * constants instead.
 */
#define GETDNS_TRANSPORT_TLS_ONLY_KEEP_CONNECTIONS_OPEN 544
#define GETDNS_TRANSPORT_TLS_ONLY_KEEP_CONNECTIONS_OPEN_TEXT "See getdns_context_set_dns_transport()"
#define GETDNS_TRANSPORT_TLS_FIRST_AND_FALL_BACK_TO_TCP_KEEP_CONNECTIONS_OPEN 545
#define GETDNS_TRANSPORT_TLS_FIRST_AND_FALL_BACK_TO_TCP_KEEP_CONNECTIONS_OPEN_TEXT "See getdns_context_set_dns_transport()"

/** @}
  */
/** @}
  */


/**
 * \addtogroup functions Functions
 *  @{
 */

/**
 * \addtogroup eventloops Event loop extension functions
 *  @{
 */

/**
 * The type of callback function that is used by the callbacks in an
 * getdns_eventloop_event.
 * @param userarg This will have the value of the userarg attribute of the
 *                getdns_eventloop_event struct in which this callback was
 *                present.
 */
typedef void (*getdns_eventloop_callback)(void *userarg);


typedef struct getdns_eventloop_event getdns_eventloop_event;
/**
 * getdns uses an event loop abstraction layer to interface with event loop
 * extensions. The extension accepts registration of getdns_eventloop_events
 * and translates them to the underlying event loop API for which it is an
 * extension.  Also applications using getdns can use the abstraction layer
 * themselves and in doing so inherit the flexibility being immediately 
 * compatible with all the event loop systems for which there is an extension
 * already (i.e. libevent, libev and libuv).
 */
struct getdns_eventloop_event {
	/**
	 * The userarg argument that will be passed to the
	 * getdns_eventloop_callbacks when they are fired.
	 */
	void *userarg;

	/**
	 * When not NULL, it will be fired when the associated file descriptor
	 * is readable.
	 */
	getdns_eventloop_callback read_cb;

	/**
	 * When not NULL, it will be fired when the associated file descriptor
	 * is writable.
	 */
	getdns_eventloop_callback write_cb;

	/**
	 * When not NULL, it will be fired when the during scheduling specified
	 * timeout time has passed.
	 */
	getdns_eventloop_callback timeout_cb;

	/**
	 * Pointer to the underlying event
	 * that an eventloop extension must manage (i.e. create and free.)
	 */
	void *ev;
};

typedef struct getdns_eventloop_vmt getdns_eventloop_vmt;

/**
 * The manifestation of the event loop abstraction layer.  Event loop
 * extension implementers should extend this with attributed needed for the
 * underlying event loop.
 * The current event loop extension can be obtained with the
 * getdns_context_get_eventloop() function.
 */
typedef struct getdns_eventloop {
	/**
	 * The Virtual Method Table providing the interface for this specific
	 * event loop extension.
	 */
	getdns_eventloop_vmt *vmt;
} getdns_eventloop;

/**
 * The function prototype for the `cleanup` and `run` functions in an getdns
 * event loop's Virtual Method Table.  These methods have no (extra) arguments
 * and return nothing.
 * @param loop The event loop to `run` or `cleanup`
 */
typedef void (*getdns_eventloop_noargs)(getdns_eventloop *loop);

/**
 * The function prototype for the `schedule` function in an event loop
 * Virtual Method Table.
 * The getdns_eventloop_event must be provided by the caller with the callbacks
 * and userarg therein already supplied (by the caller). This function will set
 * the ev pointer (in the getdns_eventloop_event) to refer to the underlying
 * (extension) event.
 * @param loop The event loop for which to register the event.
 * @param fd The file descriptor for which to schedule the read_cb and/or
 *           write_cb callbacks.
 * @param timeout The number of milliseconds that must pass without read
 *        and/or write event after which the timeout_cb callback is fired.
 * @param ev The event with all attributes provisioned, except for the ev->ev
 *           attribute, which will be provisioned by the implementation of
 *           the schedule method.
 * @return GETDNS_RETURN_GOOD when successful and an error code otherwise.
 */
typedef getdns_return_t (*getdns_eventloop_schedule)(getdns_eventloop *loop,
    int fd, uint64_t timeout, getdns_eventloop_event *ev);

/**
 * The function prototype for the `clean` function in an event loop
 * Virtual Method Table.
 * The implementation must clear the event (which is referred to with
 * ev->ev) in the underlying event loop and make ev->ev NULL when done.
 * getdns will test for this value to determine if events are scheduled or not.
 * @param loop The event loop for which to event needs to be cleared.
 * @param[in,out] ev The event with the ev->ev attribute referring to the
 *           underlying event. ev->ev must be set to NULL after the event
 *           was cleared.
 * @return GETDNS_RETURN_GOOD when successful and an error code otherwise.
 */
typedef getdns_return_t (*getdns_eventloop_clear)
    (getdns_eventloop *loop, getdns_eventloop_event *ev);

/**
 * The function prototype for the `run_once` function in an event loop
 * Virtual Method Table.  The implementation must do a single round of
 * firing callbacks, either blocking or not.
 * @param loop The event loop to run
 * @param blocking When 0, only callbacks for file descriptors that are
 *                 immediately readable or writable or timeouts that have
 *                 passed will be fired. When 1, the eventloop will wait
 *                 until the first callback can be fired, either because a
 *                 associated file descriptor has become readable or writeable,
 *                 or because a timeout time passed.
 */
typedef void (*getdns_eventloop_run_once)(getdns_eventloop *loop,int blocking);

/**
 * The Virtual Method Table providing the interface for this specific
 * event loop extension.
 */
struct getdns_eventloop_vmt {
	/**
	 * Destroy the getdns_eventloop and the associated underlying event
	 * loop for which it is an extension.
	 */
	getdns_eventloop_noargs     cleanup;

	/**
	 * Schedule a getdns_eventloop_event with a getdns_eventloop.
	 */
	getdns_eventloop_schedule   schedule;

	/**
	 * Clear a getdns_eventloop_event
	 */
	getdns_eventloop_clear      clear;

	/**
	 * Run the getdns_eventloop until it has no getdns_eventloop_events
	 * scheduled.
	 */
	getdns_eventloop_noargs     run;

	/**
	 * Do a single iteration of firing callbacks for scheduled events
	 * and then return.
	 */
	getdns_eventloop_run_once   run_once;
};

/**
 * Configure a context to use the specified event loop abstraction extension.
 * This function must be called with an provisioned eventloop by the
 * event loop extension registration functions.
 * @see getdns_context_get_eventloop
 * @param context The context to configure
 * @param eventloop The event loop abstraction extension with a completely
 *                  provisioned Virtual Method Table and other associated
 *                  data which is opaque to the user.
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context or eventloop were NULL.
 */
getdns_return_t
getdns_context_set_eventloop(getdns_context *context,
    getdns_eventloop *eventloop);

/**
 * Get the current event loop abstraction extension from the context
 * Applications using getdns can use the event loop abstraction extension
 * themselves directly to inherit the flexibility being immediately 
 * compatible with all the event loop systems for which there is an extension
 * (i.e. libevent, libev and libuv).
 * @see getdns_context_set_eventloop
 * @param[in]  context The context to get the eventloop from
 * @param[out] eventloop The currently active  event loop abstraction extension
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context or evenloop were NULL
 */
getdns_return_t
getdns_context_get_eventloop(const getdns_context *context,
    getdns_eventloop **eventloop);

/**
 * Run the context's event loop until nothing more to do.
 * This is equivalend to:
 * ```c
 * if (getdns_context_get_eventloop(context, &loop) == GETDNS_RETURN_GOOD)
 * 	loop->vmt->run(loop);
 * ```
 * @param context The context which event loop to run.
 */
void
getdns_context_run(getdns_context *context);
/** @}
 */


/**
 * \addtogroup getdns_context
 *  @{
 */

/**
 * Register a callback function for context changes.
 * @see getdns_context_set_context_update_callback
 * @see contextcodetypestext
 * @param context The context to monitor for changes
 * @param userarg A user defined argument that will be passed to the callback
 *                function.
 * @param value   The callback function that will be called when a context
 *                value is changed.  The arguments to the callback function
 *                are the context for which the value changes, a code
 *                referencing the changed value and the userarg parameter
 *                supplied during callback registration.
 * @return GETDNS_RETURN_GOOD on success or an error code on failure.
 */
getdns_return_t
getdns_context_set_update_callback(getdns_context *context, void *userarg,
    void (*value) (getdns_context *, getdns_context_code_t, void *));

/**
 * Enable the return_dnssec_status extension on every request.
 * @param context The context to configure
 * @param enabled is either GETDNS_EXTENSION_TRUE or GETDNS_EXTENSION_FALSE
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_INVALID_PARAMETER if context or value is invalid
 */
getdns_return_t getdns_context_set_return_dnssec_status(
    getdns_context *context, int enabled);

/**
 * Configure context for oppertunistic or scrict usage profile with DNS
 * over TLS.
 * @see getdns_context_get_tls_authentication
 * @see authvaulesandtext
 * @param context The context to configure
 * @param value is either GETDNS_AUTHENTICATION_REQUIRED for the strict
 *              usage profile or GETDNS_AUTHENTICATION_NONE for opportunistic
 *              profile.
 *              See #getdns_context_set_upstream_recursive_servers
 *              for details on how to configure credentials per upstream.
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_INVALID_PARAMETER if context is null or value has an
 *         invalid value.
 */
getdns_return_t
getdns_context_set_tls_authentication(
    getdns_context *context, getdns_tls_authentication_t value);

/**
 * Configure context to round robin queries over the available upstreams
 * when resolving with the stub resolution type.
 * @see getdns_context_get_round_robin_upstreams
 * @param context The context to configure
 * @param value is either 1 to enable and 0 to disable round robin.
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_INVALID_PARAMETER if context is null or value has an
 *         invalid value.
 */
getdns_return_t
getdns_context_set_round_robin_upstreams(getdns_context *context, uint8_t value);

/**
 * Configure the amount of seconds a TLS connection should not be tried with
 * an upstream when it has never been tried before.  Default is 3600 which is
 * one hour.
 * @see getdns_context_get_tls_backoff_time
 * @param context The context to configure
 * @param value Number of seconds before an attempt to setup DNS over TLS,
 *              with an upstream for which setting up an TLS connection has
 *              never been successful before, will be retried.
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_INVALID_PARAMETER if context is null.
 */
getdns_return_t
getdns_context_set_tls_backoff_time(getdns_context *context, uint16_t value);

/**
 * Configure the number of times getdns retries to setup DNS over TLS with a
 * specific upstream, before it decides to give up for tls_backoff_time
 * seconds.  The default is 2.
 * @see getdns_context_get_tls_connection_retries
 * @param context The context to configure
 * @param value Number of attempts to retry setting up a DNS over TLS
 *              connection before giving up.
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_INVALID_PARAMETER if context is null.
 */
getdns_return_t
getdns_context_set_tls_connection_retries(getdns_context *context, uint16_t value);

/**
 * Configure context to sent queries with the EDNS Client Subnet option set
 * to hide the originating network when resolving in stub resolution.
 * The default is 0 (disabled).
 * @see getdns_context_get_edns_client_subnet_private
 * @param context The context to configure
 * @param value is either 1 to enable and 0 to disable.
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_INVALID_PARAMETER if context is null or value has an
 *         invalid value.
 */
getdns_return_t
getdns_context_set_edns_client_subnet_private(getdns_context *context, uint8_t value);

/**
 * Configure context to pad each outgoing query over TLS to a multiple of the
 * requested blocksizes.  A value of 0 means disable, and a value of 1 means
 * to "pad using a sensible policy".  The default is 1 (pad using sensible policy).
 * @see getdns_context_get_tls_query_padding_blocksize
 * @param context The context to configure
 * @param value The requested block size to pad to, or 0 to disable, or 1 to
 *              indicate that the library should use a sinsible policy.
 *              Currently that just means to pad to a multiple of 128 octets for
 *              outgoing queries, but this might change in the future.
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_INVALID_PARAMETER if context is null or value has an
 *         invalid value.
 */
getdns_return_t
getdns_context_set_tls_query_padding_blocksize(getdns_context *context, uint16_t value);

/**
 * Configure context to advertise maximum UDP payload size values, that
 * adhere to the suggestions in RFC 6891 and may follow a scheme that uses
 * multiple values to maximize receptivity. In practice with our implementation
 * this means 1432 for IPv4 upstreams and 1232 for IPv6 upstreams.
 * The default is to have the edns maximum UDP payload size to be unset and
 * thus use the adaptive scheme.
 * @see getdns_context_set_edns_maximum_udp_payload_size
 * @see getdns_context_get_edns_maximum_udp_payload_size
 * @param context The context to configure
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_INVALID_PARAMETER if context is null.
 */
getdns_return_t
getdns_context_unset_edns_maximum_udp_payload_size(getdns_context *context);


typedef enum getdns_loglevel_type {
	GETDNS_LOG_EMERG   = 0,
	GETDNS_LOG_ALERT   = 1,
	GETDNS_LOG_CRIT    = 2,
	GETDNS_LOG_ERR     = 3,
	GETDNS_LOG_WARNING = 4,
	GETDNS_LOG_NOTICE  = 5,
	GETDNS_LOG_INFO    = 6,
	GETDNS_LOG_DEBUG   = 7
} getdns_loglevel_type;

#define GETDNS_LOG_EMERG_TEXT   "System is unusable"
#define GETDNS_LOG_ALERT_TEXT   "Action must be taken immediately"
#define GETDNS_LOG_CRIT_TEXT    "Critical conditions"
#define GETDNS_LOG_ERR_TEXT     "Error conditions"
#define GETDNS_LOG_WARNING_TEXT "Warning conditions"
#define GETDNS_LOG_NOTICE_TEXT  "Normal, but significant, condition"
#define GETDNS_LOG_INFO_TEXT    "Informational message"
#define GETDNS_LOG_DEBUG_TEXT   "Debug-level message"

#define GETDNS_LOG_UPSTREAM_STATS 0x3000
#define GETDNS_LOG_UPSTREAM_STATS_TEXT "Log messages about upstream statistics"
#define GETDNS_LOG_SYS_STUB 0x2000
#define GETDNS_LOG_SYS_STUB_TEXT "Log messages about stub resolving"
#define GETDNS_LOG_SYS_RECURSING 0x4000
#define GETDNS_LOG_SYS_RECURSING_TEXT "Log messages about recursive resolving"
#define GETDNS_LOG_SYS_RESOLVING 0x6000
#define GETDNS_LOG_SYS_RESOLVING_TEXT "Log messages about resolving"
#define GETDNS_LOG_SYS_ANCHOR 0x8000
#define GETDNS_LOG_SYS_ANCHOR_TEXT "Log messages about fetching trust anchors"



typedef void (*getdns_logfunc_type) (void *userarg, uint64_t log_systems,
    getdns_loglevel_type, const char *, va_list ap);

/**
 * Register a function that will be called when there is something to log
 * equally or more severe than the given level for the given system.
 * @param[in] context The context from which to get the setting
 * @param[in] userarg A user defined argument to be passed to the
 *                    log function.
 * @param[in] system  A bitwise ORed collection of systems for which the log
 *                    function should be called.  Currently only logging 
 *                    information about upstream statistics is available;
 *                    i.e.: GETDNS_LOG_UPSTREAM_STATS
 * @param[in] level   A severity level.  The log function will be called
 *                    only for messages with an equal or more severe level.
 *                    More severe has a lower value.
 * @param[in] func    The log function to call with the user argument,
 *                    the system for which the log message, the severity
 *                    level, a printf style format string and the arguments
 *                    for the format string, as parameter.
 * @see getdns_loglevel_type
 * @see getdns_logfunc_type
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL.
 */
getdns_return_t
getdns_context_set_logfunc(getdns_context *context, void *userarg,
    uint64_t system, getdns_loglevel_type level, getdns_logfunc_type func);

/**
 * Define the location for storing library specific data.  The location should
 * be writable for the current user using the application with which the
 * library is linked.  Currently this is only used for storing data concerning
 * zero configuration dnssec.
 * @param[in] context     The context from which to get the setting
 * @param[in] appdata_dir A user writable location in which the library can
 *                        store data.  The last element of the path is tried
 *                        to be created if it does not exist.  When NULL is
 *                        given, the default location is used which is
 *                        ${HOME}/.getdns/ on Unix line systems (Linux, BSD's,
 *                        MacOS), and %AppData%\getdns\ on Windows.
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL.
 */
getdns_return_t
getdns_context_set_appdata_dir(
    getdns_context *context, const char *appdata_dir);

/**
 * Sets the url for the location of the XML file from which to fetch the
 * trust anchors with Zero configuration DNSSEC.  The url should be for
 * http, and the file should have the .xml extension.
 *
 * Alongside the XML file, also the S/MIME signature that will be used to 
 * validate the XML file, will be fetched from the url with the .xml extension
 * replaced by .p7s.
 * 
 * When successfully validated with the verify Certificate Authority and the
 * verify email address, the context will be equipped with the DNSSEC trust
 * anchors defined within the XML file as described in RFC7958.
 * The XML file will also be stored together with the .p7s file in the
 * appdata directory with the names "root-anchors.xml" and "root-anchors.p7s"
 * respectively.
 *
 * When the trust-anchors from the XML file are used, the root DNSKEY is
 * tracked and stored in the appdata directory too as "root.key"
 *
 * Trust anchors from the XML file will be tried when:
 *   - There were no other trust anchors provided, either by the default
 *     trust anchor file "/etc/unbound/getdns-root.key", or set with the
 *     getdns_context_set_dnssec_trust_anchors() function.
 *   - or the available trust anchors (from the default location or set by
 *     the application) caused the root DNSKEY rrset to be BOGUS.
 *
 * Trust anchors from the XML file will be read from the root-anchors.xml
 * file in appdata directory and will only be used when validation with the 
 * S/MIME signatures in root-anchors.p7s succeeds with the verification
 * Certificate Authority and the verification email address.
 *
 * A (new) version of "root-anchors.xml" and "root-anchors.p7s" will be
 * fetched when:
 *   - The appdata directory is writeable by the current used, but the 
 *     "root-anchors.xml" or "root-anchors.p7s" files were not available.
 *   - or there is a new root DNSKEY RRset (or signature) and it contains
 *     key_ids which were not in "root-anchors.xml."
 *
 * @see getdns_context_get_trust_anchors_url
 * @see getdns_context_set_trust_anchors_verify_CA
 * @see getdns_context_set_trust_anchors_verify_email
 * @param[in] context     The context to configure
 * @param[in] url         The url including the XML file from which the
 *                        trust anchors (and the S/MIME signature) will be
 *                        fetched.  Default is:
 *                        http://data.iana.org/root-anchors/root-anchors.xml
 *                        When NULL is given, the default will be used.
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL.
 */
getdns_return_t
getdns_context_set_trust_anchors_url(getdns_context *context, const char *url);

/**
 * Sets the public certificate for the Certificate Authority with which to
 * validate the XML file with the S/MIME signatures fetch from the url
 * given with the getdns_context_set_trust_anchors_url() function.
 * @see getdns_context_get_trust_anchors_verify_CA
 * @see getdns_context_set_trust_anchors_url
 * @see getdns_context_set_trust_anchors_verify_email
 * @param[in] context     The context to configure
 * @param[in] verify_CA   The certificate of the Certificate Authority with
 *                        which to validate the XML trust anchors.
 *                        The default is the ICANN Root CA, which is valid
 *                        till Dec 18 2029.
 *                        When NULL is given, the default will be used.
 *                        When an empty string is given, Zero configuration
 *                        DNSSEC will be disabled.
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL.
 */
getdns_return_t
getdns_context_set_trust_anchors_verify_CA(
    getdns_context *context, const char *verify_CA);

/**
 * Sets the email address for the Subject of the signer's certificate from the
 * p7s signature file with which to validate the XML file fetched from the url
 * given with the getdns_context_set_trust_anchors_url() function.
 * @see getdns_context_get_trust_anchors_verify_email
 * @see getdns_context_set_trust_anchors_url
 * @see getdns_context_set_trust_anchors_verify_CA
 * @param[in] context      The context to configure
 * @param[in] verify_email Only signatures from this name are allowed.
 *                         The default dnssec@iana.org.
 *                         When NULL is given, the default will be used.
 *                         When an empty string is given, Zero configuration
 *                         DNSSEC will be disabled.
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL.
 */
getdns_return_t
getdns_context_set_trust_anchors_verify_email(
    getdns_context *context, const char *verify_email);

/**
 * Configure the amount of milliseconds the trust anchors should not be tried
 * to be fetched after failure.  Default is 2500 which is two and a half seconds.
 * Setting the trust anchors backoff time will cause fetching to be retried
 * immediatly.
 * @see getdns_context_get_trust_anchors_backoff_time
 * @param context The context to configure
 * @param value Number of milliseconds before fetch trust anchors
 *              will be retried.
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_INVALID_PARAMETER if context is null.
 */
getdns_return_t
getdns_context_set_trust_anchors_backoff_time(
    getdns_context *context, uint64_t value);

/**
 * Initialized the context's upstream recursive servers and suffixes
 * with the values from the given resolv.conf file.
 * @see getdns_context_get_resolvconf
 * @see getdns_context_set_hosts
 * @param[in] context      The context to configure
 * @param[in] resolvconf   Defaults to /etc/resolv.conf
 * @return GETDNS_RETURN_GOOD when successful and error code otherwise.
 */
getdns_return_t
getdns_context_set_resolvconf(getdns_context *context, const char *resolvconf);

/**
 * Initialized the context's GETDNS_NAMESPACE_LOCALNAMES namespace with
 * values from the given hosts file.
 * @see getdns_context_get_hosts
 * @see getdns_context_set_resolvconf
 * @param[in] context      The context to configure
 * @param[in] hosts        Defaults to /etc/hosts
 * @return GETDNS_RETURN_GOOD when successful and error code otherwise.
 */
getdns_return_t
getdns_context_set_hosts(getdns_context *context, const char *hosts);

/**
 * Specify where the location for CA certificates for verification purposes
 * are located.
 * @see getdns_context_get_tls_ca_path
 * @see getdns_context_set_tls_ca_file
 * @param[in] context      The context to configure
 * @param[in] tls_ca_path       Directory with Certificate Authority certificates.
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL.
 */
getdns_return_t
getdns_context_set_tls_ca_path(getdns_context *context, const char *tls_ca_path);

/**
 * Specify the file with CA certificates for verification purposes.
 * @see getdns_context_get_tls_ca_file
 * @see getdns_context_set_tls_ca_path
 * @param[in] context      The context to configure
 * @param[in] tls_ca_file       The file with Certificate Authority certificates.
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL.
 */
getdns_return_t
getdns_context_set_tls_ca_file(getdns_context *context, const char *tls_ca_file);

/**
 * Sets the list of available ciphers for authenticated TLS upstreams.
 * @see getdns_context_get_tls_cipher_list
 * @param[in] context      The context to configure
 * @param[in] cipher_list  The cipher list
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL.
 */
getdns_return_t
getdns_context_set_tls_cipher_list(
    getdns_context *context, const char *cipher_list);

/**
 * Configure the available TLS1.3 ciphersuites for authenticated TLS upstreams.
 * @see getdns_context_get_tls_ciphersuites
 * @param[in] context       The context to configure
 * @param[in] ciphersuites  The cipher list
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL.
 */
getdns_return_t
getdns_context_set_tls_ciphersuites(
    getdns_context *context, const char *ciphersuites);

/**
 * Sets the supported curves TLS upstreams.
 * @see getdns_context_get_tls_curves_list
 * @param[in] context      The context to configure
 * @param[in] curves_list  The string is a colon separated list of curve
 *                         NIDs or names, for example "P-521:P-384:P-256".
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL.
 */
getdns_return_t
getdns_context_set_tls_curves_list(
    getdns_context *context, const char *curves_list);

typedef enum getdns_tls_version_t {
	GETDNS_SSL3 = 1400,
	GETDNS_TLS1 = 1401,
	GETDNS_TLS1_1 = 1402,
	GETDNS_TLS1_2 = 1403,
	GETDNS_TLS1_3 = 1404
} getdns_tls_version_t;

#define GETDNS_SSL3_TEXT   "See getdns_context_(set|get)_tls_(min|max)_version()"
#define GETDNS_TLS1_TEXT   "See getdns_context_(set|get)_tls_(min|max)_version()"
#define GETDNS_TLS1_1_TEXT "See getdns_context_(set|get)_tls_(min|max)_version()"
#define GETDNS_TLS1_2_TEXT "See getdns_context_(set|get)_tls_(min|max)_version()"
#define GETDNS_TLS1_3_TEXT "See getdns_context_(set|get)_tls_(min|max)_version()"

/**
 * Configure context for minimum supported TLS version.
 * @see getdns_context_set_tls_max_version
 * @see getdns_context_get_tls_min_version
 * @param context The context to configure
 * @param min_version is one of GETDNS_SSL3, GETDNS_TLS1, GETDNS_TLS1_1,
 *                    GETDNS_TLS1_2, GETDNS_TLS1_3
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_INVALID_PARAMETER if context is null or value has an
 *         invalid value.
 */
getdns_return_t
getdns_context_set_tls_min_version(
    getdns_context *context, getdns_tls_version_t min_version);

/**
 * Get configured minimum supported TLS version.
 * @see getdns_context_get_tls_max_version
 * @see getdns_context_set_tls_min_version
 * @param context The context to configure
 * @param min_version is one of GETDNS_SSL3, GETDNS_TLS1, GETDNS_TLS1_1,
 *                    GETDNS_TLS1_2, GETDNS_TLS1_3
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_INVALID_PARAMETER if context is null or value has an
 *         invalid value.
 */
getdns_return_t
getdns_context_get_tls_min_version(
    const getdns_context *context, getdns_tls_version_t *min_version);

/**
 * Configure context for maximum supported TLS version.
 * @see getdns_context_set_tls_min_version
 * @see getdns_context_get_tls_max_version
 * @param context The context to configure
 * @param max_version is one of GETDNS_SSL3, GETDNS_TLS1, GETDNS_TLS1_1,
 *                    GETDNS_TLS1_2, GETDNS_TLS1_3
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_INVALID_PARAMETER if context is null or value has an
 *         invalid value.
 */
getdns_return_t
getdns_context_set_tls_max_version(
    getdns_context *context, getdns_tls_version_t max_version);

/**
 * Get configured maximum supported TLS version.
 * @see getdns_context_get_tls_min_version
 * @see getdns_context_set_tls_max_version
 * @param context The context to configure
 * @param max_version is one of GETDNS_SSL3, GETDNS_TLS1, GETDNS_TLS1_1,
 *                    GETDNS_TLS1_2, GETDNS_TLS1_3
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_INVALID_PARAMETER if context is null or value has an
 *         invalid value.
 */
getdns_return_t
getdns_context_get_tls_max_version(
    const getdns_context *context, getdns_tls_version_t *max_version);

/**
 * Get the current resolution type setting from this context.
 * @see getdns_context_set_resolution_type
 * @see resolutiontypestext
 * @param[in]  context The context from which to get the setting
 * @param[out] value The resolution type, either GETDNS_RESOLUTION_RECURSING
 *             or GETDNS_RESOLUTION_STUB.
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context or value was NULL.
 */
getdns_return_t
getdns_context_get_resolution_type(const getdns_context *context,
    getdns_resolution_t *value);

/**
 * Get a copy of the namespaces list setting from this context.
 * Users must call free on the resulting namespaces if not NULL
 * @see getdns_context_set_namespaces
 * @see namespacetypestext
 * @param[in]  context The context from which to get the setting
 * @param[out] namespace_count The length of the list.
 * @param[out] namespaces The returned namespaces list.
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when any of the arguments was NULL.
 */
getdns_return_t
getdns_context_get_namespaces(const getdns_context *context,
    size_t *namespace_count, getdns_namespace_t **namespaces);

/**
 * Get what transports are used for DNS lookups.
 * @see getdns_context_set_dns_transport
 * @see transporttypestext
 * @see getdns_context_get_dns_transport_list
 * @param[in]  context The context from which to get the setting
 * @param[out] value The transport to use for DNS lookups.
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when any of the arguments was NULL.
 */
getdns_return_t
getdns_context_get_dns_transport(const getdns_context *context,
    getdns_transport_t *value);

/**
 * Get a copy of the transports list setting from this context.
 * Users must call free on the resulting transports if not NULL
 * @see getdns_context_set_dns_transport_list
 * @see transportlisttypestext
 * @see getdns_context_get_dns_transport
 * @param[in]  context The context from which to get the setting
 * @param[out] transport_count The length of the list.
 * @param[out] transports The returned transports list.
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when any of the arguments was NULL.
 */
getdns_return_t
getdns_context_get_dns_transport_list(const getdns_context *context,
    size_t *transport_count, getdns_transport_list_t **transports);

/**
 * Get the current limit for outstanding queries setting from this context.
 * @see getdns_context_set_limit_outstanding_queries
 * @param[in]  context The context from which to get the setting
 * @param[out] limit The current limit for outstanding queries
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context or limit was NULL.
 */
getdns_return_t
getdns_context_get_limit_outstanding_queries(const getdns_context *context,
    uint16_t *limit);

/**
 * Get the current number of milliseconds the API will wait for request
 * to return setting from this context.
 * @see getdns_context_set_timeout
 * @param[in]  context The context from which to get the setting
 * @param[out] timeout The number of milliseconds the API will wait for a
 *                     response.
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context or limit was NULL.
 */
getdns_return_t
getdns_context_get_timeout(const getdns_context *context, uint64_t *timeout);

/**
 * Get the current number of milliseconds the API will leave an idle TCP or TLS
 * connection open for (idle means no outstanding responses and no pending
 * queries).
 * @see getdns_context_set_idle_timeout
 * @param[in]  context The context from which to get the setting
 * @param[out] timeout The number of milliseconds the API will leave an idle TCP
  *                    or TLS connection open for
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context or timeout was NULL.
 */
getdns_return_t
getdns_context_get_idle_timeout(
    const getdns_context *context, uint64_t *timeout);

/**
 * Get the setting that says whether or not DNS queries follow redirects.
 * @see getdns_context_set_follow_redirects
 * @see redirectpoliciestext
 * @param[in]  context The context from which to get the setting
 * @param[out] value Either GETDNS_REDIRECTS_FOLLOW or GETDNS_REDIRECTS_DO_NOT_FOLLOW
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context or value was NULL.
 */
getdns_return_t
getdns_context_get_follow_redirects(const getdns_context *context,
    getdns_redirects_t *value);

/**
 * Get a copy of the list of addresses in use for looking up top-level domains
 * in use by the context.
 * Callers are responsible for deallocating the returned list with
 * #getdns_list_destroy()
 * @see getdns_context_set_dns_root_servers
 * @param[in]  context The context from which to get the setting
 * @param[out] addresses A copy of the list of dns root servers in use for
 *                       looking up top level domains.  The caller must 
 *                       destroy this list.
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context or adresses was NULL.
 * @return GETDNS_RETURN_MEMORY_ERROR when the copy could not be allocated
 */
getdns_return_t
getdns_context_get_dns_root_servers(const getdns_context *context,
    getdns_list **addresses);

/**
 * Get whether, how and when a suffix is appended to a query string with
 * the context.
 * @see getdns_context_set_append_name
 * @see suffixappendtypestext
 * @param[in]  context The context from which to get the setting
 * @param[out] value GETDNS_APPEND_NAME_TO_SINGLE_LABEL_FIRST,
 *              GETDNS_APPEND_NAME_ALWAYS,
 *              GETDNS_APPEND_NAME_ONLY_TO_SINGLE_LABEL_AFTER_FAILURE,
 *              GETDNS_APPEND_NAME_ONLY_TO_MULTIPLE_LABEL_NAME_AFTER_FAILURE,
 *              or GETDNS_APPEND_NAME_NEVER
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context or value was NULL.
 */
getdns_return_t
getdns_context_get_append_name(const getdns_context *context,
    getdns_append_name_t *value);

/**
 * Get a copy of the list of suffixes to be appended based on the value off the 
 * append_name setting in use by context
 * Callers are responsible for deallocating the returned list with
 * #getdns_list_destroy()
 * @see getdns_context_set_suffix
 * @param[in]  context The context from which to get the setting
 * @param[out] value A copy of the list of suffixes. The caller must destroy
 *                   this list.
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context or value was NULL.
 * @return GETDNS_RETURN_MEMORY_ERROR when the copy could not be allocated
 */
getdns_return_t
getdns_context_get_suffix(const getdns_context *context, getdns_list **value);

/**
 * Get a copy of the list of DNSSEC trust anchors in use by context.
 * Callers are responsible for deallocating the returned list with
 * #getdns_list_destroy()
 * @see getdns_context_set_dnssec_trust_anchors
 * @param[in]  context The context from which to get the setting
 * @param[out] value A copy of the list of DNSSEC trust anchors.
 *                   The caller must destroy this list.
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context or value was NULL.
 * @return GETDNS_RETURN_MEMORY_ERROR when the copy could not be allocated
 */
getdns_return_t
getdns_context_get_dnssec_trust_anchors(const getdns_context *context,
    getdns_list **value);

/**
 * Get the allowed DNSSEC skew setting from context
 * @see getdns_context_set_dnssec_allowed_skew
 * @param[in]  context The context from which to get the setting
 * @param[out] value The number of seconds of skew that is allowed in either
 *             direction when checking an RRSIG's Expiration and Inception
 *             fields.
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context or value was NULL.
 */
getdns_return_t
getdns_context_get_dnssec_allowed_skew(const getdns_context *context,
    uint32_t *value);

/**
 * Get a copy of the list of upstream that will be targeted in stub resolution
 * mode.
 * Callers are responsible for deallocating the returned list with
 * #getdns_list_destroy()
 * @see getdns_context_set_upstream_recursive_servers
 * @param[in]  context The context from which to get the setting
 * @param[out] upstream_list A copy of the list of upstreams.
 *                    The caller must destroy this list.
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context or value was NULL.
 * @return GETDNS_RETURN_MEMORY_ERROR when the copy could not be allocated
 */
getdns_return_t
getdns_context_get_upstream_recursive_servers(const getdns_context *context,
    getdns_list **upstream_list);

/**
 * Get the maximum UDP payload size advertised in an EDNS0 OPT record
 * setting from context
 * @see getdns_context_set_edns_maximum_udp_payload_size
 * @see getdns_context_unset_edns_maximum_udp_payload_size
 * @param[in]  context The context from which to get the setting
 * @param[out] value the maximum UDP payload size advertised in an EDNS0
 *                    OPT record.  When the value is unset, 0 is returned.
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context or value was NULL.
 */
getdns_return_t
getdns_context_get_edns_maximum_udp_payload_size(const getdns_context *context,
    uint16_t *value);

/**
 * Get the rcode advertised in an EDNS0 OPT record setting from context
 * @see getdns_context_set_edns_extended_rcode
 * @param[in]  context The context from which to get the setting
 * @param[out] value The rcode advertised in an EDNS0 OPT record
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context or value was NULL.
 */
getdns_return_t
getdns_context_get_edns_extended_rcode(const getdns_context *context,
    uint8_t *value);

/**
 * Get the version advertised in an EDNS0 OPT record setting from context
 * @see getdns_context_set_edns_version
 * @param[in]  context The context from which to get the setting
 * @param[out] value The version advertised in an EDNS0 OPT record
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context or value was NULL.
 */
getdns_return_t
getdns_context_get_edns_version(const getdns_context *context, uint8_t *value);

/**
 * Get the DO bit advertised in an EDNS0 OPT record setting from context
 * @see getdns_context_set_edns_do_bit
 * @param[in]  context The context from which to get the setting
 * @param[out] value 1 if the DO bit is advertised in EDNS0 OPT records,
 *                   0 otherwise.
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context or value was NULL.
 */
getdns_return_t
getdns_context_get_edns_do_bit(const getdns_context *context, uint8_t *value);

/**
 * Get whether queries with this context will have the EDNS Client Subnet 
 * option set to hide the originating network when resolving in stub 
 * resolution.
 * @see getdns_context_set_edns_do_bit
 * @param[in]  context The context from which to get the setting
 * @param[out] value 1 if the setting is on, 0 otherwise
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context or value was NULL.
 */
getdns_return_t
getdns_context_get_edns_client_subnet_private(const getdns_context *context,
    uint8_t *value);

/**
 * Get the blocksize that will be used to pad outgoing queries over TLS.
 * @see getdns_context_set_tls_query_padding_blocksize
 * @param[in]  context The context from which to get the setting
 * @param[out] value The padding blocksize, or 0 if padding is disabled,
 *                    or 1 if the setting is to pad using a sensible policy.
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context or value was NULL.
 */
getdns_return_t
getdns_context_get_tls_query_padding_blocksize(
    const getdns_context *context, uint16_t *value);

/**
 * Get whether the upstream needs to be authenticated with DNS over TLS.
 * @see getdns_context_set_tls_authentication
 * @see authvaulesandtext
 * @param[in]  context The context from which to get the setting
 * @param[out] value is either GETDNS_AUTHENTICATION_REQUIRED if
 *                    authentication is required, or GETDNS_AUTHENTICATION_NONE
 *                    if authentication is optional.  When credentials are
 *                    available, the API will still try to authenticate the
 *                    upstream.
 *                    See #getdns_context_set_upstream_recursive_servers
 *                    for details on how to configure credentials per upstream.
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context or value was NULL.
 */
getdns_return_t
getdns_context_get_tls_authentication(const getdns_context *context,
    getdns_tls_authentication_t *value);

/**
 * Get whether the context is configured to round robin queries over the available
 * upstreams.
 * @see getdns_context_set_round_robin_upstreams
 * @param[in]  context The context from which to get the setting
 * @param[out] value 1 if the setting is on, 0 otherwise
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context or value was NULL.
 */
getdns_return_t
getdns_context_get_round_robin_upstreams(const getdns_context *context,
    uint8_t *value);

/**
 * Get the amount of seconds a TLS connection should not be tried with
 * an upstream when it has never been tried before.
 * @see getdns_context_set_tls_backoff_time
 * @param[in]  context The context from which to get the setting
 * @param[out] value Number of seconds before an attempt to setup DNS over TLS,
 *             with an upstream for which setting up an TLS connection has
 *             never been successful before, will be retried.
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context or value was NULL.
 */
getdns_return_t
getdns_context_get_tls_backoff_time(const getdns_context *context,
    uint16_t *value);

/**
 * Get the number of times getdns retries to setup DNS over TLS with a
 * specific upstream, before it decides to give up for tls_backoff_time
 * seconds.
 * @see getdns_context_set_tls_connection_retries
 * @param[in]  context The context from which to get the setting
 * @param[out] value Number of attempts to retry setting up a DNS over TLS
 *              connection before giving up.
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context or value was NULL.
 */
getdns_return_t
getdns_context_get_tls_connection_retries(const getdns_context *context,
    uint16_t *value);

/**
 * Get the currently registered callback function and user defined argument
 * for context changes.
 * Combined with #getdns_context_set_update_callback this can be used to
 * "chain" context update callbacks and in this way create a subscription
 * service catering multiple interested parties.
 * @see contextcodetypestext
 * @param context The context to monitor for changes
 * @param userarg A user defined argument to be passed to the callback
 *                 function.
 * @param value   The callback function to be called on context value
 *                 changes.
 * @return GETDNS_RETURN_GOOD on success or an error code on failure.
 */
getdns_return_t
getdns_context_get_update_callback(const getdns_context *context,
    void **userarg,
    void (**value) (getdns_context *, getdns_context_code_t, void *));


/**
 * Gets the url for the location of the XML file from which to fetch the
 * trust anchors with Zero configuration DNSSEC.
 *
 * Alongside the XML file, also the S/MIME signature that will be used to 
 * validate the XML file, will be fetched from the url with the .xml extension
 * replaced by .p7s.
 * 
 * When successfully validated with the verify Certificate Authority and the
 * verify email address, the context will be equipped with the DNSSEC trust
 * anchors defined within the XML file as described in RFC7958.
 * The XML file will also be stored together with the .p7s file in the
 * appdata directory with the names "root-anchors.xml" and "root-anchors.p7s"
 * respectively.
 *
 * When the trust-anchors from the XML file are used, the root DNSKEY is
 * tracked and stored in the appdata directory too as "root.key"
 *
 * Trust anchors from the XML file will be tried when:
 *   - There were no other trust anchors provided, either by the default
 *     trust anchor file "/etc/unbound/getdns-root.key", or set with the
 *     getdns_context_set_dnssec_trust_anchors() function.
 *   - or the available trust anchors (from the default location or set by
 *     the application) caused the root DNSKEY rrset to be BOGUS.
 *
 * Trust anchors from the XML file will be read from the root-anchors.xml
 * file in appdata directory and will only be used when validation with the 
 * S/MIME signatures in root-anchors.p7s succeeds with the verification
 * Certificate Authority and the verification email address.
 *
 * A (new) version of "root-anchors.xml" and "root-anchors.p7s" will be
 * fetched when:
 *   - The appdata directory is writeable by the current used, but the 
 *     "root-anchors.xml" or "root-anchors.p7s" files were not available.
 *   - or there is a new root DNSKEY RRset (or signature) and it contains
 *     key_ids which were not in "root-anchors.xml."
 *
 * @see getdns_context_set_trust_anchors_url
 * @see getdns_context_get_trust_anchors_verify_CA
 * @see getdns_context_get_trust_anchors_verify_email
 * @param[in]  context     The context to configure
 * @param[out] url         The url including the XML file, from which the
 *                         trust anchors (and the S/MIME signature) will be
 *                         fetched.  Default is:
 *                         http://data.iana.org/root-anchors/root-anchors.xml
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL.
 */
getdns_return_t
getdns_context_get_trust_anchors_url(
    const getdns_context *context, const char **url);

/**
 * Gets the public certificate for the Certificate Authority with which to
 * validate the XML file with the S/MIME signatures fetch from the url
 * given with the getdns_context_set_trust_anchors_url() function.
 * @see getdns_context_set_trust_anchors_verify_CA
 * @see getdns_context_get_trust_anchors_url
 * @see getdns_context_get_trust_anchors_verify_email
 * @param[in]  context    The context to configure
 * @param[out] verify_CA  The certificate of the Certificate Authority with
 *                        which to validate the XML trust anchors.
 *                        The default is the ICANN Root CA, which is valid
 *                        till Dec 18 2029.
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL.
 */
getdns_return_t
getdns_context_get_trust_anchors_verify_CA(
    const getdns_context *context, const char **verify_CA);

/**
 * Gets the email address for the Subject of the signer's certificate from the
 * p7s signature file with which to validate the XML file fetched from the url
 * given with the getdns_context_set_trust_anchors_url() function.
 * @see getdns_context_set_trust_anchors_verify_email
 * @see getdns_context_get_trust_anchors_url
 * @see getdns_context_get_trust_anchors_verify_CA
 * @param[in]  context      The context to configure
 * @param[out] verify_email Only signatures from this name are allowed.
 *                          The default dnssec@iana.org.
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL.
 */
getdns_return_t
getdns_context_get_trust_anchors_verify_email(
    const getdns_context *context, const char **verify_email);

/**
 * Get the amount of milliseconds the trust anchors will not be tried to be
 * fetched after failure.
 * @see getdns_context_set_trust_anchors_backoff_time
 * @param context The context to configure
 * @param value Number of milliseconds before fetch trust anchors
 *              will be retried.
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_INVALID_PARAMETER if context is null.
 */
getdns_return_t
getdns_context_get_trust_anchors_backoff_time(
    const getdns_context *context, uint64_t *value);

/**
 * Get the value with which the context's upstream recursive servers
 * and suffixes were initialized.
 * @see getdns_context_set_resolvconf
 * @see getdns_context_get_hosts
 * @param[in]  context      The context to configure
 * @param[out] resolvconf   NULL if the context was not initialized with a
 *                          resolv.conf file.
 * @return GETDNS_RETURN_GOOD when successful and error code otherwise.
 */
getdns_return_t
getdns_context_get_resolvconf(
    const getdns_context *context, const char **resolvconf);

/**
 * Get the value with which the context's GETDNS_NAMESPACE_LOCALNAMES namespace 
 * was initialized.
 * @see getdns_context_set_hosts
 * @see getdns_context_get_resolvconf
 * @param[in]  context     The context to configure
 * @param[out] hosts       NULL when GETDNS_NAMESPACE_LOCALNAMES namespace
 *                         was not initialized.
 * @return GETDNS_RETURN_GOOD when successful and error code otherwise.
 */
getdns_return_t
getdns_context_get_hosts(
    const getdns_context *context, const char **hosts);

/**
 * Get the location of the directory for CA certificates for verification
 * purposes.
 * @see getdns_context_set_tls_ca_path
 * @see getdns_context_get_tls_ca_file
 * @param[in]  context      The context to configure
 * @param[out] tls_ca_path       Directory with Certificate Authority certificates
 *                          or NULL when one was not configured.
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL.
 */
getdns_return_t
getdns_context_get_tls_ca_path(
    const getdns_context *context, const char **tls_ca_path);

/**
 * Get the file location with CA certificates for verification purposes.
 * @see getdns_context_set_tls_ca_file
 * @see getdns_context_get_tls_ca_path
 * @param[in]  context      The context to configure
 * @param[out] tls_ca_file       The file with Certificate Authority certificates
 *                          or NULL when one was not configured.
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL.
 */
getdns_return_t
getdns_context_get_tls_ca_file(
    const getdns_context *context, const char **tls_ca_file);

/**
 * Get the list of available ciphers for authenticated TLS upstreams.
 * @see getdns_context_set_tls_cipher_list
 * @param[in]  context      The context configure
 * @param[out] cipher_list  The cipher list
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL.
 */
getdns_return_t
getdns_context_get_tls_cipher_list(
    const getdns_context *context, const char **cipher_list);

/**
 * Get the configured available TLS1.3 ciphersuited for authenticated TLS 
 * upstreams.
 * @see getdns_context_set_tls_ciphersuites
 * @param[in]  context      The context configure
 * @param[out] ciphersuites  The cipher list
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL.
 */
getdns_return_t
getdns_context_get_tls_ciphersuites(
    const getdns_context *context, const char **ciphersuites);

/**
 * Get the supported curves list if one has been set earlier.
 * @see getdns_context_set_tls_curves_list
 * @param[in]  context      The configured context
 * @param[out] curves_list  The string is a colon separated list of curve
 *                          NIDs or names, for example "P-521:P-384:P-256",
 *                          when one has been configured on the context,
 *                          or NULL when none has been set before.
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context was NULL.
 */
getdns_return_t
getdns_context_get_tls_curves_list(
    const getdns_context *context, const char **curves_list);

/** @}
 */


/**
 * \addtogroup versionfuncs Version functions
 *  @{
 */

/**
 * Get the version number of this implementation.
 * @see versions
 * @return The version number as string.  For example "1.5.2".
 */
const char *getdns_get_version(void);

/**
 * Get the version number of this implementation as number.
 * @see versions
 * @return The version number as number.  For example 0x01050200.
 *         - The most significant byte of this uint32_t is the Major version.
 *         - The second most significant byte is the Minor version.
 *         - The third most significant byte the Patch version.
 */
uint32_t getdns_get_version_number(void);

/**
 * Get the version of the getdns API specification this library implements
 * as a string.
 * @see versions
 * @return The API specification version as string. For example "December 2015"
 */
const char *getdns_get_api_version(void);

/**
 * Get the version of the getdns API specification this library implements
 * as a number.
 * @see versions
 * @return The API specification version as number. For example "0x07df0c00"
 *         - The most significant 16 bits represent the year.
 *         - The third most significant byte the day.
 */

uint32_t getdns_get_api_version_number(void);

/** @}
 */

/**
 * \addtogroup utils Utility functions
 *  @{
 */

/**
 * Returns a text describing the getdns error code, or NULL when the error
 * code is unknown.
 * @param err The error code for which to return the describing text
 * @return The describing text for the error code.  The string is in library
 * space and the caller must *not* free this.
 */
const char *getdns_get_errorstr_by_id(uint16_t err);

/** @}
 */


/**
 * \addtogroup getdns_dict
 *  @{
 */

/**
 * Create a new entry in the dictionary, or replace the value of an existing
 * entry, with a getdns_bindata representing a string.  The string will be
 * copied.  The size of the bindata will be strlen(value), though there will
 * be a '\0' byte directly after the size'd position even, though the size
 * argument suggests that this would not be part of the bindata's date space.
 * @see getdns_dict_set_bindata
 * @param dict dictionary in which to add or change the value
 * @param name key that identifies which item in the dictionary to add/change
 * @param value string to be copied and stored in the bindata at key
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_INVALID_PARAMETER when one of the arguments was NULL
 * @return GETDNS_RETURN_MEMORY_ERROR when the copy could not be allocated
 */
getdns_return_t
getdns_dict_util_set_string(
    getdns_dict *dict, const char *name, const char *value);

/**
 * Get the string associated with the speicifed name.  The string should not
 * be free()'d by the caller.
 * @see getdns_dict_get_bindata
 * @param dict dictionary from which to fetch the bindata
 * @param name a name/key value to look up in the dictionary
 * @param result The bindata's data value
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_NO_SUCH_DICT_NAME if dict is invalid or name does not exist
 */
getdns_return_t
getdns_dict_util_get_string(
    const getdns_dict * dict, const char *name, char **result);

/** @}
 */


/**
 * \addtogroup dnssecfuncs
 *  @{
 */

/**
 * Validate replies or resource records.
 *
 * @see dnssecvalues
 * @param  to_validate     A list of RR-dicts with companion RRSIG-RR-dicts
 *                         which will be validated.  Or a list of reply-dicts
 *                         that will be validated.  The "replies_tree" list
 *                         of a response dict can be used directly here.
 * @param  support_records A list of DS's RR-dicts and DNSKEY RR-dicts with
 *                         companion RRSIG-RR-dicts that lead up from one of
 *                         the trust_anchors to the RR-dicts or replies to
 *                         validate.  The "validation_chain" list of a response
 *                         dict (with the dnssec_return_validation_chain
 *                         extension) can be used directly here.
 * @param  trust_anchors   The list of trusted DNSKEYs or DS'es RR-dicts.
 *                         The result of the getdns_root_trust_anchor() or the
 *                         getdns_context_get_dnssec_trust_anchors() function
 *                         can be used directly here.
 * @param  validation_time The point in time in seconds since 1 January 1970
 *                         00:00:00 UTC, ignoring leap seconds, wrapping using
 *                         "Serial number arithmetic", as defined in RFC1982.
 * @param  skew            The numer of seconds of skew that is allowed in 
 *                         either direction when checking an RRSIG's 
 *                         Expiration and Inception fields
 * @return The dnssec status of validated records or replies, 
 *         GETDNS_DNSSEC_SECURE, GETDNS_DNSSEC_INSECURE,
 *         GETDNS_DNSSEC_INDETERMINATE or GETDNS_DNSSEC_BOGUS, or an error
 *         return code.
 */
getdns_return_t
getdns_validate_dnssec2(const getdns_list *to_validate,
    const getdns_list *support_records,
    const getdns_list *trust_anchors,
    time_t validation_time, uint32_t skew);


/** @}
 */


/**
 * \addtogroup utils
 *  @{
 */

/**
 * Public Key Pinning functionality:
 * 
 * a public key pinset is a list of dicts.  each dict should have a
 * "digest" and a "value".
 * 
 * "digest": a string indicating the type of digest. at the moment, we
 *           only support a "digest" of "sha256".
 * 
 * "value": a binary representation of the digest provided.
 * 
 * given a such a pinset, we should be able to validate a chain
 * properly according to section 2.6 of RFC 7469.
 */

/**
 * convert an HPKP-style pin description to an appropriate getdns data
 * structure.  An example string is: (with the quotes, without any
 * leading or trailing whitespace):
 *
 *    pin-sha256="E9CZ9INDbd+2eRQozYqqbQ2yXLVKB9+xcprMF+44U1g="
 *
 * It is the caller's responsibility to call getdns_dict_destroy() on
 * the dict returned when it is no longer needed.
 *
 * @param context a context to use to create the dict, or NULL to create
 *            it generically
 * @param str the pinning string to parse
 * @return a dict created from ctx, or  NULL if the string did not match. 
 */
getdns_dict *getdns_pubkey_pin_create_from_string(
	const getdns_context *context,
	const char *str);


/**
 * Test whether a given pinset is reasonable, including:
 *
 * is it well-formed?
 * are there at least two pins?
 * are the digests used sane?
 *
 * @param pinset the set of public key pins to check for sanity.  This
 *               should be a list of dicts.
 * @param errorlist if not NULL, a list of human-readable strings is 
 *                   appended to errorlist.
 * @return GETDNS_RETURN_GOOD if the pinset passes the sanity check.
 */ 
getdns_return_t getdns_pubkey_pinset_sanity_check(
	const getdns_list *pinset,
	getdns_list *errorlist);

/** @}
 */


/**
 * \addtogroup getdns_context
 *  @{
 */

/**
 * Configure a context with settings given in a getdns_dict.
 *
 * @param  context The context to be configured.
 * @param  config_dict The getdns_dict containing the settings.
 *                     The settings have the same name as returned by the
 *                     getdns_context_get_api_information() function, or as
 *                     used in the names of the getdns_context_get_*() and
 *                     getdns_context_set_*() functions.
 *                     - The dict returned by
 *                       getdns_context_get_api_information() can be used
 *                       as the config_dict directly, but context settings
 *                       do *not* have to be below a `"all_context"` key.
 *                     - It is possible to set default values for extensions
 *                       that could otherwise only be given on a per query
 *                       basis.  For example:
 *                       `{ dnssec_return_status: GETDNS_EXTENSION_TRUE }` is
 *                       equivalent to using the
 *                       getdns_context_set_return_dnssec_status() function
 *                       with that value, but default values for the other 
 *                       extensions can be set by this method now too.
 *                       For example
 *                       `{ return_call_reporting: GETDNS_EXTENSION_TRUE}`
 *                     - Trust anchor files and root hints content can also be
 *                       given by file, for example:
 *
 *                            { dns_root_servers : "named.root"
 *                            , dnssec_trust_anchors: "/etc/unbound/getdns-root.key"
 *                            }
 * @return GETDNS_RETURN_GOOD on success or an error code on failure.
 * **Beware** that context might be partially configured on error.  For retry
 * strategies it is advised to recreate a new config.
 */
getdns_return_t
getdns_context_config(getdns_context *context, const getdns_dict *config_dict);



/** @}
 */

/**
 * \addtogroup getdns_dict
 *  @{
 */

/**
 * Pretty print the getdns_dict in a given buffer snprintf style.
 * @param str pointer to the buffer to print to
 * @param size size of the given buffer. No more than size bytes (including
 *             the terminating null byte) will be written to str.
 * @param dict getdns_dict to print
 * @return The number of characters written excluding the terminating null byte
 * or the number of characters which would have been written if enough space
 * had been available.
 */
int
getdns_pretty_snprint_dict(char *str, size_t size, const getdns_dict *dict);

/**
 * creates a string containing a json representation of some_dict.
 * bindatas are converted to strings when possible, including bindatas for 
 * addresses, dnames and other printable data.  All other bindatas are
 * converted to lists of byte values.
 * @param some_dict dict to represent as json data
 * @param pretty when non-zero returns formatted json
 * @return character array (caller must free this) containing pretty string
 */
char *
getdns_print_json_dict(const getdns_dict *some_dict, int pretty);

/**
 * Prints a json representation of dict in a given buffer snprintf style.
 * bindatas are converted to strings when possible, including bindatas for 
 * addresses, dnames and other printable data.  All other bindatas are
 * converted to lists of byte values.
 * @param str pointer to the buffer to print to
 * @param size size of the given buffer. No more than size bytes (including
 *             the terminating null byte) will be written to str.
 * @param dict dict to represent as json data
 * @param pretty when non-zero returns formatted json
 * @return The number of characters written excluding the terminating null byte
 * or the number of characters which would have been written if enough space
 * had been available.
 */
int
getdns_snprint_json_dict(
    char *str, size_t size, const getdns_dict *dict, int pretty);

/** @}
 */

/**
 * \addtogroup getdns_list
 *  @{
 */

/**
 * creates a string that describes the list in a human readable form.
 * @param some_list list to pretty print
 * @return character array (caller must free this) containing pretty string
 */
char *
getdns_pretty_print_list(const getdns_list *some_list);

/**
 * Pretty print the getdns_list in a given buffer snprintf style.
 * @param str pointer to the buffer to print to
 * @param size size of the given buffer. No more than size bytes (including
 *             the terminating null byte) will be written to str.
 * @param list getdns_list to print
 * @return The number of characters written excluding the terminating null byte
 * or the number of characters which would have been written if enough space
 * had been available.
 */
int
getdns_pretty_snprint_list(char *str, size_t size, const getdns_list *list);

/**
 * creates a string containing a json representation of some_list.
 * bindatas are converted to strings when possible, including bindatas for 
 * addresses, dnames and other printable data.  All other bindatas are
 * converted to lists of byte values.
 * @param some_list list to represent as json data
 * @param pretty when non-zero returns formatted json
 * @return character array (caller must free this) containing pretty string
 */
char *
getdns_print_json_list(const getdns_list *some_list, int pretty);

/**
 * Prints a json representation of list in a given buffer snprintf style.
 * bindatas are converted to strings when possible, including bindatas for 
 * addresses, dnames and other printable data.  All other bindatas are
 * converted to lists of byte values.
 * @param str pointer to the buffer to print to
 * @param size size of the given buffer. No more than size bytes (including
 *             the terminating null byte) will be written to str.
 * @param list list to represent as json data
 * @param pretty when non-zero returns formatted json
 * @return The number of characters written excluding the terminating null byte
 * or the number of characters which would have been written if enough space
 * had been available.
 */
int
getdns_snprint_json_list(
    char *str, size_t size, const getdns_list *list, int pretty);


/** @}
 */

/**
 * \defgroup UDNSDataConversionFunctions Converting between getdns DNS dicts, DNS wire format and DNS presentation format
 *  @{
 */

/**
 * Convert rr_dict to wireformat representation of the resource record.
 *
 * @param  rr_dict The getdns dict representation of the resource record
 * @param wire    A newly allocated buffer which will contain the wireformat.
 * @param wire_sz The size of the allocated buffer and the wireformat.
 * @return GETDNS_RETURN_GOOD on success or an error code on failure.
 */
getdns_return_t
getdns_rr_dict2wire(
    const getdns_dict *rr_dict, uint8_t **wire, size_t *wire_sz);

/**
 * Convert rr_dict to wireformat representation of the resource record.
 *
 * @param  rr_dict The getdns dict representation of the resource record
 * @param  wire    The buffer in which the wireformat will be written
 * @param  wire_sz On input the size of the wire buffer,
 *                 On output the amount of wireformat needed for the
 *                 wireformat representation of the resource record;
 *                 even if it did not fit.
 * @return GETDNS_RETURN_GOOD on success or an error code on failure.
 * GETDNS_RETURN_NEED_MORE_SPACE will be returned when the buffer was too
 * small.  wire_sz will be set to the needed buffer space then.
 */
getdns_return_t
getdns_rr_dict2wire_buf(
    const getdns_dict *rr_dict, uint8_t *wire, size_t *wire_sz);

/**
 * Convert rr_dict to wireformat representation of the resource record.
 *
 * @param  rr_dict The getdns dict representation of the resource record
 * @param  wire    A pointer to the buffer pointer in which the wireformat 
 *                 will be written.
 *                 On output the buffer pointer will have moved along
 *                 the buffer and point right after the just written RR.
 * @param  wire_sz On input the size of the wire buffer,
 *                 On output the amount of wireformat needed for the
 *                 wireformat will have been subtracted from wire_sz.
 * @return GETDNS_RETURN_GOOD on success or an error code on failure.
 * GETDNS_RETURN_NEED_MORE_SPACE will be returned when the buffer was too
 * small.  The function will pretend that it had written beyond the end
 * of the buffer, and wire will point past the buffer and wire_sz will
 * contain a negative value.
 */
getdns_return_t
getdns_rr_dict2wire_scan(
    const getdns_dict *rr_dict, uint8_t **wire, int *wire_sz);


/**
 * Convert wireformat resource record in a getdns rr_dict representation.
 *
 * @param  wire    Buffer containing the wireformat rr
 * @param  wire_sz Size of the wire buffer
 * @param rr_dict The returned rr_dict
 * @return GETDNS_RETURN_GOOD on success or an error code on failure.
 */
getdns_return_t
getdns_wire2rr_dict(
    const uint8_t *wire, size_t wire_sz, getdns_dict **rr_dict);

/**
 * Convert wireformat resource record in a getdns rr_dict representation.
 *
 * @param  wire    Buffer containing the wireformat rr
 * @param  wire_sz On input the size of the wire buffer
 *                 On output the length of the wireformat rr.
 * @param rr_dict The returned rr_dict
 * @return GETDNS_RETURN_GOOD on success or an error code on failure.
 */
getdns_return_t
getdns_wire2rr_dict_buf(
    const uint8_t *wire, size_t *wire_sz, getdns_dict **rr_dict);

/**
 * Convert wireformat resource record in a getdns rr_dict representation.
 *
 * @param  wire    A pointer to the pointer of the wireformat buffer.
 *                 On return this pointer is moved to after first read
 *                 in resource record.
 * @param  wire_sz On input the size of the wire buffer
 *                 On output the size is decreased with the length
 *                 of the wireformat resource record.
 * @param rr_dict The returned rr_dict
 * @return GETDNS_RETURN_GOOD on success or an error code on failure.
 */
getdns_return_t
getdns_wire2rr_dict_scan(
    const uint8_t **wire, size_t *wire_sz, getdns_dict **rr_dict);


/**
 * Convert rr_dict to the string representation of the resource record.
 *
 * @param  rr_dict The getdns dict representation of the resource record
 * @param str     A newly allocated string representation of the rr
 * @return GETDNS_RETURN_GOOD on success or an error code on failure.
 */
getdns_return_t
getdns_rr_dict2str(
    const getdns_dict *rr_dict, char **str);

/**
 * Convert rr_dict to the string representation of the resource record.
 *
 * @param  rr_dict The getdns dict representation of the resource record
 * @param  str     The buffer in which the string will be written
 * @param  str_len On input the size of the text buffer,
 *                 On output the amount of characters needed to write
 *                 the string representation of the rr.  Even if it does
 *                 not fit.
 * @return GETDNS_RETURN_GOOD on success or an error code on failure.
 * GETDNS_RETURN_NEED_MORE_SPACE will be returned when the buffer was too
 * small.  str_len will be set to the needed buffer space then.
 */
getdns_return_t
getdns_rr_dict2str_buf(
    const getdns_dict *rr_dict, char *str, size_t *str_len);

/**
 * Convert rr_dict to the string representation of the resource record.
 *
 * @param  rr_dict The getdns dict representation of the resource record
 * @param  str     A pointer to the buffer pointer in which the string 
 *                 will be written.
 *                 On output the buffer pointer will have moved along
 *                 the buffer and point right after the just written RR.
 * @param  str_len On input the size of the str buffer,
 *                 On output the number of characters needed for the
 *                 string will have been subtracted from strlen.
 * @return GETDNS_RETURN_GOOD on success or an error code on failure.
 * GETDNS_RETURN_NEED_MORE_SPACE will be returned when the buffer was too
 * small.  The function will pretend that it had written beyond the end
 * of the buffer, and str will point past the buffer and str_len will
 * contain a negative value.
 */
getdns_return_t
getdns_rr_dict2str_scan(
    const getdns_dict *rr_dict, char **str, int *str_len);


/**
 * Convert the string representation of the resource record to rr_dict format.
 *
 * @param  str         String representation of the resource record.
 * @param  rr_dict     The result getdns dict representation of the resource record
 * @param  origin      Default suffix for not fully qualified domain names
 * @param  default_ttl Default ttl
 * @return GETDNS_RETURN_GOOD on success or an error code on failure.
 */
getdns_return_t
getdns_str2rr_dict(
    const char *str, getdns_dict **rr_dict,
    const char *origin, uint32_t default_ttl);

/**
 * Read the zonefile and convert to a list of rr_dict's.
 *
 * @param  in          An opened FILE pointer on the zone file.
 * @param  rr_list     The result list of rr_dicts representing the zone file.
 * @param  origin      Default suffix for not fully qualified domain names
 * @param  default_ttl Default ttl
 * @return GETDNS_RETURN_GOOD on success or an error code on failure.
 */
getdns_return_t
getdns_fp2rr_list(
    FILE *in, getdns_list **rr_list,
    const char *origin, uint32_t default_ttl);

/**
 * Convert DNS message dict to wireformat representation.
 *
 * @param  msg_dict The getdns dict representation of a DNS message
 * @param  wire     A newly allocated buffer which will contain the wireformat.
 * @param  wire_sz  The size of the allocated buffer and the wireformat.
 * @return GETDNS_RETURN_GOOD on success or an error code on failure.
 */
getdns_return_t
getdns_msg_dict2wire(
    const getdns_dict *msg_dict, uint8_t **wire, size_t *wire_sz);

/**
 * Convert DNS message dict to wireformat representation.
 *
 * @param  msg_dict The getdns dict representation of a DNS message 
 * @param  wire     The buffer in which the wireformat will be written
 * @param  wire_sz  On input the size of the wire buffer,
 *                  On output the amount of wireformat needed for the
 *                  wireformat representation of the DNS message;
 *                  even if it did not fit.
 * @return GETDNS_RETURN_GOOD on success or an error code on failure.
 * GETDNS_RETURN_NEED_MORE_SPACE will be returned when the buffer was too
 * small.  wire_sz will be set to the needed buffer space then.
 */
getdns_return_t
getdns_msg_dict2wire_buf(
    const getdns_dict *msg_dict, uint8_t *wire, size_t *wire_sz);

/**
 * Convert DNS message dict to wireformat representation.
 *
 * @param  msg_dict The getdns dict representation of the DNS message
 * @param  wire     A pointer to the buffer pointer in which the wireformat 
 *                  will be written.
 *                  On output the buffer pointer will have moved along
 *                  the buffer and point right after the just written RR.
 * @param  wire_sz  On input the size of the wire buffer,
 *                  On output the amount of wireformat needed for the
 *                  wireformat will have been subtracted from wire_sz.
 * @return GETDNS_RETURN_GOOD on success or an error code on failure.
 * GETDNS_RETURN_NEED_MORE_SPACE will be returned when the buffer was too
 * small.  The function will pretend that it had written beyond the end
 * of the buffer, and wire will point past the buffer and wire_sz will
 * contain a negative value.
 */
getdns_return_t
getdns_msg_dict2wire_scan(
    const getdns_dict *msg_dict, uint8_t **wire, int *wire_sz);


/**
 * Convert wireformat DNS message in a getdns msg_dict representation.
 *
 * @param  wire     Buffer containing the wireformat rr
 * @param  wire_sz  Size of the wire buffer
 * @param  msg_dict The returned DNS message
 * @return GETDNS_RETURN_GOOD on success or an error code on failure.
 */
getdns_return_t
getdns_wire2msg_dict(
    const uint8_t *wire, size_t wire_sz, getdns_dict **msg_dict);

/**
 * Convert wireformat DNS message in a getdns msg_dict representation.
 *
 * @param  wire     Buffer containing the wireformat rr
 * @param  wire_sz  On input the size of the wire buffer
 *                  On output the length of the wireformat rr.
 * @param  msg_dict The returned DNS message
 * @return GETDNS_RETURN_GOOD on success or an error code on failure.
 */
getdns_return_t
getdns_wire2msg_dict_buf(
    const uint8_t *wire, size_t *wire_sz, getdns_dict **msg_dict);

/**
 * Convert wireformat DNS message in a getdns msg_dic representation.
 *
 * @param  wire     A pointer to the pointer of the wireformat buffer.
 *                  On return this pointer is moved to after first read
 *                  in resource record.
 * @param  wire_sz  On input the size of the wire buffer
 *                  On output the size is decreased with the length
 *                  of the wireformat DNS message.
 * @param  msg_dict The returned DNS message
 * @return GETDNS_RETURN_GOOD on success or an error code on failure.
 */
getdns_return_t
getdns_wire2msg_dict_scan(
    const uint8_t **wire, size_t *wire_sz, getdns_dict **msg_dict);


/**
 * Convert msg_dict to the string representation of the DNS message.
 *
 * @param  msg_dict The getdns dict representation of the DNS message
 * @param  str      A newly allocated string representation of the rr
 * @return GETDNS_RETURN_GOOD on success or an error code on failure.
 */
getdns_return_t
getdns_msg_dict2str(
    const getdns_dict *msg_dict, char **str);

/**
 * Convert msg_dict to the string representation of the DNS message.
 *
 * @param  msg_dict The getdns dict representation of the resource record
 * @param  str      The buffer in which the string will be written
 * @param  str_len  On input the size of the text buffer,
 *                  On output the amount of characters needed to write
 *                  the string representation of the rr.  Even if it does
 *                  not fit.
 * @return GETDNS_RETURN_GOOD on success or an error code on failure.
 * GETDNS_RETURN_NEED_MORE_SPACE will be returned when the buffer was too
 * small.  str_len will be set to the needed buffer space then.
 */
getdns_return_t
getdns_msg_dict2str_buf(
    const getdns_dict *msg_dict, char *str, size_t *str_len);

/**
 * Convert msg_dict to the string representation of the resource record.
 *
 * @param  msg_dict The getdns dict representation of the resource record
 * @param  str      A pointer to the buffer pointer in which the string 
 *                  will be written.
 *                  On output the buffer pointer will have moved along
 *                  the buffer and point right after the just written RR.
 * @param  str_len  On input the size of the str buffer,
 *                  On output the number of characters needed for the
 *                  string will have been subtracted from strlen.
 * @return GETDNS_RETURN_GOOD on success or an error code on failure.
 * GETDNS_RETURN_NEED_MORE_SPACE will be returned when the buffer was too
 * small.  The function will pretend that it had written beyond the end
 * of the buffer, and str will point past the buffer and str_len will
 * contain a negative value.
 */
getdns_return_t
getdns_msg_dict2str_scan(
    const getdns_dict *msg_dict, char **str, int *str_len);

/** @}
 */

/**
 * \defgroup Ustring2getdns_data Converting strings to getdns data structures
 *  @{
 */

/**
 * Convert string text to a getdns_dict.
 *
 * @param  str   A textual representation of a getdns_dict.
 *               The format is similar, but not precisely JSON.
 *               - dict keys may be given without quotes.
 *                 For example: `{ timeout: 2000 }` is the same as { "timeout": 2000 }
 *               - When str contains an IP or IPv6 address, it is converted
 *                 to an getdns dict representation of that address.  This may contain
 *                 a port, tls_port, tsig spec or tls authentication name in the same
 *                 way as may be given with the `getdns_query` tool.  For example:
 *                 `185.49.140.67:80#443` will result in the following getdns_dict:
 *
 *                      { address_type: "IPv4"
 *                      , address_data: "185.49.140.67"
 *                      , port: 80
 *                      , tls_port: 443
 *                      }
 *
 * @param  dict The returned getdns_dict.
 * @return GETDNS_RETURN_GOOD on success or an error code on failure.
 */
getdns_return_t
getdns_str2dict(const char *str, getdns_dict **dict);

/**
 * Convert string text to a getdns_list.
 *
 * @param  str   A textual representation of a getdns_list.
 *               The format is similar, but not precisely JSON.
 * @param  list The returned getdns_list.
 * @return GETDNS_RETURN_GOOD on success or an error code on failure.
 */
getdns_return_t
getdns_str2list(const char *str, getdns_list **list);

/**
 * Convert string text to a getdns_bindata.
 *
 * @param  str   A textual representation of a getdns_bindata
 *               The format is similar, but not precisely JSON.
 *               - Strings between double-quotes will be converted to bindata
 *                 containers, but *without the trailing null byte*.
 *                 For example: `{ suffix: [ "nlnetlabs.nl.", "nlnet.nl." ] }`
 *               - bindata representation of IP or IPv6 addresses may be
 *                 given in their presentation format.  For example:
 *                 `{ dns_root_servers: [ 2001:7fd::1, 193.0.14.129 ] }`
 *               - Arbitrary binary data may be given with a `0x` prefix,
 *                 or in base64 encoding.
 *                 For example:
 *
 *                      { add_opt_parameters:
 *                        { options: [ { option_code: 10
 *                                     , option_data: 0xA9E4EC50C03F5D65
 *                                     } ]
 *                        }
 *                      }
 *
 *               - Wireformat domain name bindatas can be given with a trailing dot.
 *                 For example:
 *
 *                      { upstream_recursive_servers:
 *                        [ { address_data  : 2a04:b900:0:100::37
 *                          , tsig_name     : hmac-md5.tsigs.getdnsapi.net.
 *                          , tsig_algorithm: hmac-md5.sig-alg.reg.int.
 *                          , tsig_secret : 16G69OTeXW6xSQ==
 *                          } ]
 *                      }
 *
 * @param  bindata The returned getdns_bindata.
 * @return GETDNS_RETURN_GOOD on success or an error code on failure.
 */
getdns_return_t
getdns_str2bindata(const char *str, getdns_bindata **bindata);

/**
 * Convert string text to a getdns 32 bits unsigned integer.
 *
 * @param  str   A textual representation of the integer.
 *               The format is similar, but not precisely JSON.
 *               - integer values may be given by the constant name.
 *                 For example: `{ resolution_type: GETDNS_RESOLUTION_STUB }`
 *                 or `{ specify_class: GETDNS_RRCLASS_CH }`
 * @param  value The returned integer.
 * @return GETDNS_RETURN_GOOD on success or an error code on failure.
 */
getdns_return_t
getdns_str2int(const char *str, uint32_t *value);


/** @}
 */

/**
 * \defgroup UServerFunctions Creating simple DNS servers
 *  @{
 */

/**
 * The user defined request handler that will be called on incoming requests.
 */
typedef void (*getdns_request_handler_t)(
	getdns_context        *context,
	getdns_callback_type_t callback_type,
	getdns_dict           *request,
	void                  *userarg,
	getdns_transaction_t   request_id
);

/**
 * Create a name server by registering a list of addresses to listen on and
 * a user defined function that will handle the requests.
 *
 * @param context The context managing the eventloop that needs to be run to
 *                start serving.
 * @param listen_addresses  A list of address dicts or bindatas that will be
 *                          listened on for DNS requests.  Both UDP and TCP
 *                          transports will be used.
 * @param userarg A user defined argument that will be passed to the handler
 *                untouched.
 * @param handler The user defined request handler that will be called with the
 *                request received in reply dict format.  To reply to this request
 *                the function has to construct a response (or modify the request)
 *                and call getdns_reply() with the response and the with the request
 *                associated request_id.  The user is responsible of destroying
 *                both the replies and the response.  **Beware** that if requests are
 *                not answered by the function, by not calling getdns_reply() this
 *                will cause a memory leak.  The user most use getdns_reply()
 *                with NULL as the response to not answer/cancel a request.
 * @return GETDNS_RETURN_GOOD on success or an error code on failure.
 * On failure, the current set of listening addresses is left in place.
 * Also, if there is overlap in listening_addresses between the active set
 * and the newly given set, the ones in the active set will remain in their
 * current condition and will not be closed and reopened, also all associated
 * DNS transactions will remain.
 */
getdns_return_t
getdns_context_set_listen_addresses(
    getdns_context *context, const getdns_list *listen_addresses,
    void *userarg, getdns_request_handler_t handler);

/**
 * Answer the request associated with a request_id that is received by a
 * request handler
 *
 * @param context The context managing the eventloop that needs to be run to
 *                listen for and answer requests.
 * @param reply The answer in getdns reply dict or response dict format.
 *              When NULL is given as reply, the request is not answered
 *              but all associated state is deleted.
 * @param request_id The identifier that links this response with the
 *                   received request.
 * @return GETDNS_RETURN_GOOD on success or an error code on failure.
 * On fatal failure (no retry strategy possible) the user still needs to
 * cancel the request by recalling getdns_reply() but with NULL as response,
 * to clean up state.
 */
getdns_return_t
getdns_reply(getdns_context *context,
    const getdns_dict *reply, getdns_transaction_t request_id);


/** @}
 */


/**
 * \defgroup Uutilityfunctionsdeprecated  Deptricated utility functions
 *  @{
 */
/**
 * WARNING! Function getdns_strerror is not in the API specification and
 * is likely to be removed from future versions of our implementation, to be
 * replaced by getdns_get_errorstr_by_id or something similar.
 * Please use getdns_get_errorstr_by_id instead of getdns_strerror.
 */
getdns_return_t getdns_strerror(getdns_return_t err, char *buf, size_t buflen);

/**
 * Runs the event loop once non blocking.
 * WARNING! Do not use this function.  This function will be removed in
 * future versions of getdns.
 */
getdns_return_t getdns_context_process_async(getdns_context *context);

/**
 * Return the number of pending requests and the point of time of the next
 * timeout.
 * WARNING! Do not use this function.  This function will be removed in
 * future versions of getdns.
 */
uint32_t getdns_context_get_num_pending_requests(const getdns_context *context,
    struct timeval *next_timeout);

/**
 * Detach the eventloop from the context.  Resets the context with the default
 * event loop based on poll().  WARNING!  Do not use this function.  It is For
 * internal use only and may disappear in future releases.
 * @param context The context to reset to default event loop usage
 * @return GETDNS_RETURN_GOOD when successful
 * @return GETDNS_RETURN_INVALID_PARAMETER when context is NULL
 */
getdns_return_t
getdns_context_detach_eventloop(getdns_context *context);

/**
 * Tell underlying unbound context to use background threads or fork.
 * This is only relevant for libunbound version before 1.5.9.  After this
 * version the underlying unbound will share the event loop with getdns
 * eliminating the use for threads.  Since the need for this function is
 * doubtful and likely to disappear in the future, use is strongly
 * discouraged.
 * @param context The context to configure
 * @param use_threads is either 1 to use threads, or 0 to use fork
 * @return GETDNS_RETURN_GOOD on success
 * @return GETDNS_RETURN_INVALID_PARAMETER if context is NULL
 */
getdns_return_t getdns_context_set_use_threads(getdns_context *context,
    int use_threads);

/** @}
 */
/** @}
 */
#ifdef __cplusplus
}
#endif

#endif


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AES {
    void *m_context;
    basic_string_075b6133 m_iv;
    basic_string_075b6133 m_ivStart;
    basic_string_075b6133 m_key;
    basic_string_075b6133 m_nonce;
    basic_string_075b6133 m_adata;
    basic_string_075b6133 m_tag;
    unsigned char m_block[16];
    char *m_blockPtr;
    int m_tagLength;
    unsigned int m_blockOffset;
    int m_mode;
    struct OSSLContextCarrier *m_osContext;
};

struct AppDetail {
    basic_string_075b6133 _field1;
    basic_string_075b6133 _field2;
    basic_string_075b6133 _field3;
    basic_string_075b6133 _field4;
    basic_string_075b6133 _field5;
    struct vector<GD::GDApplicationIcon, std::allocator<GD::GDApplicationIcon>> _field6;
    basic_string_075b6133 _field7;
    struct vector<GD::AppServerDetail, std::allocator<GD::AppServerDetail>> _field8;
};

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct CIconResourceCallback {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct CTPResourceCallback;

struct Cond {
    struct _opaque_pthread_cond_t {
        long __sig;
        char __opaque[24];
    } m_cond;
};

struct Dbb {
    CDUnknownFunctionPointerType *_vptr$Dbb;
    char *data;
    int dataSize;
    int dataCap;
    int readPos;
    _Bool newData;
    struct Mutex *accessMutex;
};

struct GDApplicationIcon;

struct GDCTPCommandGetAppResource {
    CDUnknownFunctionPointerType *_field1;
    CDUnknownFunctionPointerType *_field2;
    struct CTPResourceCallback *_field3;
    struct HttpRequest _field4;
    basic_string_075b6133 _field5;
};

struct GDHttpRequestAdapter {
    CDUnknownFunctionPointerType *_field1;
    struct HttpRequest _field2;
    id _field3;
    basic_string_075b6133 _field4;
    id _field5;
};

struct GDJson {
    struct json_object *_field1;
};

struct GDPairingCallback {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct GDSplitBillingAlertCallbackInterface {
    CDUnknownFunctionPointerType *_field1;
};

struct GDURLProtocolHttpAdapter {
    CDUnknownFunctionPointerType *_vptr$HttpRequestCallback2;
    struct HttpRequestNative http;
    id m_delegate;
    struct Mutex m_delegateMutex;
};

struct GSCFileReaderV2;

struct GSCFileWriterV2;

struct GSSecureManagerSetPasswordCallback {
    CDUnknownFunctionPointerType *_field1;
};

struct GSSecureManagerTouchIdCallback {
    CDUnknownFunctionPointerType *_field1;
};

struct GSSecureManagerUnlockCallback {
    CDUnknownFunctionPointerType *_field1;
};

struct GSTemporaryScreenCallback {
    CDUnknownFunctionPointerType *_field1;
};

struct Header;

struct HttpRequest {
    CDUnknownFunctionPointerType *_field1;
    struct Scheduler<GD::HttpRequest> _field2;
    int _field3;
    struct Queue<GD::state> _field4;
    struct HttpRequestNative _field5;
    struct HttpRequestCallback *_field6;
};

struct HttpRequestCallback;

struct HttpRequestCallback2;

struct HttpRequestNative {
    CDUnknownFunctionPointerType *_vptr$ISslSocketCallback;
    void *curlsh_noCookies;
    _Bool flag_KERBEROS_TICKET_SETUP_PROCEDURE_IS_IN_USE;
    _Bool flag_KERBEROS_TICKET_SETUP_PROXY_PROCEDURE_IS_IN_USE;
    struct KerberosTicketSetupTask *m_kerberos_task;
    _Bool flag_OPEN_REQUEST_NEEDS_TO_BE_SENT;
    _Bool flag_KERBEROS_TICKET_SETUP_PROCEDURE_COMPLETED;
    basic_string_075b6133 m_sessionId;
    struct HttpWorkerProvider *m_workerProvider;
    struct HttpWorker *m_worker;
    struct HttpRequestCallback *m_callback;
    struct HttpRequestCallback2 *m_callback2;
    struct Mutex data_mutex;
    struct Mutex event_mutex;
    struct Mutex status_mutex;
    void *m_curl;
    struct write_data m_write_data;
    struct read_data m_read_data;
    struct header_data m_header_data;
    struct curl_slist *m_request_headers;
    struct curl_slist *m_resolve_list;
    char m_errbuf[256];
    basic_string_075b6133 m_responseHeaders;
    _Bool m_async;
    int m_state;
    int m_error;
    int m_port;
    basic_string_075b6133 m_host;
    basic_string_075b6133 m_scheme;
    basic_string_075b6133 m_zone;
    basic_string_075b6133 m_method;
    _Bool m_ssl;
    _Bool m_verify_host;
    _Bool m_verify_peer;
    struct ISslSocketCallback *m_sslCallback;
    struct vector<std::basic_string<char>, std::allocator<std::basic_string<char>>> m_peer_certificate_chain;
    int m_peer_certificate_decision;
    struct Mutex m_peer_certificate_mutex;
    struct Signal m_peer_certificate_signal;
    struct pair<std::vector<std::basic_string<char>, std::allocator<std::basic_string<char>>>, std::basic_string<char>> m_client_credential;
    struct Mutex m_client_credential_mutex;
    struct Signal m_client_credential_signal;
    _Bool m_client_credential_request_answered;
    _Bool m_follow_location;
    int m_socket;
    int m_custom_socket;
    struct Mutex m_netStatusMutex;
    basic_string_075b6133 m_cookies;
    _Bool m_handle_cookies;
    _Bool m_cookieChange;
    _Bool m_handle_NSHTTP_cookies;
    basic_string_075b6133 m_url;
    basic_string_075b6133 m_origUrl;
    _Bool m_http_proxy_enabled;
    int m_http_proxy_port;
    basic_string_075b6133 m_http_proxy_host;
    _Bool m_logCurl;
    basic_string_075b6133 m_hostport;
    _Bool m_isPipeliningEnabled;
    _Bool m_disable_expect100;
    _Bool m_isUploadWithSize;
    _Bool m_isKCDEnabled;
    int m_httpStatusCode;
    int m_ssl_tls_protocol_version;
    struct RouteProvider m_rp;
    int m_connectionRetryCount;
};

struct HttpWorker;

struct HttpWorkerProvider;

struct ICCConnection {
    CDUnknownFunctionPointerType *_field1;
    struct IIccBaseSocket *_field2;
    struct IICCConnectionListener *_field3;
    basic_string_075b6133 _field4;
    struct vector<std::basic_string<char>, std::allocator<std::basic_string<char>>> _field5;
    int _field6;
    int _field7;
    int _field8;
    basic_string_075b6133 _field9;
    basic_string_075b6133 _field10;
    basic_string_075b6133 _field11;
    basic_string_075b6133 _field12;
    basic_string_075b6133 _field13;
    int _field14;
    int _field15;
    int _field16;
    int _field17;
    int _field18;
    int _field19;
    int _field20;
    basic_string_075b6133 _field21;
    struct vector<std::basic_string<char>, std::allocator<std::basic_string<char>>> _field22;
    int _field23;
    char *_field24;
    int _field25;
    char *_field26;
    _Bool _field27;
    int _field28;
    _Bool _field29;
};

struct ICCConnectionListener {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct IICCConnectionListener;

struct IIccBaseSocket;

struct ISslSocketCallback;

struct KerberosTicketSetupTask;

struct LocalDiscovery {
    CDUnknownFunctionPointerType *_field1;
    struct set<GD::iLocalDiscoveryWatcher *, std::less<GD::iLocalDiscoveryWatcher *>, std::allocator<GD::iLocalDiscoveryWatcher *>> _field2;
    struct Mutex _field3;
    id _field4;
};

struct MDMUtil {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    basic_string_075b6133 _field3;
    basic_string_075b6133 _field4;
    basic_string_075b6133 _field5;
};

struct Mutex {
    CDUnknownFunctionPointerType *_vptr$Mutex;
    struct _opaque_pthread_mutex_t {
        long __sig;
        char __opaque[40];
    } m_mutex;
};

struct OSSLContextCarrier;

struct Queue<GD::state> {
    int **_field1;
    struct Mutex _field2;
    struct Cond _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
};

struct RouteInfo {
    int m_route;
};

struct RouteProvider {
    basic_string_075b6133 m_host;
    basic_string_075b6133 m_port;
    struct RouteInfo m_route_info;
};

struct Scheduler<GD::HttpRequest> {
    CDUnknownFunctionPointerType *_field1;
    void *_field2;
    struct HttpRequest *_field3;
};

struct Signal {
    struct Mutex m_mutex;
    struct Cond m_cond;
    _Bool m_waiting;
};

struct _Alloc_hider {
    char *_M_p;
};

struct _NSRange {
    unsigned int _field1;
    unsigned int _field2;
};

struct _Rb_tree<GD::iLocalDiscoveryWatcher *, GD::iLocalDiscoveryWatcher *, std::_Identity<GD::iLocalDiscoveryWatcher *>, std::less<GD::iLocalDiscoveryWatcher *>, std::allocator<GD::iLocalDiscoveryWatcher *>> {
    struct _Rb_tree_impl<std::less<GD::iLocalDiscoveryWatcher *>, false> _field1;
};

struct _Rb_tree<std::basic_string<char>, std::pair<const std::basic_string<char>, GSCFileReaderV2 *>, std::_Select1st<std::pair<const std::basic_string<char>, GSCFileReaderV2 *>>, std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, GSCFileReaderV2 *>>> {
    struct _Rb_tree_impl<std::less<std::basic_string<char>>, false> _M_impl;
};

struct _Rb_tree<std::basic_string<char>, std::pair<const std::basic_string<char>, GSCFileWriterV2 *>, std::_Select1st<std::pair<const std::basic_string<char>, GSCFileWriterV2 *>>, std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, GSCFileWriterV2 *>>> {
    struct _Rb_tree_impl<std::less<std::basic_string<char>>, false> _M_impl;
};

struct _Rb_tree<std::basic_string<char>, std::pair<const std::basic_string<char>, NSInputStream *>, std::_Select1st<std::pair<const std::basic_string<char>, NSInputStream *>>, std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, NSInputStream *>>> {
    struct _Rb_tree_impl<std::less<std::basic_string<char>>, false> _M_impl;
};

struct _Rb_tree_impl<std::less<GD::iLocalDiscoveryWatcher *>, false> {
    struct less<GD::iLocalDiscoveryWatcher *> _field1;
    struct _Rb_tree_node_base _field2;
    unsigned int _field3;
};

struct _Rb_tree_impl<std::less<std::basic_string<char>>, false> {
    struct less<std::basic_string<char>> _M_key_compare;
    struct _Rb_tree_node_base _M_header;
    unsigned int _M_node_count;
};

struct _Rb_tree_node_base {
    int _M_color;
    struct _Rb_tree_node_base *_M_parent;
    struct _Rb_tree_node_base *_M_left;
    struct _Rb_tree_node_base *_M_right;
};

struct _Vector_impl {
    struct GDApplicationIcon *_M_start;
    struct GDApplicationIcon *_M_finish;
    struct GDApplicationIcon *_M_end_of_storage;
};

struct array_list;

struct auto_ptr<GSCFileReaderV2> {
    struct GSCFileReaderV2 *_M_ptr;
};

struct auto_ptr<GSCFileWriterV2> {
    struct GSCFileWriterV2 *_M_ptr;
};

struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
    struct _Alloc_hider _M_dataplus;
};

struct curl_slist;

struct header_data {
    struct HttpRequestNative *req;
    struct Header *headers;
    unsigned int size;
};

struct in6_addr {
    union {
        unsigned char _field1[16];
        unsigned short _field2[8];
        unsigned int _field3[4];
    } _field1;
};

struct in_addr {
    unsigned int _field1;
};

struct json_object {
    int _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    int _field4;
    struct printbuf *_field5;
    union data _field6;
};

struct less<GD::iLocalDiscoveryWatcher *>;

struct less<std::basic_string<char>>;

struct lh_table;

struct map<std::basic_string<char>, GSCFileReaderV2 *, std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, GSCFileReaderV2 *>>> {
    struct _Rb_tree<std::basic_string<char>, std::pair<const std::basic_string<char>, GSCFileReaderV2 *>, std::_Select1st<std::pair<const std::basic_string<char>, GSCFileReaderV2 *>>, std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, GSCFileReaderV2 *>>> _M_t;
};

struct map<std::basic_string<char>, GSCFileWriterV2 *, std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, GSCFileWriterV2 *>>> {
    struct _Rb_tree<std::basic_string<char>, std::pair<const std::basic_string<char>, GSCFileWriterV2 *>, std::_Select1st<std::pair<const std::basic_string<char>, GSCFileWriterV2 *>>, std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, GSCFileWriterV2 *>>> _M_t;
};

struct map<std::basic_string<char>, NSInputStream *, std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, NSInputStream *>>> {
    struct _Rb_tree<std::basic_string<char>, std::pair<const std::basic_string<char>, NSInputStream *>, std::_Select1st<std::pair<const std::basic_string<char>, NSInputStream *>>, std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, NSInputStream *>>> _M_t;
};

struct pair<std::vector<std::basic_string<char>, std::allocator<std::basic_string<char>>>, std::basic_string<char>> {
    struct vector<std::basic_string<char>, std::allocator<std::basic_string<char>>> first;
    basic_string_075b6133 second;
};

struct printbuf;

struct read_data {
    struct __sFILE *file;
    char *data;
    int dataLen;
    int dataPos;
    struct HttpRequestNative *req;
};

struct set<GD::iLocalDiscoveryWatcher *, std::less<GD::iLocalDiscoveryWatcher *>, std::allocator<GD::iLocalDiscoveryWatcher *>> {
    struct _Rb_tree<GD::iLocalDiscoveryWatcher *, GD::iLocalDiscoveryWatcher *, std::_Identity<GD::iLocalDiscoveryWatcher *>, std::less<GD::iLocalDiscoveryWatcher *>, std::allocator<GD::iLocalDiscoveryWatcher *>> _field1;
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct sockaddr_in6 {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned int _field4;
    struct in6_addr _field5;
    unsigned int _field6;
};

struct vector<GD::AppServerDetail, std::allocator<GD::AppServerDetail>> {
    struct _Vector_impl _field1;
};

struct vector<GD::GDApplicationIcon, std::allocator<GD::GDApplicationIcon>> {
    struct _Vector_impl _field1;
};

struct vector<std::basic_string<char>, std::allocator<std::basic_string<char>>> {
    struct _Vector_impl _M_impl;
};

struct write_data {
    struct HttpRequestNative *req;
    struct Dbb readBufferNative;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long _field1;
    id *_field2;
    unsigned long *_field3;
    unsigned long _field4[5];
} CDStruct_11f37819;

typedef struct {
    unsigned long long _field1;
    unsigned long _field2;
    _Bool _field3;
} CDStruct_6479bfda;

typedef struct {
    int version;
    void *info;
    CDUnknownFunctionPointerType retain;
    CDUnknownFunctionPointerType release;
    CDUnknownFunctionPointerType copyDescription;
} CDStruct_304912e7;

// Template types
typedef struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
    struct _Alloc_hider _M_dataplus;
} basic_string_075b6133;

#pragma mark Named Unions

union data {
    int _field1;
    double _field2;
    int _field3;
    struct lh_table *_field4;
    struct array_list *_field5;
    char *_field6;
};


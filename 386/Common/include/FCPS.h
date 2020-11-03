
#ifndef __FPCS_H_36793480_INCLUDED__
#define __FPCS_H_36793480_INCLUDED__

#include <typedef.h>

#ifdef __cplusplus
extern "C" {
#endif

#define FCPS_PROTOCOL_CMD_MAGIC         0x44db3a34
#define FCPS_PROTOCOL_RESP_MAGIC	0xd59c25a4

enum
{
    //server normal error
    FCPS_ERR_SUCCEEDED  = 0,
    FCPS_ERR_LMK_UNINITED = 1,
    FCPS_ERR_INPUT_INVALID = 2,
    FCPS_ERR_NO_RECORD = 3,
    FCPS_ERR_OBJECT_EXIST = 4,
    FCPS_ERR_USER_STATUS = 5,

    FCPS_ERR_KEY_TYPE_ERR = 6,
    FCPS_ERR_KEY_LEN_ERR = 7,
    FCPS_ERR_KEY_CLASS_ERR = 8,
    FCPS_ERR_KCV_MISMATCH = 9,
    FCPS_ERR_MAC_MISMATCH = 10,
    FCPS_ERR_DIGEST_MISMATCH = 11,

    FCPS_ERR_STATUS_INVALID = 0x21,
    FCPS_ERR_STATUS_UNCHANGE = 0x22,

    FCPS_ERR_DB_OUT_OF_MEMORY = 0x31,

    FCPS_ERR_DTS_SERVER_CONFIG = 0x41,
    FCPS_ERR_DTS_SERVER_CONNECTION = 0x42,
    FCPS_ERR_DPS_SERVER_CONNECTION = 0x43,
    FCPS_ERR_DP_TASK_INIT_FAILED = 0x44,

    FCPS_ERR_OP_INVALID = 0x51,
    FCPS_ERR_OP_REFUSED = 0x52,
    FCPS_ERR_DATE_TEMLATE_MISMATCH = 0x53,



    //server severe error, may stop service
    FCPS_ERR_SERVER_MEMORY = 0x101,
    FCPS_ERR_DB_STATUS = 0x102,
    FCPS_ERR_DB_FUNCTION = 0x103,
    FCPS_ERR_HSM_STATUS = 0x104,
    FCPS_ERR_HSM_FUNCTION = 0x105,
    FCPS_ERR_KMS_STATUS = 0x106,

    //common error, no transfer
    FCPS_ERR_COMM_FAILED = 0x201,
    FCPS_ERR_PROTOCOL_ERROR = 0x202,

    //client error
    FCPS_ERR_CLIENT_MEMORY = 0x10001,
    FCPS_ERR_OUTPUT_INVALID = 0x10002,
    FCPS_ERR_FILE_OP_FAILED = 0x10003,
    FCPS_ERR_FILE_FORMAT_INVALID = 0x10004,
    FCPS_ERR_BIN_MISMATCH = 0x10005,
    FCPS_ERR_ISSER_KEY_MISMATCH = 0x10006,

    FCPS_ERR_DB_CONNECTION = 0x20001,
    FCPS_ERR_PORT_LISTEN_FAILED = 0x20002,

    //unknown err
    FCPS_ERR_UNKNOWN  = -1,
};

enum
{
    CI_ERR_SUCCEEDED = 0,
    CI_ERR_TASK_NOT_FOUND = 1,
    CI_ERR_TASK_NOT_INITED = 2,
    CI_ERR_DATA_NOT_MATCH = 3,
    CI_ERR_KEY_LEN_INVALID = 4,
    CI_ERR_HSM_ERROR = 5,
    CI_ERR_KCV_MISMATCH = 6,
    CI_ERR_SCP_STATUS = 7,
    CI_ERR_FUNCTION_NOT_SUPPORTED = 8,
    CI_ERR_OP_REFUSED = 9,
    CI_ERR_NO_RECORD = 10,
    CI_ERR_LOG_EXIST = 11,
    CI_ERR_DB_ERR = 12,
    CI_ERR_STATUS_INVALID = 13,
    CI_ERR_DATA_INVALID = 14,
    CI_ERR_UNKNOWN = -1,
};

enum
{
    FCPS_MODULE_BASIC_CMD = 0,
    FCPS_MODULE_USER_ACCESS = 1,
    FCPS_MODULE_USER_MGMT = 2,
    FCPS_MODULE_CRYPT_SERVICE = 3,
    FCPS_MODULE_KEY_MGMT = 4,
    FCPS_MODULE_DT = 5,
    FCPS_MODULE_DP = 6,
    FCPS_MODULE_CIM = 7,
    FCPS_MODULE_CIF = 8,
    FCPS_MODULE_CI = 9,
    FCPS_MODULE_CIJ = 10,
};

enum
{
    BC_INS_PULSE = 0x01,
    BC_INS_GET_VERSION = 0x02,
};

enum
{
    UM_INS_NEW_USER = 0x01,
    UM_INS_DEL_USER = 0x02,
    UM_INS_UPDATE_USER = 0x03,
    UM_INS_ENUM_USER = 0x04,
    UM_INS_VERIFY_PIN = 0x11,
    UM_INS_UPDATE_PIN = 0x12,
};

enum
{
    UA_INS_LOGIN = 1,
    UA_INS_LOGOUT = 2,
    UA_INS_UPDATE_PIN = 0x11,
};

enum
{	
    CS_INS_CALC_KCV = 0x01,
    CS_INS_INJECT_SYMM_KEY = 0x02,
    CS_INS_INJECT_RSA_KEY = 0x03,
    CS_INS_GENERATE_SYMM_KEY = 0x04,
    CS_INS_GENERATE_RSA_KEY = 0x05,
    CS_INS_DIGEST = 0x06,
    CS_INS_SYMM_ENCRYPT = 0x07,
    CS_INS_SYMM_DECRYPT = 0x08,
    CS_INS_RSA_PRIVATE_CRYPT = 0x09,
    CS_INS_RSA_PUBLIC_CRYPT = 0x0A,
    CS_INS_RSA_SIGN = 0x0B,
    CS_INS_RSA_VERIFY = 0x0C,
};

enum
{
    KM_INS_GET_LMK_INFO = 0x01,
    KM_INS_INJECT_LMK_TO_HSM = 0x02,
    KM_INS_INJECT_LMK_TO_KMS = 0x03,
    KM_INS_REWRAP_SYMM_FROM_LMK = 0x04,
    KM_INS_REWRAP_SYMM_TO_LMK = 0x05,
    KM_INS_REWRAP_RSA_FROM_LMK = 0x06,
    KM_INS_REWRAP_RSA_TO_LMK = 0x07,
    KM_INS_REWRAP_FROM_LMK = 0x04,
    KM_INS_REWRAP_TO_LMK = 0x05,

    KM_INS_NEW_CA= 0x11,
    KM_INS_DEL_CA= 0x12,
    KM_INS_ENUM_CA = 0x13,

    KM_INS_NEW_KEY_TEMPLATE = 0x21,
    KM_INS_DEL_KEY_TEMPLATE = 0x22,
    KM_INS_ENUM_KEY_TEMPLATE = 0x23,

    KM_INS_NEW_CAPKC = 0x24,
    KM_INS_DEL_CAPKC = 0x25,
    KM_INS_ENUM_CAPKC = 0x26,
    KM_INS_QUERY_CAPKC = 0x27,

    KM_INS_NEW_CAIPKC = 0x28,
    KM_INS_DEL_CAIPKC = 0x29,
    KM_INS_ENUM_CAIPKC = 0x2A,
    KM_INS_QUERY_CAIPKC = 0x2B,

    KM_INS_NEW_KEY_DEF_TO_TEMPLATE = 0x31,
    KM_INS_DEL_KEY_DEF_FROM_TEMPLATE = 0x32,
    KM_INS_ENUM_KEY_DEF_OF_TEMPLATE = 0x33,

    KM_INS_NEW_BANK = 0x41,
    KM_INS_DEL_BANK = 0x42,
    KM_INS_ENUM_BANK = 0x43,

    KM_INS_NEW_BIN = 0x51,
    KM_INS_DEL_BIN = 0x52,
    KM_INS_ENUM_BIN = 0x53,

    KM_INS_NEW_KEY_DEF_TO_UDK = 0x61,
    KM_INS_DEL_KEY_DEF_FROM_UDK = 0x62,
    KM_INS_ENUM_KEY_DEF_OF_UDK = 0x63,

    KM_INS_NEW_KEY_DEF_TO_BIN = 0x71,
    KM_INS_DEL_KEY_DEF_FROM_BIN = 0x72,
    KM_INS_ENUM_KEY_DEF_OF_BIN = 0x73,

    KM_INS_NEW_PDK = 0x81,
    KM_INS_ENUM_PDK = 0x82,
    KM_INS_QUERY_PDK = 0x83,
    KM_INS_DEL_PDK = 0x84,

    KM_INS_NEW_UDK = 0x91,
    KM_INS_ENUM_UDK = 0x92,
    KM_INS_QUERY_UDK = 0x93,
    KM_INS_DEL_UDK = 0x94,

    KM_INS_NEW_BIN_KEY = 0xA1,
    KM_INS_ENUM_BIN_KEY = 0xA2,
    KM_INS_QUERY_BIN_KEY = 0xA3,
    KM_INS_DEL_BIN_KEY = 0xA4,

    KM_INS_SEEK_PDK = 0x85,

    KM_INS_VERIFY_PIN = 0x1001,
    KM_INS_UPDATE_PIN = 0x1002,
};

enum
{
    DT_INS_VERIFY_PIN = 0x01,
    DT_INS_UPDATE_PIN = 0x02,

    DT_INS_ENUM_PAYMENT = 0x81,
    DT_INS_QUERY_PAYMENT_TAGS = 0x82,
    DT_INS_NEW_PAYMENT = 0x83,
    DT_INS_DEL_PAYMENT = 0x84,
    DT_INS_UPDATE_PAYMENT = 0x85,

    DT_INS_ENUM_PROFILE = 0x91,
    DT_INS_QUERY_PROFILE_DGIS = 0x92,
    DT_INS_QUERY_PROFILE_INF = 0x93,
    DT_INS_NEW_PROFILE = 0x94,
    DT_INS_DEL_PROFILE = 0x95,
    DT_INS_UPDATE_PROFILE = 0x96,

    DT_INS_ENUM_DATA_TEMPLATE = 0xA1,
    DT_INS_QUERY_DATA_TEMPLATE = 0xA2,
    DT_INS_NEW_DATA_TEMPLATE = 0xA3,
    DT_INS_DEL_DATA_TEMPLATE = 0xA4,
    DT_INS_UPDATE_DATA_TEMPLATE = 0xA5,
};

enum
{
    DP_INS_VERIFY_PIN = 0x01,
    DP_INS_UPDATE_PIN = 0x02,

    DP_INS_UPLOAD_BEGIN = 0x51,
    DP_INS_UPLOAD = 0x52,
    DP_INS_UPLOAD_END = 0x53,
    DP_INS_UPLOAD_ABORT = 0x58,
    DP_INS_ENUM_DATA_FILE = 0x54,
    DP_INS_GET_FILE_INFO_STATUS = 0x55,
    DP_INS_GET_FILE_TASK_INFO = 0x56,
    DP_INS_GET_FILE_EVENT = 0x57,

    DP_INS_TASK_GET_MAX_COCURRENT = 0x61,
    DP_INS_TASK_SET_MAX_COCURRENT = 0x62,
    DP_INS_TASK_RESUME = 0x63,
    DP_INS_TASK_SUSPEND = 0x64,
    DP_INS_TASK_ADJUST_PRIORITY = 0x65,
    DP_INS_TASK_GET_STATUS = 0x66,

    DP_INS_START_TASK = 0x71,
    DP_INS_STOP_TASK = 0x72,
    DP_INS_FILE_DEL = 0x73,
    DP_INS_FILE_FREEZE = 0x74,
    DP_INS_FILE_UNFREEZE= 0x75,

    DP_INS_EXPORT_DATA_FILE_BEGIN = 0x76,
    DP_INS_EXPORT_DATA_FILE = 0x77,
    DP_INS_EXPORT_DATA_FILE_END = 0x78,

    DP_INS_ENUM_FIELD_TABLE = 0x81,
    DP_INS_NEW_FIELD_TABLE = 0x82,
    DP_INS_QUERY_FIELD_TABLE = 0x83,
    DP_INS_DEL_FIELD_TABLE = 0x84,

    DP_INS_NEW_ORDER = 0x91,
    DP_INS_ENUM_ACTIVE_ORDER = 0x92,
    DP_INS_ENUM_TERMINATED_ORDER = 0x93,
    DP_INS_QUERY_ORDER_BY_ID = 0x94,
    DP_INS_QUERY_ORDER_BY_NAME = 0x95,

    DP_INS_GET_NEXT_CSN = 0xA1,
};

enum
{
    CIM_INS_NEW_MACHINE = 0x11,
    CIM_INS_ENUM_MACHINE = 0x12,
    CIM_INS_QUERY_MACHINE = 0x13,
    CIM_INS_UPDATE_MACHINE = 0x14,
    CIM_INS_DEL_MACHINE = 0x15,

    CIM_INS_ENUM_ORDER = 0x21,
    CIM_INS_QUERY_ORDER_INFO = 0x22,
    CIM_INS_DEL_ORDER = 0x23,

    CIM_INS_ENUM_ORDER_DATA_FILE = 0x31,
    CIM_INS_QUERY_ORDER_DATA_FILE = 0x32,
    CIM_INS_QUERY_ORDER_DATA_FILE_PAN = 0x33,
    CIM_INS_DEL_ORDER_DATA_FILE = 0x34,

    CIM_INS_NEW_JOB_BEGIN = 0x41,
    CIM_INS_NEW_JOB_DATA_FILE = 0x42,
    CIM_INS_NEW_JOB_PAN = 0x43,
    CIM_INS_NEW_JOB_COMMIT = 0x44,
    CIM_INS_NEW_JOB_ABORT = 0x45,

    CIM_INS_ENUM_JOB = 0x51,
    CIM_INS_QUERY_JOB_INFO = 0x52,
    CIM_INS_QUERY_TASK_INFO = 0x53,
    CIM_INS_QUERY_ISSUE_INFO = 0x54,

    CIM_INS_START_TASK = 0x61,
    CIM_INS_STOP_TASK = 0x62,
    CIM_INS_FINISH_TASK = 0x63,
    CIM_INS_GET_TASK_DEVICE_PORT = 0x64,

    CIM_INS_QUERY_RECORD_EXIST_IN_ACTIVE_JOB = 0x71,
    CIM_INS_QUERY_LOG_EXIST_IN_FINISHED_JOB = 0x72,
    CIM_INS_QUERY_RECORD_IN_ACTIVE_JOB = 0x73,
    CIM_INS_QUERY_LOGGE_RECORD_IN_FINISHED_JOB = 0x74,

    CIM_INS_QUERY_LOG_INFO = 0x81,

    CIM_INS_FETCH_TASK_EVENT = 0x91,
    CIM_INS_FETCH_FILE_EVENT = 0x92,
};

enum
{
    CIF_INS_NEW_DATA_FILE_BEGIN = 0x01,
    CIF_INS_NEW_DATA_FILE_WRITE = 0x02,
    CIF_INS_NEW_DATA_FILE_COMMIT = 0x03,
    CIF_INS_NEW_DATA_FILE_ABORT = 0x04,
};

enum
{
    CIJ_INS_ENUM_ORDER = 0x01,
    CIJ_INS_ENUM_TASK = 0x02,
    CIJ_INS_QUERY_TASK_INFO = 0x04,
    CIJ_INS_QUERY_TASK_DATA = 0x05,
    CIJ_INS_LOCK_TASK = 0x06,
    CIJ_INS_UNLOCK_TASK = 0x07,
    CIJ_INS_GET_TASK_DEVICE = 0x08,
    CIJ_INS_GET_TASK_PORT = 0x09,
};

enum
{
    CI_INS_INIT_SESSION = 0x02,
    CI_INS_EXT_AUTH_KMC = 0x03,
    CI_INS_EXT_AUTH_KMU = 0x04,
    CI_INS_CVT_DES_KEY = 0x05,
    CI_INS_CVT_RSA_KEY = 0x06,
    CI_INS_PEK_DECRYPT = 0x07,
    CI_INS_ENC_KEY_ENCRYPT = 0x08,
    CI_INS_DEK_KEY_ENCRYPT = 0x09,
    CI_INS_CALC_MAC = 0x0A,
    CI_INS_GET_KMU = 0x0B,

    CI_INS_SET_STATUS_BY_INDEX = 0x11,
    CI_INS_SET_STATUS_BY_NAME = 0x12,
};

typedef struct
{
    dword_t magic;
    word_t moduleID;
    word_t functionID;
    dword_t cmdDataLen;
}fcps_command_header_t;

typedef struct
{
    dword_t magic;
    dword_t status;
    dword_t respDataLen;
}fcps_response_header_t;

#define FCPS_InitProtocolHeader(pHeader)     ((pHeader)->magic = FCPS_PROTOCOL_CMD_MAGIC)
#define FCPS_CheckProtocolHeader(pHeader)    (FCPS_PROTOCOL_CMD_MAGIC == (pHeader)->magic)

#define FCPS_CheckResponseHeader(pHeader)    (FCPS_PROTOCOL_RESP_MAGIC == (pHeader)->magic)

#ifdef __cplusplus
}
#endif

#endif


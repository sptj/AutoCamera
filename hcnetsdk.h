//宏定义
#define MAX_NAMELEN                16        //DVR本地登陆名
#define MAX_RIGHT                32        //设备支持的权限（1-12表示本地权限，13-32表示远程权限）
#define NAME_LEN                32      //用户名长度
#define MIN_PASSWD_LEN          8          //最小密码长度
#define PASSWD_LEN                16      //密码长度
#define MAX_PASSWD_LEN_EX            64      //密码长度64位
#define GUID_LEN                16      //GUID长度
#define DEV_TYPE_NAME_LEN        24      //设备类型名称长度
#define SERIALNO_LEN            48      //序列号长度
#define MACADDR_LEN                6       //mac地址长度
#define MAC_ADDRESS_NUM         48      //Mac地址长度
#define MAX_SENCE_NUM           16      //场景数
#define RULE_REGION_MAX         128      //最大区域
#define MAX_ETHERNET            2       //设备可配以太网络
#define MAX_NETWORK_CARD        4       //设备可配最大网卡数目
#define MAX_NETWORK_CARD_EX     12      //设备可配最大网卡数目扩展
#define PATHNAME_LEN            128     //路径长度
#define MAX_PRESET_V13          16      //预置点
#define MAX_TEST_COMMAND_NUM   32      //产线测试保留字段长度
#define MAX_NUMBER_LEN            32        //号码最大长度
#define MAX_NAME_LEN            128        //设备名称最大长度
#define MAX_INDEX_LED           8       //LED索引最大值 2013-11-19
#define MAX_CUSTOM_DIR            64      //自定义目录最大长度
#define URL_LEN_V40             256        //最大URL长度
#define CLOUD_NAME_LEN          48      //云存储服务器用户名长度
#define CLOUD_PASSWD_LEN        48      //云存储服务器密码长度
#define MAX_SENSORNAME_LEN      64      //传感器名称长度
#define MAX_SENSORCHAN_LEN      32      //传感器通道长度
#define MAX_DESCRIPTION_LEN     32      //传感器描述长度
#define MAX_DEVNAME_LEN_EX      64      //设备名称长度扩展
#define NET_SDK_MAX_FILE_PATH   256     //文件路径长度
#define MAX_TMEVOICE_LEN        64      //TME语音播报内容长度

#define MAX_NUM_INPUT_BOARD     512     //输入板最大个数
#define MAX_SHIPSDETE_REGION_NUM    8 // 船只检测区域列表最大数目

#define MAX_RES_NUM_ONE_VS_INPUT_CHAN  8  //一个虚拟屏输入通道支持的分辨率的最大数量
#define MAX_VS_INPUT_CHAN_NUM  16  //虚拟屏输入通道最大数量

#define NET_SDK_MAX_FDID_LEN 256//人脸库ID最大长度
#define NET_SDK_MAX_PICID_LEN 256 //人脸ID最大长度
#define NET_SDK_FDPIC_CUSTOM_INFO_LEN 96 //人脸库图片自定义信息长度
#define NET_DVR_MAX_FACE_ANALYSIS_NUM      32   //最大支持单张图片识别出的人脸区域个数
#define NET_DVR_MAX_FACE_SEARCH_NUM      5   //最大支持搜索人脸区域个数
#define NET_SDK_SECRETKEY_LEN      128   //配置文件密钥长度
#define NET_SDK_CUSTOM_LEN                  512 //自定义信息最大长度
#define NET_SDK_CHECK_CODE_LEN          128//校验码长度
//小间距LED控制器
#define  MAX_LEN_TEXT_CONTENT    128  //字符内容长度
#define  MAX_NUM_INPUT_SOURCE_TEXT    32    //信号源可叠加的文本数量
#define  MAX_NUM_OUTPUT_CHANNEL  512  //LED区域包含的输出口个数

//子窗口解码OSD
#define MAX_LEN_OSD_CONTENT  256  //OSD信息最大长度
#define MAX_NUM_OSD_ONE_SUBWND  8  //单个子窗口支持的最大OSD数量
#define MAX_NUM_SPLIT_WND  64 //单个窗口支持的最大分屏窗口数量（即子窗口数量）
#define MAX_NUM_OSD 8

//2013-11-19
#define MAX_DEVNAME_LEN         32      //设备名称最大长度
#define MAX_LED_INFO            256     //屏幕字体显示信息最大长度
#define MAX_TIME_LEN            32      //时间最大长度
#define MAX_CARD_LEN            24      //卡号最大长度
#define MAX_OPERATORNAME_LEN    32      //操作人员名称最大长度

#define THERMOMETRY_ALARMRULE_NUM 40     //热成像报警规则数
#define MAX_THERMOMETRY_REGION_NUM  40  //热度图检测区域最大支持数
#define MAX_THERMOMETRY_DIFFCOMPARISON_NUM  40 //热成像温差报警规则数
#define MAX_SHIPS_NUM           20      //船只检测最大船只数
#define KEY_WORD_NUM             3 //关键字个数
#define KEY_WORD_LEN            128  //关键字长度
//异步登录回调状态宏定义
#define ASYN_LOGIN_SUCC            1        //异步登录成功
#define ASYN_LOGIN_FAILED        0        //异步登录失败

#define NET_SDK_MAX_VERIFICATION_CODE_LEN  32        //萤石云验证码长度
#define MAX_TIMESEGMENT_V30        8       //9000设备最大时间段数
#define MAX_TIMESEGMENT            4       //8000设备最大时间段数
#define MAX_ICR_NUM             8       //抓拍机红外滤光片预置点数2013-07-09
#define MAX_VEHICLEFLOW_INFO                       24       //车流量信息最大个数
#define MAX_SHELTERNUM            4       //8000设备最大遮挡区域数
#define MAX_DAYS                7       //每周天数
#define PHONENUMBER_LEN            32      //pppoe拨号号码最大长度
#define MAX_ACCESSORY_CARD      256      //配件板信息最大长度
#define MAX_DISKNUM_V30            33        //9000设备最大硬盘数/* 最多33个硬盘(包括16个内置SATA硬盘、1个eSATA硬盘和16个NFS盘) */

#define NET_SDK_DISK_LOCATION_LEN  16      //硬盘位置长度
#define NET_SDK_SUPPLIER_NAME_LEN  32      //供应商名称长度
#define NET_SDK_DISK_MODEL_LEN     64      //硬盘型号长度
#define NET_SDK_MAX_DISK_VOLUME    33      //最大硬盘卷个数
#define NET_SDK_DISK_VOLUME_LEN    36      //硬盘卷名称长度

#define MAX_DISKNUM                16      //8000设备最大硬盘数
#define MAX_DISKNUM_V10            8       //1.2版本之前版本
#define CARD_READER_DESCRIPTION    32            //读卡器描述
#define MAX_FACE_NUM               2             //最大人脸数

#define MAX_WINDOW_V30            32      //9000设备本地显示最大播放窗口数
#define MAX_WINDOW_V40            64      //Netra 2.3.1扩展
#define MAX_WINDOW                16      //8000设备最大硬盘数
#define MAX_VGA_V30                4       //9000设备最大可接VGA数
#define MAX_VGA                    1       //8000设备最大可接VGA数

#define MAX_USERNUM_V30            32      //9000设备最大用户数
#define MAX_USERNUM                16      //8000设备最大用户数
#define MAX_EXCEPTIONNUM_V30    32      //9000设备最大异常处理数
#define MAX_EXCEPTIONNUM        16      //8000设备最大异常处理数
#define MAX_LINK                6       //8000设备单通道最大视频流连接数
#define MAX_ITC_EXCEPTIONOUT    32      //抓拍机最大报警输出
#define MAX_SCREEN_DISPLAY_LEN            512    //屏幕显示字符长度

#define MAX_DECPOOLNUM            4       //单路解码器每个解码通道最大可循环解码数
#define MAX_DECNUM                4       //单路解码器的最大解码通道数（实际只有一个，其他三个保留）
#define MAX_TRANSPARENTNUM        2       //单路解码器可配置最大透明通道数
#define MAX_CYCLE_CHAN            16      //单路解码器最大轮巡通道数
#define MAX_CYCLE_CHAN_V30      64      //最大轮巡通道数（扩展）
#define MAX_DIRNAME_LENGTH        80      //最大目录长度
#define MAX_WINDOWS                16      //最大窗口数


#define MAX_STRINGNUM_V30        8        //9000设备最大OSD字符行数数
#define MAX_STRINGNUM            4       //8000设备最大OSD字符行数数
#define MAX_STRINGNUM_EX        8       //8000定制扩展
#define MAX_AUXOUT_V30            16      //9000设备最大辅助输出数
#define MAX_AUXOUT                4       //8000设备最大辅助输出数
#define MAX_HD_GROUP            16      //9000设备最大硬盘组数
#define MAX_HD_GROUP_V40        32      //设备最大硬盘组数
#define MAX_NFS_DISK            8       //8000设备最大NFS硬盘数
#define NET_SDK_VERSION_LIST_LEN 64 //算法库版本最大值
#define IW_ESSID_MAX_SIZE        32      //WIFI的SSID号长度
#define IW_ENCODING_TOKEN_MAX    32      //WIFI密锁最大字节数
#define MAX_SERIAL_NUM            64        //最多支持的透明通道路数
#define MAX_DDNS_NUMS            10      //9000设备最大可配ddns数
#define MAX_DOMAIN_NAME            64        /* 最大域名长度 */
#define MAX_EMAIL_ADDR_LEN        48      //最大email地址长度
#define MAX_EMAIL_PWD_LEN        32      //最大email密码长度
#define MAX_SLAVECAMERA_NUM     8       //从摄像机个数
#define MAX_CALIB_NUM           6       //标定点的个数
#define MAX_CALIB_NUM_EX        20      //扩展标定点的个数
#define MAX_LEDDISPLAYINFO_LEN  1024    //最大LED屏显示长度
#define MAX_PEOPLE_DETECTION_NUM    8  //最大人员检测区域数
#define MAXPROGRESS                100     //回放时的最大百分率
#define MAX_SERIALNUM            2       //8000设备支持的串口数 1-232， 2-485
#define CARDNUM_LEN                20      //卡号长度
#define CARDNUM_LEN_OUT            32      //外部结构体卡号长度
#define MAX_VIDEOOUT_V30        4       //9000设备的视频输出数
#define MAX_VIDEOOUT            2       //8000设备的视频输出数

#define MAX_PRESET_V30            256        /* 9000设备支持的云台预置点数 */
#define MAX_TRACK_V30            256        /* 9000设备支持的云台轨迹数 */
#define MAX_CRUISE_V30            256        /* 9000设备支持的云台巡航数 */
#define MAX_PRESET                128        /* 8000设备支持的云台预置点数 */
#define MAX_TRACK                128        /* 8000设备支持的云台轨迹数 */
#define MAX_CRUISE                128        /* 8000设备支持的云台巡航数 */

#define MAX_PRESET_V40            300        /* 云台支持的最大预置点数 */
#define MAX_CRUISE_POINT_NUM    128     /* 最大支持的巡航点的个数 */
#define MAX_CRUISEPOINT_NUM_V50 256     //最大支持的巡航点的个数扩展

#define CRUISE_MAX_PRESET_NUMS    32         /* 一条巡航最多的巡航点 */
#define MAX_FACE_PIC_NUM        30      /*人脸子图个数*/
#define LOCKGATE_TIME_NUM       4       //锁闸时间段个数

#define MAX_SERIAL_PORT         8       //9000设备支持232串口数
#define MAX_PREVIEW_MODE        8       /* 设备支持最大预览模式数目 1画面,4画面,9画面,16画面.... */
#define MAX_MATRIXOUT           16      /* 最大模拟矩阵输出个数 */
#define LOG_INFO_LEN            11840   /* 日志附加信息 */
#define DESC_LEN                16      /* 云台描述字符串长度 */
#define PTZ_PROTOCOL_NUM        200     /* 9000最大支持的云台协议数 */
#define IPC_PROTOCOL_NUM        50   //ipc 协议最大个数

#define MAX_AUDIO                1       //8000语音对讲通道数
#define MAX_AUDIO_V30            2       //9000语音对讲通道数
#define MAX_CHANNUM                16      //8000设备最大通道数
#define MAX_ALARMIN                16      //8000设备最大报警输入数
#define MAX_ALARMOUT            4       //8000设备最大报警输出数
//9000 IPC接入
#define MAX_ANALOG_CHANNUM      32      //最大32个模拟通道
#define MAX_ANALOG_ALARMOUT     32      //最大32路模拟报警输出
#define MAX_ANALOG_ALARMIN      32      //最大32路模拟报警输入

#define MAX_IP_DEVICE           32      //允许接入的最大IP设备数
#define MAX_IP_DEVICE_V40       64      // 允许接入的最大IP设备数 最多可添加64个 IVMS 2000等新设备
#define MAX_IP_CHANNEL          32      //允许加入的最多IP通道数
#define MAX_IP_ALARMIN          128     //允许加入的最多报警输入数
#define MAX_IP_ALARMOUT         64      //允许加入的最多报警输出数
#define MAX_IP_ALARMIN_V40      4096    //允许加入的最多报警输入数
#define MAX_IP_ALARMOUT_V40     4096    //允许加入的最多报警输出数

#define MAX_RECORD_FILE_NUM     20      // 每次删除或者刻录的最大文件数
//SDK_V31 ATM
#define MAX_ACTION_TYPE            12        //自定义协议叠加交易行为最大行为个数
#define MAX_ATM_PROTOCOL_NUM    256   //每种输入方式对应的ATM最大协议数
#define ATM_CUSTOM_PROTO        1025   //自定义协议 值为1025
#define ATM_PROTOCOL_SORT       4       //ATM协议段数
#define ATM_DESC_LEN            32      //ATM描述字符串长度
// SDK_V31 ATM


#define MAX_IPV6_LEN              64   //IPv6地址最大长度
#define MAX_EVENTID_LEN         64   //事件ID长度

#define INVALID_VALUE_UINT32    0xffffffff   //无效值
#define MAX_CHANNUM_V40         512
#define MAX_MULTI_AREA_NUM      24

//SDK 录播主机
#define COURSE_NAME_LEN                32    //课程名称
#define INSTRUCTOR_NAME_LEN            16    //授课教师
#define COURSE_DESCRIPTION_LEN        256    //课程信息

#define MAX_TIMESEGMENT_V40            16    //每节课信息


#define MAX_MIX_CHAN_NUM        16    /*目前支持的最大混音通道数，背景通道 + MIC + LINE IN + 最多4个小画面*/
#define MAX_LINE_IN_CHAN_NUM    16    //最大line in通道数
#define MAX_MIC_CHAN_NUM        16    //最大MIC通道数
#define INQUEST_CASE_NO_LEN        64    //审讯案件编号长度
#define INQUEST_CASE_NAME_LEN    64    //审讯案件名称长度
#define CUSTOM_INFO_LEN            64    //自定义信息长度
#define INQUEST_CASE_LEN        64    //审讯信息长度


#define MAX_FILE_ID_LEN         128    //视图库项目中文件ID的最大长度
#define MAX_PIC_NAME_LEN        128 //图片名称长度

/* 最大支持的通道数 最大模拟加上最大IP支持 */
#define MAX_CHANNUM_V30               ( MAX_ANALOG_CHANNUM + MAX_IP_CHANNEL )//64
#define MAX_ALARMOUT_V40             (MAX_IP_ALARMOUT_V40 +MAX_ANALOG_ALARMOUT) //4128
#define MAX_ALARMOUT_V30              ( MAX_ANALOG_ALARMOUT + MAX_IP_ALARMOUT )//96
#define MAX_ALARMIN_V30               ( MAX_ANALOG_ALARMIN + MAX_IP_ALARMIN )//160
#define MAX_ALARMIN_V40             (MAX_IP_ALARMIN_V40 +MAX_ANALOG_ALARMOUT) //4128
#define MAX_ANALOG_ALARM_WITH_VOLT_LIMIT    16 //受电压限定的模拟报警最大输入数

#define MAX_ROIDETECT_NUM       8    //支持的ROI区域数
#define MAX_LANERECT_NUM        5    //最大车牌识别区域数
#define MAX_FORTIFY_NUM         10   //最大布防个数
#define MAX_INTERVAL_NUM        4    //最大时间间隔个数
#define MAX_CHJC_NUM            3    //最大车辆省份简称字符个数
#define MAX_VL_NUM              5    //最大虚拟线圈个数
#define MAX_DRIVECHAN_NUM       16   //最大车道数
#define MAX_COIL_NUM            3    //最大线圈个数
#define MAX_SIGNALLIGHT_NUM     6   //最大信号灯个数
#define LEN_16                    16
#define LEN_32                    32
#define LEN_31                    31
#define MAX_CABINET_COUNT       8    //最大支持机柜数量
#define MAX_ID_LEN              48
#define MAX_PARKNO_LEN          16
#define MAX_ALARMREASON_LEN     32
#define MAX_UPGRADE_INFO_LEN    48 //获取升级文件匹配信息(模糊升级)
#define MAX_CUSTOMDIR_LEN       32 //自定义目录长度
#define MAX_LED_INFO_LEN        512//LED内容长度
#define MAX_VOICE_INFO_LEN      128//语音播报内容长度
#define MAX_LITLE_INFO_LEN      64 //纸票标题内容长度
#define MAX_CUSTOM_INFO_LEN     64 //纸票自定义信息内容长度
#define MAX_PHONE_NUM_LEN       16 //联系电话内容长度
#define MAX_APP_SERIALNUM_LEN   32 //应用序列号长度

#define AUDIOTALKTYPE_G722       0
#define AUDIOTALKTYPE_G711_MU    1
#define AUDIOTALKTYPE_G711_A     2
#define AUDIOTALKTYPE_MP2L2      5
#define AUDIOTALKTYPE_G726         6
#define AUDIOTALKTYPE_AAC         7
#define AUDIOTALKTYPE_PCM         8

//packet type
#define FILE_HEAD            0 //file head
#define VIDEO_I_FRAME        1 //video I frame
#define VIDEO_B_FRAME        2 //video B frame
#define VIDEO_P_FRAME        3 //video P frame
#define AUDIO_PACKET        10 //audio packet
#define PRIVT_PACKET        11 //private packet
//E frame
#define HIK_H264_E_FRAME    (1 << 6)   // 以前E帧不用了,深P帧也没用到
#define MAX_TRANSPARENT_CHAN_NUM      4   //每个串口允许建立的最大透明通道数
#define MAX_TRANSPARENT_ACCESS_NUM    4   //每个监听端口允许接入的最大主机数

//ITS
#define MAX_PARKING_STATUS       8    //车位状态 0代表无车，1代表有车，2代表压线(优先级最高), 3特殊车位
#define MAX_PARKING_NUM             4    //一个通道最大4个车位 (从左到右车位 数组0～3)

#define MAX_ITS_SCENE_NUM        16   //最大场景数量
#define MAX_SCENE_TIMESEG_NUM    16   //最大场景时间段数量
#define MAX_IVMS_IP_CHANNEL      128  //最大IP通道数
#define DEVICE_ID_LEN            48   //设备编号长度
#define MONITORSITE_ID_LEN       48   //监测点编号长度
#define MAX_AUXAREA_NUM          16   //辅助区域最大数目
#define MAX_SLAVE_CHANNEL_NUM    16   //最大从通道数量
#define MAX_DEVDESC_LEN          64   //设备描述信息最大长度
#define ILLEGAL_LEN       32      //违法代码长度



#define MAX_SECRETKEY_LEN           512     //最大秘钥长度
#define MAX_INDEX_CODE_LEN          64      //最大序号长度
#define MAX_ILLEGAL_LEN          64     //违法代码最大字符长度
#define CODE_LEN        64  //授权码
#define ALIAS_LEN       32  //别名，只读
#define MAX_SCH_TASKS_NUM        10

#define MAX_SERVERID_LEN            64 //最大服务器ID的长度
#define MAX_SERVERDOMAIN_LEN        128 //服务器域名最大长度
#define MAX_AUTHENTICATEID_LEN      64 //认证ID最大长度
#define MAX_AUTHENTICATEPASSWD_LEN  32 //认证密码最大长度
#define MAX_SERVERNAME_LEN          64 //最大服务器用户名
#define MAX_COMPRESSIONID_LEN       64 //编码ID的最大长度
#define MAX_SIPSERVER_ADDRESS_LEN   128 //SIP服务器地址支持域名和IP地址
//压线报警
#define MAX_PlATE_NO_LEN            32   //车牌号码最大长度 2013-09-27
#define UPNP_PORT_NUM                12      //upnp端口映射端口数目

#define MAX_PEOPLE_DETECTION_NUM    8  //最大人员检测区域数

#define MAX_NOTICE_NUMBER_LEN       32   //公告编号最大长度
#define MAX_NOTICE_THEME_LEN        64   //公告主题最大长度
#define MAX_NOTICE_DETAIL_LEN       1024 //公告详情最大长度
#define MAX_NOTICE_PIC_NUM          6    //公告信息最大图片数量
#define MAX_DEV_NUMBER_LEN          32   //设备编号最大长度



#define HOLIDAY_GROUP_NAME_LEN          32  //假日组名称长度
#define MAX_HOLIDAY_PLAN_NUM            16  //假日组最大假日计划数
#define TEMPLATE_NAME_LEN               32  //计划模板名称长度
#define MAX_HOLIDAY_GROUP_NUM           16   //计划模板最大假日组数
#define DOOR_NAME_LEN                   32  //门名称
#define STRESS_PASSWORD_LEN             8   //胁迫密码长度
#define SUPER_PASSWORD_LEN              8   //胁迫密码长度
#define GROUP_NAME_LEN                  32  //群组名称长度
#define GROUP_COMBINATION_NUM           8   //群组组合数
#define MULTI_CARD_GROUP_NUM            4   //单门最大多重卡组数
#define ACS_CARD_NO_LEN                 32  //门禁卡号长度
#define CARD_PASSWORD_LEN               8   //卡密码长度
#define MAX_DOOR_NUM                    32  //最大门数
#define MAX_CARD_RIGHT_PLAN_NUM         4   //卡权限最大计划个数
#define MAX_GROUP_NUM_128               128 //最大群组数
#define MAX_CARD_READER_NUM             64  //最大读卡器数
#define MAX_SNEAK_PATH_NODE             8   //最大后续读卡器数
#define MAX_MULTI_DOOR_INTERLOCK_GROUP  8   //最大多门互锁组数
#define MAX_INTER_LOCK_DOOR_NUM         8   //一个多门互锁组中最大互锁门数
#define MAX_CASE_SENSOR_NUM             8   //最大case sensor触发器数
#define MAX_DOOR_NUM_256                256 //最大门数
#define MAX_READER_ROUTE_NUM            16  //最大刷卡循序路径
#define MAX_FINGER_PRINT_NUM            10  //最大指纹个数
#define MAX_CARD_READER_NUM_512            512 //最大读卡器数
#define NET_SDK_MULTI_CARD_GROUP_NUM_20     20   //单门最大多重卡组数

#define ERROR_MSG_LEN      32 //下发错误信息
#define MAX_DOOR_CODE_LEN               8 //房间代码长度
#define MAX_LOCK_CODE_LEN               8 //锁代码长度
#define PER_RING_PORT_NUM                2   //每个环的端口数
#define SENSORNAME_LEN                  32  //传感器名称长度
#define MAX_SENSORDESCR_LEN             64  //传感器描述长度
#define MAX_DNS_SERVER_NUM              2 //最大DNS个数
#define SENSORUNIT_LEN                  32 //最大单位长度

#define WEP_KEY_MAX_SIZE                32 //最大WEP加密密钥长度
#define WEP_KEY_MAX_NUM                 4  //最大WEP加密密钥个数
#define WPA_KEY_MAX_SIZE                64 //最大WPA共享密钥长度

#define MAX_SINGLE_FTPPICNAME_LEN       20 //最大单个FTP通道名称
#define MAX_CAMNAME_LEN                 32 //最大通道名称
#define MAX_FTPNAME_NUM                 12 //TFP名称数


#define MAX_IDCODE_LEN      128 //  识别码最大长度
#define MAX_VERSIIN_LEN     64  //版本最大长度
#define MAX_IDCODE_NUM      32  // 识别码个数
#define SDK_LEN_2048        2048

#define RECT_POINT_NUM                    4    //矩形角数

#define MAX_PUBLIC_KEY_LEN 512 // 最大公钥长度
#define CHIP_SERIALNO_LEN 32 //加密芯片序列号长度
#define ENCRYPT_DEV_ID_LEN        20  //设备ID长度

//MCU相关的
#define MAX_SEARCH_ID_LEN               36  //搜索标识符最大长度
#define TERMINAL_NAME_LEN               64  //终端名称长度
#define MAX_URL_LEN                     512 //URL长度
#define REGISTER_NAME_LEN               64 //终端注册GK名称最大长度

//光纤
#define MAX_PORT_NUM            64  //最大端口数
#define MAX_SINGLE_CARD_PORT_NO 4   //光纤收发器单卡最大端口数
#define MAX_FUNC_CARD_NUM       32  //光纤收发器最大功能卡数
#define MAX_FC_CARD_NUM         33  //光纤收发器最大卡数
#define MAX_REMARKS_LEN         128 //注释最大长度
#define MAX_OUTPUT_PORT_NUM                32    //单路输出包含的最大输出端口数
#define MAX_SINGLE_PORT_RECVCARD_NUM    64    //单个端口连接的最大接收卡数
#define MAX_GAMMA_X_VALUE                256    //GAMMA表X轴取值个数
#define NET_DEV_NAME_LEN        64  //设备名称长度
#define NET_DEV_TYPE_NAME_LEN  64  //设备类型名称长度
#define ABNORMAL_INFO_NUM               4        //异常时间段个数

#define PLAYLIST_NAME_LEN                64            //播放表名称长度
#define PLAYLIST_ITEM_NUM                64            //播放项数目

//后端相关
#define NET_SDK_MAX_LOGIN_PASSWORD_LEN           128 //用户登录密码最大长度
#define NET_SDK_MAX_ANSWER_LEN                   256 //安全问题答案最大长度
#define NET_SDK_MAX_QUESTION_LIST_LEN            32//安全问题列表最大长度

#define  MAX_SCREEN_AREA_NUM  128  //屏幕区域最大数量
#define NET_SDK_MAX_THERMOMETRYALGNAME           128//测温算法库版本最大长度
#define NET_SDK_MAX_SHIPSALGNAME                 128//船只算法库版本最大长度
#define NET_SDK_MAX_FIRESALGNAME                 128//火点算法库版本最大长度
/*******************全局错误码 begin**********************/
#define NET_DVR_NOERROR                     0    //没有错误
#define NET_DVR_PASSWORD_ERROR                 1    //用户名密码错误
#define NET_DVR_NOENOUGHPRI                 2    //权限不足
#define NET_DVR_NOINIT                         3    //没有初始化
#define NET_DVR_CHANNEL_ERROR                 4    //通道号错误
#define NET_DVR_OVER_MAXLINK                 5    //连接到DVR的客户端个数超过最大
#define NET_DVR_VERSIONNOMATCH                6    //版本不匹配
#define NET_DVR_NETWORK_FAIL_CONNECT        7    //连接服务器失败
#define NET_DVR_NETWORK_SEND_ERROR            8    //向服务器发送失败
#define NET_DVR_NETWORK_RECV_ERROR            9    //从服务器接收数据失败
#define NET_DVR_NETWORK_RECV_TIMEOUT        10    //从服务器接收数据超时
#define NET_DVR_NETWORK_ERRORDATA            11    //传送的数据有误
#define NET_DVR_ORDER_ERROR                    12    //调用次序错误
#define NET_DVR_OPERNOPERMIT                13    //无此权限
#define NET_DVR_COMMANDTIMEOUT                14    //DVR命令执行超时
#define NET_DVR_ERRORSERIALPORT                15    //串口号错误
#define NET_DVR_ERRORALARMPORT                16    //报警端口错误
#define NET_DVR_PARAMETER_ERROR             17  //参数错误
#define NET_DVR_CHAN_EXCEPTION                18    //服务器通道处于错误状态
#define NET_DVR_NODISK                        19    //没有硬盘
#define NET_DVR_ERRORDISKNUM                20    //硬盘号错误
#define NET_DVR_DISK_FULL                    21    //服务器硬盘满
#define NET_DVR_DISK_ERROR                    22    //服务器硬盘出错
#define NET_DVR_NOSUPPORT                    23    //服务器不支持
#define NET_DVR_BUSY                        24    //服务器忙
#define NET_DVR_MODIFY_FAIL                    25    //服务器修改不成功
#define NET_DVR_PASSWORD_FORMAT_ERROR        26    //密码输入格式不正确
#define NET_DVR_DISK_FORMATING                27    //硬盘正在格式化，不能启动操作
#define NET_DVR_DVRNORESOURCE                28    //DVR资源不足
#define    NET_DVR_DVROPRATEFAILED                29  //DVR操作失败
#define NET_DVR_OPENHOSTSOUND_FAIL             30  //打开PC声音失败
#define NET_DVR_DVRVOICEOPENED                 31  //服务器语音对讲被占用
#define    NET_DVR_TIMEINPUTERROR                32  //时间输入不正确
#define    NET_DVR_NOSPECFILE                    33  //回放时服务器没有指定的文件
#define NET_DVR_CREATEFILE_ERROR            34    //创建文件出错
#define    NET_DVR_FILEOPENFAIL                35  //打开文件出错
#define    NET_DVR_OPERNOTFINISH                36  //上次的操作还没有完成
#define    NET_DVR_GETPLAYTIMEFAIL                37  //获取当前播放的时间出错
#define    NET_DVR_PLAYFAIL                    38  //播放出错
#define NET_DVR_FILEFORMAT_ERROR            39  //文件格式不正确
#define NET_DVR_DIR_ERROR                    40    //路径错误
#define NET_DVR_ALLOC_RESOURCE_ERROR        41  //资源分配错误
#define NET_DVR_AUDIO_MODE_ERROR            42    //声卡模式错误
#define NET_DVR_NOENOUGH_BUF                43    //缓冲区太小
#define NET_DVR_CREATESOCKET_ERROR             44    //创建SOCKET出错
#define NET_DVR_SETSOCKET_ERROR                45    //设置SOCKET出错
#define NET_DVR_MAX_NUM                        46    //个数达到最大
#define NET_DVR_USERNOTEXIST                47    //用户不存在
#define NET_DVR_WRITEFLASHERROR                48  //写FLASH出错
#define NET_DVR_UPGRADEFAIL                    49  //DVR升级失败
#define NET_DVR_CARDHAVEINIT                50  //解码卡已经初始化过
#define NET_DVR_PLAYERFAILED                51    //调用播放库中某个函数失败
#define NET_DVR_MAX_USERNUM                    52  //设备端用户数达到最大
#define NET_DVR_GETLOCALIPANDMACFAIL        53  //获得客户端的IP地址或物理地址失败
#define NET_DVR_NOENCODEING                    54    //该通道没有编码
#define NET_DVR_IPMISMATCH                    55    //IP地址不匹配
#define NET_DVR_MACMISMATCH                    56    //MAC地址不匹配
#define NET_DVR_UPGRADELANGMISMATCH            57    //升级文件语言不匹配
#define NET_DVR_MAX_PLAYERPORT                58    //播放器路数达到最大
#define NET_DVR_NOSPACEBACKUP                59    //备份设备中没有足够空间进行备份
#define NET_DVR_NODEVICEBACKUP                60    //没有找到指定的备份设备
#define NET_DVR_PICTURE_BITS_ERROR            61    //图像素位数不符，限24色
#define NET_DVR_PICTURE_DIMENSION_ERROR        62    //图片高*宽超限， 限128*256
#define NET_DVR_PICTURE_SIZ_ERROR            63    //图片大小超限，限100K
#define NET_DVR_LOADPLAYERSDKFAILED            64    //载入当前目录下Player Sdk出错
#define NET_DVR_LOADPLAYERSDKPROC_ERROR        65    //找不到Player Sdk中某个函数入口
#define NET_DVR_LOADDSSDKFAILED                66    //载入当前目录下DSsdk出错
#define NET_DVR_LOADDSSDKPROC_ERROR            67    //找不到DsSdk中某个函数入口
#define NET_DVR_DSSDK_ERROR                    68    //调用硬解码库DsSdk中某个函数失败
#define NET_DVR_VOICEMONOPOLIZE                69    //声卡被独占
#define NET_DVR_JOINMULTICASTFAILED            70    //加入多播组失败
#define NET_DVR_CREATEDIR_ERROR                71    //建立日志文件目录失败
#define NET_DVR_BINDSOCKET_ERROR            72    //绑定套接字失败
#define NET_DVR_SOCKETCLOSE_ERROR            73    //socket连接中断，此错误通常是由于连接中断或目的地不可达
#define NET_DVR_USERID_ISUSING                74    //注销时用户ID正在进行某操作
#define NET_DVR_SOCKETLISTEN_ERROR            75    //监听失败
#define NET_DVR_PROGRAM_EXCEPTION            76    //程序异常
#define NET_DVR_WRITEFILE_FAILED            77    //写文件失败
#define NET_DVR_FORMAT_READONLY                78  //禁止格式化只读硬盘
#define NET_DVR_WITHSAMEUSERNAME            79  //用户配置结构中存在相同的用户名
#define NET_DVR_DEVICETYPE_ERROR            80  /*导入参数时设备型号不匹配*/
#define NET_DVR_LANGUAGE_ERROR              81  /*导入参数时语言不匹配*/
#define NET_DVR_PARAVERSION_ERROR           82  /*导入参数时软件版本不匹配*/
#define NET_DVR_IPCHAN_NOTALIVE             83  /*预览时外接IP通道不在线*/
#define NET_DVR_RTSP_SDK_ERROR                84    /*加载高清IPC通讯库StreamTransClient.dll失败*/
#define NET_DVR_CONVERT_SDK_ERROR            85    /*加载转码库失败*/
#define NET_DVR_IPC_COUNT_OVERFLOW            86  /*超出最大的ip接入通道数*/
#define NET_DVR_MAX_ADD_NUM                 87  /*添加标签(一个文件片段64)等个数达到最大*/
#define NET_DVR_PARAMMODE_ERROR             88 //图像增强仪，参数模式错误（用于硬件设置时，客户端进行软件设置时错误值）
#define NET_DVR_CODESPITTER_OFFLINE            89 //视频综合平台，码分器不在线
#define NET_DVR_BACKUP_COPYING                90  //设备正在备份
#define NET_DVR_CHAN_NOTSUPPORT             91  // 通道不支持该操作
#define NET_DVR_CALLINEINVALID              92  // 高度线位置太集中或长度线不够倾斜
#define NET_DVR_CALCANCELCONFLICT           93  // 取消标定冲突，如果设置了规则及全局的实际大小尺寸过滤
#define NET_DVR_CALPOINTOUTRANGE            94     // 标定点超出范围
#define NET_DVR_FILTERRECTINVALID           95  // 尺寸过滤器不符合要求
#define NET_DVR_DDNS_DEVOFFLINE             96  //设备没有注册到ddns上
#define NET_DVR_DDNS_INTER_ERROR            97  //DDNS 服务器内部错误
#define NET_DVR_FUNCTION_NOT_SUPPORT_OS     98  //此功能不支持该操作系统
#define NET_DVR_DEC_CHAN_REBIND             99  //解码通道绑定显示输出次数受限
#define NET_DVR_INTERCOM_SDK_ERROR          100 //加载当前目录下的语音对讲库失败
#define NET_DVR_NO_CURRENT_UPDATEFILE       101 //没有正确的升级包
#define NET_DVR_USER_NOT_SUCC_LOGIN         102  //用户还没登陆成功
#define NET_DVR_USE_LOG_SWITCH_FILE            103  //正在使用日志开关文件
#define NET_DVR_POOL_PORT_EXHAUST            104  //端口池中用于绑定的端口已耗尽
#define    NET_DVR_PACKET_TYPE_NOT_SUPPORT        105    //码流封装格式错误
#define NET_DVR_IPPARA_IPID_ERROR           106  //IP接入配置时IPID有误

#define NET_DVR_LOAD_HCPREVIEW_SDK_ERROR           107         //预览组件加载失败
#define NET_DVR_LOAD_HCVOICETALK_SDK_ERROR         108         //语音组件加载失败
#define NET_DVR_LOAD_HCALARM_SDK_ERROR             109         //报警组件加载失败
#define NET_DVR_LOAD_HCPLAYBACK_SDK_ERROR          110         //回放组件加载失败
#define NET_DVR_LOAD_HCDISPLAY_SDK_ERROR           111         //显示组件加载失败
#define NET_DVR_LOAD_HCINDUSTRY_SDK_ERROR          112         //行业应用组件加载失败
#define NET_DVR_LOAD_HCGENERALCFGMGR_SDK_ERROR     113         //通用配置管理组件加载失败
#define NET_DVR_LOAD_HCCOREDEVCFG_SDK_ERROR        114         //设备配置核心组件加载失败

#define NET_DVR_CORE_VER_MISMATCH                  121    //单独加载组件时，组件与core版本不匹配
#define NET_DVR_CORE_VER_MISMATCH_HCPREVIEW        122    //预览组件与core版本不匹配
#define NET_DVR_CORE_VER_MISMATCH_HCVOICETALK      123    //语音组件与core版本不匹配
#define NET_DVR_CORE_VER_MISMATCH_HCALARM          124    //报警组件与core版本不匹配
#define NET_DVR_CORE_VER_MISMATCH_HCPLAYBACK       125    //回放组件与core版本不匹配
#define NET_DVR_CORE_VER_MISMATCH_HCDISPLAY        126    //显示组件与core版本不匹配
#define NET_DVR_CORE_VER_MISMATCH_HCINDUSTRY       127    //行业应用组件与core版本不匹配
#define NET_DVR_CORE_VER_MISMATCH_HCGENERALCFGMGR  128    //通用配置管理组件与core版本不匹配

#define NET_DVR_COM_VER_MISMATCH_HCPREVIEW         136    //预览组件与HCNetSDK版本不匹配
#define NET_DVR_COM_VER_MISMATCH_HCVOICETALK       137    //语音组件与HCNetSDK版本不匹配
#define NET_DVR_COM_VER_MISMATCH_HCALARM           138    //报警组件与HCNetSDK版本不匹配
#define NET_DVR_COM_VER_MISMATCH_HCPLAYBACK        139    //回放组件与HCNetSDK版本不匹配
#define NET_DVR_COM_VER_MISMATCH_HCDISPLAY         140    //显示组件与HCNetSDK版本不匹配
#define NET_DVR_COM_VER_MISMATCH_HCINDUSTRY        141    //行业应用组件与HCNetSDK版本不匹配
#define NET_DVR_COM_VER_MISMATCH_HCGENERALCFGMGR   142    //通用配置管理组件与HCNetSDK版本不匹配

#define NET_DVR_ALIAS_DUPLICATE                150    //别名重复  //2011-08-31 通过别名或者序列号来访问设备的新版本ddns的配置
#define    NET_DVR_INVALID_COMMUNICATION        151    //无效通信
#define    NET_DVR_USERNAME_NOT_EXIST            152    //用户名不存在（用户名不存在，IPC5.1.7中发布出去了，所以删不掉。后续的产品这个错误码用不上）
#define    NET_DVR_USER_LOCKED                    153 //用户被锁定
#define NET_DVR_INVALID_USERID              154 //无效用户ID
#define NET_DVR_LOW_LOGIN_VERSION           155 //登录版本低
#define NET_DVR_LOAD_LIBEAY32_DLL_ERROR     156 //加载libeay32.dll库失败
#define NET_DVR_LOAD_SSLEAY32_DLL_ERROR     157 //加载ssleay32.dll库失败
#define NET_ERR_LOAD_LIBICONV           158 //加载libiconv库失败

#define NET_DVR_SERVER_NOT_EXIST         164 //对应的服务器找不到,查找时输入的国家编号或者服务器类型错误
#define NET_DVR_TEST_SERVER_FAIL_CONNECT            165    //连接测试服务器失败
#define NET_DVR_NAS_SERVER_INVALID_DIR                166    //NAS服务器挂载目录失败，目录无效
#define NET_DVR_NAS_SERVER_NOENOUGH_PRI                167    //NAS服务器挂载目录失败，没有权限
#define NET_DVR_EMAIL_SERVER_NOT_CONFIG_DNS            168    //服务器使用域名，但是没有配置DNS，可能造成域名无效。
#define    NET_DVR_EMAIL_SERVER_NOT_CONFIG_GATEWAY        169    //没有配置网关，可能造成发送邮件失败。
#define    NET_DVR_TEST_SERVER_PASSWORD_ERROR            170    //用户名密码不正确，测试服务器的用户名或密码错误
#define    NET_DVR_EMAIL_SERVER_CONNECT_EXCEPTION_WITH_SMTP    171    //设备和smtp服务器交互异常
#define    NET_DVR_FTP_SERVER_FAIL_CREATE_DIR            172    //FTP服务器创建目录失败
#define    NET_DVR_FTP_SERVER_NO_WRITE_PIR                173    //FTP服务器没有写入权限
#define    NET_DVR_IP_CONFLICT                            174    //IP冲突
#define NET_DVR_INSUFFICIENT_STORAGEPOOL_SPACE      175  //存储池空间已满
#define NET_DVR_STORAGEPOOL_INVALID      176  //云服务器存储池无效,没有配置存储池或者存储池ID错误
#define NET_DVR_EFFECTIVENESS_REBOOT     177  //生效需要重启
#define NET_ERR_ANR_ARMING_EXIST         178  //断网续传布防连接已经存在(该错误码是在HIK私有布防连接建立的情况下，重复布防的断网续传功能时，返回。)
#define NET_ERR_UPLOADLINK_EXIST         179  //断网续传上传连接已经存在(EHOME协议和HIK SDK协议是不能同时支持断网续传的，当一个协议存在的时候，另外一个连接建立话，报错这个错误码。)
#define NET_ERR_INCORRECT_FILE_FORMAT    180  //导入文件格式不正确
#define NET_ERR_INCORRECT_FILE_CONTENT   181  //导入文件内容不正确
#define NET_ERR_MAX_HRUDP_LINK           182 //HRUDP 连接数 超过设备限制
// 2010-5-28
// 阵列错误码
#define RAID_ERROR_INDEX                    200
#define NET_DVR_NAME_NOT_ONLY               (RAID_ERROR_INDEX + 0)  // 名称已存在
#define NET_DVR_OVER_MAX_ARRAY              (RAID_ERROR_INDEX + 1 ) // 阵列达到上限
#define NET_DVR_OVER_MAX_VD                 (RAID_ERROR_INDEX + 2 ) // 虚拟磁盘达到上限
#define NET_DVR_VD_SLOT_EXCEED              (RAID_ERROR_INDEX + 3 ) // 虚拟磁盘槽位已满
#define NET_DVR_PD_STATUS_INVALID           (RAID_ERROR_INDEX + 4 ) // 重建阵列所需物理磁盘状态错误
#define NET_DVR_PD_BE_DEDICATE_SPARE        (RAID_ERROR_INDEX + 5 ) // 重建阵列所需物理磁盘为指定热备
#define NET_DVR_PD_NOT_FREE                 (RAID_ERROR_INDEX + 6 ) // 重建阵列所需物理磁盘非空闲
#define NET_DVR_CANNOT_MIG2NEWMODE          (RAID_ERROR_INDEX + 7 ) // 不能从当前的阵列类型迁移到新的阵列类型
#define NET_DVR_MIG_PAUSE                   (RAID_ERROR_INDEX + 8 ) // 迁移操作已暂停
#define NET_DVR_MIG_CANCEL                  (RAID_ERROR_INDEX + 9 ) // 正在执行的迁移操作已取消
#define NET_DVR_EXIST_VD                    (RAID_ERROR_INDEX + 10) // 阵列上阵列上存在虚拟磁盘，无法删除阵列
#define NET_DVR_TARGET_IN_LD_FUNCTIONAL     (RAID_ERROR_INDEX + 11) // 对象物理磁盘为虚拟磁盘组成部分且工作正常
#define NET_DVR_HD_IS_ASSIGNED_ALREADY      (RAID_ERROR_INDEX + 12) // 指定的物理磁盘被分配为虚拟磁盘
#define NET_DVR_INVALID_HD_COUNT            (RAID_ERROR_INDEX + 13) // 物理磁盘数量与指定的RAID等级不匹配
#define NET_DVR_LD_IS_FUNCTIONAL            (RAID_ERROR_INDEX + 14) // 阵列正常，无法重建
#define NET_DVR_BGA_RUNNING                 (RAID_ERROR_INDEX + 15) // 存在正在执行的后台任务
#define NET_DVR_LD_NO_ATAPI                 (RAID_ERROR_INDEX + 16) // 无法用ATAPI盘创建虚拟磁盘
#define NET_DVR_MIGRATION_NOT_NEED          (RAID_ERROR_INDEX + 17) // 阵列无需迁移
#define NET_DVR_HD_TYPE_MISMATCH            (RAID_ERROR_INDEX + 18) // 物理磁盘不属于同意类型
#define NET_DVR_NO_LD_IN_DG                 (RAID_ERROR_INDEX + 19) // 无虚拟磁盘，无法进行此项操作
#define NET_DVR_NO_ROOM_FOR_SPARE           (RAID_ERROR_INDEX + 20) // 磁盘空间过小，无法被指定为热备盘
#define NET_DVR_SPARE_IS_IN_MULTI_DG        (RAID_ERROR_INDEX + 21) // 磁盘已被分配为某阵列热备盘
#define NET_DVR_DG_HAS_MISSING_PD           (RAID_ERROR_INDEX + 22) // 阵列缺少盘

// x86 64bit nvr新增 2012-02-04
#define NET_DVR_NAME_EMPTY                    (RAID_ERROR_INDEX + 23) /*名称为空*/
#define NET_DVR_INPUT_PARAM                    (RAID_ERROR_INDEX + 24) /*输入参数有误*/
#define NET_DVR_PD_NOT_AVAILABLE            (RAID_ERROR_INDEX + 25) /*物理磁盘不可用*/
#define NET_DVR_ARRAY_NOT_AVAILABLE            (RAID_ERROR_INDEX + 26) /*阵列不可用*/
#define NET_DVR_PD_COUNT                    (RAID_ERROR_INDEX + 27) /*物理磁盘数不正确*/
#define NET_DVR_VD_SMALL                    (RAID_ERROR_INDEX + 28) /*虚拟磁盘太小*/
#define NET_DVR_NO_EXIST                    (RAID_ERROR_INDEX + 29) /*不存在*/
#define NET_DVR_NOT_SUPPORT                    (RAID_ERROR_INDEX + 30) /*不支持该操作*/
#define NET_DVR_NOT_FUNCTIONAL                 (RAID_ERROR_INDEX + 31) /*阵列状态不是正常状态*/
#define NET_DVR_DEV_NODE_NOT_FOUND            (RAID_ERROR_INDEX + 32) /*虚拟磁盘设备节点不存在*/
#define NET_DVR_SLOT_EXCEED                    (RAID_ERROR_INDEX + 33) /*槽位达到上限*/
#define NET_DVR_NO_VD_IN_ARRAY                (RAID_ERROR_INDEX + 34) /*阵列上不存在虚拟磁盘*/
#define NET_DVR_VD_SLOT_INVALID                (RAID_ERROR_INDEX + 35) /*虚拟磁盘槽位无效*/
#define NET_DVR_PD_NO_ENOUGH_SPACE            (RAID_ERROR_INDEX + 36) /*所需物理磁盘空间不足*/
#define NET_DVR_ARRAY_NONFUNCTION            (RAID_ERROR_INDEX + 37) /*只有处于正常状态的阵列才能进行迁移*/
#define NET_DVR_ARRAY_NO_ENOUGH_SPACE        (RAID_ERROR_INDEX + 38) /*阵列空间不足*/
#define NET_DVR_STOPPING_SCANNING_ARRAY        (RAID_ERROR_INDEX + 39) /*正在执行安全拔盘或重新扫描*/
#define NET_DVR_NOT_SUPPORT_16T             (RAID_ERROR_INDEX + 40) /*不支持创建大于16T的阵列*/
#define NET_DVR_ARRAY_FORMATING             (RAID_ERROR_INDEX + 41) /*正在执行格式化的阵列无法删除*/
#define NET_DVR_QUICK_SETUP_PD_COUNT        (RAID_ERROR_INDEX + 42) /*一键配置至少需要三块空闲盘*/

//设备未激活时，登录失败，返回错误码
#define    NET_DVR_ERROR_DEVICE_NOT_ACTIVATED    250//设备未激活
//老SDK接新设备，设置用户密码或者激活的时候为风险密码时，错误码
#define  NET_DVR_ERROR_RISK_PASSWORD          251 //有风险的密码
//已激活的设备，再次激活时返回错误码
#define    NET_DVR_ERROR_DEVICE_HAS_ACTIVATED    252//设备已激活


// 智能错误码
#define VCA_ERROR_INDEX                     300 // 智能错误码索引
#define NET_DVR_ID_ERROR                    (VCA_ERROR_INDEX + 0)   // 配置ID不合理
#define NET_DVR_POLYGON_ERROR               (VCA_ERROR_INDEX + 1)   // 多边形不符合要求
#define NET_DVR_RULE_PARAM_ERROR            (VCA_ERROR_INDEX + 2)   // 规则参数不合理
#define NET_DVR_RULE_CFG_CONFLICT           (VCA_ERROR_INDEX + 3)   // 配置信息冲突
#define NET_DVR_CALIBRATE_NOT_READY         (VCA_ERROR_INDEX + 4)   // 当前没有标定信息
#define NET_DVR_CAMERA_DATA_ERROR           (VCA_ERROR_INDEX + 5)   // 摄像机参数不合理
#define NET_DVR_CALIBRATE_DATA_UNFIT        (VCA_ERROR_INDEX + 6)    // 长度不够倾斜，不利于标定
#define NET_DVR_CALIBRATE_DATA_CONFLICT     (VCA_ERROR_INDEX + 7)    // 标定出错，以为所有点共线或者位置太集中
#define NET_DVR_CALIBRATE_CALC_FAIL         (VCA_ERROR_INDEX + 8)    // 摄像机标定参数值计算失败
#define    NET_DVR_CALIBRATE_LINE_OUT_RECT        (VCA_ERROR_INDEX + 9)    // 输入的样本标定线超出了样本外接矩形框
#define NET_DVR_ENTER_RULE_NOT_READY        (VCA_ERROR_INDEX + 10)    // 没有设置进入区域
#define NET_DVR_AID_RULE_NO_INCLUDE_LANE    (VCA_ERROR_INDEX + 11)    // 交通事件规则中没有包括车道（特值拥堵和逆行）
#define NET_DVR_LANE_NOT_READY                (VCA_ERROR_INDEX + 12)    // 当前没有设置车道
#define NET_DVR_RULE_INCLUDE_TWO_WAY        (VCA_ERROR_INDEX + 13)    // 事件规则中包含2种不同方向
#define NET_DVR_LANE_TPS_RULE_CONFLICT      (VCA_ERROR_INDEX + 14)  // 车道和数据规则冲突
#define NET_DVR_NOT_SUPPORT_EVENT_TYPE      (VCA_ERROR_INDEX + 15)  // 不支持的事件类型
#define NET_DVR_LANE_NO_WAY                 (VCA_ERROR_INDEX + 16)  // 车道没有方向
#define NET_DVR_SIZE_FILTER_ERROR           (VCA_ERROR_INDEX + 17)  // 尺寸过滤框不合理
#define NET_DVR_LIB_FFL_NO_FACE             (VCA_ERROR_INDEX + 18) // 特征点定位时输入的图像没有人脸
#define NET_DVR_LIB_FFL_IMG_TOO_SMALL       (VCA_ERROR_INDEX + 19) // 特征点定位时输入的图像太小
#define NET_DVR_LIB_FD_IMG_NO_FACE          (VCA_ERROR_INDEX + 20) // 单张图像人脸检测时输入的图像没有人脸
#define NET_DVR_LIB_FACE_TOO_SMALL          (VCA_ERROR_INDEX + 21) // 建模时人脸太小
#define NET_DVR_LIB_FACE_QUALITY_TOO_BAD    (VCA_ERROR_INDEX + 22) // 建模时人脸图像质量太差
#define NET_DVR_KEY_PARAM_ERR               (VCA_ERROR_INDEX + 23) //高级参数设置错误
#define NET_DVR_CALIBRATE_DATA_ERR          (VCA_ERROR_INDEX + 24) //标定样本数目错误，或数据值错误，或样本点超出地平线
#define NET_DVR_CALIBRATE_DISABLE_FAIL      (VCA_ERROR_INDEX + 25) //所配置规则不允许取消标定
#define NET_DVR_VCA_LIB_FD_SCALE_OUTRANGE   (VCA_ERROR_INDEX + 26) //最大过滤框的宽高最小值超过最小过滤框的宽高最大值两倍以上
#define NET_DVR_LIB_FD_REGION_TOO_LARGE     (VCA_ERROR_INDEX + 27) //当前检测区域范围过大。检测区最大为图像的2/3
#define NET_DVR_TRIAL_OVERDUE               (VCA_ERROR_INDEX + 28) //试用版评估期已结束
#define NET_DVR_CONFIG_FILE_CONFLICT        (VCA_ERROR_INDEX + 29) //设备类型与配置文件冲突（加密狗类型与现有分析仪配置不符错误码提示）
//算法库相关错误码
#define NET_DVR_FR_FPL_FAIL                 (VCA_ERROR_INDEX + 30)   // 人脸特征点定位失败
#define NET_DVR_FR_IQA_FAIL                 (VCA_ERROR_INDEX + 31)   // 人脸评分失败
#define NET_DVR_FR_FEM_FAIL                 (VCA_ERROR_INDEX + 32)   // 人脸特征提取失败
#define NET_DVR_FPL_DT_CONF_TOO_LOW         (VCA_ERROR_INDEX + 33)   // 特征点定位时人脸检测置信度过低
#define NET_DVR_FPL_CONF_TOO_LOW            (VCA_ERROR_INDEX + 34)   // 特征点定位置信度过低
#define NET_DVR_E_DATA_SIZE                 (VCA_ERROR_INDEX + 35)  // 数据长度不匹配
#define NET_DVR_FR_MODEL_VERSION_ERR        (VCA_ERROR_INDEX + 36)  // 人脸模型数据中的模型版本错误
#define NET_DVR_FR_FD_FAIL                  (VCA_ERROR_INDEX + 37)  // 识别库中人脸检测失败
#define NET_DVR_FA_NORMALIZE_ERR            (VCA_ERROR_INDEX + 38)  // 人脸归一化出错
//其他错误码
#define NET_DVR_DOG_PUSTREAM_NOT_MATCH      (VCA_ERROR_INDEX + 39)  // 加密狗与前端取流设备类型不匹配
#define NET_DVR_DEV_PUSTREAM_NOT_MATCH      (VCA_ERROR_INDEX + 40)  // 前端取流设备版本不匹配
#define NET_DVR_PUSTREAM_ALREADY_EXISTS     (VCA_ERROR_INDEX + 41)  // 设备的其他通道已经添加过该前端设备
#define NET_DVR_SEARCH_CONNECT_FAILED       (VCA_ERROR_INDEX + 42)  // 连接检索服务器失败
#define NET_DVR_INSUFFICIENT_DISK_SPACE     (VCA_ERROR_INDEX + 43)  // 可存储的硬盘空间不足
#define NET_DVR_DATABASE_CONNECTION_FAILED  (VCA_ERROR_INDEX + 44)  // 数据库连接失败
#define NET_DVR_DATABASE_ADM_PW_ERROR       (VCA_ERROR_INDEX + 45)  // 数据库用户名、密码错误
#define NET_DVR_DECODE_YUV                  (VCA_ERROR_INDEX + 46)  // 解码失败
#define NET_DVR_IMAGE_RESOLUTION_ERROR      (VCA_ERROR_INDEX + 47)  //
#define NET_DVR_CHAN_WORKMODE_ERROR         (VCA_ERROR_INDEX + 48)  //

#define NET_DVR_RTSP_ERROR_NOENOUGHPRI          401  //无权限：服务器返回401时，转成这个错误码
#define NET_DVR_RTSP_ERROR_ALLOC_RESOURCE       402  //分配资源失败
#define NET_DVR_RTSP_ERROR_PARAMETER            403  //参数错误
#define NET_DVR_RTSP_ERROR_NO_URL               404  //指定的URL地址不存在：服务器返回404时，转成这个错误码
#define NET_DVR_RTSP_ERROR_FORCE_STOP           406  //用户中途强行退出

#define NET_DVR_RTSP_GETPORTFAILED                407  //rtsp 得到端口错误
#define NET_DVR_RTSP_DESCRIBERROR                410  //rtsp decribe 交互错误
#define NET_DVR_RTSP_DESCRIBESENDTIMEOUT        411  //rtsp decribe 发送超时
#define NET_DVR_RTSP_DESCRIBESENDERROR            412  //rtsp decribe 发送失败
#define NET_DVR_RTSP_DESCRIBERECVTIMEOUT        413  //rtsp decribe 接收超时
#define NET_DVR_RTSP_DESCRIBERECVDATALOST        414  //rtsp decribe 接收数据错误
#define NET_DVR_RTSP_DESCRIBERECVERROR            415  //rtsp decribe 接收失败
#define NET_DVR_RTSP_DESCRIBESERVERERR            416  //rtsp decribe 服务器返回错误状态

#define NET_DVR_RTSP_SETUPERROR                    420  //rtsp setup 交互错误
#define NET_DVR_RTSP_SETUPSENDTIMEOUT            421  //rtsp setup 发送超时
#define NET_DVR_RTSP_SETUPSENDERROR                422  //rtsp setup 发送错误
#define NET_DVR_RTSP_SETUPRECVTIMEOUT            423  //rtsp setup 接收超时
#define NET_DVR_RTSP_SETUPRECVDATALOST            424  //rtsp setup 接收数据错误
#define NET_DVR_RTSP_SETUPRECVERROR                425  //rtsp setup 接收失败
#define NET_DVR_RTSP_OVER_MAX_CHAN                426  //超过服务器最大连接数，或者服务器资源不足，服务器返回453时，转成这个错误码。
#define NET_DVR_RTSP_SETUPSERVERERR                427  //rtsp setup 服务器返回错误状态

#define NET_DVR_RTSP_PLAYERROR                    430  //rtsp play 交互错误
#define NET_DVR_RTSP_PLAYSENDTIMEOUT            431  //rtsp play 发送超时
#define NET_DVR_RTSP_PLAYSENDERROR                432  //rtsp play 发送错误
#define NET_DVR_RTSP_PLAYRECVTIMEOUT            433  //rtsp play 接收超时
#define NET_DVR_RTSP_PLAYRECVDATALOST            434  //rtsp play 接收数据错误
#define NET_DVR_RTSP_PLAYRECVERROR                435  //rtsp play 接收失败
#define NET_DVR_RTSP_PLAYSERVERERR                436  //rtsp play 服务器返回错误状态

#define NET_DVR_RTSP_TEARDOWNERROR                440  //rtsp teardown 交互错误
#define NET_DVR_RTSP_TEARDOWNSENDTIMEOUT        441  //rtsp teardown 发送超时
#define NET_DVR_RTSP_TEARDOWNSENDERROR            442  //rtsp teardown 发送错误
#define NET_DVR_RTSP_TEARDOWNRECVTIMEOUT        443  //rtsp teardown 接收超时
#define NET_DVR_RTSP_TEARDOWNRECVDATALOST        444  //rtsp teardown 接收数据错误
#define NET_DVR_RTSP_TEARDOWNRECVERROR            445  //rtsp teardown 接收失败
#define NET_DVR_RTSP_TEARDOWNSERVERERR            446  //rtsp teardown 服务器返回错误状态

#define  NET_PLAYM4_NOERROR                        500    //no error
#define     NET_PLAYM4_PARA_OVER                    501    //input parameter is invalid;
#define  NET_PLAYM4_ORDER_ERROR                    502    //The order of the function to be called is error.
#define     NET_PLAYM4_TIMER_ERROR                    503    //Create multimedia clock failed;
#define  NET_PLAYM4_DEC_VIDEO_ERROR                504    //Decode video data failed.
#define  NET_PLAYM4_DEC_AUDIO_ERROR                505    //Decode audio data failed.
#define     NET_PLAYM4_ALLOC_MEMORY_ERROR            506    //Allocate memory failed.
#define  NET_PLAYM4_OPEN_FILE_ERROR                507    //Open the file failed.
#define  NET_PLAYM4_CREATE_OBJ_ERROR            508    //Create thread or event failed
#define  NET_PLAYM4_CREATE_DDRAW_ERROR            509    //Create DirectDraw object failed.
#define  NET_PLAYM4_CREATE_OFFSCREEN_ERROR      510    //failed when creating off-screen surface.
#define  NET_PLAYM4_BUF_OVER                    511    //buffer is overflow
#define  NET_PLAYM4_CREATE_SOUND_ERROR            512    //failed when creating audio device.
#define     NET_PLAYM4_SET_VOLUME_ERROR            513    //Set volume failed
#define  NET_PLAYM4_SUPPORT_FILE_ONLY            514    //The function only support play file.
#define  NET_PLAYM4_SUPPORT_STREAM_ONLY            515    //The function only support play stream.
#define  NET_PLAYM4_SYS_NOT_SUPPORT                516    //System not support.
#define  NET_PLAYM4_FILEHEADER_UNKNOWN          517    //No file header.
#define  NET_PLAYM4_VERSION_INCORRECT            518    //The version of decoder and encoder is not adapted.
#define  NET_PALYM4_INIT_DECODER_ERROR          519    //Initialize decoder failed.
#define  NET_PLAYM4_CHECK_FILE_ERROR            520    //The file data is unknown.
#define  NET_PLAYM4_INIT_TIMER_ERROR            521    //Initialize multimedia clock failed.
#define     NET_PLAYM4_BLT_ERROR                    522    //Blt failed.
#define  NET_PLAYM4_UPDATE_ERROR                523    //Update failed.
#define  NET_PLAYM4_OPEN_FILE_ERROR_MULTI       524   //openfile error, streamtype is multi
#define  NET_PLAYM4_OPEN_FILE_ERROR_VIDEO       525   //openfile error, streamtype is video
#define  NET_PLAYM4_JPEG_COMPRESS_ERROR         526   //JPEG compress error
#define  NET_PLAYM4_EXTRACT_NOT_SUPPORT         527    //Don't support the version of this file.
#define  NET_PLAYM4_EXTRACT_DATA_ERROR          528    //extract video data failed.

//转封装库错误码
#define  NET_CONVERT_ERROR_NOT_SUPPORT          581  //convert not support

//语音对讲库错误码
#define  NET_AUDIOINTERCOM_OK                   600  //无错误
#define  NET_AUDIOINTECOM_ERR_NOTSUPORT         601 //不支持
#define  NET_AUDIOINTECOM_ERR_ALLOC_MEMERY      602 //内存申请错误
#define  NET_AUDIOINTECOM_ERR_PARAMETER            603 //参数错误
#define  NET_AUDIOINTECOM_ERR_CALL_ORDER        604 //调用次序错误
#define  NET_AUDIOINTECOM_ERR_FIND_DEVICE       605 //未发现设备
#define  NET_AUDIOINTECOM_ERR_OPEN_DEVICE       606 //不能打开设备诶
#define  NET_AUDIOINTECOM_ERR_NO_CONTEXT        607 //设备上下文出错
#define  NET_AUDIOINTECOM_ERR_NO_WAVFILE        608 //WAV文件出错
#define  NET_AUDIOINTECOM_ERR_INVALID_TYPE      609 //无效的WAV参数类型
#define  NET_AUDIOINTECOM_ERR_ENCODE_FAIL       610 //编码失败
#define  NET_AUDIOINTECOM_ERR_DECODE_FAIL       611 //解码失败
#define  NET_AUDIOINTECOM_ERR_NO_PLAYBACK       612 //播放失败
#define  NET_AUDIOINTECOM_ERR_DENOISE_FAIL      613 //降噪失败
#define  NET_AUDIOINTECOM_ERR_UNKOWN            619 //未知错误

#define NET_QOS_OK                                 700                    //no error
#define NET_QOS_ERROR                             (NET_QOS_OK - 1)        //qos error
#define NET_QOS_ERR_INVALID_ARGUMENTS             (NET_QOS_OK - 2)        //invalid arguments
#define NET_QOS_ERR_SESSION_NOT_FOUND             (NET_QOS_OK - 3)        //session net found
#define NET_QOS_ERR_LIB_NOT_INITIALIZED          (NET_QOS_OK - 4)        //lib not initialized
#define NET_QOS_ERR_OUTOFMEM                     (NET_QOS_OK - 5)        //outtofmem
#define NET_QOS_ERR_PACKET_UNKNOW                (NET_QOS_OK - 10)        //packet unknow
#define NET_QOS_ERR_PACKET_VERSION               (NET_QOS_OK - 11)        //packet version error
#define NET_QOS_ERR_PACKET_LENGTH                (NET_QOS_OK - 12)        //packet length error
#define NET_QOS_ERR_PACKET_TOO_BIG               (NET_QOS_OK - 13)        //packet too big
#define NET_QOS_ERR_SCHEDPARAMS_INVALID_BANDWIDTH (NET_QOS_OK - 20)        //schedparams invalid bandwidth
#define NET_QOS_ERR_SCHEDPARAMS_BAD_FRACTION      (NET_QOS_OK - 21)        //schedparams bad fraction
#define NET_QOS_ERR_SCHEDPARAMS_BAD_MINIMUM_INTERVAL (NET_QOS_OK - 22)    //schedparams bad minimum interval

#define NET_ERROR_TRUNK_LINE                        711 //子系统已被配成干线
#define NET_ERROR_MIXED_JOINT                        712 //不能进行混合拼接
#define NET_ERROR_DISPLAY_SWITCH                    713 //不能进行显示通道切换
#define NET_ERROR_USED_BY_BIG_SCREEN                714 //解码资源被大屏占用
#define NET_ERROR_USE_OTHER_DEC_RESOURCE            715 //不能使用其他解码子系统资源
#define NET_ERROR_DISP_MODE_SWITCH                  716 //显示通道显示状态切换中
#define NET_ERROR_SCENE_USING                        717    //场景正在使用
#define NET_ERR_NO_ENOUGH_DEC_RESOURCE              718 //解码资源不足
#define NET_ERR_NO_ENOUGH_FREE_SHOW_RESOURCE        719 //畅显资源不足
#define NET_ERR_NO_ENOUGH_VIDEO_MEMORY              720 //显存资源不足
#define NET_ERR_MAX_VIDEO_NUM                       721 //一拖多资源不足
#define NET_ERR_WIN_COVER_FREE_SHOW_AND_NORMAL      722 //窗口跨越了畅显输出口和非畅显输出口
#define NET_ERR_FREE_SHOW_WIN_SPLIT                 723 //畅显窗口不支持分屏
#define NET_ERR_INAPPROPRIATE_WIN_FREE_SHOW         724 //不是输出口整数倍的窗口不支持开启畅显
#define NET_DVR_TRANSPARENT_WIN_NOT_SUPPORT_SPLIT   725 //开启透明度的窗口不支持分屏
#define NET_DVR_SPLIT_WIN_NOT_SUPPORT_TRANSPARENT   726 //开启多分屏的窗口不支持透明度设置
#define NET_ERR_MAX_LOGO_NUM                        727 //logo数达到上限
#define NET_ERR_MAX_WIN_LOOP_NUM                    728 //轮巡窗口数达到上限
#define NET_ERR_VIRTUAL_LED_VERTICAL_CROSS          729 //虚拟LED不能纵向跨屏
#define NET_ERR_MAX_VIRTUAL_LED_HEIGHT              730 //虚拟LED高度超限
#define NET_ERR_VIRTUAL_LED_ILLEGAL_CHARACTER       731 //虚拟LED内容包含非法字符
#define NET_ERR_BASEMAP_NOT_EXIST                   732 //底图图片不存在
#define NET_ERR_LED_NOT_SUPPORT_VIRTUAL_LED         733 //LED屏幕不支持虚拟LED
#define NET_ERR_LED_RESOLUTION_NOT_SUPPORT          734 //LED分辨率不支持
#define NET_ERR_PLAN_OVERDUE                        735    //预案超期，不能再调用
#define NET_ERR_PROCESSER_MAX_SCREEN_BLK            736 //单个处理器接入的信号跨越的屏幕个数超限

#define NET_SDK_CANCEL_WND_TOPKEEP_ATTR_FIRST       751 //先取消置顶保持窗口的置顶保持属性才能进行置底操作
#define NET_SDK_ERR_LED_SCREEN_CHECKING             752 //正在校正LED屏幕
#define NET_SDK_ERR_NOT_SUPPORT_SINGLE_RESOLUTION   753 //LCD/LED输出口绑定之后不支持单个输出口的分辨率配置
#define NET_SDK_ERR_LED_RESOLUTION_MISMATCHED       754 //该输出口的LED分辨率和其他输出口的LED分辨率不匹配

#define NET_ERR_TERMINAL_BUSY                        780    //终端忙，终端处于会议中

#define NET_ERR_DATA_RETURNED_ILLEGAL               790 //设备返回的数据不合法
#define NET_DVR_FUNCTION_RESOURCE_USAGE_ERROR       791 //设备其它功能占用资源，导致该功能无法开启


#define NET_DVR_DEV_NET_OVERFLOW                    800    //网络流量超过设备能力上限
#define NET_DVR_STATUS_RECORDFILE_WRITING_NOT_LOCK  801 //录像文件在录像，无法被锁定
#define NET_DVR_STATUS_CANT_FORMAT_LITTLE_DISK      802 //由于硬盘太小无法格式化

//N+1错误码
#define NET_SDK_ERR_REMOTE_DISCONNECT                803 //远端无法连接
#define NET_SDK_ERR_RD_ADD_RD                        804 //备机不能添加备机
#define NET_SDK_ERR_BACKUP_DISK_EXCEPT                805 //备份盘异常
#define NET_SDK_ERR_RD_LIMIT                        806 //备机数已达上限
#define NET_SDK_ERR_ADDED_RD_IS_WD                    807 //添加的备机是工作机
#define NET_SDK_ERR_ADD_ORDER_WRONG                    808 //添加顺序出错，比如没有被工作机添加为备机，就添加工作机
#define NET_SDK_ERR_WD_ADD_WD                        809 //工作机不能添加工作机
#define NET_SDK_ERR_WD_SERVICE_EXCETP                810 //工作机CVR服务异常
#define NET_SDK_ERR_RD_SERVICE_EXCETP                811 //备机CVR服务异常
#define NET_SDK_ERR_ADDED_WD_IS_RD                    812 //添加的工作机是备机
#define NET_SDK_ERR_PERFORMANCE_LIMIT                813 //性能达到上限
#define NET_SDK_ERR_ADDED_DEVICE_EXIST                814 //添加的设备已经存在

//审讯机错误码
#define NET_SDK_ERR_INQUEST_RESUMING                815 //审讯恢复中
#define NET_SDK_ERR_RECORD_BACKUPING                816 //审讯备份中
#define NET_SDK_ERR_DISK_PLAYING                    817 //光盘回放中
#define NET_SDK_ERR_INQUEST_STARTED                    818 //审讯已开启
#define NET_SDK_ERR_LOCAL_OPERATING                    819 //本地操作进行中
#define NET_SDK_ERR_INQUEST_NOT_START                820 //审讯未开启
//Netra3.1.0错误码
#define NET_SDK_ERR_CHAN_AUDIO_BIND                 821  //通道未绑定或绑定语音对讲失败
//云存储错误码
#define NET_DVR_N_PLUS_ONE_MODE                     822 //设备当前处于N+1模式
#define NET_DVR_CLOUD_STORAGE_OPENED                823 //云存储模式已开启

#define NET_DVR_ERR_OPER_NOT_ALLOWED                824   //设备处于N+0被接管状态，不允许该操作
#define NET_DVR_ERR_NEED_RELOCATE                    825   //设备处于N+0被接管状态，需要获取重定向信息，再重新操作

//庭审主机错误码
#define NET_SDK_ERR_IR_PORT_ERROR                   830 //红外输出口错误
#define NET_SDK_ERR_IR_CMD_ERROR                    831 //红外输出口的命令号错误
#define NET_SDK_ERR_NOT_INQUESTING                  832 //设备处于非审讯状态
#define NET_SDK_ERR_INQUEST_NOT_PAUSED              833 //设备处于非暂停状态
#define NET_DVR_CHECK_PASSWORD_MISTAKE_ERROR        834 //校验密码错误
#define NET_DVR_CHECK_PASSWORD_NULL_ERROR           835 //校验密码不能为空
#define NET_DVR_UNABLE_CALIB_ERROR                  836  // 当前无法标定
#define NET_DVR_PLEASE_CALIB_ERROR                  837  //请先完成标定
#define NET_DVR_ERR_PANORAMIC_CAL_EMPTY             838 //Flash中全景标定为空
#define NET_DVR_ERR_CALIB_FAIL_PLEASEAGAIN          839 //标定失败，请重新标定(Calibration failed. Please calibrate again.)
#define NET_DVR_ERR_DETECTION_LINE                  840 //规则线配置错误，请重新配置规则线，确保规则线位于红色区域内(Please set detection line again. The detection line should be within the red count area.)
#define NET_DVR_ERR_TURN_OFF_IMAGE_PARA             841 //请先关闭图像参数切换功能(Please turn off the image parameters switch first.)
#define NET_DVR_EXCEED_FACE_IMAGES_ERROR            843  //超过人脸图片最大张数
#define NET_DVR_ANALYSIS_FACE_IMAGES_ERROR          844  //图片数据识别失败
#define NET_ERR_ALARM_INPUT_OCCUPIED                845  //A<-1报警号已用于触发车辆抓拍Alarm Input No. A<-1 is used to trigger vehicle capture.
#define NET_DVR_FACELIB_DATABASE_ERROR              846  //人脸库中数据库版本不匹配
#define NET_DVR_FACELIB_DATA_ERROR                  847  //人脸库数据错误
#define NET_DVR_FACE_DATA_ID_ERROR                  848  //人脸数据PID无效
#define NET_DVR_FACELIB_ID_ERROR                    849  //人脸库ID无效
#define NET_DVR_EXCEED_FACE_LIBARY_ERROR            850  //超过人脸库最大个数
#define NET_DVR_PIC_ANALYSIS_NO_TARGET_ERROR           851  //图片未识别到目标
#define NET_DVR_SUBPIC_ANALYSIS_MODELING_ERROR         852  //子图建模失败
#define NET_DVR_PIC_ANALYSIS_NO_RESOURCE_ERROR         853  //无对应智能分析引擎支持图片二次识别
#define NET_DVR_ANALYSIS_ENGINES_NO_RESOURCE_ERROR                 854//无分析引擎资源
#define NET_DVR_ANALYSIS_ENGINES_USAGE_EXCEED_ERROR                855//引擎使用率超负荷，已达100%
#define NET_DVR_EXCEED_HUMANMISINFO_FILTER_ENABLED_ERROR           856  //超过开启人体去误报最大通道个数
#define NET_DVR_NAME_ERROR                                         857  //名称错误
#define NET_DVR_NAME_EXIST_ERROR                                   858  //名称已存在
#define NET_DVR_FACELIB_PIC_IMPORTING_ERROR                        859  //人脸库导入图片中
#define NET_DVR_ERR_CALIB_POSITION                  860 //标定位置超出摄像机运动范围
#define NET_DVR_ERR_DELETE                          861 //无法删除
#define NET_DVR_ERR_SCENE_ID                        862 //场景ID无效
#define NET_DVR_ERR_CALIBING                        863 //标定中
#define NET_DVR_PIC_FORMAT_ERROR                                   864  //图片格式错误
#define NET_DVR_PIC_RESOLUTION_INVALID_ERROR                       865  //图片分辨率无效错误
#define NET_DVR_PIC_SIZE_EXCEED_ERROR                              866  //图片过大
#define NET_DVR_PIC_ANALYSIS_TARGRT_NUM_EXCEED_ERROR               867  //图片目标个数超过上限
#define NET_DVR_ANALYSIS_ENGINES_LOADING_ERROR                     868//分析引擎初始化中
#define NET_DVR_ANALYSIS_ENGINES_ABNORMA_ERROR                     869//分析引擎异常
#define NET_DVR_ANALYSIS_ENGINES_FACELIB_IMPORTING                 870//分析引擎正在导入人脸库
#define NET_DVR_NO_DATA_FOR_MODELING_ERROR         871  //无待建模数据
#define NET_DVR_FACE_DATA_MODELING_ERROR           872 //设备正在进行图片建模操作，不支持并发处理
#define NET_ERR_FACELIBDATA_OVERLIMIT              873  //超过设备中支持导入人脸数最大个数限制（导入的人脸库中数据）
#define NET_DVR_ANALYSIS_ENGINES_ASSOCIATED_CHANNEL  874//分析引擎已关联通道
#define NET_DVR_ERR_CUSTOMID_LEN                     875 //上层自定义ID的长度最小32字符长度
#define NET_DVR_ERR_CUSTOMFACELIBID_REPEAT           876 //上层下发重复的自定义人脸库ID
#define NET_DVR_ERR_CUSTOMHUMANID_REPEAT             877 //上层下发重复的自定义人员ID
#define NET_DVR_ERR_URL_DOWNLOAD_FAIL                878 //url下载失败
#define NET_DVR_ERR_URL_DOWNLOAD_NOTSTART            879 //url未开始下载

#define NET_DVR_CFG_FILE_SECRETKEY_ERROR         880  //配置文件安全校验密钥错误
#define NET_DVR_WDR_NOTDISABLE_ERROR             881  //请先关闭所有通道当前日夜参数转换模式下的宽动态
#define NET_DVR_HLC_NOTDISABLE_ERROR             882  //请先关闭所有通道当前日夜参数转换模式下的强光抑制

#define NET_DVR_THERMOMETRY_REGION_OVERSTEP_ERROR         883  //测温区域越界

//2011-10-25多屏控制器错误码（900-950）
#define  NET_ERR_CUT_INPUTSTREAM_OVERLIMIT           900 //信号源裁剪数值超限
#define  NET_ERR_WINCHAN_IDX                        901    // 开窗通道号错误
#define  NET_ERR_WIN_LAYER                            902    // 窗口层数错误，单个屏幕上最多覆盖的窗口层数
#define  NET_ERR_WIN_BLK_NUM                        903    // 窗口的块数错误，单个窗口可覆盖的屏幕个数
#define  NET_ERR_OUTPUT_RESOLUTION                    904    // 输出分辨率错误
#define  NET_ERR_LAYOUT                                905    // 布局号错误
#define  NET_ERR_INPUT_RESOLUTION                    906 // 输入分辨率不支持
#define  NET_ERR_SUBDEVICE_OFFLINE                  907 // 子设备不在线
#define  NET_ERR_NO_DECODE_CHAN                     908 // 没有空闲解码通道
#define  NET_ERR_MAX_WINDOW_ABILITY                 909 // 开窗能力上限, 分布式多屏控制器中解码子设备能力上限或者显示处理器能力上限导致
#define  NET_ERR_ORDER_ERROR                        910 // 调用顺序有误
#define  NET_ERR_PLAYING_PLAN                        911 // 正在执行预案
#define  NET_ERR_DECODER_USED                        912 // 解码板正在使用
#define     NET_ERR_OUTPUT_BOARD_DATA_OVERFLOW            913    // 输出板数据量超限
#define     NET_ERR_SAME_USER_NAME                        914    // 用户名相同
#define     NET_ERR_INVALID_USER_NAME                    915    // 无效用户名
#define     NET_ERR_MATRIX_USING                        916    // 输入矩阵正在使用
#define     NET_ERR_DIFFERENT_CHAN_TYPE                917    // 通道类型不同（矩阵输出通道和控制器的输入为不同的类型）
#define     NET_ERR_INPUT_CHAN_BINDED                    918    // 输入通道已经被其他矩阵绑定
#define     NET_ERR_BINDED_OUTPUT_CHAN_OVERFLOW        919    // 正在使用的矩阵输出通道个数超过矩阵与控制器绑定的通道个数
#define     NET_ERR_MAX_SIGNAL_NUM                        920    // 输入信号源个数达到上限
#define  NET_ERR_INPUT_CHAN_USING                    921    // 输入通道正在使用
#define  NET_ERR_MANAGER_LOGON                         922    // 管理员已经登陆，操作失败
#define  NET_ERR_USERALREADY_LOGON                     923    // 该用户已经登陆，操作失败
#define  NET_ERR_LAYOUT_INIT                         924    // 布局正在初始化，操作失败
#define     NET_ERR_BASEMAP_SIZE_NOT_MATCH                925    // 底图大小不符
#define  NET_ERR_WINDOW_OPERATING                    926    // 窗口正在执行其他操作，本次操作失败
#define  NET_ERR_SIGNAL_UPLIMIT                        927 // 信号源开窗个数达到上限
#define  NET_ERR_SIGNAL_MAX_ENLARGE_TIMES           928 // 信号源放大倍数超限
#define  NET_ERR_ONE_SIGNAL_MULTI_CROSS             929 // 单个信号源不能多次跨屏
#define  NET_ERR_ULTRA_HD_SIGNAL_MULTI_WIN          930 // 超高清信号源不能重复开窗
#define  NET_ERR_MAX_VIRTUAL_LED_WIDTH              931 //虚拟LED宽度大于限制值
#define  NET_ERR_MAX_VIRTUAL_LED_WORD_LEN           932 //虚拟LED字符数大于限制值
#define     NET_ERR_SINGLE_OUTPUTPARAM_CONFIG            933//不支持单个显示输出参数设置
#define  NET_ERR_MULTI_WIN_BE_COVER                 934//多分屏窗口被覆盖
#define  NET_ERR_WIN_NOT_EXIST                        935 //窗口不存在
#define  NET_ERR_WIN_MAX_SIGNALSOURCE                936//窗口信号源数超过限制值
#define  NET_ERR_MULTI_WIN_MOVE                        937//对多分屏窗口移动
#define  NET_ERR_MULTI_WIN_YPBPR_SDI                938 // YPBPR 和SDI信号源不支持9/16分屏
#define  NET_ERR_DIFF_TYPE_OUTPUT_MIXUSE            939  //不同类型输出板混插
#define  NET_ERR_SPLIT_WIN_CROSS                    940//对跨屏窗口分屏
#define  NET_ERR_SPLIT_WIN_NOT_FULL_SCREEN            941  //对未满屏窗口分屏
#define  NET_ERR_SPLIT_WIN_MANY_WIN                    942  //对单个输出口上有多个窗口的窗口分屏
#define  NET_ERR_WINDOW_SIZE_OVERLIMIT              943   //窗口大小超限
#define  NET_ERR_INPUTSTREAM_ALREADY_JOINT           944    //信号源已加入拼接
#define  NET_ERR_JOINT_INPUTSTREAM_OVERLIMIT          945    //拼接信号源个数超限

#define  NET_ERR_LED_RESOLUTION                        946  //LED 分辨率大于输出分辨率
#define  NET_ERR_JOINT_SCALE_OVERLIMIT              947  //拼接信号源的规模超限
#define  NET_ERR_INPUTSTREAM_ALREADY_DECODE            948  //信号源已上墙
#define  NET_ERR_INPUTSTREAM_NOTSUPPORT_CAPTURE     949  //信号源不支持抓图
#define  NET_ERR_JOINT_NOTSUPPORT_SPLITWIN            950  //拼接信号源不支持分屏

//解码器错误码（951-999）
#define NET_ERR_MAX_WIN_OVERLAP                        951 //达到最大窗口重叠数
#define NET_ERR_STREAMID_CHAN_BOTH_VALID            952 //stream ID和通道号同时有效
#define NET_ERR_NO_ZERO_CHAN                        953 //设备无零通道
#define NEED_RECONNECT                                955 //需要重定向（转码子系统使用）
#define NET_ERR_NO_STREAM_ID                        956 //流ID不存在
#define NET_DVR_TRANS_NOT_START                        957 //转码未启动
#define NET_ERR_MAXNUM_STREAM_ID                    958 //流ID数达到上限
#define NET_ERR_WORKMODE_MISMATCH                    959 //工作模式不匹配
#define NET_ERR_MODE_IS_USING                        960 //已工作在当前模式
#define NET_ERR_DEV_PROGRESSING                        961 //设备正在处理中
#define NET_ERR_PASSIVE_TRANSCODING                    962 //正在被动转码

#define NET_ERR_RING_NOT_CONFIGURE                   964 //环网未配置

#define NET_ERR_CLOSE_WINDOW_FIRST                    971  //切换全帧率畅显时必须先关闭对应的已上墙的窗口
#define NET_ERR_SPLIT_WINDOW_NUM_NOT_SUPPORT        972  //VGA/DVI/DP/HDMI/HDBase_T输入源在全帧率畅显下不支持9/16画面
#define NET_ERR_REACH_ONE_SIGNAL_PREVIEW_MAX_LINK   973  //单信号源回显连接数量超限
#define NET_ERR_ONLY_SPLITWND_SUPPORT_AMPLIFICATION  974  //只有分屏窗口支持子窗口放大
#define NET_DVR_ERR_WINDOW_SIZE_PLACE  975  //窗口位置错误
#define NET_DVR_ERR_RGIONAL_RESTRICTIONS  976  //屏幕距离超限
#define NET_ERR_WNDZOOM_NOT_SUPPORT  977  //单窗口不支持子窗口全屏功能
#define NET_ERR_LED_SCREEN_SIZE  978  //LED屏宽高不正确
#define NET_ERR_OPEN_WIN_IN_ERROR_AREA  979  //在非法区域开窗(包括跨LCD/LED屏)
#define NET_ERR_TITLE_WIN_NOT_SUPPORT_MOVE  980  //平铺模式不支持漫游
#define NET_ERR_TITLE_WIN_NOT_SUPPORT_COVER  981  //平铺模式不支持图层覆盖
#define NET_ERR_TITLE_WIN_NOT_SUPPORT_SPLIT  982  //平铺模式不支持分屏
#define NET_DVR_LED_WINDOWS_ALREADY_CLOSED  983  //LED区域内输出口的分辨率发生变化，设备已关闭该区域内的所有LED窗口
#define NET_DVR_ERR_CLOSE_WINDOWS  984  //操作失败，请先关闭窗口
#define NET_DVR_ERR_MATRIX_LOOP_ABILITY            985 //超出轮巡解码能力限制
#define NET_DVR_ERR_MATRIX_LOOP_TIME           986 //轮巡解码时间不支持
#define NET_DVR_ERR_LINKED_OUT_ABILITY           987 //联动通道数超过上限
#define NET_ERR_REACH_SCENE_MAX_NUM         988 //场景数量达到上限
#define NET_ERR_SCENE_MEM_NOT_ENOUGH        989 //内存不足，无法新建场景
#define NET_ERR_RESOLUTION_NOT_SUPPORT_ODD_VOUT     990     //奇口不支持该分辨率
#define NET_ERR_RESOLUTION_NOT_SUPPORT_EVEN_VOUT    991     //偶口不支持该分辨率

#define NET_DVR_CANCEL_WND_OPENKEEP_ATTR_FIRST    992     //常开窗口需要先取消常开属性才能被关闭
#define NET_SDK_LED_MODE_NOT_SUPPORT_SPLIT        993     //LED模式下不支持窗口分屏

//能力集解析库错误码
#define XML_ABILITY_NOTSUPPORT                      1000  //不支持能力节点获取
#define    XML_ANALYZE_NOENOUGH_BUF                    1001        //输出内存不足
#define    XML_ANALYZE_FIND_LOCALXML_ERROR                1002        //无法找到对应的本地xml
#define    XML_ANALYZE_LOAD_LOCALXML_ERROR                1003        //加载本地xml出错
#define    XML_NANLYZE_DVR_DATA_FORMAT_ERROR            1004        //设备能力数据格式错误
#define    XML_ANALYZE_TYPE_ERROR                        1005        //能力集类型错误
#define    XML_ANALYZE_XML_NODE_ERROR                    1006        //XML能力节点格式错误
#define XML_INPUT_PARAM_ERROR                       1007  //输入的能力XML节点值错误

#define NET_DVR_ERR_RETURNED_XML_DATA  1008  //设备返回的XML数据有误

//传显错误码
#define NET_ERR_LEDAREA_EXIST_WINDOW        1051 //LED区域有窗口存在(如果LED区域上已经有窗口存在，不允许修改LED区域）
#define NET_ERR_AUDIO_EXIST                 1052 //输出口上存在音频输出，不允许解除绑定
#define NET_ERR_MATERIAL_NAME_EXIST                1053 //素材名称已存在
#define NET_ERR_MATERIAL_APPROVE_STATE             1054 //素材审核状态错误
#define NET_ERR_DATAHD_SIGNAL_FORMAT               1055 //已使用的硬盘不允许单个格式化


//民用错误码（1100～1200）
#define NET_ERR_PLT_USERID                          1100 //验证平台userid错误
#define NET_ERR_TRANS_CHAN_START                    1101 //透明通道已打开，当前操作无法完成
#define NET_ERR_DEV_UPGRADING                        1102 //设备正在升级
#define NET_ERR_MISMATCH_UPGRADE_PACK_TYPE          1103 //升级包类型不匹配
#define NET_ERR_DEV_FORMATTING                      1104 //设备正在格式化
#define NET_ERR_MISMATCH_UPGRADE_PACK_VERSION       1105 //升级包版本不匹配
#define NET_ERR_PT_LOCKED                           1106 //PT锁定功能

#define NET_DVR_LOGO_OVERLAY_WITHOUT_UPLOAD_PIC     1110 //logo叠加失败，没有上传logo图片
#define NET_DVR_ERR_ILLEGAL_VERIFICATION_CODE        1111 //不合法验证码
#define NET_DVR_ERR_LACK_VERIFICATION_CODE            1112 //缺少验证码
#define NET_DVR_ERR_FORBIDDEN_IP                    1113 //该IP地址已被禁止，不允许配置(设备支持的IP地址过滤功能)

//2012-10-16 报警设备错误码（1200~1300）
#define NET_ERR_SEARCHING_MODULE                    1201 // 正在搜索外接模块
#define NET_ERR_REGISTERING_MODULE                  1202 // 正在注册外接模块
#define NET_ERR_GETTING_ZONES                        1203 // 正在获取防区参数
#define NET_ERR_GETTING_TRIGGERS                    1204 // 正在获取触发器
#define NET_ERR_ARMED_STATUS                        1205 // 系统处于布防状态
#define    NET_ERR_PROGRAM_MODE_STATUS                    1206 // 系统处于编程模式
#define    NET_ERR_WALK_TEST_MODE_STATUS                1207 // 系统处于步测模式
#define    NET_ERR_BYPASS_STATUS                        1208 // 旁路状态
#define NET_ERR_DISABLED_MODULE_STATUS                1209 // 功能未使能
#define    NET_ERR_NOT_SUPPORT_OPERATE_ZONE            1210 // 防区不支持该操作
#define NET_ERR_NOT_SUPPORT_MOD_MODULE_ADDR            1211 // 模块地址不能被修改
#define NET_ERR_UNREGISTERED_MODULE                    1212 // 模块未注册
#define NET_ERR_PUBLIC_SUBSYSTEM_ASSOCIATE_SELF        1213 // 公共子系统关联自身
#define NET_ERR_EXCEEDS_ASSOCIATE_SUBSYSTEM_NUM        1214 // 超过公共子系统最大关联个数
#define NET_ERR_BE_ASSOCIATED_BY_PUBLIC_SUBSYSTEM    1215 // 子系统被其他公共子系统关联
#define    NET_ERR_ZONE_FAULT_STATUS                    1216 // 防区处于故障状态
#define NET_ERR_SAME_EVENT_TYPE                    1217 // 事件触发报警输出开启和事件触发报警输出关闭中有相同事件类型
#define NET_ERR_ZONE_ALARM_STATUS                    1218 // 防区处于报警状态
#define NET_ERR_EXPANSION_BUS_SHORT_CIRCUIT            1219 //扩展总线短路
#define NET_ERR_PWD_CONFLICT                        1220  //密码冲突
#define NET_ERR_DETECTOR_GISTERED_BY_OTHER_ZONE     1221    //探测器已被其他防区注册
#define NET_ERR_DETECTOR_GISTERED_BY_OTHER_PU       1222    //探测器已被其他主机注册
#define NET_ERR_DETECTOR_DISCONNECT                 1223    //探测器不在线
#define NET_ERR_CALL_BUSY                           1224    //设备正在通话中
//信息发布主机
#define NET_ERR_GET_ALL_RETURN_OVER                    1300  //获取所有返回数目超限
#define NET_ERR_RESOURCE_USING                      1301  //信息发布资源正在使用，不能修改
#define NET_ERR_FILE_SIZE_OVERLIMIT                    1302  //文件大小超限

//信息发布服务器错误码
#define NET_ERR_MATERIAL_NAME                       1303  //素材名称非法
#define NET_ERR_MATERIAL_NAME_LEN                   1304  //素材名称长度非法
#define NET_ERR_MATERIAL_REMARK                     1305  //素材描述非法
#define NET_ERR_MATERIAL_REMARK_LEN                 1306  //素材描述长度非法
#define NET_ERR_MATERIAL_SHARE_PROPERTY             1307  //素材共享属性非法
#define NET_ERR_UNSUPPORT_MATERIAL_TYPE             1308  //素材类型不支持
#define NET_ERR_MATERIAL_NOT_EXIST                  1309  //素材不存在
#define NET_ERR_READ_FROM_DISK                      1310  //从硬盘读取素材文件失败
#define NET_ERR_WRITE_TO_DISK                       1311  //向硬盘写素材文件失败
#define NET_ERR_WRITE_DATA_BASE                     1312  //素材写数据库失败

//多屏互动错误码
#define    NET_ERR_MAX_SCREEN_CTRL_NUM                    1351    //屏幕控制连接数达到上限
#define    NET_ERR_FILE_NOT_EXIST                        1352    //文件不存在
#define NET_ERR_THUMBNAIL_NOT_EXIST                    1353    //缩略图不存在
#define NET_ERR_DEV_OPEN_FILE_FAIL                    1354    //设备端打开文件失败
#define NET_ERR_SERVER_READ_FILE_FAIL                1355    //设备端读取文件失败
#define NET_ERR_FILE_SIZE                            1356    //文件大小错误
#define    NET_ERR_FILE_NAME                            1357    //文件名称错误，为空或不合法

//分段错误码（1351-1400）
#define NET_ERR_BROADCAST_BUSY                     1358     //设备正在广播中

//2012-12-20抓拍机错误码（1400-1499）
#define NET_DVR_ERR_LANENUM_EXCEED                  1400  //车道数超出能力
#define NET_DVR_ERR_PRAREA_EXCEED                   1401  //牌识区域过大
#define NET_DVR_ERR_LIGHT_PARAM                     1402  //信号灯接入参数错误
#define NET_DVR_ERR_LANE_LINE_INVALID               1403  //车道线配置错误
#define NET_DVR_ERR_STOP_LINE_INVALID               1404  //停止线配置错误
#define NET_DVR_ERR_LEFTORRIGHT_LINE_INVALID        1405  //左/右转分界线配置错误
#define NET_DVR_ERR_LANE_NO_REPEAT                  1406  //叠加车道号重复
#define NET_DVR_ERR_PRAREA_INVALID                  1407  //牌识多边形不符合要求
#define NET_DVR_ERR_LIGHT_NUM_EXCEED                1408  //视频检测交通灯信号灯数目超出最大值
#define NET_DVR_ERR_SUBLIGHT_NUM_INVALID            1409  //视频检测交通灯信号灯子灯数目不合法
#define NET_DVR_ERR_LIGHT_AREASIZE_INVALID          1410  //视频检测交通灯输入信号灯框大小不合法
#define NET_DVR_ERR_LIGHT_COLOR_INVALID             1411  //视频检测交通灯输入信号灯颜色不合法
#define NET_DVR_ERR_LIGHT_DIRECTION_INVALID         1412  //视频检测交通灯输入灯方向属性不合法
#define NET_DVR_ERR_LACK_IOABLITY                    1413  //IO口实际支持的能力不足

#define NET_DVR_ERR_FTP_PORT                        1414  //FTP端口号非法（端口号重复或者异常）
#define NET_DVR_ERR_FTP_CATALOGUE                   1415  //FTP目录名非法（启用多级目录，多级目录传值为空）
#define NET_DVR_ERR_FTP_UPLOAD_TYPE                 1416  //FTP上传类型非法（单ftp只支持全部/双ftp只支持卡口和违章）
#define NET_DVR_ERR_FLASH_PARAM_WRITE               1417  //配置参数时写FLASH失败
#define NET_DVR_ERR_FLASH_PARAM_READ                1418  //配置参数时读FLASH失败
#define NET_DVR_ERR_PICNAME_DELIMITER               1419  //FTP图片命名分隔符非法
#define NET_DVR_ERR_PICNAME_ITEM                    1420  //FTP图片命名项非法（例如 分隔符）
#define NET_DVR_ERR_PLATE_RECOGNIZE_TYPE            1421  //牌识区域类型非法 （矩形和多边形有效性校验）
#define NET_DVR_ERR_CAPTURE_TIMES                   1422  //抓拍次数非法 （有效值是0～5）
#define NET_DVR_ERR_LOOP_DISTANCE                   1423  //线圈距离非法 （有效值是0～2000ms）
#define NET_DVR_ERR_LOOP_INPUT_STATUS               1424  //线圈输入状态非法 （有效值）
#define NET_DVR_ERR_RELATE_IO_CONFLICT              1425  //测速组IO关联冲突
#define NET_DVR_ERR_INTERVAL_TIME                   1426  //连拍间隔时间非法 （0～6000ms）
#define NET_DVR_ERR_SIGN_SPEED                      1427  //标志限速值非法（大车标志限速不能大于小车标志限速 ）
#define NET_DVR_ERR_PIC_FLIP                        1428  //图像配置翻转 （配置交互影响）
#define NET_DVR_ERR_RELATE_LANE_NUMBER              1429  //关联车道数错误 (重复 有效值校验1～99)
#define NET_DVR_ERR_TRIGGER_MODE                    1430  //配置抓拍机触发模式非法
#define NET_DVR_ERR_DELAY_TIME                      1431  //触发延时时间错误(2000ms)
#define NET_DVR_ERR_EXCEED_RS485_COUNT              1432  //超过最大485个数限制
#define NET_DVR_ERR_RADAR_TYPE                      1433  //雷达类型错误
#define NET_DVR_ERR_RADAR_ANGLE                     1434  //雷达角度错误
#define NET_DVR_ERR_RADAR_SPEED_VALID_TIME          1435  //雷达有效时间错误
#define NET_DVR_ERR_RADAR_LINE_CORRECT              1436  //雷达线性矫正参数错误
#define NET_DVR_ERR_RADAR_CONST_CORRECT             1437  //雷达常量矫正参数错误
#define NET_DVR_ERR_RECORD_PARAM                    1438  //录像参数无效（预录时间不超过10s）
#define NET_DVR_ERR_LIGHT_WITHOUT_COLOR_AND_DIRECTION 1439   //视频检测信号灯配置信号灯个数，但是没有勾选信号灯方向和颜色的
#define NET_DVR_ERR_LIGHT_WITHOUT_DETECTION_REGION   1440   //视频检测信号灯配置信号灯个数，但是没有画检测区域
#define NET_DVR_ERR_RECOGNIZE_PROVINCE_PARAM         1441   //牌识参数省份参数的合法性

#define NET_DVR_ERR_SPEED_TIMEOUT                 1442    //IO测速超时时间非法（有效值大于0）
#define NET_DVR_ERR_NTP_TIMEZONE                  1443    //ntp时区参数错误
#define NET_DVR_ERR_NTP_INTERVAL_TIME             1444    //ntp校时间隔错误
#define NET_DVR_ERR_NETWORK_CARD_NUM              1445    //可配置网卡数目错误
#define NET_DVR_ERR_DEFAULT_ROUTE                 1446    //默认路由错误
#define NET_DVR_ERR_BONDING_WORK_MODE             1447    //bonding网卡工作模式错误
#define NET_DVR_ERR_SLAVE_CARD                    1448    //slave网卡错误
#define NET_DVR_ERR_PRIMARY_CARD                  1449    //Primary网卡错误
#define NET_DVR_ERR_DHCP_PPOE_WORK                1450    //dhcp和pppoE不能同时启动
#define NET_DVR_ERR_NET_INTERFACE                 1451    //网络接口错误
#define NET_DVR_ERR_MTU                           1452    //MTU错误
#define NET_DVR_ERR_NETMASK                       1453    //子网掩码错误
#define NET_DVR_ERR_IP_INVALID                    1454    //IP地址不合法
#define NET_DVR_ERR_MULTICAST_IP_INVALID          1455    //多播地址不合法
#define NET_DVR_ERR_GATEWAY_INVALID               1456    //网关不合法
#define NET_DVR_ERR_DNS_INVALID                   1457    //DNS不合法
#define NET_DVR_ERR_ALARMHOST_IP_INVALID          1458    //告警主机地址不合法
#define NET_DVR_ERR_IP_CONFLICT                   1459    //IP冲突
#define NET_DVR_ERR_NETWORK_SEGMENT               1460    //IP不支持同网段
#define NET_DVR_ERR_NETPORT                       1461    //端口错误

#define NET_DVR_ERR_PPPOE_NOSUPPORT               1462  //PPPOE不支持
#define NET_DVR_ERR_DOMAINNAME_NOSUPPORT          1463  //域名不支持
#define NET_DVR_ERR_NO_SPEED                      1464  //未启用测速功能
#define NET_DVR_ERR_IOSTATUS_INVALID              1465  //IO状态错误
#define NET_DVR_ERR_BURST_INTERVAL_INVALID        1466  //连拍间隔非法
#define NET_DVR_ERR_RESERVE_MODE                  1467  //备用模式错误

#define NET_DVR_ERR_LANE_NO                       1468  //叠加车道号错误
#define NET_DVR_ERR_COIL_AREA_TYPE                1469  //线圈区域类型错误
#define NET_DVR_ERR_TRIGGER_AREA_PARAM            1470  //触发区域参数错误
#define NET_DVR_ERR_SPEED_LIMIT_PARAM             1471  //违章限速参数错误
#define NET_DVR_ERR_LANE_PROTOCOL_TYPE            1472  //车道关联协议类型错误

#define NET_DVR_ERR_INTERVAL_TYPE                 1473  //连拍间隔类型非法
#define NET_DVR_ERR_INTERVAL_DISTANCE             1474  //连拍间隔距离非法
#define NET_DVR_ERR_RS485_ASSOCIATE_DEVTYPE       1475  //RS485关联类型非法
#define NET_DVR_ERR_RS485_ASSOCIATE_LANENO        1476  //RS485关联车道号非法
#define NET_DVR_ERR_LANENO_ASSOCIATE_MULTIRS485   1477  //车道号关联多个RS485口
#define NET_DVR_ERR_LIGHT_DETECTION_REGION        1478  //视频检测信号灯配置信号灯个数，但是检测区域宽或高为0

#define NET_DVR_ERR_DN2D_NOSUPPORT            1479  //不支持抓拍帧2D降噪
#define NET_DVR_ERR_IRISMODE_NOSUPPORT        1480  //不支持的镜头类型
#define NET_DVR_ERR_WB_NOSUPPORT              1481  //不支持的白平衡模式
#define NET_DVR_ERR_IO_EFFECTIVENESS          1482  //IO口的有效性
#define NET_DVR_ERR_LIGHTNO_MAX               1483  //信号灯检测器接入红/黄灯超限(16)
#define NET_DVR_ERR_LIGHTNO_CONFLICT          1484  //信号灯检测器接入红/黄灯冲突

#define NET_DVR_ERR_CANCEL_LINE                1485  //直行触发线
#define NET_DVR_ERR_STOP_LINE               1486  //待行区停止线
#define NET_DVR_ERR_RUSH_REDLIGHT_LINE      1487  //闯红灯触发线
#define NET_DVR_ERR_IOOUTNO_MAX             1488  //IO输出口编号越界

#define NET_DVR_ERR_IOOUTNO_AHEADTIME_MAX    1489  //IO输出口提前时间超限
#define NET_DVR_ERR_IOOUTNO_IOWORKTIME      1490  //IO输出口有效持续时间超限
#define NET_DVR_ERR_IOOUTNO_FREQMULTI       1491  //IO输出口脉冲模式下倍频出错
#define NET_DVR_ERR_IOOUTNO_DUTYRATE        1492  //IO输出口脉冲模式下占空比出错
#define NET_DVR_ERR_VIDEO_WITH_EXPOSURE     1493  //以曝闪起效，工作方式不支持视频
#define NET_DVR_ERR_PLATE_BRIGHTNESS_WITHOUT_FLASHDET   1494  //车牌亮度自动使能闪光灯仅在车牌亮度补偿模式下起效

#define NET_DVR_ERR_RECOGNIZE_TYPE_PARAM            1495 //识别类型非法 车牌识别参数（如大车、小车、背向、正向、车标识别等）
#define NET_DVR_ERR_PALTE_RECOGNIZE_AREA_PARAM      1496 //牌识参数非法 牌识区域配置时判断出错
#define NET_DVR_ERR_PORT_CONFLICT                   1497 //端口有冲突
#define NET_DVR_ERR_LOOP_IP                         1498 //IP不能设置为回环地址
#define NET_DVR_ERR_DRIVELINE_SENSITIVE             1499 //压线灵敏度出错(视频电警模式下)


//2013-3-6VQD错误码（1500～1550）
#define NET_ERR_VQD_TIME_CONFLICT                    1500 //VQD诊断时间段冲突
#define NET_ERR_VQD_PLAN_NO_EXIST                    1501 //VQD诊断计划不存在
#define NET_ERR_VQD_CHAN_NO_EXIST                    1502 //VQD监控点不存在
#define NET_ERR_VQD_CHAN_MAX                        1503 //VQD计划数已达上限
#define NET_ERR_VQD_TASK_MAX                        1504 //VQD任务数已达上限

#define NET_SDK_GET_INPUTSTREAMCFG                  1551  //获取信号源
#define NET_SDK_AUDIO_SWITCH_CONTROL                1552 //子窗口音频开关控制
#define NET_SDK_GET_VIDEOWALLDISPLAYNO              1553  //获取设备显示输出号
#define NET_SDK_GET_ALLSUBSYSTEM_BASIC_INFO         1554//获取所有子系统基本信息
#define NET_SDK_SET_ALLSUBSYSTEM_BASIC_INFO         1555 //设置所有子系统基本信息
#define NET_SDK_GET_AUDIO_INFO                      1556//获取所有音频信息
#define NET_SDK_GET_MATRIX_STATUS_V50               1557 // 获取视频综合平台状态_V50
#define NET_SDK_DELETE_MONITOR_INFO                 1558//删除Monitor信息
#define NET_SDK_DELETE_CAMERA_INFO                  1559//删除Camaera信息


//抓拍机错误码新增扩展(1600~1900)
#define NET_DVR_ERR_EXCEED_MAX_CAPTURE_TIMES        1600 //抓拍模式为频闪时最大抓拍张数为2张(IVT模式下)
#define NET_DVR_ERR_REDAR_TYPE_CONFLICT             1601 //相同485口关联雷达类型冲突
#define NET_DVR_ERR_LICENSE_PLATE_NULL              1602 //车牌号为空
#define NET_DVR_ERR_WRITE_DATABASE                  1603 //写入数据库失败
#define NET_DVR_ERR_LICENSE_EFFECTIVE_TIME          1604 //车牌有效时间错误
//视频电警
#define NET_DVR_ERR_PRERECORDED_STARTTIME_LONG      1605 //预录开始时间大于违法抓拍张数
//混合卡口
#define NET_DVR_ERR_TRIGGER_RULE_LINE               1606 //触发规则线错误
#define NET_DVR_ERR_LEFTRIGHT_TRIGGERLINE_NOTVERTICAL 1607 //左/右触发线不垂直
#define NET_DVR_ERR_FLASH_LAMP_MODE                 1608 //闪光灯闪烁模式错误
#define NET_DVR_ERR_ILLEGAL_SNAPSHOT_NUM            1609 //违章抓拍张数错误
#define NET_DVR_ERR_ILLEGAL_DETECTION_TYPE          1610 //违章检测类型错误
#define NET_DVR_ERR_POSITIVEBACK_TRIGGERLINE_HIGH   1611 //正背向触发线高度错误
#define NET_DVR_ERR_MIXEDMODE_CAPTYPE_ALLTARGETS    1612 //混合模式下只支持机非人抓拍类型

#define NET_DVR_ERR_CARSIGNSPEED_GREATERTHAN_LIMITSPEED  1613//小车标志限速大于限速值
#define NET_DVR_ERR_BIGCARSIGNSPEED_GREATERTHAN_LIMITSPEED  1614//大车标志限速大于限速值
#define NET_DVR_ERR_BIGCARSIGNSPEED_GREATERTHAN_CARSIGNSPEED  1615//大车标志限速大于小车标志限速值
#define NET_DVR_ERR_BIGCARLIMITSPEED_GREATERTHAN_CARLIMITSPEED  1616//大车限速值大于小车限速值
#define NET_DVR_ERR_BIGCARLOWSPEEDLIMIT_GREATERTHAN_CARLOWSPEEDLIMIT  1617//大车低速限速值大于小车低速限速值
#define NET_DVR_ERR_CARLIMITSPEED_GREATERTHAN_EXCEPHIGHSPEED  1618//小车限速大于异常高速值
#define NET_DVR_ERR_BIGCARLIMITSPEED_GREATERTHAN_EXCEPHIGHSPEED  1619//大车限速大于异常高速值
#define NET_DVR_ERR_STOPLINE_MORETHAN_TRIGGERLINE  1620//停止线超过直行触发线

//门禁主机错误码
#define NET_ERR_TIME_OVERLAP                        1900 //时间段重叠
#define NET_ERR_HOLIDAY_PLAN_OVERLAP                1901 //假日计划重叠
#define NET_ERR_CARDNO_NOT_SORT                     1902 //卡号未排序
#define NET_ERR_CARDNO_NOT_EXIST                    1903 //卡号不存在
#define NET_ERR_ILLEGAL_CARDNO                      1904 //卡号错误
#define NET_ERR_ZONE_ALARM                          1905 //防区处于布防状态(参数修改不允许)
#define NET_ERR_ZONE_OPERATION_NOT_SUPPORT          1906 //防区不支持该操作
#define NET_ERR_INTERLOCK_ANTI_CONFLICT             1907 //多门互锁和反潜回同时配置错误
#define NET_ERR_DEVICE_CARD_FULL                    1908 //卡已满（卡达到10W后返回）
#define NET_ERR_HOLIDAY_GROUP_DOWNLOAD              1909 //假日组下载失败
#define NET_ERR_LOCAL_CONTROL_OFF                    1910 //就地控制器离线
#define NET_ERR_LOCAL_CONTROL_DISADD                1911 //就地控制器未添加
#define NET_ERR_LOCAL_CONTROL_HASADD                1912 //就地控制器已添加
#define NET_ERR_LOCAL_CONTROL_DOORNO_CONFLICT        1913 //与已添加的就地控制器门编号冲突
#define NET_ERR_LOCAL_CONTROL_COMMUNICATION_FAIL    1914 //就地控制器通信失败
#define NET_ERR_OPERAND_INEXISTENCE                  1915 //操作对象不存在（对门、报警输出、报警输入相关操作，当对象未添加时返回）
#define NET_ERR_LOCAL_CONTROL_OVER_LIMIT              1916 //就地控制器超出设备最大能力（主控对就地数量有限制）
#define NET_ERR_DOOR_OVER_LIMIT                         1917 //门超出设备最大能力
#define NET_ERR_ALARM_OVER_LIMIT                         1918 //报警输入输出超出设备最大能力
#define NET_ERR_LOCAL_CONTROL_ADDRESS_INCONFORMITY_TYPE      1919 //就地控制器地址与类型不符
#define NET_ERR_NOT_SUPPORT_ONE_MORE_CARD           1920 //不支持一人多卡
#define NET_ERR_DELETE_NO_EXISTENCE_FACE            1921 //删除的人脸不存在
#define NET_ERR_DOOR_SPECIAL_PASSWORD_REPEAT        1922 //与设备门特殊密码重复
#define NET_ERR_AUTH_CODE_REPEAT                    1923 //与设备认证码重复
#define NET_ERR_DEPLOY_EXCEED_MAX                   1924 //布防超过最大连接数

//可视对讲错误码
#define NET_DVR_ERR_OUTDOOR_COMMUNICATION            1950 //与门口机通信异常
#define NET_DVR_ERR_ROOMNO_UNDEFINED                1951 //未设置房间号
#define NET_DVR_ERR_NO_CALLING                        1952 //无呼叫
#define NET_DVR_ERR_RINGING                            1953 //响铃
#define NET_DVR_ERR_IS_CALLING_NOW                    1954 //正在通话
#define NET_DVR_ERR_LOCK_PASSWORD_WRONG             1955//智能锁密码错误
#define NET_DVR_ERR_CONTROL_LOCK_FAILURE            1956//开关锁失败
#define NET_DVR_ERR_CONTROL_LOCK_OVERTIME           1957//开关锁超时
#define NET_DVR_ERR_LOCK_DEVICE_BUSY                1958//智能锁设备繁忙
#define NET_DVR_ERR_UNOPEN_REMOTE_LOCK_FUNCTION     1959//远程开锁功能未打开


//后端错误码 （2100 - 3000）
#define NET_DVR_ERR_FILE_NOT_COMPLETE               2100    //下载的文件不完整
#define NET_DVR_ERR_IPC_EXIST                       2101    //该IPC已经存在
#define NET_DVR_ERR_ADD_IPC                         2102    //该通道已添加IPC
#define NET_DVR_ERR_OUT_OF_RES                      2103    //网络带宽能力不足
#define NET_DVR_ERR_CONFLICT_TO_LOCALIP             2104    //IPC的ip地址跟DVR的ip地址冲突
#define NET_DVR_ERR_IP_SET                          2105    //非法ip地址
#define NET_DVR_ERR_PORT_SET                        2106    //非法的端口号

#define NET_ERR_WAN_NOTSUPPORT                      2107     //不在同一个局域网，无法设置安全问题或导出GUID文件
#define NET_ERR_MUTEX_FUNCTION                      2108     //功能互斥
#define NET_ERR_QUESTION_CONFIGNUM                  2109     //安全问题配置数量错误
#define NET_ERR_FACECHAN_NORESOURCE                 2110     //人脸智能通道资源已用完
#define NET_ERR_DATA_CALLBACK                       2111     //正在数据回迁
#define NET_ERR_ATM_VCA_CHAN_IS_RELATED             2112     //ATM智能通道已被关联
#define NET_ERR_ATM_VCA_CHAN_IS_OVERLAPED           2113     //ATM智能通道已被叠加
#define NET_ERR_FACE_CHAN_UNOVERLAP_EACH_OTHER      2114     //人脸通道不能互相叠加
#define NET_ERR_ACHIEVE_MAX_CHANNLE_LIMIT           2115     //达到最大路数限制

//热成像产线相关错误码（3001 - 3500）
#define NET_DVR_ERR_NOTSUPPORT_DEICING    3001    //设备当前状态不支持除冰功能（只在POE+、AC24V、DC12V供电下支持除冰功能）
#define NET_DVR_ERR_THERMENABLE_CLOSE     3002    //测温功能总使能未开启。(即NET_DVR_THERMOMETRY_BASICPARAM使能未开启)
#define NET_DVR_ERR_NOTMEET_DEICING       3003    //当前空腔温度不满足手动除冰开启条件（需空腔温度小于30度才可开启）
#define NET_DVR_ERR_PANORAMIC_LIMIT_OPERATED   3004    //全景地图和限位不可同时操作
#define NET_DVR_ERR_SMARTH264_ROI_OPERATED   3005    //SmartH264和ROI不可同时操作
#define NET_DVR_ERR_RULENUM_LIMIT   3006    //规则数上限
#define NET_DVR_ERR_LASER_DEICING_OPERATED   3007    //激光以及除冰功能不可同时操作
#define NET_DVR_ERR_OFFDIGITALZOOM_OR_MINZOOMLIMIT   3008    //请先关闭数据变倍功能或变倍限制设置为最小值。当执行烟火检测、行为分析、船只检测、坏点矫正、测温、烟火屏蔽功能时，若没有关闭数据变倍或者变倍限制没有设置为最小值时，将会提示该错误码。
#define NET_DVR_ERR_FIREWAITING 3009 //设备云台正在火点等待中
/*******************全局错误码 end**********************/

/*************************************************
NET_DVR_IsSupport()返回值
1－9位分别表示以下信息（位与是TRUE)表示支持；
**************************************************/
#define NET_DVR_SUPPORT_DDRAW            0x01//支持DIRECTDRAW，如果不支持，则播放器不能工作；
#define NET_DVR_SUPPORT_BLT                0x02//显卡支持BLT操作，如果不支持，则播放器不能工作；
#define NET_DVR_SUPPORT_BLTFOURCC        0x04//显卡BLT支持颜色转换，如果不支持，播放器会用软件方法作RGB转换；
#define NET_DVR_SUPPORT_BLTSHRINKX        0x08//显卡BLT支持X轴缩小；如果不支持，系统会用软件方法转换；
#define NET_DVR_SUPPORT_BLTSHRINKY        0x10//显卡BLT支持Y轴缩小；如果不支持，系统会用软件方法转换；
#define NET_DVR_SUPPORT_BLTSTRETCHX        0x20//显卡BLT支持X轴放大；如果不支持，系统会用软件方法转换；
#define NET_DVR_SUPPORT_BLTSTRETCHY        0x40//显卡BLT支持Y轴放大；如果不支持，系统会用软件方法转换；
#define NET_DVR_SUPPORT_SSE                0x80//CPU支持SSE指令，Intel Pentium3以上支持SSE指令；
#define NET_DVR_SUPPORT_MMX                0x100//CPU支持MMX指令集，Intel Pentium3以上支持SSE指令；

/**********************云台控制命令 begin*************************/
#define LIGHT_PWRON        2    /* 接通灯光电源 */
#define WIPER_PWRON        3    /* 接通雨刷开关 */
#define FAN_PWRON        4    /* 接通风扇开关 */
#define HEATER_PWRON    5    /* 接通加热器开关 */
#define AUX_PWRON1        6    /* 接通辅助设备开关 */
#define AUX_PWRON2        7    /* 接通辅助设备开关 */
#define SET_PRESET        8    /* 设置预置点 */
#define CLE_PRESET        9    /* 清除预置点 */

#define ZOOM_IN            11    /* 焦距以速度SS变大(倍率变大) */
#define ZOOM_OUT        12    /* 焦距以速度SS变小(倍率变小) */
#define FOCUS_NEAR      13  /* 焦点以速度SS前调 */
#define FOCUS_FAR       14  /* 焦点以速度SS后调 */
#define IRIS_OPEN       15  /* 光圈以速度SS扩大 */
#define IRIS_CLOSE      16  /* 光圈以速度SS缩小 */

#define TILT_UP            21    /* 云台以SS的速度上仰 */
#define TILT_DOWN        22    /* 云台以SS的速度下俯 */
#define PAN_LEFT        23    /* 云台以SS的速度左转 */
#define PAN_RIGHT        24    /* 云台以SS的速度右转 */
#define UP_LEFT            25    /* 云台以SS的速度上仰和左转 */
#define UP_RIGHT        26    /* 云台以SS的速度上仰和右转 */
#define DOWN_LEFT        27    /* 云台以SS的速度下俯和左转 */
#define DOWN_RIGHT        28    /* 云台以SS的速度下俯和右转 */
#define PAN_AUTO        29    /* 云台以SS的速度左右自动扫描 */

#define FILL_PRE_SEQ    30    /* 将预置点加入巡航序列 */
#define SET_SEQ_DWELL    31    /* 设置巡航点停顿时间 */
#define SET_SEQ_SPEED    32    /* 设置巡航速度 */
#define CLE_PRE_SEQ        33    /* 将预置点从巡航序列中删除 */
#define STA_MEM_CRUISE    34    /* 开始记录轨迹 */
#define STO_MEM_CRUISE    35    /* 停止记录轨迹 */
#define RUN_CRUISE        36    /* 开始轨迹 */
#define RUN_SEQ            37    /* 开始巡航 */
#define STOP_SEQ        38    /* 停止巡航 */
#define GOTO_PRESET        39    /* 快球转到预置点 */

#define DEL_SEQ         43  /* 删除巡航路径 */
#define STOP_CRUISE        44    /* 停止轨迹 */
#define DELETE_CRUISE    45    /* 删除单条轨迹 */
#define DELETE_ALL_CRUISE 46/* 删除所有轨迹 */

#define PAN_CIRCLE      50   /* 云台以SS的速度自动圆周扫描 */
#define DRAG_PTZ        51   /* 拖动PTZ */
#define LINEAR_SCAN     52   /* 区域扫描 */ //2014-03-15
#define CLE_ALL_PRESET  53   /* 预置点全部清除 */
#define CLE_ALL_SEQ     54   /* 巡航全部清除 */
#define CLE_ALL_CRUISE  55   /* 轨迹全部清除 */

#define POPUP_MENU      56   /* 显示操作菜单 */

#define TILT_DOWN_ZOOM_IN    58    /* 云台以SS的速度下俯&&焦距以速度SS变大(倍率变大) */
#define TILT_DOWN_ZOOM_OUT  59  /* 云台以SS的速度下俯&&焦距以速度SS变小(倍率变小) */
#define PAN_LEFT_ZOOM_IN    60  /* 云台以SS的速度左转&&焦距以速度SS变大(倍率变大)*/
#define PAN_LEFT_ZOOM_OUT   61  /* 云台以SS的速度左转&&焦距以速度SS变小(倍率变小)*/
#define PAN_RIGHT_ZOOM_IN    62  /* 云台以SS的速度右转&&焦距以速度SS变大(倍率变大) */
#define PAN_RIGHT_ZOOM_OUT  63  /* 云台以SS的速度右转&&焦距以速度SS变小(倍率变小) */
#define UP_LEFT_ZOOM_IN     64  /* 云台以SS的速度上仰和左转&&焦距以速度SS变大(倍率变大)*/
#define UP_LEFT_ZOOM_OUT    65  /* 云台以SS的速度上仰和左转&&焦距以速度SS变小(倍率变小)*/
#define UP_RIGHT_ZOOM_IN    66  /* 云台以SS的速度上仰和右转&&焦距以速度SS变大(倍率变大)*/
#define UP_RIGHT_ZOOM_OUT   67  /* 云台以SS的速度上仰和右转&&焦距以速度SS变小(倍率变小)*/
#define DOWN_LEFT_ZOOM_IN   68  /* 云台以SS的速度下俯和左转&&焦距以速度SS变大(倍率变大) */
#define DOWN_LEFT_ZOOM_OUT  69  /* 云台以SS的速度下俯和左转&&焦距以速度SS变小(倍率变小) */
#define DOWN_RIGHT_ZOOM_IN    70  /* 云台以SS的速度下俯和右转&&焦距以速度SS变大(倍率变大) */
#define DOWN_RIGHT_ZOOM_OUT    71  /* 云台以SS的速度下俯和右转&&焦距以速度SS变小(倍率变小) */
#define TILT_UP_ZOOM_IN        72    /* 云台以SS的速度上仰&&焦距以速度SS变大(倍率变大) */
#define TILT_UP_ZOOM_OUT    73    /* 云台以SS的速度上仰&&焦距以速度SS变小(倍率变小) */
/**********************云台控制命令 end*************************/

#define DVR_VEHICLE_CONTROL_LIST   0x1 //车辆黑白名单数据类型(发送的数据类型)2013-11-04


/*************************************************
回放时播放控制命令宏定义
NET_DVR_PlayBackControl
NET_DVR_PlayControlLocDisplay
NET_DVR_DecPlayBackCtrl的宏定义
具体支持查看函数说明和代码
**************************************************/
#define NET_DVR_PLAYSTART        1//开始播放
#define NET_DVR_PLAYSTOP        2//停止播放
#define NET_DVR_PLAYPAUSE        3//暂停播放
#define NET_DVR_PLAYRESTART        4//恢复播放
#define NET_DVR_PLAYFAST        5//快放
#define NET_DVR_PLAYSLOW        6//慢放
#define NET_DVR_PLAYNORMAL        7//正常速度
#define NET_DVR_PLAYFRAME        8//单帧放
#define NET_DVR_PLAYSTARTAUDIO    9//打开声音
#define NET_DVR_PLAYSTOPAUDIO    10//关闭声音
#define NET_DVR_PLAYAUDIOVOLUME    11//调节音量
#define NET_DVR_PLAYSETPOS        12//改变文件回放的进度
#define NET_DVR_PLAYGETPOS        13//获取文件回放的进度
#define NET_DVR_PLAYGETTIME        14//获取当前已经播放的时间(按文件回放的时候有效)
#define NET_DVR_PLAYGETFRAME    15//获取当前已经播放的帧数(按文件回放的时候有效)
#define NET_DVR_GETTOTALFRAMES  16//获取当前播放文件总的帧数(按文件回放的时候有效)
#define NET_DVR_GETTOTALTIME    17//获取当前播放文件总的时间(按文件回放的时候有效)
#define NET_DVR_THROWBFRAME        20//丢B帧
#define NET_DVR_SETSPEED        24//设置码流速度
#define NET_DVR_KEEPALIVE        25//保持与设备的心跳(如果回调阻塞，建议2秒发送一次)
#define NET_DVR_PLAYSETTIME        26//按绝对时间定位
#define NET_DVR_PLAYGETTOTALLEN    27//获取按时间回放对应时间段内的所有文件的总长度
#define NET_DVR_PLAY_FORWARD    29 //倒放切换为正放
#define NET_DVR_PLAY_REVERSE    30 //正放切换为倒放
#define NET_DVR_SET_DECODEFFRAMETYPE 31
#define NET_DVR_SET_TRANS_TYPE    32 //设置转码格式
#define NET_DVR_PLAY_CONVERT    33 //回放转码
#define NET_DVR_START_DRAWFRAME 34 //开始抽帧回放
#define NET_DVR_STOP_DRAWFRAME  35 //停止抽帧回放
#define NET_DVR_CHANGEWNDRESOLUTION   36    //窗口大小改变，通知播放库



#define PLAYM4_DECODE_NORMAIL              0   //正常解码
#define PLAYM4_DECODE_KEY_FRAME            1   //只解I帧
#define PLAYM4_DECODE_NONE                 2   //全不解
#define PLAYM4_DECODE_TEMPORAL_LAYER_0     3   //解1/2
#define PLAYM4_DECODE_TEMPORAL_LAYER_1     4   //解1/4


//远程按键定义如下：
/* key value send to CONFIG program */
#define KEY_CODE_1      1
#define KEY_CODE_2      2
#define KEY_CODE_3      3
#define KEY_CODE_4      4
#define KEY_CODE_5      5
#define KEY_CODE_6      6
#define KEY_CODE_7      7
#define KEY_CODE_8      8
#define KEY_CODE_9      9
#define KEY_CODE_0      10
#define KEY_CODE_POWER  11
#define KEY_CODE_MENU   12
#define KEY_CODE_ENTER  13
#define KEY_CODE_CANCEL 14
#define KEY_CODE_UP     15
#define KEY_CODE_DOWN   16
#define KEY_CODE_LEFT   17
#define KEY_CODE_RIGHT  18
#define KEY_CODE_EDIT   19
#define KEY_CODE_ADD    20
#define KEY_CODE_MINUS  21
#define KEY_CODE_PLAY   22
#define KEY_CODE_REC    23
#define KEY_CODE_PAN    24
#define KEY_CODE_M      25
#define KEY_CODE_A      26
#define KEY_CODE_F1     27
#define KEY_CODE_F2     28

/* for PTZ control */
#define KEY_PTZ_UP_START        KEY_CODE_UP
#define KEY_PTZ_UP_STOP         32

#define KEY_PTZ_DOWN_START      KEY_CODE_DOWN
#define KEY_PTZ_DOWN_STOP       33

#define KEY_PTZ_LEFT_START      KEY_CODE_LEFT
#define KEY_PTZ_LEFT_STOP       34

#define KEY_PTZ_RIGHT_START     KEY_CODE_RIGHT
#define KEY_PTZ_RIGHT_STOP      35

#define KEY_PTZ_AP1_START       KEY_CODE_EDIT /*光圈+*/
#define KEY_PTZ_AP1_STOP        36

#define KEY_PTZ_AP2_START       KEY_CODE_PAN /*光圈-*/
#define KEY_PTZ_AP2_STOP        37

#define KEY_PTZ_FOCUS1_START    KEY_CODE_A /*聚焦+*/
#define KEY_PTZ_FOCUS1_STOP     38

#define KEY_PTZ_FOCUS2_START    KEY_CODE_M /*聚焦-*/
#define KEY_PTZ_FOCUS2_STOP     39

#define KEY_PTZ_B1_START        40 /*变倍+*/
#define KEY_PTZ_B1_STOP         41

#define KEY_PTZ_B2_START        42 /*变倍-*/
#define KEY_PTZ_B2_STOP         43

//9000新增
#define KEY_CODE_11             44
#define KEY_CODE_12             45
#define KEY_CODE_13             46
#define KEY_CODE_14             47
#define KEY_CODE_15             48
#define KEY_CODE_16             49



/*************************参数配置命令 begin*******************************/
//用于NET_DVR_SetDVRConfig和NET_DVR_GetDVRConfig,注意其对应的配置结构

#define NET_DVR_GET_DEVICECFG        100        //获取设备参数
#define NET_DVR_SET_DEVICECFG        101        //设置设备参数
#define NET_DVR_GET_NETCFG            102        //获取网络参数
#define NET_DVR_SET_NETCFG            103        //设置网络参数
#define NET_DVR_GET_PICCFG            104        //获取图象参数
#define NET_DVR_SET_PICCFG            105        //设置图象参数
#define NET_DVR_GET_COMPRESSCFG        106        //获取压缩参数
#define NET_DVR_SET_COMPRESSCFG        107        //设置压缩参数
#define NET_DVR_GET_RECORDCFG        108        //获取录像时间参数
#define NET_DVR_SET_RECORDCFG        109        //设置录像时间参数
#define NET_DVR_GET_DECODERCFG        110        //获取解码器参数
#define NET_DVR_SET_DECODERCFG        111        //设置解码器参数
#define NET_DVR_GET_RS232CFG         112        //获取232串口参数
#define NET_DVR_SET_RS232CFG        113        //设置232串口参数
#define NET_DVR_GET_ALARMINCFG         114        //获取报警输入参数
#define NET_DVR_SET_ALARMINCFG        115        //设置报警输入参数
#define NET_DVR_GET_ALARMOUTCFG     116        //获取报警输出参数
#define NET_DVR_SET_ALARMOUTCFG        117        //设置报警输出参数
#define NET_DVR_GET_TIMECFG         118        //获取DVR时间
#define NET_DVR_SET_TIMECFG            119        //设置DVR时间
#define NET_DVR_GET_PREVIEWCFG         120        //获取预览参数
#define NET_DVR_SET_PREVIEWCFG        121        //设置预览参数
#define NET_DVR_GET_VIDEOOUTCFG     122        //获取视频输出参数
#define NET_DVR_SET_VIDEOOUTCFG        123        //设置视频输出参数
#define NET_DVR_GET_USERCFG         124        //获取用户参数
#define NET_DVR_SET_USERCFG            125        //设置用户参数
#define NET_DVR_GET_EXCEPTIONCFG     126        //获取异常参数
#define NET_DVR_SET_EXCEPTIONCFG    127        //设置异常参数
#define NET_DVR_GET_ZONEANDDST        128        //获取时区和夏时制参数
#define NET_DVR_SET_ZONEANDDST        129        //设置时区和夏时制参数

//注：该命令只支持4条OSD的类型，通常用于V30以下的设备版本。
#define NET_DVR_GET_SHOWSTRING        130        //获取叠加字符参数
#define NET_DVR_SET_SHOWSTRING        131        //设置叠加字符参数

#define NET_DVR_GET_EVENTCOMPCFG    132        //获取事件触发录像参数
#define NET_DVR_SET_EVENTCOMPCFG    133        //设置事件触发录像参数
#define NET_DVR_GET_FTPCFG            134        //获取抓图的FTP参数(基线)
#define NET_DVR_SET_FTPCFG            135        //设置抓图的FTP参数(基线)
#define NET_DVR_GET_AUXOUTCFG        140        //获取报警触发辅助输出设置(HS设备辅助输出2006-02-28)
#define NET_DVR_SET_AUXOUTCFG        141        //设置报警触发辅助输出设置(HS设备辅助输出2006-02-28)
#define NET_DVR_GET_PREVIEWCFG_AUX     142        //获取-s系列双输出预览参数(-s系列双输出2006-04-13)
#define NET_DVR_SET_PREVIEWCFG_AUX    143        //设置-s系列双输出预览参数(-s系列双输出2006-04-13)

#define NET_DVR_GET_PASSWORD_MANAGE_CFG 144        //获取密码管理配置
#define NET_DVR_SET_PASSWORD_MANAGE_CFG    145        //设置密码管理配置
#define NET_DVR_UNLOCK_USER             146        //用户解锁
#define NET_DVR_GET_SECURITY_CFG         147        //获取安全认证配置
#define NET_DVR_SET_SECURITY_CFG         148        //设置安全认证配置
#define    NET_DVR_GET_LOCKED_INFO_LIST    149        //获取所有被锁定信息


/*********************************智能部分接口 begin***************************************/
//行为对应（NET_VCA_RULECFG）
#define NET_DVR_SET_RULECFG            152    //设置行为分析规则
#define NET_DVR_GET_RULECFG            153    //获取行为分析规则
//球机标定参数（NET_DVR_TRACK_CFG ）
#define NET_DVR_SET_TRACK_CFG       160//设置球机的配置参数
#define NET_DVR_GET_TRACK_CFG       161//获取球机的配置参数

//智能分析仪取流配置结构
#define NET_DVR_SET_IVMS_STREAMCFG    162        //设置智能分析仪取流参数
#define NET_DVR_GET_IVMS_STREAMCFG    163        //获取智能分析仪取流参数
//智能控制参数结构
#define NET_DVR_SET_VCA_CTRLCFG        164     //设置智能控制参数
#define NET_DVR_GET_VCA_CTRLCFG        165     //获取智能控制参数
//屏蔽区域NET_VCA_MASK_REGION_LIST
#define NET_DVR_SET_VCA_MASK_REGION    166     //设置屏蔽区域参数
#define NET_DVR_GET_VCA_MASK_REGION    167     //获取屏蔽区域参数

//ATM进入区域 NET_VCA_ENTER_REGION
#define NET_DVR_SET_VCA_ENTER_REGION 168     //设置进入区域参数
#define NET_DVR_GET_VCA_ENTER_REGION 169     //获取进入区域参数

//标定线配置NET_VCA_LINE_SEGMENT_LIST
#define NET_DVR_SET_VCA_LINE_SEGMENT 170     //设置标定线
#define NET_DVR_GET_VCA_LINE_SEGMENT 171     //获取标定线

// ivms屏蔽区域NET_IVMS_MASK_REGION_LIST
#define NET_DVR_SET_IVMS_MASK_REGION 172     //设置IVMS屏蔽区域参数
#define NET_DVR_GET_IVMS_MASK_REGION 173     //获取IVMS屏蔽区域参数
// ivms进入检测区域NET_IVMS_ENTER_REGION
#define NET_DVR_SET_IVMS_ENTER_REGION 174     //设置IVMS进入区域参数
#define NET_DVR_GET_IVMS_ENTER_REGION 175     //获取IVMS进入区域参数

#define NET_DVR_SET_IVMS_BEHAVIORCFG  176    //设置智能分析仪行为规则参数
#define NET_DVR_GET_IVMS_BEHAVIORCFG  177    //获取智能分析仪行为规则参数

// IVMS 回放检索
#define NET_DVR_IVMS_SET_SEARCHCFG        178    //设置IVMS回放检索参数
#define NET_DVR_IVMS_GET_SEARCHCFG        179    //获取IVMS回放检索参数

#define NET_DVR_SET_POSITION_TRACK      180     // 设置场景跟踪配置信息
#define NET_DVR_GET_POSITION_TRACK      181     // 获取场景跟踪配置信息

#define NET_DVR_SET_CALIBRATION         182    // 设置标定信息
#define NET_DVR_GET_CALIBRATION         183    // 获取标定信息

#define NET_DVR_SET_PDC_RULECFG         184    // 设置人流量统计规则
#define NET_DVR_GET_PDC_RULECFG         185    // 获取人流量统计规则

#define NET_DVR_SET_PU_STREAMCFG        186     // 设置前段取流设备信息
#define NET_DVR_GET_PU_STREAMCFG        187     // 获取前段取流设备信息

#define NET_VCA_SET_IVMS_BEHAVIOR_CFG        192  // 设置IVMS行为规则配置 不带时间段
#define NET_VCA_GET_IVMS_BEHAVIOR_CFG        193  // 获取IVMS行为规则配置 不带时间段

#define NET_VCA_SET_SIZE_FILTER         194     // 设置全局尺寸过滤器
#define NET_VCA_GET_SIZE_FILTER         195     // 获取全局尺寸过滤器

#define NET_DVR_SET_TRACK_PARAMCFG      196     // 设置球机本地菜单规则
#define NET_DVR_GET_TRACK_PARAMCFG      197     // 获取球机本地菜单规则

#define NET_DVR_SET_DOME_MOVEMENT_PARAM 198     // 设置球机机芯参数
#define NET_DVR_GET_DOME_MOVEMENT_PARAM 199     // 获取球机机芯参数

#define NET_DVR_GET_PICCFG_EX        200        //获取图象参数(SDK_V14扩展命令)
#define NET_DVR_SET_PICCFG_EX        201        //设置图象参数(SDK_V14扩展命令)
#define NET_DVR_GET_USERCFG_EX         202        //获取用户参数(SDK_V15扩展命令)
#define NET_DVR_SET_USERCFG_EX        203        //设置用户参数(SDK_V15扩展命令)
#define NET_DVR_GET_COMPRESSCFG_EX    204        //获取压缩参数(SDK_V15扩展命令2006-05-15)
#define NET_DVR_SET_COMPRESSCFG_EX    205        //设置压缩参数(SDK_V15扩展命令2006-05-15)


#define NET_DVR_GET_NETAPPCFG        222        //获取网络应用参数 NTP/DDNS/EMAIL
#define NET_DVR_SET_NETAPPCFG        223        //设置网络应用参数 NTP/DDNS/EMAIL
#define NET_DVR_GET_NTPCFG            224        //获取网络应用参数 NTP
#define NET_DVR_SET_NTPCFG            225        //设置网络应用参数 NTP
#define NET_DVR_GET_DDNSCFG            226        //获取网络应用参数 DDNS
#define NET_DVR_SET_DDNSCFG            227        //设置网络应用参数 DDNS
//对应NET_DVR_EMAILPARA
#define NET_DVR_GET_EMAILCFG        228        //获取网络应用参数 EMAIL
#define NET_DVR_SET_EMAILCFG        229        //设置网络应用参数 EMAIL

#define NET_DVR_GET_NFSCFG            230        /* NFS disk config */
#define NET_DVR_SET_NFSCFG            231        /* NFS disk config */

/*注：该命令为定制，只支持8条OSD的类型，不会兼容V30设备版本之前的
NET_DVR_GET_SHOWSTRING 、NET_DVR_SET_SHOWSTRING 命令。（不建议使用）*/
#define NET_DVR_GET_SHOWSTRING_EX    238        //获取叠加字符参数扩展(支持8条字符)
#define NET_DVR_SET_SHOWSTRING_EX    239        //设置叠加字符参数扩展(支持8条字符)
#define NET_DVR_GET_NETCFG_OTHER    244        //获取网络参数
#define NET_DVR_SET_NETCFG_OTHER    245        //设置网络参数

//对应NET_DVR_EMAILCFG结构
#define NET_DVR_GET_EMAILPARACFG    250        //Get EMAIL parameters
#define NET_DVR_SET_EMAILPARACFG    251        //Setup EMAIL parameters


#define NET_DVR_GET_DDNSCFG_EX        274    //获取扩展DDNS参数
#define NET_DVR_SET_DDNSCFG_EX        275    //设置扩展DDNS参数

#define    NET_DVR_SET_PTZPOS            292        //云台设置PTZ位置
#define    NET_DVR_GET_PTZPOS            293        //云台获取PTZ位置
#define    NET_DVR_GET_PTZSCOPE        294        //云台获取PTZ范围

#define NET_DVR_GET_AP_INFO_LIST    305//获取无线网络资源参数
#define NET_DVR_SET_WIFI_CFG        306    //设置IP监控设备无线参数
#define NET_DVR_GET_WIFI_CFG        307    //获取IP监控设备无线参数
#define NET_DVR_SET_WIFI_WORKMODE    308    //设置IP监控设备网口工作模式参数
#define NET_DVR_GET_WIFI_WORKMODE    309    //获取IP监控设备网口工作模式参数
#define    NET_DVR_GET_WIFI_STATUS        310    //获取设备当前wifi连接状态
/*********************************智能交通事件begin***************************************/
#define NET_DVR_GET_REFERENCE_REGION            400      //获取参考区域
#define NET_DVR_SET_REFERENCE_REGION            401      //设置参考区域

#define NET_DVR_GET_TRAFFIC_MASK_REGION         402     //获取交通事件屏蔽区域
#define NET_DVR_SET_TRAFFIC_MASK_REGION         403     //设置交通事件屏蔽区域
#define NET_DVR_SET_AID_RULECFG                 404     //设置交通事件规则参数
#define NET_DVR_GET_AID_RULECFG                 405     //获取交通事件规则参数

#define NET_DVR_SET_TPS_RULECFG                 406     //设置交通统计规则参数
#define NET_DVR_GET_TPS_RULECFG                 407     //获取交通统计规则参数

#define NET_DVR_SET_LANECFG                        408        //设置车道规则
#define    NET_DVR_GET_LANECFG                        409        //获取车道规则
#define NET_DVR_GET_VCA_RULE_COLOR_CFG          410     //获取智能规则关联的颜色参数
#define NET_DVR_SET_VCA_RULE_COLOR_CFG          411     //设置智能规则关联的颜色参数
#define NET_DVR_GET_SWITCH_LAMP_CFG             412     //获取开关灯检测规则配置参数
#define NET_DVR_SET_SWITCH_LAMP_CFG             413     //设置开关灯检测规则配置参数


/*********************************智能交通事件end***************************************/
#define NET_DVR_SET_FACEDETECT_RULECFG          420         // 设置人脸检测规则
#define NET_DVR_GET_FACEDETECT_RULECFG          421         // 获取人脸检测规则

#define NET_DVR_SET_VEHICLE_RECOG_TASK          422      //车辆二次识别任务提交
#define NET_DVR_GET_VEHICLE_RECOG_TASK          423      //车辆二次识别任务获取

#define NET_DVR_SET_TIMECORRECT                    432      //校时配置（只做校时操作，不记录校时配置 eg.NET_DVR_SET_TIMECFG 会修改设备的校时配置（NTP校时，会被修改为手动校时））
#define    NET_DVR_GET_CONNECT_LIST                433         //获取连接设备列表信息

/***************************DS9000新增命令(_V30) begin *****************************/
//网络(NET_DVR_NETCFG_V30结构)
#define NET_DVR_GET_NETCFG_V30                    1000        //获取网络参数
#define NET_DVR_SET_NETCFG_V30                    1001        //设置网络参数

//图象(NET_DVR_PICCFG_V30结构)
#define NET_DVR_GET_PICCFG_V30                    1002        //获取图象参数
#define NET_DVR_SET_PICCFG_V30                    1003        //设置图象参数

//录像时间(NET_DVR_RECORD_V30结构)
#define NET_DVR_GET_RECORDCFG_V30                1004        //获取录像参数
#define NET_DVR_SET_RECORDCFG_V30                1005        //设置录像参数

//用户(NET_DVR_USER_V30结构)
#define NET_DVR_GET_USERCFG_V30                 1006        //获取用户参数
#define NET_DVR_SET_USERCFG_V30                    1007        //设置用户参数

//录像时间(NET_DVR_RECORD_V40结构)
#define NET_DVR_GET_RECORDCFG_V40                1008        //获取录像参数(扩展)
#define NET_DVR_SET_RECORDCFG_V40                1009        //设置录像参数(扩展)

//9000DDNS参数配置(NET_DVR_DDNSPARA_V30结构)
#define     NET_DVR_GET_DDNSCFG_V30                1010        //获取DDNS(9000扩展)
#define     NET_DVR_SET_DDNSCFG_V30                1011        //设置DDNS(9000扩展)

//EMAIL功能(NET_DVR_EMAILCFG_V30结构)
#define NET_DVR_GET_EMAILCFG_V30                1012     //获取EMAIL参数
#define NET_DVR_SET_EMAILCFG_V30                1013     //设置EMAIL参数

#define NET_DVR_GET_NETCFG_V50     1015    //获取网络参数配置(V50)
#define NET_DVR_SET_NETCFG_V50     1016    //设置网络参数配置(V50)

#define NET_GET_CRUISEPOINT_V40                    1018     //获取巡航路径配置

//巡航参数 (NET_DVR_CRUISE_PARA结构)
#define     NET_DVR_GET_CRUISE                    1020
#define     NET_DVR_SET_CRUISE                    1021


//报警输入结构参数 (NET_DVR_ALARMINCFG_V30结构)
#define     NET_DVR_GET_ALARMINCFG_V30            1024
#define     NET_DVR_SET_ALARMINCFG_V30            1025

//报警输出结构参数 (NET_DVR_ALARMOUTCFG_V30结构)
#define     NET_DVR_GET_ALARMOUTCFG_V30            1026
#define     NET_DVR_SET_ALARMOUTCFG_V30            1027

//视频输出结构参数 (NET_DVR_VIDEOOUT_V30结构)
#define     NET_DVR_GET_VIDEOOUTCFG_V30            1028
#define     NET_DVR_SET_VIDEOOUTCFG_V30            1029


/*该命令支持8条OSD的类型（即设备版本为V30以上时），并会通过设备版本的匹配，
同时兼容之前的NET_DVR_GET_SHOWSTRING 、NET_DVR_SET_SHOWSTRING 命令。（建议使用）*/
//叠加字符结构参数 (NET_DVR_SHOWSTRING_V30结构)
#define     NET_DVR_GET_SHOWSTRING_V30            1030
#define     NET_DVR_SET_SHOWSTRING_V30            1031

//异常结构参数 (NET_DVR_EXCEPTION_V30结构)
#define     NET_DVR_GET_EXCEPTIONCFG_V30        1034
#define     NET_DVR_SET_EXCEPTIONCFG_V30        1035

//串口232结构参数 (NET_DVR_RS232CFG_V30结构)
#define     NET_DVR_GET_RS232CFG_V30            1036
#define     NET_DVR_SET_RS232CFG_V30            1037

//网络硬盘接入结构参数 (NET_DVR_NET_DISKCFG结构)
#define        NET_DVR_GET_NET_DISKCFG                1038        //网络硬盘接入获取
#define        NET_DVR_SET_NET_DISKCFG                1039        //网络硬盘接入设置
//压缩参数 (NET_DVR_COMPRESSIONCFG_V30结构)
#define     NET_DVR_GET_COMPRESSCFG_V30            1040
#define     NET_DVR_SET_COMPRESSCFG_V30            1041

//获取485解码器参数 (NET_DVR_DECODERCFG_V30结构)
#define     NET_DVR_GET_DECODERCFG_V30            1042        //获取解码器参数
#define     NET_DVR_SET_DECODERCFG_V30            1043        //设置解码器参数

//获取预览参数 (NET_DVR_PREVIEWCFG_V30结构)
#define     NET_DVR_GET_PREVIEWCFG_V30            1044        //获取预览参数
#define     NET_DVR_SET_PREVIEWCFG_V30            1045        //设置预览参数

//辅助预览参数 (NET_DVR_PREVIEWCFG_AUX_V30结构)
#define     NET_DVR_GET_PREVIEWCFG_AUX_V30        1046        //获取辅助预览参数
#define     NET_DVR_SET_PREVIEWCFG_AUX_V30        1047        //设置辅助预览参数

//IP接入配置参数 （NET_DVR_IPPARACFG结构）
#define     NET_DVR_GET_IPPARACFG               1048        //获取IP接入配置信息
#define     NET_DVR_SET_IPPARACFG               1049        //设置IP接入配置信息

//IP报警输入接入配置参数 （NET_DVR_IPALARMINCFG结构）
#define     NET_DVR_GET_IPALARMINCFG            1050        //获取IP报警输入接入配置信息
#define     NET_DVR_SET_IPALARMINCFG            1051        //设置IP报警输入接入配置信息

//IP报警输出接入配置参数 （NET_DVR_IPALARMOUTCFG结构）
#define     NET_DVR_GET_IPALARMOUTCFG           1052        //获取IP报警输出接入配置信息
#define     NET_DVR_SET_IPALARMOUTCFG           1053        //设置IP报警输出接入配置信息

//硬盘管理的参数获取 (NET_DVR_HDCFG结构)
#define     NET_DVR_GET_HDCFG                    1054        //获取硬盘管理配置参数
#define     NET_DVR_SET_HDCFG                    1055        //设置硬盘管理配置参数
//盘组管理的参数获取 (NET_DVR_HDGROUP_CFG结构)
#define     NET_DVR_GET_HDGROUP_CFG                1056        //获取盘组管理配置参数
#define     NET_DVR_SET_HDGROUP_CFG                1057        //设置盘组管理配置参数

//设备编码类型配置(NET_DVR_COMPRESSION_AUDIO结构)
#define     NET_DVR_GET_COMPRESSCFG_AUD         1058        //获取设备语音对讲编码参数
#define     NET_DVR_SET_COMPRESSCFG_AUD         1059        //设置设备语音对讲编码参数

//IP接入配置参数 （NET_DVR_IPPARACFG_V31结构）
#define     NET_DVR_GET_IPPARACFG_V31           1060        //获取IP接入配置信息
#define     NET_DVR_SET_IPPARACFG_V31           1061        //设置IP接入配置信息

// 通道资源配置 (NET_DVR_IPPARACFG_V40结构)
#define NET_DVR_GET_IPPARACFG_V40               1062        // 获取IP接入配置
#define NET_DVR_SET_IPPARACFG_V40               1063        // 设置IP接入配置

#define NET_DVR_GET_CCDPARAMCFG                 1067       //IPC获取CCD参数配置
#define NET_DVR_SET_CCDPARAMCFG                 1068       //IPC设置CCD参数配置

#define NET_DVR_GET_IOINCFG                        1070    //获取抓拍机IO输入参数
#define NET_DVR_SET_IOINCFG                        1071     //设置抓拍机IO输入参数

#define NET_DVR_GET_IOOUTCFG                    1072    //获取抓拍机IO输出参数
#define NET_DVR_SET_IOOUTCFG                    1073     //设置抓拍机IO输出参数

#define NET_DVR_GET_FLASHCFG                    1074    //获取IO闪光灯输出参数
#define NET_DVR_SET_FLASHCFG                    1075     //设置IO闪光灯输出参数

#define NET_DVR_GET_LIGHTSNAPCFG                1076    //获取抓拍机红绿灯参数
#define NET_DVR_SET_LIGHTSNAPCFG                1077     //设置抓拍机红绿灯参数

#define NET_DVR_GET_MEASURESPEEDCFG                1078    //获取抓拍机测速参数
#define NET_DVR_SET_MEASURESPEEDCFG                1079     //设置抓拍机测速参数

#define NET_DVR_GET_IMAGEOVERLAYCFG                1080//获取抓拍机图像叠加信息参数
#define NET_DVR_SET_IMAGEOVERLAYCFG                1081//设置抓拍机图像叠加信息参数

#define NET_DVR_GET_SNAPCFG                        1082//获取单IO触发抓拍功能配置
#define NET_DVR_SET_SNAPCFG                        1083//设置单IO触发抓拍功能配置

#define NET_DVR_GET_VTPPARAM                    1084//获取虚拟线圈参数
#define NET_DVR_SET_VTPPARAM                    1085//设置虚拟线圈参数

#define NET_DVR_GET_SNAPENABLECFG                1086//获取抓拍机使能参数
#define NET_DVR_SET_SNAPENABLECFG                1087//设置抓拍机使能参数

#define NET_DVR_GET_POSTEPOLICECFG              1088//获取卡口电警参数
#define NET_DVR_SET_POSTEPOLICECFG              1089//设置卡口电警参数

#define NET_DVR_GET_JPEGCFG_V30                    1090//获取抓图的JPEG参数(基线)
#define NET_DVR_SET_JPEGCFG_V30                    1091//设置抓图的JPEG参数(基线)

#define NET_DVR_GET_SPRCFG                        1092//获取车牌识别参数
#define NET_DVR_SET_SPRCFG                        1093//设置车牌识别参数
#define NET_DVR_GET_PLCCFG                      1094//获取车牌亮度补偿参数
#define NET_DVR_SET_PLCCFG                      1095//设置车牌亮度补偿参数

#define NET_DVR_GET_DEVICESTATECFG              1096//获取设备当前状态参数
#define NET_DVR_SET_CALIBRATE_TIME              1097//设置扩展时间校时
#define NET_DVR_GET_CALIBRATE_TIME              1098//获取扩展时间校时

#define NET_DVR_GET_DEVICECFG_V40                1100//获取扩展设备参数
#define NET_DVR_SET_DEVICECFG_V40                1101//设置扩展设备参数

#define NET_DVR_GET_ZEROCHANCFG                   1102    //获取零通道压缩参数
#define NET_DVR_SET_ZEROCHANCFG                  1103    //设置零通道压缩参数

#define NET_DVR_GET_ZERO_PREVIEWCFG_V30         1104    // 获取零通道预览参数配置
#define NET_DVR_SET_ZERO_PREVIEWCFG_V30         1105    // 设置零通道预览参数配置

#define NET_DVR_SET_ZERO_ZOOM                    1106     //设置零通道的缩放配置
#define NET_DVR_GET_ZERO_ZOOM                    1107     //获取零通道的缩放配置

#define    NET_DVR_NATASSOCIATECFG_GET                1110    //获取NAT功能相关信息
#define    NET_DVR_NATASSOCIATECFG_SET                1111     //设置NAT功能相关信息

#define NET_DVR_GET_SNMPCFG                       1112    //获取SNMP参数
#define NET_DVR_SET_SNMPCFG                      1113    //设置SNMP参数

#define NET_DVR_GET_SNMPCFG_V30                   1114        //获取SNMPv30参数
#define NET_DVR_SET_SNMPCFG_V30                  1115        //设置SNMPv30参数

#define    NET_DVR_VIDEOPLATFORMALARMCFG_GET        1130  //获取视频综合平台报警配置
#define    NET_DVR_VIDEOPLATFORMALARMCFG_SET        1131  //设置视频综合平台报警配置

#define NET_DVR_GET_RAID_ADAPTER_INFO           1134    // 获取适配器信息
#define NET_DVR_SET_RAID_ADAPTER_INFO           1135    // 设置适配器信息

#define    NET_DVR_MATRIX_BIGSCREENCFG_GET            1140//获取大屏拼接参数
#define    NET_DVR_MATRIX_BIGSCREENCFG_SET            1141//设置大屏拼接参数

#define NET_DVR_GET_MB_PLATFORMPARA                1145 //获取平台登录参数
#define NET_DVR_SET_MB_PLATFORMPARA                1146 //设置平台登录参数
#define NET_DVR_GET_MB_DEVSTATUS                1147 //获取移动设备状态

#define  NET_DVR_GET_DECODER_JOINT_CHAN            1151//获取解码关联通道
#define  NET_DVR_SET_DECODER_JOINT_CHAN            1152//设置解码关联通道

//多网卡配置
#define NET_DVR_GET_NETCFG_MULTI                1161        //获取多网卡配置
#define NET_DVR_SET_NETCFG_MULTI                1162        //设置多网卡配置
#define NET_DVR_GET_NETCFG_MULTI_V50            1163        //获取多网卡配置(分组)
#define NET_DVR_SET_NETCFG_MULTI_V50            1164        //设置多网卡配置(分组)

#define NET_DVR_GET_CMSPARA                        1170//获取平台参数
#define NET_DVR_SET_CMSPARA                        1171//设置平台参数
#define NET_DVR_GET_DIALSTATUS                    1172//获取拨号状态参数
#define NET_DVR_GET_SMSRELATIVEPARA                1173//获取短信相关参数
#define NET_DVR_SET_SMSRELATIVEPARA                1174//设置短信相关参数
#define NET_DVR_GET_PINSTATUS                    1175//获取Pin状态
#define NET_DVR_SET_PINCMD                        1176//设置PIN命令
#define NET_DVR_SET_SENSOR_CFG                    1180//设置模拟量参数
#define NET_DVR_GET_SENSOR_CFG                    1181//获取模拟量参数
#define NET_DVR_SET_ALARMIN_PARAM                1182//设置报警输入参数
#define NET_DVR_GET_ALARMIN_PARAM                1183//获取报警输入参数
#define NET_DVR_SET_ALARMOUT_PARAM                1184//设置报警输出参数
#define NET_DVR_GET_ALARMOUT_PARAM                1185//获取报警输出参数
#define NET_DVR_SET_SIREN_PARAM                    1186//设置警号参数
#define NET_DVR_GET_SIREN_PARAM                    1187//获取警号参数
#define NET_DVR_SET_ALARM_RS485CFG                1188//设置报警主机485参数
#define NET_DVR_GET_ALARM_RS485CFG                1189//获取报警主机485参数
#define NET_DVR_GET_ALARMHOST_MAIN_STATUS        1190//获取报警主机主要状态
#define NET_DVR_GET_ALARMHOST_OTHER_STATUS        1191//获取报警主机其他状态
#define NET_DVR_SET_ALARMHOST_ENABLECFG            1192//获取报警主机使能状态
#define NET_DVR_GET_ALARMHOST_ENABLECFG            1193//设置报警主机使能状态
#define NET_DVR_SET_ALARM_CAMCFG                1194//设置视频综合平台报警触发CAM操作配置
#define NET_DVR_GET_ALARM_CAMCFG                1195//设置视频综合平台报警触发CAM操作配置
#define NET_DVR_GET_GATEWAY_CFG                 1196//获取门禁参数配置
#define NET_DVR_SET_GATEWAY_CFG                 1197//设置门禁参数配置

#define NET_DVR_GET_ALARMDIALMODECFG            1198//获取报警主机拨号参数
#define NET_DVR_SET_ALARMDIALMODECFG            1199//设置报警主机拨号参数
#define NET_DVR_SET_ALARMIN_PARAM_V50            1200        // 设置防区参数V50
#define NET_DVR_GET_ALARMIN_PARAM_V50            1201            // 获取防区参数V50
#define    NET_DVR_SET_WINCFG                        1202//窗口参数设置
#define NET_DVR_GET_ALARMHOSTDIALSETUPMODE        1204//获取报警主机拨号启用方式
#define NET_DVR_SET_ALARMHOSTDIALSETUPMODE        1205//设置报警主机拨号启用方式

//视频报警主机海外版命令(视频报警主机 V1.3)
#define NET_DVR_SET_SUBSYSTEM_ALARM                1210    //设置子系统布/撤防
#define NET_DVR_GET_SUBSYSTEM_ALARM                1211    //获取子系统布/撤防
#define NET_DVR_GET_WHITELIST_ALARM                1215    //获取白名单参数
#define NET_DVR_SET_WHITELIST_ALARM                1216    //设置白名单参数
#define    NET_DVR_GET_ALARMHOST_MODULE_LIST        1222    //获取所有模块
#define NET_DVR_SET_PRIOR_ALARM                    1223    //设置子系统布/撤防
#define NET_DVR_GET_PRIOR_ALARM                    1224    //获取子系统布/撤防
#define NET_DVR_SET_TAMPER_ALARMIN_PARAM        1225    // 设置防区防拆参数
#define NET_DVR_GET_TAMPER_ALARMIN_PARAM        1226    // 获取防区防拆参数

#define NET_DVR_GET_HOLIDAY_PARAM_CFG           1240// 获取节假日参数
#define NET_DVR_SET_HOLIDAY_PARAM_CFG           1241// 设置节假日参数

#define NET_DVR_GET_MOTION_HOLIDAY_HANDLE       1242// 获取移动侦测假日报警处理方式
#define NET_DVR_SET_MOTION_HOLIDAY_HANDLE       1243// 获取移动侦测假日报警处理方式

#define NET_DVR_GET_VILOST_HOLIDAY_HANDLE       1244// 获取视频信号丢失假日报警处理方式
#define NET_DVR_SET_VILOST_HOLIDAY_HANDLE       1245// 获取视频信号丢失假日报警处理方式

#define NET_DVR_GET_HIDE_HOLIDAY_HANDLE         1246// 获取遮盖假日报警处理方式
#define NET_DVR_SET_HIDE_HOLIDAY_HANDLE         1247// 设置遮盖假日报警处理方式

#define NET_DVR_GET_ALARMIN_HOLIDAY_HANDLE      1248// 获取报警输入假日报警处理方式
#define NET_DVR_SET_ALARMIN_HOLIDAY_HANDLE      1249// 设置报警输入假日报警处理方式
#define NET_DVR_GET_ALARMOUT_HOLIDAY_HANDLE     1250// 获取报警输出假日报警处理方式
#define NET_DVR_SET_ALARMOUT_HOLIDAY_HANDLE     1251// 设置报警输出假日报警处理方式
#define NET_DVR_GET_HOLIDAY_RECORD              1252// 获取假日录像参数
#define NET_DVR_SET_HOLIDAY_RECORD              1253// 设置假日录像参数
#define NET_DVR_GET_NETWORK_BONDING             1254// 获取BONDING网络参数
#define NET_DVR_SET_NETWORK_BONDING             1255// 设置BONDING网络参数
#define NET_DVR_GET_LINK_STATUS                 1256// 获取通道IP工作状态
#define NET_DVR_GET_DISK_QUOTA_CFG              1278// 获取磁盘配额信息
#define NET_DVR_SET_DISK_QUOTA_CFG              1279// 设置磁盘配额信息
#define NET_DVR_GET_JPEG_CAPTURE_CFG            1280// 获取DVR抓图配置
#define NET_DVR_SET_JPEG_CAPTURE_CFG            1281// 设置DVR抓图配置
#define NET_DVR_GET_SCHED_CAPTURECFG            1282// 获取抓图计划
#define NET_DVR_SET_SCHED_CAPTURECFG            1283// 设置抓图计划
#define NET_DVR_GET_VGA_PREVIEWCFG              1284// 获取VGA预览配置
#define NET_DVR_SET_VGA_PREVIEWCFG              1285// 设置VGA预览配置
#define NET_DVR_GET_VIDEO_INPUT_EFFECT          1286// 获取通道视频输入图像参数
#define NET_DVR_SET_VIDEO_INPUT_EFFECT          1287// 设置通道视频输入图像参数

#define NET_DVR_GET_STORAGE_SERVER_SWITCH        1290//获取存储服务器开关状态
#define NET_DVR_SET_STORAGE_SERVER_SWITCH        1291//设置存储服务器开关状态


#define NET_DVR_GET_OPTICAL_CHANNEL                1300//获取光端子系统通道关联信息
#define NET_DVR_SET_OPTICAL_CHANNEL                1301//设置光端子系统通道关联信息
#define NET_DVR_GET_FIBER_CASCADE                1302//获取光纤级联模式
#define NET_DVR_SET_FIBER_CASCADE                1303//设置光纤级联模式
#define NET_DVR_GET_SPARTAN_STATUS                1304//获取畅显状态
#define NET_DVR_SET_SPARTAN_STATUS                1305//设置畅显状态
#define NET_DVR_GET_ETHERNET_CHANNEL            1306//获取端口聚合参数
#define NET_DVR_SET_ETHERMET_CHANNEL            1307//设置端口聚合参数
#define NET_DVR_OPTICAL_REBOOT                    1320//光端机重启
#define NET_DVR_SET_AUDIOCHAN_CFG                1321//设置音频切换参数
#define NET_DVR_GET_AUDIOCHAN_CFG                1322//获取音频切换参数
//SDI矩阵1.0
#define NET_DVR_SET_MATRIX_BASE_CFG             1332 //设置矩阵基本参数
#define NET_DVR_GET_MATRIX_BASE_CFG             1333 //获取矩阵基本参数
#define NET_DVR_SWITCH_MATRIX_IO                1334 //矩阵输入输出切换
#define NET_DVR_GET_MATRIX_IO_RELATION          1335 //获取矩阵输入输入关联关系

#define    NET_DVR_V6PSUBSYSTEMARAM_GET            1501//获取V6子系统配置
#define    NET_DVR_V6PSUBSYSTEMARAM_SET            1502//设置V6子系统配置
#define    NET_DVR_GET_ALLWINCFG                    1503 //窗口参数获取

#define    NET_DVR_BIGSCREENASSOCIATECFG_GET        1511 //获取大屏关联配置
#define    NET_DVR_BIGSCREENASSOCIATECFG_SET        1512 //设置大屏关联配置

//1200起
#define    NET_DVR_GETSCREENINFO                    1601 //获取大屏信息配置
#define    NET_DVR_SETSCREENINFO                    1602 //设置大屏信息配置
#define    NET_DVR_GET_SCREEN_WINCFG                1603//单个窗口参数获取
#define    NET_DVR_LAYOUTLIST_GET                     1605//获取布局列表
#define    NET_DVR_SET_LAYOUTCFG                    1606 //布局设置
#define    NET_DVR_LAYOUTCTRL                        1607//布局控制，1-open，2-close
#define    NET_DVR_INPUTLIST_GET                    1608 //获取输入信号源列表
#define    NET_DVR_SET_INPUTSTREAMCFG                1609 //输入信号源设置
#define    NET_DVR_OUTPUT_SET                        1610 //输出参数设置
#define    NET_DVR_OUTPUT_GET                        1611 //输出参数获取
#define    NET_DVR_SET_OSDCFG                        1612 //OSD参数设置
#define    NET_DVR_GET_OSDCFG                        1613 //OSD参数获取
#define    NET_DVR_BIGSCREEN_GETSERIAL             1614//获取大屏串口信息
#define    NET_DVR_GET_PLANLIST                    1615//获取预案列表
#define    NET_DVR_SET_PLAN                        1616//设置预案
#define    NET_DVR_CTRL_PLAN                        1617//控制预案
#define    NET_DVR_GET_DEVICE_RUN_STATUS           1618//获取设备运行状态
#define NET_DVR_GET_EXTERNAL_MATRIX_CFG            1619//获取矩阵信息
#define    NET_DVR_SET_EXTERNAL_MATRIX_CFG            1620//设置矩阵信息
#define    NET_DVR_GET_OUTPUT_SCREEN_RELATION        1621//获取输出和屏幕的绑定关系
#define    NET_DVR_SET_OUTPUT_SCREEN_RELATION        1622//设置输出和屏幕的绑定关系
#define NET_DVR_GET_VCS_USER_CFG                1623//获取用户信息配置
#define    NET_DVR_SET_VCS_USER_CFG                1624//设置用户信息配置
#define    NET_DVR_CONTROL_SCREEN                    1625//屏幕控制
#define    NET_DVR_GET_EXTERNAL_MATRIX_CFG_V50        1626    //获取矩阵信息
#define    NET_DVR_SET_EXTERNAL_MATRIX_CFG_V50        1627    //设置矩阵信息

#define NET_DVR_GET_DEV_BASEINFO                1650//获取单个设备信息
#define NET_DVR_SET_DEV_BASEINFO                1651//设置单个设备信息
#define NET_DVR_GET_DEV_NETINFO                    1652//获取设备的网络信息
#define NET_DVR_SET_DEV_NETINFO                    1653//设置设备的网络信息
#define NET_DVR_GET_SIGNAL_SOURCE_INFO            1654//获取信号源信息
#define NET_DVR_SET_SIGNAL_SOURCE_INFO            1655//设置信号源信息
#define NET_DVR_ADJUST_PIC_V40                    1656//图像微调
#define NET_DVR_RESTORE_V40                        1657//恢复默认参数
#define    NET_DVR_SET_NET_SIGNAL                    1658//设置网络信号源
#define NET_DVR_REBOOT_V40                        1659//重启
#define NET_DVR_CONTROL_PICTURE_V41                1660//图片控制V41

#define NET_DVR_GET_AUTO_REBOOT_CFG             1710//获取自动重启参数
#define NET_DVR_SET_AUTO_REBOOT_CFG             1711//设置自动重启参数
#define NET_DVR_GET_TRUNK_USE_STATE             1713//获取指定干线使用状态
#define NET_DVR_SET_PTZ_CTRL_INFO                 1714//设置PTZ控制参数
#define NET_DVR_GET_PTZ_CTRL_INFO                 1715//获取PTZ控制参数
#define NET_DVR_GET_PTZ_STATUS                     1716//获取PTZ状态
#define    NET_DVR_GET_DISP_ROUTE_LIST                1717//获取显示路径列表

#define NET_DVR_GET_DEC_RESOURCE_LIST            1720//获取可用解码资源列表
#define NET_DVR_SET_DEC_RESOURCE_LIST            1721//预分配解码资源
#define NET_DVR_GET_DEC_YUV                        1722//获取解码通道关联YUV输出参数
#define NET_DVR_SET_DEC_YUV                        1723//设置解码通道关联YUV输出参数
#define NET_DVR_GET_DEC_RESOUCE                    1724//向视频综合平台申请解码资源
#define NET_DVR_FREE_DEC_RESOURCE                1725//释放解码资源

#define NET_DVR_SET_VIDEOWALLDISPLAYMODE        1730//设置电视墙拼接模式
#define NET_DVR_GET_VIDEOWALLDISPLAYMODE        1731//获取电视墙拼接模式
#define NET_DVR_GET_VIDEOWALLDISPLAYNO          1732//获取设备显示输出号
#define    NET_DVR_SET_VIDEOWALLDISPLAYPOSITION    1733//设置显示输出位置参数
#define    NET_DVR_GET_VIDEOWALLDISPLAYPOSITION    1734//获取显示输出位置参数
#define NET_DVR_GET_VIDEOWALLWINDOWPOSITION     1735//获取电视墙窗口参数
#define NET_DVR_SET_VIDEOWALLWINDOWPOSITION     1736//设置电视墙窗口参数
#define    NET_DVR_VIDEOWALLWINDOW_CLOSEALL        1737//电视墙关闭所有窗口
#define    NET_DVR_SET_VIRTUALLED                    1738//虚拟LED设置
#define    NET_DVR_GET_VIRTUALLED                    1739//虚拟LED获取
#define NET_DVR_GET_IMAGE_CUT_MODE              1740//获取图像切割模式
#define NET_DVR_SET_IMAGE_CUT_MODE              1741//设置图像切割模式
#define NET_DVR_GET_USING_SERIALPORT            1742//获取当前使用串口
#define NET_DVR_SET_USING_SERIALPORT            1743//设置当前使用串口
#define NET_DVR_SCENE_CONTROL                   1744//场景控制
#define NET_DVR_GET_CURRENT_SCENE               1745//获取当前场景号
#define NET_DVR_GET_VW_SCENE_PARAM              1746//获取电视墙场景模式参数
#define NET_DVR_SET_VW_SCENE_PARAM              1747//设置电视墙场景模式参数
#define NET_DVR_DISPLAY_CHANNO_CONTROL          1748//电视墙显示编号控制
#define NET_DVR_GET_WIN_DEC_INFO                1749//获取窗口解码信息（批量）
#define NET_DVR_RESET_VIDEOWALLDISPLAYPOSITION  1750  //解除电视墙输出接口绑定
#define NET_DVR_SET_VW_AUDIO_CFG                1752    //设置音频切换参数
#define    NET_DVR_GET_VW_AUDIO_CFG                1753    //获取音频切换参数
#define NET_DVR_GET_GBT28181_DECCHANINFO_CFG    1754    //获取GBT28181协议接入设备的解码通道信息
#define NET_DVR_SET_GBT28181_DECCHANINFO_CFG    1755    //设置GBT28181协议接入设备的解码通道信息
#define    NET_DVR_SET_MAINBOARD_SERIAL            1756  //设置主控板串口参数
#define    NET_DVR_GET_MAINBOARD_SERIAL            1757  //获取主控板串口参数
#define NET_DVR_GET_SUBBOARD_INFO               1758  //获取子板信息
#define NET_DVR_GET_SUBBOARD_EXCEPTION          1759  //获取异常子板异常信息

#define NET_DVR_GET_CAMERACHAN_SERIALCFG    1760   //获取Camera通道绑定串口配置
#define NET_DVR_SET_CAMERACHAN_SERIALCFG    1761   //设置Camera通道绑定串口配置
#define NET_DVR_GET_MATRIX_STATUS            1762   //获取视频综合平台状态
#define    NET_SET_MULTIFUNCTION_SERIALCFG     1763  //设置多功能串口配置
#define    NET_GET_MULTIFUNCTION_SERIALCFG        1764  //获取多功能串口配置
#define NET_DVR_PTZ_3D_SPEED                1765  // 3维带速度的云台控制

#define  NET_DVR_GET_SIGNAL_JOINT            1766   //获取信号源绑定配置
#define  NET_DVR_SET_SIGNAL_JOINT            1767   //设置信号源绑定配置
#define  NET_DVR_SIGNAL_CUT                    1768   //信号源裁剪
#define  NET_DVR_DYNAMIC_DECODE_BATCH        1769     //批量动态解码
#define  NET_DVR_DECSWITCH_SET_BATCH        1770    //批量设置解码通道开关
#define  NET_DVR_DECSWITCH_GET_BATCH        1771    //批量获取解码通道开关
#define  NET_DVR_GET_ALL_SIGNAL_JOINT        1772   //获取所有信号源绑定配置
#define     NET_DVR_GET_PLAYING_PLAN            1773    //获取正在执行预案
#define  NET_DVR_WALL_RELATION_GET            1774   //获取设备墙与物理墙的关联
#define  NET_DVR_WALL_RELATION_SET            1775   //设置设备墙与物理墙的关联
#define     NET_DVR_SET_INPUTSTREAMCFG_V40        1776   //输入信号源设置
#define  NET_DVR_PTZCFG_INPUTSTREAM_GET        1777  //获取输入源反向云台控制配置
#define  NET_DVR_PTZCFG_INPUTSTREAM_SET        1778  //设置输入源反向云台控制配置
#define  NET_DVR_SIGNAL_CUTPARAM_GET        1779  //获取信号源裁剪参数

#define NET_DVR_GET_SUBSYSTEM_NETCFG            1780    //获取子系统网卡参数
#define NET_DVR_SET_SUBSYSTEM_NETCFG              1781    //设置子系统网卡参数
#define    NET_DVR_DEL_SIGNAL_JOINT                1782    //删除拼接信号源

#define NET_DVR_GET_PICTURE_INFO                1783     //获取图片信息
#define NET_DVR_SET_PICTURE_INFO                1784     //设置图片信息
#define NET_DVR_GET_VIDEO_INFO                    1785     //获取视频信息
#define NET_DVR_SET_VIDEO_INFO                    1786     //设置视频信息
#define NET_DVR_SET_PLAYLIST                    1787     //设置播放列表
#define NET_DVR_GET_PLAYLIST                    1788     //获取播放列表
#define NET_DVR_GET_ALL_PLAYLIST                1789     //获取所有播放列表
#define NET_DVR_PLAYITEM_CONTROL                1790     //播放项操作
#define NET_DVR_SET_PLAYPLAN_TEMPLATE            1791     //设置播放计划模板
#define NET_DVR_GET_PLAYPLAN_TEMPLATE            1792     //获取播放计划
#define NET_DVR_GET_ALL_PLAYPLAN_TEMPLATE        1793     //获取所有播放计划
#define NET_DVR_SET_WINDOW_PLAYPLAN                1794     //设置窗口播放计划
#define NET_DVR_GET_WINDOW_PLAYPLAN                1795     //获取窗口播放计划
#define NET_DVR_TOPLAY_ITEM                        1796     //指定播放
#define NET_DVR_DEVICE_PLAY_CONTROL                1797     //设备播放控制
#define NET_DVR_GET_PLAY_INFO                    1798     //获取当前播放信息
#define NET_DVR_GET_ALL_PICTURE_INFO            1799     //获取图片信息
#define NET_DVR_GET_ALL_VIDEO_INFO                1800     //获取视频信息
#define NET_DVR_DELETE_VIDEO_FILE                1801     //删除视频


#define NET_DVR_GET_ALARMHOSTSUBSYSTEM_CFG        2001//报警主机获取子系统参数
#define NET_DVR_SET_ALARMHOSTSUBSYSTEM_CFG        2002//报警主机设置子系统参数
#define NET_DVR_GETEXTENDALARMININFO            2003//获取防区编号信息
#define NET_DVR_MODIFYALARMINNO                 2004//修改防区编号信息
#define NET_DVR_GET_ALARMHOST_WIRELESS_NETWORK_CFG    2005//获取无线网络参数配置
#define    NET_DVR_SET_ALARMHOST_WIRELESS_NETWORK_CFG    2006//设置无线网络参数配置
#define    NET_DVR_GET_ALARMHOST_NETCFG            2007//获取网络参数配置
#define    NET_DVR_SET_ALARMHOST_NETCFG            2008//设置网络参数配置
#define NET_DVR_GET_LED_SCREEN_CFG                2009// 获取LED屏幕参数
#define NET_DVR_SET_LED_SCREEN_CFG                2010// 设置LED屏幕参数
#define NET_DVR_GET_LED_CONTENT_CFG                2011// 获取LED屏显内容
#define    NET_DVR_SET_LED_CONTENT_CFG                2012// 设置LED屏显内容
#define NET_DVR_TURNON_LED                        2013// 打开LED屏
#define NET_DVR_TURNOFF_LED                        2014// 关闭LED屏
#define NET_DVR_GET_LED_TIMER_SWITCH            2015// 获取LED屏定时开关参数
#define NET_DVR_SET_LED_TIMER_SWITCH            2016// 设置LED屏定时开关参数
#define NET_DVR_SET_LED_BRIGHTNESS                2017// 手动设置LED屏亮度
#define NET_DVR_GET_LED_TIMER_BRIGHTNESS            2018//设置分时LED屏亮度
#define NET_DVR_SET_LED_TIMER_BRIGHTNESS            2019//获取分时LED屏亮度
#define NET_DVR_LED_CHECKTIME                        2020//LED校时
#define NET_DVR_GET_ALARMHOST_AUDIO_ASSOCIATE_ALARM    2021//获取音频跟随报警事件
#define NET_DVR_SET_ALARMHOST_AUDIO_ASSOCIATE_ALARM    2022//设置音频跟随报警事件
#define    NET_DVR_GET_LED_STATUS                        2023//获取LED屏状态
#define NET_DVR_CLOSE_SUBSYSTEM_FAULT_ALARM         2027//关闭子系统故障提示音
#define NET_DVR_SET_SUBSYSTEM_BYPASS                2028//子系统旁路
#define NET_DVR_CANCEL_SUBSYSTEM_BYPASS                2029//子系统旁路恢复

#define NET_DVR_GET_ALARMHOST_SUBSYSTEM_CFG_EX        2030//获取子系统扩展参数
#define    NET_DVR_SET_ALARMHOST_SUBSYSTEM_CFG_EX        2031//设置子系统扩展参数
#define NET_DVR_GET_ALARMHOST_PRINTER_CFG            2032//获取打印机打印使能
#define    NET_DVR_SET_ALARMHOST_PRINTER_CFG            2033//设置打印机打印使能
#define    NET_DVR_GET_ALARMHOST_ZONE_LIST_IN_SUBSYSTEM 2034//获取指定子系统内的所有防区
#define    NET_DVR_GET_ALARMHOST_TRIGGER_LIST            2035//获取所有触发器
#define    NET_DVR_ARM_ALARMHOST_SUBSYSTEM                2036//按布防类型对子系统布防
#define    NET_DVR_GET_ALARMHOST_EVENT_TRIG_ALARMOUT_CFG 2037// 获取事件触发报警输出配置
#define NET_DVR_SET_ALARMHOST_EVENT_TRIG_ALARMOUT_CFG 2038// 设置事件触发报警输出配置
#define    NET_DVR_GET_ALARMHOST_FAULT_CFG                2039// 获取故障处理配置
#define NET_DVR_SET_ALARMHOST_FAULT_CFG                2040// 设置故障处理配置
#define NET_DVR_SEARCH_ARMHOST_EXTERNAL_MODULE         2041//自动搜索
#define    NET_DVR_REGISTER_ALARMHOST_EXTERNAL_MODULE    2042//自动注册
#define NET_DVR_CLOSE_ALARMHOST_OVERALL_FAULT_ALARM 2043//关闭全局故障提示音

#define NET_DVR_GET_SAFETYCABIN_WORK_MODE            2044 //获取防护舱工作模式参数
#define NET_DVR_SET_SAFETYCABIN_WORK_MODE            2045 //设置防护舱工作模式参数
#define NET_DVR_GET_SAFETYCABIN_PERSON_SIGNAL_CFG   2046 //获取防护舱人信号探测参数
#define NET_DVR_SET_SAFETYCABIN_PERSON_SIGNAL_CFG   2047 //设置防护舱人信号探测参数

#define  NET_DVR_GET_ALARMHOST_MODULE_CFG            2048//获取模块信息
//#define  NET_DVR_SET_ALARMHOST_MODULE_CFG            2049//设置模块信息(预留)

#define     NET_DVR_GET_ALARMHOST_EXTERNAL_DEVICE_STATE        2050//获取485外接设备状态
#define  NET_DVR_SET_ALARMHOST_EXTERNAL_DEVICE_LIMIT_VALUE  2051//设置外接设备报警限值
#define  NET_DVR_GET_ALARMHOST_EXTERNAL_DEVICE_LIMIT_VALUE  2052//获取外接设备报警限值
#define  NET_DVR_GET_ALARMHOST_SENSOR_JOINT_CFG                2053// 获取模拟量关联配置
#define  NET_DVR_SET_ALARMHOST_SENSOR_JOINT_CFG                2054// 设置模拟量关联配置
#define     NET_DVR_SET_ALARMHOST_RS485_SLOT_CFG                2055// 设置报警主机485槽位参数
#define  NET_DVR_GET_ALARMHOST_RS485_SLOT_CFG                2056// 获取报警主机485槽位参数

#define NET_DVR_GET_ALL_VARIABLE_INFO      2057   // 获取所有变量元素信息
#define NET_DVR_GET_ALARM_POINT_CFG       2058   // 获取点号信息
#define NET_DVR_SET_ALARM_POINT_CFG       2059   // 设置点号信息
#define NET_DVR_GET_HISTORY_VALUE          2060   // 获取历史数据
#define NET_DVR_GET_ALARMHOST_ALARM_MODE  2061   // 获取数据上传方式
#define NET_DVR_SET_ALARMHOST_ALARM_MODE  2062   // 设置数据上传方式
#define NET_DVR_GET_ALARMHOST_SENSOR_VALUE 2063   // 获取模拟量实时数据

#define NET_DVR_GET_ALARMHOST_REPORT_CENTER_V40    2064   // 获取数据上传方式
#define NET_DVR_SET_ALARMHOST_REPORT_CENTER_V40    2065   // 设置数据上传方式
#define NET_DVR_GET_OUTPUT_SCHEDULE_RULECFG        2068   // 获取时控输出参数
#define NET_DVR_SET_OUTPUT_SCHEDULE_RULECFG     2069   // 设置时控输出参数
#define NET_DVR_GET_CMS_CFG                     2070
#define    NET_DVR_SET_CMS_CFG                        2071

#define NET_DVR_GET_PASSTHROUGH_CAP  2073  //获取设备透传能力集

#define NET_DVR_GET_ALARMHOST_MAIN_STATUS_V40    2072   // 获取主要状态V40

/*************************************视频报警主机1.3 begin*************************************/
#define NET_DVR_GET_ALARM_CAPTRUE_CFG                 2074    //获取报警抓图参数配置
#define    NET_DVR_SET_ALARM_CAPTRUE_CFG                2075    //设置报警抓图参数配置
#define NET_DVR_GET_ONE_OUTPUT_SCH_RULECFG_V40        2078   // 获取单个时控输出参数V40
#define NET_DVR_SET_ONE_OUTPUT_SCH_RULECFG_V40        2079   // 设置单个时控输出参数V40
#define NET_DVR_GET_OUTPUT_SCHEDULE_RULECFG_V40        2080   // 获取时控输出参数V40
#define NET_DVR_SET_OUTPUT_SCHEDULE_RULECFG_V40     2081   // 设置时控输出参数V40
#define  NET_DVR_ALARMHOST_CLOSE_SUBSYSTEM  2082  //对子系统撤防操作
/*************************************视频报警主机1.3 end**************************************/


#define NET_DVR_GET_WEEK_PLAN_CFG               2100    //获取门状态周计划参数
#define NET_DVR_SET_WEEK_PLAN_CFG               2101    //设置门状态周计划参数
#define NET_DVR_GET_DOOR_STATUS_HOLIDAY_PLAN    2102    //获取门状态假日计划参数
#define NET_DVR_SET_DOOR_STATUS_HOLIDAY_PLAN    2103    //设置门状态假日计划参数
#define NET_DVR_GET_DOOR_STATUS_HOLIDAY_GROUP   2104    //获取门状态假日组参数
#define NET_DVR_SET_DOOR_STATUS_HOLIDAY_GROUP   2105    //设置门状态假日组参数
#define NET_DVR_GET_DOOR_STATUS_PLAN_TEMPLATE   2106    //获取门状态计划模板参数
#define NET_DVR_SET_DOOR_STATUS_PLAN_TEMPLATE   2107    //设置门状态计划模板参数
#define NET_DVR_GET_DOOR_CFG                    2108    //获取门参数
#define NET_DVR_SET_DOOR_CFG                    2109    //设置门参数
#define NET_DVR_GET_DOOR_STATUS_PLAN            2110    //获取门状态计划参数
#define NET_DVR_SET_DOOR_STATUS_PLAN            2111    //设置门状态计划参数
#define NET_DVR_GET_GROUP_CFG                   2112    //获取群组参数
#define NET_DVR_SET_GROUP_CFG                   2113    //设置群组参数
#define NET_DVR_GET_MULTI_CARD_CFG              2114    //获取多重卡参数
#define NET_DVR_SET_MULTI_CARD_CFG              2115    //设置多重卡参数
#define NET_DVR_GET_CARD_CFG                    2116    //获取卡参数
#define NET_DVR_SET_CARD_CFG                    2117    //设置卡参数
#define NET_DVR_CLEAR_ACS_PARAM                    2118    //清空门禁主机参数
#define NET_DVR_GET_SNEAK_CFG                    2119    //获取反潜回参数
#define NET_DVR_SET_SNEAK_CFG                   2120    //设置反潜回参数
#define NET_DVR_GET_MULTI_DOOR_INTERLOCK_CFG    2121    //获取多门互锁参数
#define NET_DVR_SET_MULTI_DOOR_INTERLOCK_CFG    2122    //设置多门互锁参数
#define NET_DVR_GET_ACS_WORK_STATUS                2123    //获取门禁主机工作状态
#define NET_DVR_GET_VERIFY_WEEK_PLAN            2124    //获取读卡器验证方式周计划参数
#define NET_DVR_SET_VERIFY_WEEK_PLAN            2125    //设置读卡器验证方式周计划参数
#define NET_DVR_GET_CARD_RIGHT_WEEK_PLAN        2126    //获取卡权限周计划参数
#define NET_DVR_SET_CARD_RIGHT_WEEK_PLAN        2127    //设置卡权限周计划参数
#define NET_DVR_GET_VERIFY_HOLIDAY_PLAN         2128    //获取读卡器验证方式假日计划参数
#define NET_DVR_SET_VERIFY_HOLIDAY_PLAN         2129    //设置读卡器验证方式假日计划参数
#define NET_DVR_GET_CARD_RIGHT_HOLIDAY_PLAN     2130    //获取卡权限假日计划参数
#define NET_DVR_SET_CARD_RIGHT_HOLIDAY_PLAN     2131    //设置卡权限假日计划参数
#define NET_DVR_GET_VERIFY_HOLIDAY_GROUP        2132    //获取读卡器验证方式假日组参数
#define NET_DVR_SET_VERIFY_HOLIDAY_GROUP        2133    //设置读卡器验证方式假日组参数
#define NET_DVR_GET_CARD_RIGHT_HOLIDAY_GROUP    2134    //获取卡权限假日组参数
#define NET_DVR_SET_CARD_RIGHT_HOLIDAY_GROUP    2135    //设置卡权限假日组参数
#define NET_DVR_GET_VERIFY_PLAN_TEMPLATE        2136    //获取读卡器验证方式计划模板参数
#define NET_DVR_SET_VERIFY_PLAN_TEMPLATE        2137    //设置读卡器验证方式计划模板参数
#define NET_DVR_GET_CARD_RIGHT_PLAN_TEMPLATE    2138    //获取卡权限计划模板参数
#define NET_DVR_SET_CARD_RIGHT_PLAN_TEMPLATE    2139    //设置卡权限计划模板参数
#define NET_DVR_GET_CARD_READER_CFG                2140    //获取读卡器参数
#define NET_DVR_SET_CARD_READER_CFG             2141    //设置读卡器参数
#define NET_DVR_GET_CARD_READER_PLAN            2142    //获取读卡器验证计划参数
#define NET_DVR_SET_CARD_READER_PLAN            2143    //设置读卡器验证计划参数
#define NET_DVR_GET_CASE_SENSOR_CFG                2144    //获取事件触发器参数
#define NET_DVR_SET_CASE_SENSOR_CFG             2145    //设置事件触发器参数
#define NET_DVR_GET_CARD_READER_ANTI_SNEAK_CFG  2146    //获取读卡器反潜回参数
#define NET_DVR_SET_CARD_READER_ANTI_SNEAK_CFG  2147    //设置读卡器反潜回参数
#define NET_DVR_GET_PHONE_DOOR_RIGHT_CFG        2148    //获取手机关联门权限参数
#define NET_DVR_SET_PHONE_DOOR_RIGHT_CFG        2149    //获取手机关联门权限参数
#define NET_DVR_GET_FINGERPRINT_CFG             2150    //获取指纹参数
#define NET_DVR_SET_FINGERPRINT_CFG             2151    //设置指纹参数
#define NET_DVR_DEL_FINGERPRINT_CFG             2152    //删除指纹参数
#define NET_DVR_GET_EVENT_CARD_LINKAGE_CFG      2153    //获取事件卡号联动配置参数
#define NET_DVR_SET_EVENT_CARD_LINKAGE_CFG      2154    //设置事件卡号联动配置参数
#define NET_DVR_GET_ANTI_SNEAK_HOST_CFG            2155    //获取主机组反潜回参数
#define NET_DVR_SET_ANTI_SNEAK_HOST_CFG         2156    //设置主机组反潜回参数
#define NET_DVR_GET_READER_ANTI_SNEAK_HOST_CFG  2157    //获取主机组读卡器反潜回参数
#define NET_DVR_SET_READER_ANTI_SNEAK_HOST_CFG  2158    //设置主机组读卡器反潜回参数
#define NET_DVR_GET_ACS_CFG                     2159    //获取门禁主机参数
#define NET_DVR_SET_ACS_CFG                     2160    //设置门禁主机参数
#define NET_DVR_GET_CARD_PASSWD_CFG                2161    //获取卡密码开门使能配置
#define NET_DVR_SET_CARD_PASSWD_CFG             2162    //设置卡密码开门使能配置
#define NET_DVR_GET_CARD_USERINFO_CFG           2163    //获取卡号关联用户信息参数
#define NET_DVR_SET_CARD_USERINFO_CFG           2164    //设置卡号关联用户信息参数

#define NET_DVR_GET_ACS_EXTERNAL_DEV_CFG        2165    //获取门禁主机串口外设参数
#define NET_DVR_SET_ACS_EXTERNAL_DEV_CFG        2166    //设置门禁主机串口外设参数
#define NET_DVR_GET_PERSONNEL_CHANNEL_CFG       2167    //获取人员通道参数
#define NET_DVR_SET_PERSONNEL_CHANNEL_CFG       2168    //设置人员通道参数
#define NET_DVR_SET_PLATFORM_VERIFY_CFG         2169    //下发平台认证结果
#define NET_DVR_GET_PERSON_STATISTICS_CFG        2170   //获取人数统计参数
#define NET_DVR_SET_PERSON_STATISTICS_CFG        2171   //设置人数统计参数
#define NET_DVR_GET_ACS_SCREEN_DISPLAY_CFG        2172   //获取屏幕字符串显示参数
#define NET_DVR_SET_ACS_SCREEN_DISPLAY_CFG        2173   //设置屏幕字符串显示参数
#define NET_DVR_GET_GATE_TIME_CFG               2174  //获取人员通道闸门时间参数
#define NET_DVR_SET_GATE_TIME_CFG               2175  //设置人员通道闸门时间参数
#define NET_DVR_GET_LOCAL_CONTROLLER_STATUS     2176    //获取就地控制器状态
#define NET_DVR_GET_ONLINE_LOCAL_CONTROLLER     2177    //搜索在线就地控制器
#define NET_DVR_GET_CARD_CFG_V50                2178    //获取新卡参数(V50)
#define NET_DVR_SET_CARD_CFG_V50                2179    //设置新卡参数(V50)
#define NET_DVR_GET_ACS_WORK_STATUS_V50         2180    //获取门禁主机工作状态(V50)
#define NET_DVR_GET_EVENT_CARD_LINKAGE_CFG_V50  2181    //获取事件卡号联动配置参数(V50)
#define NET_DVR_SET_EVENT_CARD_LINKAGE_CFG_V50  2182    //设置事件卡号联动配置参数(V50)

#define NET_DVR_GET_SAFETYCABIN_STATE            2197    //获取防护舱状态
#define NET_DVR_GET_RS485_CASCADE_CFG            2198   //获取Rs485级联设备配置
#define NET_DVR_SET_RS485_CASCADE_CFG            2199   //设置Rs485级联设备配置

/*************************************视频报警主机2.0 begin*************************************/
#define NET_DVR_GET_REMOTECONTROLLER_PERMISION_CFG        2200    //获取遥控器权限参数
#define NET_DVR_SET_REMOTECONTROLLER_PERMISION_CFG        2201    //设置遥控器权限参数
#define NET_DVR_GET_KEYBOARD_CFG                        2202    //获取键盘参数配置
#define NET_DVR_SET_KEYBOARD_CFG                        2203    //设置键盘参数配置
#define    NET_DVR_GET_ALARMHOST_WIRELESS_BUSINNESS_INFO    2204    //无线业务查询
#define    NET_DVR_GET_ALL_REMOTECONTROLLER_LIST            2205    //获取所有遥控器
#define    NET_DVR_GET_PREVIEW_DELAY_CFG                    2206    //获取延迟预览参数配置
#define    NET_DVR_SET_PREVIEW_DELAY_CFG                    2207    //设置延迟预览参数配置
#define NET_DVR_GET_ZONE_CHANNEL_LINKAGE_CFG            2208    //获取防区联动视频通道配置
#define NET_DVR_SET_ZONE_CHANNEL_LINKAGE_CFG            2209    //设置防区联动视频通道配置
#define NET_DVR_GET_CENTER_SERVER_CFG                    2210    //获取报警中心服务器
#define NET_DVR_SET_CENTER_SERVER_CFG                    2211    //设置报警中心服务器
/*************************************视频报警主机2.0 end**************************************/

/********************************一键式紧急报警产品V1.0.0 begin********************************/
#define NET_DVR_GET_EMERGENCE_ALARM_PRODUCT_CAP            2212    //获取一键式紧急报警产品能力
#define NET_DVR_GET_CALL_WAITTING_CFG_CAP                2213    //获取呼叫等待参数配置能力
#define NET_DVR_GET_CALL_WAITTING_CFG                    2214    //获取呼叫等待参数配置
#define NET_DVR_SET_CALL_WAITTING_CFG                    2215    //设置呼叫等待参数配置
#define NET_DVR_GET_ALARM_LAMP_CFG_CAP                    2216    //获取警灯参数配置能力
#define NET_DVR_GET_ALARM_LAMP_CFG                        2217    //获取警灯参数配置
#define NET_DVR_SET_ALARM_LAMP_CFG                        2218    //设置警灯参数配置
#define NET_DVR_GET_VOICE_PROMPTION_CFG_CAP                2219    //获取语音提示配置能力
#define NET_DVR_GET_VOICE_PROMPTION_CFG                    2220    //获取语音提示配置
#define NET_DVR_SET_VOICE_PROMPTION_CFG                    2221    //设置语音提示配置
#define NET_DVR_GET_EMERGENCE_ALARM_RESPONSE_CAP        2222    //获取紧急报警处理能力
#define NET_DVR_EMERGENCE_ALARM_RESPONSE_CTRL            2223    //紧急报警处理控制
/********************************一键式紧急报警产品V1.0.0 end**********************************/

//网络报警主机 V2.2
#define NET_DVR_GET_ALARMHOST_NETCFG_V50                2224    //获取报警主机网络参数配置V50
#define NET_DVR_SET_ALARMHOST_NETCFG_V50                2225    //设置报警主机网络参数配置V50
#define    NET_DVR_REGISTER_ALARM_RS485                    2226    //RS485重新注册
/**********************************动环报警主机V3.0****************************************/

#define NET_DVR_GET_ALARMIN_PARAM_LIST                    2227    //获取防区参数列表
//无线报警主机1.0.0
#define NET_DVR_GET_ALARMHOST_OTHER_STATUS_V50            2228    //获取报警主机其他状态v50
#define NET_DVR_GET_ALARMIN_ASSOCIATED_CHAN_LIST        2229    //获取防区防区联动视频通道参数列表
#define NET_DVR_GET_ALARMIN_TRIGGER                     2230    //获取报警主机防区联动配置
#define NET_DVR_SET_ALARMIN_TRIGGER                     2231    //设置报警主机防区联动配置
#define NET_DVR_GET_EMERGENCY_CALL_HELP_TRIGGER         2232    //获取报警主机紧急求助联动配置
#define NET_DVR_SET_EMERGENCY_CALL_HELP_TRIGGER         2233    //设置报警主机紧急求助联动配置
#define NET_DVR_GET_CONSULT_TRIGGER                     2234    //获取报警主机业务咨询联动配置
#define NET_DVR_SET_CONSULT_TRIGGER                     2235    //设置报警主机业务咨询联动配置

#define NET_DVR_GET_CARD_RIGHT_WEEK_PLAN_V50    2304  //获取卡权限周计划参数V50
#define NET_DVR_SET_CARD_RIGHT_WEEK_PLAN_V50    2305  //设置卡权限周计划参数V50

#define NET_DVR_GET_CARD_RIGHT_HOLIDAY_PLAN_V50    2310  //获取卡权限假日计划参数V50
#define NET_DVR_SET_CARD_RIGHT_HOLIDAY_PLAN_V50    2311  //设置卡权限假日计划参数V50

#define NET_DVR_GET_CARD_RIGHT_HOLIDAY_GROUP_V50      2316 //获卡权限假日组参数V50
#define NET_DVR_SET_CARD_RIGHT_HOLIDAY_GROUP_V50      2317 //设置卡权限假日组参数V50

#define NET_DVR_GET_CARD_RIGHT_PLAN_TEMPLATE_V50     2322 //获取卡权限计划模板参数V50
#define NET_DVR_SET_CARD_RIGHT_PLAN_TEMPLATE_V50     2323//设置卡权限计划模板参数V50

/**********************************经济型指纹门禁产品V1.0****************************************/
#define NET_DVR_GET_SCHEDULE_INFO                       2500    //获取排班信息
#define NET_DVR_GET_ATTENDANCE_SUMMARY_INFO             2501    //获取考勤汇总信息
#define NET_DVR_GET_ATTENDANCE_RECORD_INFO              2502    //获取考勤记录信息
#define NET_DVR_GET_ABNORMAL_INFO                       2503    //获取异常统计信息
/**********************************经济型指纹门禁产品V1.0****************************************/

/*************************************视频门禁一体机1.0 begin**************************************/
#define NET_DVR_CAPTURE_FINGERPRINT_INFO                2504    //采集指纹信息
/*************************************视频门禁一体机1.0 end**************************************/

/*************************************人脸识别门禁一体机1.0 begin**************************************/
#define NET_DVR_GET_CARD_READER_CFG_V50                    2505    //获取读卡器参数(V50)
#define NET_DVR_SET_CARD_READER_CFG_V50                 2506    //设置读卡器参数(V50)
#define NET_DVR_GET_FACE_PARAM_CFG                      2507    //获取人脸参数
#define NET_DVR_SET_FACE_PARAM_CFG                      2508    //设置人脸参数
#define NET_DVR_DEL_FACE_PARAM_CFG                      2509    //删除人脸参数
#define    NET_DVR_CAPTURE_FACE_INFO                        2510    //采集人脸信息
/*************************************人脸识别门禁一体机1.0 end**************************************/
#define NET_DVR_GET_REGISTER_INFO                       2511    //登记信息获取

#define NET_DVR_GET_SMSRELATIVEPARA_V50                    2512    //获取短信相关参数
#define NET_DVR_SET_SMSRELATIVEPARA_V50                    2513    //设置短信相关参数
#define NET_DVR_GET_ACS_EVENT                           2514    //设备事件获取
#define NET_DVR_GET_MULTI_CARD_CFG_V50                  2515    //获取多重卡参数V50
#define NET_DVR_SET_MULTI_CARD_CFG_V50                  2516    //设置多重卡参数V50
#define NET_DVR_DEL_FINGERPRINT_CFG_V50                 2517    //删除指纹参数V50
#define NET_DVR_GET_EVENT_CARD_LINKAGE_CFG_V51          2518    //获取事件卡号联动配置参数(V51)
#define NET_DVR_SET_EVENT_CARD_LINKAGE_CFG_V51          2519    //设置事件卡号联动配置参数(V51)

#define NET_DVR_SET_EXAM_INFO                           2530    //考试信息下发
#define NET_DVR_SET_EXAMINEE_INFO                       2531    //考生信息下发
#define NET_DVR_SEARCH_EXAM_COMPARE_RESULT              2532    //考试比对结果查询

#define NET_DVR_GET_ALL_ALARM_RS485CFG            2705    // 获取485参数
#define NET_DVR_GET_ALL_ALARMHOST_RS485_SLOT_CFG        2706        // 获取所有报警主机485槽位参数
#define NET_DVR_GET_DEVICE_SELF_CHECK_STATE        2707    //获取设备自检功能
#define NET_DVR_GET_ALL_ALARM_POINT_CFG            2708    // 获取所有点号参数
#define NET_DVR_GET_ALL_ALARM_SENSOR_CFG        2709    // 获取所有模拟量参数
#define NET_DVR_GET_ALL_ALARM_SENSOR_JOINT        2710    //获取所有模拟量联动参数
#define NET_DVR_GET_AIR_CONDITION_PARAM            2711    //获取空调参数
#define NET_DVR_GET_OUT_SCALE_CFG                2712        //获取主辅口输出配置
#define NET_DVR_SET_OUT_SCALE_CFG                2713        //设置主辅口输出配置
#define NET_DVR_GET_ALARM_CHAN_ABLITITY            2714        //获取报警相关通道参
/**********************************动环报警主机V3.0****************************************/

//动环报警主机D2000 V1.0
#define NET_DVR_GET_ALARMCENTER_NETCFG            2715        //获取报警中心网络参数配置
#define NET_DVR_SET_ALARMCENTER_NETCFG            2716        //获取报警中心网络参数配置


#define NET_ITC_GET_TRIGGERCFG                  3003  //获取触发参数
#define NET_ITC_SET_TRIGGERCFG                  3004  //设置触发参数
#define NET_ITC_GET_IOOUT_PARAM_CFG                3005  //获取IO输出参数（3.1含之后版本）
#define NET_ITC_SET_IOOUT_PARAM_CFG                3006  //设置IO输出参数（3.1含之后版本）

#define NET_DVR_GET_CAMERA_SETUPCFG                3007  //获取相机架设参数
#define NET_DVR_SET_CAMERA_SETUPCFG                3008  //设置相机架设参数

#define NET_ITC_GET_TRIGGER_DEFAULTCFG          3013  //获取触发模式推荐参数
#define NET_DVR_GET_STATUS_DETECTCFG            3015  //获取状态检测使能参数
#define NET_DVR_SET_STATUS_DETECTCFG            3016  //设置状态检测使能参数
#define NET_ITC_GET_VIDEO_TRIGGERCFG            3017  //获取视频电警触发参数
#define NET_ITC_SET_VIDEO_TRIGGERCFG            3018  //设置视频电警触发参数
#define NET_DVR_GET_TPS_ALARMCFG                3019  //获取交通统计报警参数
#define NET_DVR_SET_TPS_ALARMCFG                3020  //设置交通统计报警参数


#define NET_DVR_GET_REDAREACFG                  3100   //获取红绿灯区域参数
#define NET_DVR_SET_REDAREACFG                  3101   //设置红绿灯区域参数
#define    NET_DVR_GET_TEST_SPOT                    3102   //获取SPOT口测试总步数和当前第几步
#define    NET_DVR_SET_TEST_SPOT                    3103   //设置SPOT口测试总步数和当前第几步
#define NET_DVR_GET_CABINETCFG                    3104   //机柜参数配置获取
#define NET_DVR_SET_CABINETCFG                    3105   //机柜参数配置设置
#define NET_DVR_VEHICLE_CHECK_START                3106   //黑名单稽查数据回传
#define NET_DVR_SET_CAPTUREPIC_CFG                3107   //车载抓图配置设置命令
#define NET_DVR_GET_CAPTUREPIC_CFG                3108   //车载抓图配置获取命令
#define NET_DVR_SET_MOBILEPLATE_RECOG_CFG        3109   //车载车牌识别配置设置命令
#define NET_DVR_GET_MOBILEPLATE_RECOG_CFG        3110   //车载车牌识别配置获取命令
#define NET_DVR_SET_MOBILE_RADAR_CFG            3111   //车载雷达配置设置命令
#define NET_DVR_GET_MOBILE_RADAR_CFG            3112   //车载雷达配置获取命令
#define NET_DVR_SET_MOBILE_LOCALPLATECHK_CFG    3113   //车载黑名单本地对比配置设置命令
#define NET_DVR_GET_MOBILE_LOCALPLATECHK_CFG    3114   //车载黑名单本地对比配置获取命令

#define  NET_ITC_GET_ICRCFG                        3115   //获取ICR配置切换
#define  NET_ITC_SET_ICRCFG                        3116   //设置ICR配置切换
#define  NET_ITC_GET_RS485_ACCESSINFO            3117   //获取Rs485关联接入设备的信息
#define  NET_ITC_SET_RS485_ACCESSINFO            3118   //设置Rs485关联接入设备的信息
#define  NET_ITC_GET_EXCEPTIONCFG                 3119   //获取异常参数
#define  NET_ITC_SET_EXCEPTIONCFG                3120   //设置异常参数
#define  NET_ITC_GET_FTPCFG                        3121   //获取ITC  FTP设置参数
#define  NET_ITC_SET_FTPCFG                        3122   //设置ITC FTP设置参数

#define  NET_DVR_VEHICLE_CONTROL_LIST_START     3123   //设置车辆黑白名单信息
#define  NET_DVR_GET_ALL_VEHICLE_CONTROL_LIST   3124   //获取所有车辆黑白名单信息
#define  NET_DVR_VEHICLE_DELINFO_CTRL           3125   //删除设备内黑名单数据库信息
#define  NET_DVR_GET_ENTRANCE_PARAMCFG            3126   //获取出入口控制参数
#define  NET_DVR_SET_ENTRANCE_PARAMCFG            3127   //设置出入口控制参数
#define  NET_DVR_BARRIERGATE_CTRL               3128   //远程控制道闸
#define  NET_DVR_GATELAMP_CTRL                  3129   //常亮灯功能
#define  NET_DVR_GET_CURTRIGGERMODE             3130   //获取设备当前触发模式
#define  NET_DVR_GET_GPSDATACFG                    3131   //获取GPS参数
#define  NET_DVR_SET_GPSDATACFG                    3132   //设置GPS参数
#define  NET_DVR_VEHICLELIST_CTRL_START            3133   //设置车辆黑白名单信息

#define  NET_DVR_GET_GUARDCFG                   3134   //获取车牌识别检测计划
#define  NET_DVR_SET_GUARDCFG                   3135   //设置车牌识别检测计划
#define  NET_DVR_GET_SNAPINFO_CFG               3136   //获取抓拍图片参数
#define  NET_DVR_SET_SNAPINFO_CFG               3137   //设置抓拍图片参数
#define  NET_DVR_GET_SNAPINFO_CFG_V40           3138   //获取抓拍图片参数扩展
#define  NET_DVR_SET_SNAPINFO_CFG_V40           3139   //设置抓拍图片参数扩展
#define  NET_DVR_SET_CURTRIGGERMODE                3140   //设置设备当前触发模式(仅IPC/D支持)
#define     NET_DVR_GET_TRAFFIC_DATA                3141   //长连接获取交通数据
#define     NET_DVR_GET_TRAFFIC_FLOW                3142   //长连接获取交通流量
#define  NET_DVR_PARKING_VEHICLE_SEND           3143   //停车车辆信息下发
#define  NET_DVR_PARKING_CARD_SEND              3144   //停车卡下发
#define     NET_DVR_PARKING_CARD_CTRL                3145   //停车场停车卡控制接口

#define    NET_DVR_GET_ALARMCTRL_CAPABILITIES        3146   //获取报警控制能力
#define    NET_DVR_SET_ALARMCTRL_CFG                3147   //设置报警控制
#define    NET_DVR_GET_ALARMCTRL_CFG                3148   //获取报警控制

#define NET_DVR_GET_AUDIO_INPUT                 3201   //获取音频输入参数
#define NET_DVR_SET_AUDIO_INPUT                 3202  //设置音频输入参数
#define NET_DVR_GET_CAMERA_DEHAZE_CFG           3203   //获取透雾参数配置
#define NET_DVR_SET_CAMERA_DEHAZE_CFG           3204  //设置透雾参数配置
#define NET_DVR_REMOTECONTROL_ALARM             3205  //远程控制遥控器布防
#define NET_DVR_REMOTECONTROL_DISALARM          3206  //远程控制遥控器撤防
#define NET_DVR_REMOTECONTROL_STUDY             3207  //远程控制遥控器学习
#define NET_DVR_WIRELESS_ALARM_STUDY            3208  //远程控制无线报警学习
#define NET_IPC_GET_AUX_ALARMCFG                3209   //获取辅助报警参数配置
#define NET_IPC_SET_AUX_ALARMCFG                3210  //设置辅助报警参数配置
#define NET_DVR_GET_PREVIEW_DISPLAYCFG            3211  //获取预览显示参数
#define NET_DVR_SET_PREVIEW_DISPLAYCFG             3212  //设置预览显示参数
#define NET_DVR_REMOTECONTROL_PTZ                3213  //远程控制PTZ
#define NET_DVR_REMOTECONTROL_PRESETPOINT       3214   //远程控制预置点
#define NET_DVR_REMOTECONTROL_CRUISE             3215   //远程控制巡航

#define NET_DVR_GET_MULTI_STREAM_COMPRESSIONCFG  3216 //远程获取多码流压缩参数
#define NET_DVR_SET_MULTI_STREAM_COMPRESSIONCFG  3217 //远程设置多码流压缩参数

#define NET_DVR_GET_WPSCFG                        3218  //获取WPS参数
#define NET_DVR_SET_WPSCFG                        3219  //设置WPS参数
#define NET_DVR_WPS_CONNECT                     3220  //远程启用WPS连接
#define NET_DVR_GET_DEVICE_PIN                  3221  //获取设备PIN码
#define NET_DVR_UPDATE_PIN                      3223  //更新设备PIN码
#define NET_DVR_GET_PRESETCFG                   3224  //获取预置点参数
#define NET_DVR_GET_PTZCRUISECFG                3225  //获取巡航路径参数
#define NET_DVR_GET_PRESET_NUM                    3226  //获取预置点个数
#define NET_DVR_GET_PTZCRUISE_NUM                3227  //获取巡航路径个数

#define NET_DVR_GET_MOTION_TRACK_CFG            3228  //获取跟踪参数
#define NET_DVR_SET_MOTION_TRACK_CFG            3229  //设置跟踪参数
#define NET_DVR_CLEAR_IPC_PARAM                    3230  //清空前端参数
#define NET_DVR_GET_IPADDR_FILTERCFG            3232  //获取IP地址过滤参数
#define NET_DVR_SET_IPADDR_FILTERCFG            3233  //设置IP地址过滤参数

#define NET_DVR_GET_LOGO_OVERLAYCFG                3234  //获取LOGO图片叠加参数
#define NET_DVR_SET_LOGO_OVERLAYCFG                3235  //设置LOGO图片叠加参数

#define NET_DVR_GET_IPV6_LIST                   3236  //获取网卡的全部IPV6地址信息
#define NET_DVR_GET_AUDIOOUT_VOLUME             3237  //获取输出音频大小
#define NET_DVR_SET_AUDIOOUT_VOLUME             3238  //设置输出音频大小
#define NET_DVR_GET_FUZZY_UPGRADE               3239  //获取模糊升级匹配信息

#define NET_DVR_GET_BV_CORRECT_PARAM            3240  //获取相机校正参数
#define NET_DVR_SET_BV_CORRECT_PARAM            3241  //设置相机校正参数
#define NET_DVR_GET_OUTPUT_VIDEO_TYPE           3242  //获取输出视频类型
#define NET_DVR_SET_OUTPUT_VIDEO_TYPE           3243  //设置输出视频类型

#define NET_DVR_FISHEYE_CFG                     3244  //鱼眼长连接配置
#define NET_DVR_GET_PTZ_POINT                   3245  //获取PTZ点坐标
#define NET_DVR_SET_PTZ_POINT                   3246  //设置PTZ点坐标
#define NET_DVR_REMOTECONTROL_DEV_PARAM         3247  //设置设备登录客户端参数
#define NET_DVR_GET_FISHEYE_STREAM_STATUS       3248  //获取鱼眼码流状态

#define NET_DVR_GET_GBT28181_ACCESS_CFG            3249  //获取GBT28181协议接入配置
#define NET_DVR_SET_GBT28181_ACCESS_CFG            3250  //设置GBT28181协议接入配置
#define NET_DVR_GET_GBT28181_CHANINFO_CFG        3251  //获取GBT28181协议接入设备的通道信息
#define NET_DVR_SET_GBT28181_CHANINFO_CFG        3252  //设置GBT28181协议接入设备的通道信息
#define NET_DVR_GET_GBT28181_ALARMINCFG            3253  //获取GBT28181协议接入设备的报警信息
#define NET_DVR_SET_GBT28181_ALARMINCFG            3254  //设置GBT28181协议接入设备的报警信息
#define NET_DVR_GET_ISP_CAMERAPARAMCFG            3255  //获取ISP前端参数配置
#define NET_DVR_SET_ISP_CAMERAPARAMCFG            3256  //设置ISP前端参数配置
#define NET_DVR_GET_DEVSERVER_CFG                3257  //获取模块服务配置
#define NET_DVR_SET_DEVSERVER_CFG                3258  //设置模块服务配置

//2013-11-25
#define    NET_DVR_GET_WIPERINFO_CFG                3259     //雨刷配置获取
#define    NET_DVR_SET_WIPERINFO_CFG                3260     //雨刷配置设置
#define NET_DVR_GET_TRACK_DEV_PARAM             3261   //获取跟踪设备参数
#define NET_DVR_SET_TRACK_DEV_PARAM             3262   //设置跟踪设备参数
#define NET_DVR_GET_PTZ_TRACK_PARAM             3263   //获取PTZ跟踪参数
#define NET_DVR_SET_PTZ_TRACK_PARAM             3264   //设置PTZ跟踪参数
#define NET_DVR_GET_CENTER_POINT_CFG            3265   //获取中心点参数
#define NET_DVR_SET_CENTER_POINT_CFG            3266   //设置中心点参数
#define NET_DVR_GET_CENTER_POINT_CFG_CAPABILITIES        3267    //获取中心点参数能力
#define NET_DVR_GET_FISHEYE_CAPABILITIES        3268        //获取鱼眼能力

#define NET_DVR_GET_BASICPARAMCFG                3270 //获取PTZ配置基本参数信息
#define NET_DVR_SET_BASICPARAMCFG                3271 //设置PTZ配置基本参数信息
#define NET_DVR_GET_PTZOSDCFG                    3272 //获取PTZ OSD配置参数信息
#define NET_DVR_SET_PTZOSDCFG                    3273 //设置PTZ OSD配置参数信息
#define NET_DVR_GET_POWEROFFMEMCFG                3274 //获取掉电记忆模式参数信息
#define NET_DVR_SET_POWEROFFMEMCFG                3275 //设置掉电记忆模式参数信息
#define NET_DVR_GET_LIMITCFG                    3276 //获取限位参数配置信息
#define NET_DVR_SET_LIMITCFG                    3277 //设置限位参数配置信息
#define NET_DVR_PTZLIMIT_CTRL                    3278 //清除限位参数控制

#define NET_DVR_PTZ_CLEARCTRL                    3279 //清除配置信息控制接口
#define NET_DVR_GET_PRIORITIZECFG                3281 //获取云台优先配置信息
#define NET_DVR_SET_PRIORITIZECFG                3282 //设置云台优先配置信息
#define NET_DVR_PTZ_INITIALPOSITIONCTRL            3283 //零方位角控制
#define NET_DVR_GET_PRIVACY_MASKSCFG            3285 //获取隐私遮蔽参数
#define NET_DVR_SET_PRIVACY_MASKSCFG            3286 //设置隐私遮蔽参数
#define NET_DVR_GET_PTZLOCKCFG                    3287 //获取云台锁定信息
#define NET_DVR_SET_PTZLOCKCFG                    3288 //设置云台锁定信息
#define NET_DVR_PTZ_ZOOMRATIOCTRL                3289 //设置跟踪倍率
#define NET_DVR_GET_PTZLOCKINFO                    3290 //获取云台锁定剩余秒数
#define NET_DVR_GET_PRIVACY_MASKS_ENABLECFG        3291 //获取全局使能
#define NET_DVR_SET_PRIVACY_MASKS_ENABLECFG        3292 //设置全局使能
#define NET_DVR_GET_SMARTTRACKCFG                3293 //获取智能运动跟踪配置信息
#define NET_DVR_SET_SMARTTRACKCFG                3294 //设置智能运动跟踪配置信息
#define NET_DVR_GET_EPTZ_CFG                    3295 //获取EPTZ参数
#define NET_DVR_SET_EPTZ_CFG                    3296 //设置EPTZ参数
#define NET_DVR_GET_EPTZ_CFG_CAPABILITIES        3297 //获取EPTZ参数能力

#define NET_DVR_GET_LOW_LIGHTCFG                3303//获取快球低照度设置信息
#define NET_DVR_SET_LOW_LIGHTCFG                3304//设置快球低照度设置信息
#define NET_DVR_GET_FOCUSMODECFG                3305//获取快球聚焦模式信息
#define NET_DVR_SET_FOCUSMODECFG                3306//设置快球聚焦模式信息
#define NET_DVR_GET_INFRARECFG                  3307//获取快球红外设置信息
#define NET_DVR_SET_INFRARECFG                  3308//设置快球红外设置信息
#define NET_DVR_GET_AEMODECFG                   3309//获取快球其他设置信息
#define NET_DVR_SET_AEMODECFG                   3310//设置快球其他设置信息
#define NET_DVR_CONTROL_RESTORE_SUPPORT         3311 //恢复前端默认参数(参数能力中有的前端参数配置相关的都恢复)
#define NET_DVR_CONTROL_RESTART_SUPPORT         3312 //快球机芯重启
#define NET_DVR_CONTROL_PTZ_PATTERN             3313//云台花样扫描
#define NET_DVR_GET_PTZ_PARKACTION_CFG          3314//获取云台守望参数
#define NET_DVR_SET_PTZ_PARKACTION_CFG          3315//设置云台守望参数
#define NET_DVR_CONTROL_PTZ_MANUALTRACE         3316//手动跟踪定位
#define NET_DVR_GET_ROI_DETECT_NUM                3349 //获取ROI检测区域编号数目
#define NET_DVR_GET_ROI_DETECT                    3350 //获取ROI检测区域配置
#define NET_DVR_SET_ROI_DETECT                    3351 //设置ROI检测区域配置
#define NET_DVR_GET_FACE_DETECT                    3352 //获取人脸侦测配置
#define NET_DVR_SET_FACE_DETECT                    3353 //设置人脸侦测配置
#define NET_DVR_GET_CORRIDOR_MODE                3354 //获取走廊模式功能配置
#define NET_DVR_SET_CORRIDOR_MODE                3355 //设置走廊模式功能配置
#define NET_DVR_GET_SCENECHANGE_DETECTIONCFG    3356 //获取场景变更报警配置
#define NET_DVR_SET_SCENECHANGE_DETECTIONCFG    3357 //设置场景变更报警配置
#define NET_DVR_GET_TRAVERSE_PLANE_DETECTION    3360
#define NET_DVR_SET_TRAVERSE_PLANE_DETECTION    3361
#define NET_DVR_GET_FIELD_DETECTION                3362 //获取区域侦测配置
#define NET_DVR_SET_FIELD_DETECTION                3363 //设置区域侦测配置
#define NET_DVR_GET_DEFOCUSPARAM                3364 //获取虚焦侦测参数配置
#define NET_DVR_SET_DEFOCUSPARAM                3365 //设置虚焦侦测参数配置
#define NET_DVR_GET_AUDIOEXCEPTIONPARAM            3366 //获取音频异常配置
#define NET_DVR_SET_AUDIOEXCEPTIONPARAM            3367 //设置音频异常配置
#define NET_DVR_GET_CCDPARAMCFG_EX              3368 //获取CCD参数配置
#define NET_DVR_SET_CCDPARAMCFG_EX              3369 //设置CCD参数配置
#define NET_DVR_START_GET_INPUTVOLUME            3370//开始获取音量
#define NET_DVR_SET_SCH_TASK                    3380 //设置球机定时任务
#define NET_DVR_GET_SCH_TASK                    3381  //获取球机定时任务
#define NET_DVR_SET_PRESET_NAME                    3382 //设置预置点名称
#define NET_DVR_GET_PRESET_NAME                    3383 //获取预置点名称
#define NET_DVR_SET_AUDIO_NAME                    3384 //设置语音名称
#define NET_DVR_GET_AUDIO_NAME                    3385  //获取语音名称
#define NET_DVR_RESUME_INITRACKPOS              3386  //恢复跟踪初始位
#define NET_DVR_NTP_SERVER_TEST                    3387    //NTP服务器测试
#define    NET_DVR_NAS_SERVER_TEST                    3388    //NAS服务器测试
#define    NET_DVR_EMAIL_SERVER_TEST                3389    //Email服务器测试
#define    NET_DVR_FTP_SERVER_TEST                    3390    //FTP服务器测试
#define    NET_DVR_IP_TEST                            3391    //IP测试
#define NET_DVR_GET_NET_DISKCFG_V40             3392 //网络硬盘接入获取v40
#define NET_DVR_SET_NET_DISKCFG_V40                3393 //网络硬盘接入设置v40
#define    NET_DVR_GET_IOOUT_CFG                    3394//获取补光灯参数
#define    NET_DVR_SET_IOOUT_CFG                    3395//设置补光灯参数
#define    NET_DVR_GET_SIGNAL_SYNC                    3396//获取信号灯同步配置参数
#define    NET_DVR_SET_SIGNAL_SYNC                    3397//设置信号灯同步配置参数

#define    NET_DVR_GET_EZVIZ_ACCESS_CFG            3398//获取EZVIZ接入参数
#define    NET_DVR_SET_EZVIZ_ACCESS_CFG            3399//设置EZVIZ接入参数
#define    NET_DVR_GET_SCHEDULE_AUTO_TRACK_CFG        3400//获取定时智能跟踪参数
#define    NET_DVR_SET_SCHEDULE_AUTO_TRACK_CFG        3401//设置定时智能跟踪参数
#define    NET_DVR_MAKE_I_FRAME                    3402//强制I帧
#define NET_DVR_GET_ALARM_RELATE                3403//获取报警联动通道功能参数
#define NET_DVR_SET_ALARM_RELATE                3404//设置报警联动通道功能参数
#define NET_DVR_GET_PDC_RULECFG_V42             3405  //设置人流量统计规则(扩展)
#define NET_DVR_SET_PDC_RULECFG_V42             3406  //获取人流量统计规则(扩展)
#define NET_DVR_GET_HEATMAP_CFG                 3407  //设置热度图参数配置
#define NET_DVR_SET_HEATMAP_CFG                 3408  //获取热度图参数配置
#define NET_DVR_REMOTECONTROL_LINEARSCAN        3409   //设置左右边界参数 2014-03-15
#define NET_DVR_DPC_CTRL                        3410//坏点校正控制
#define NET_DVR_FFC_MANUAL_CTRL                 3411//非均匀性校正(FFC)手动模式
#define NET_DVR_FFC_BACKCOMP_CTRL               3412//非均匀性校正(FFC)背景补偿
#define NET_DVR_GET_FOCUSING_POSITION_STATE     3413//获取聚焦到位状态参数
#define NET_DVR_GET_PRIVATE_PROTOCOL_CFG        3414   //获取 私有关键信息上传配置接口配置
#define NET_DVR_SET_PRIVATE_PROTOCOL_CFG        3415   //设置 私有关键信息上传配置接口配置
#define NET_DVR_COMPLETE_RESTORE_CTRL           3420    //设置完全恢复出厂值

#define NET_DVR_CLOUDSTORAGE_SERVER_TEST        3421  //云存储服务器测试
#define NET_DVR_PHONE_NUM_TEST                  3422  //电话号码测试
#define NET_DVR_GET_REMOTECONTROL_STATUS        3423  //获取无线布防状态
#define NET_DVR_GET_MONITOR_LOCATION_INFO        3424  //获取监测点信息
#define NET_DVR_SET_MONITOR_LOCATION_INFO        3425  //设置监测点信息


#define    NET_DVR_GET_SMART_CAPABILITIES                3500    //获取Smart能力
#define    NET_DVR_GET_EVENT_TRIGGERS_CAPABILITIES        3501    //获取事件触发能力
#define    NET_DVR_GET_REGION_ENTRANCE_CAPABILITIES    3502    //获取进入区域侦测能力
#define    NET_DVR_GET_REGION_ENTR_DETECTION            3503    //获取进入区域配置
#define    NET_DVR_SET_REGION_ENTR_DETECTION            3504    //设置进入区域配置
#define    NET_DVR_GET_REGION_ENTR_REGION                3505    //获取进入区域的单个区域配置
#define    NET_DVR_SET_REGION_ENTR_REGION                3506    //设置进入区域的单个区域配置
#define    NET_DVR_GET_REGION_ENTR_TRIGGER                3507    //获取进入区域联动配置
#define    NET_DVR_SET_REGION_ENTR_TRIGGER                3508    //设置进入区域联动配置
#define    NET_DVR_GET_REGION_ENTR_SCHEDULE            3509    //获取进入区域布防时间配置
#define    NET_DVR_SET_REGION_ENTR_SCHEDULE            3510    //设置进入区域布防时间配置
#define    NET_DVR_GET_REGION_EXITINT_CAPABILITIES        3511    //获取离开区域侦测能力
#define    NET_DVR_GET_REGION_EXITING_DETECTION        3512    //获取离开区域配置
#define    NET_DVR_SET_REGION_EXITING_DETECTION        3513    //设置离开区域配置
#define    NET_DVR_GET_REGION_EXITING_REGION            3514    //获取离开区域的单个区域配置
#define    NET_DVR_SET_REGION_EXITING_REGION            3515    //设置离开区域的单个区域配置
#define    NET_DVR_GET_REGION_EXIT_TRIGGER                3516    //获取离开区域联动配置
#define    NET_DVR_SET_REGION_EXIT_TRIGGER                3517    //设置离开区域联动配置
#define    NET_DVR_GET_REGION_EXIT_SCHEDULE            3518    //获取离开区域布防时间配置
#define    NET_DVR_SET_REGION_EXIT_SCHEDULE            3519    //设置离开区域布防时间配置
#define    NET_DVR_GET_LOITERING_CAPABILITIES            3520    //获取徘徊侦测能力
#define    NET_DVR_GET_LOITERING_DETECTION                3521    //获取徘徊侦测配置
#define    NET_DVR_SET_LOITERING_DETECTION                3522    //设置徘徊侦测配置
#define    NET_DVR_GET_LOITERING_REGION                3523    //获取徘徊的单个区域配置
#define    NET_DVR_SET_LOITERING_REGION                3524    //设置徘徊的单个区域配置
#define    NET_DVR_GET_LOITERING_TRIGGER                3525    //获取徘徊联动配置
#define    NET_DVR_SET_LOITERING_TRIGGER                3526    //设置徘徊联动配置
#define    NET_DVR_GET_LOITERING_SCHEDULE                3527    //获取徘徊布防时间配置
#define    NET_DVR_SET_LOITERING_SCHEDULE                3528    //设置徘徊布防时间配置
#define    NET_DVR_GET_GROUPDETECTION_CAPABILITIES        3529    //获取人员聚集侦测能力
#define    NET_DVR_GET_GROUP_DETECTION                    3530    //获取人员聚集侦测配置
#define    NET_DVR_SET_GROUP_DETECTION                    3531    //设置人员聚集侦测配置
#define    NET_DVR_GET_GROUPDETECTION_REGION            3532    //获取人员聚集的单个区域配置
#define    NET_DVR_SET_GROUPDETECTION_REGION            3533    //设置人员聚集的单个区域配置
#define    NET_DVR_GET_GROUPDETECTION_TRIGGER            3534    //获取人员聚集联动配置
#define    NET_DVR_SET_GROUPDETECTION_TRIGGER            3535    //设置人员聚集联动配置
#define    NET_DVR_GET_GROUPDETECTION_SCHEDULE            3536    //获取人员聚集布防时间配置
#define    NET_DVR_SET_GROUPDETECTION_SCHEDULE            3537    //设置人员聚集布防时间配置
#define    NET_DVR_GET_RAPIDMOVE_CAPABILITIES            3538    //获取快速运动侦测能力
#define    NET_DVR_GET_RAPIDMOVE_DETECTION                3539    //获取快速运动侦测配置
#define    NET_DVR_SET_RAPIDMOVE_DETECTION                3540    //设置快速运动侦测配置
#define    NET_DVR_GET_RAPIDMOVE_REGION                3541    //获取快速运动的单个区域配置
#define    NET_DVR_SET_RAPIDMOVE_REGION                3542    //设置快速运动的单个区域配置
#define    NET_DVR_GET_RAPIDMOVE_TRIGGER                3543    //获取快速运动联动配置
#define    NET_DVR_SET_RAPIDMOVE_TRIGGER                3544    //设置快速运动联动配置
#define    NET_DVR_GET_RAPIDMOVE_SCHEDULE                3545    //获取快速运动的布防时间配置
#define    NET_DVR_SET_RAPIDMOVE_SCHEDULE                3546    //设置快速运动的布防时间配置
#define    NET_DVR_GET_PATKING_CAPABILITIES            3547    //获取停车侦测能力
#define    NET_DVR_GET_PARKING_DETECTION               3548    //获取停车侦测配置
#define    NET_DVR_SET_PARKING_DETECTION                3549    //设置停车侦测配置
#define    NET_DVR_GET_PARKING_REGION                    3550    //获取停车侦测的单个区域配置
#define    NET_DVR_SET_PARKING_REGION                    3551    //设置停车侦测的单个区域配置
#define    NET_DVR_GET_PARKING_TRIGGER                    3552    //获取停车侦测联动配置
#define    NET_DVR_SET_PARKING_TRIGGER                    3553    //设置停车侦测联动配置
#define    NET_DVR_GET_PARKING_SCHEDULE                3554    //获取停车侦测的布防时间配置
#define    NET_DVR_SET_PARKING_SCHEDULE                3555    //设置停车侦测的布防时间配置
#define    NET_DVR_GET_UNATTENDED_BAGGAGE_CAPABILITIES    3556    //获取物品遗留侦测能力
#define    NET_DVR_GET_UNATTENDED_BAGGAGE_DETECTION    3557    //获取物品遗留侦测配置
#define    NET_DVR_SET_UNATTENDED_BAGGAGE_DETECTION    3558    //设置物品遗留侦测配置
#define    NET_DVR_GET_UNATTENDED_BAGGAGE_REGION        3559    //获取物品遗留侦测的单个区域配置
#define    NET_DVR_SET_UNATTENDED_BAGGAGE_REGION        3560    //设置物品遗留侦测的单个区域配置
#define    NET_DVR_GET_UNATTENDED_BAGGAGE_TRIGGER        3561    //获取物品遗留侦测联动配置
#define    NET_DVR_SET_UNATTENDED_BAGGAGE_TRIGGER        3562    //设置物品遗留侦测联动配置
#define    NET_DVR_GET_UNATTENDED_BAGGAGE_SCHEDULE        3563    //获取物品遗留侦测的布防时间配置
#define    NET_DVR_SET_UNATTENDED_BAGGAGE_SCHEDULE        3564    //设置物品遗留侦测的布防时间配置
#define    NET_DVR_GET_ATTENDEDBAGGAGE_CAPABILITIES    3565    //获取物品拿取侦测能力
#define    NET_DVR_GET_ATTENDEDBAGGAGE_DETECTION        3566    //获取物品拿取侦测配置
#define    NET_DVR_SET_ATTENDEDBAGGAGE_DETECTION        3567    //设置物品拿取侦测配置
#define    NET_DVR_GET_ATTENDEDBAGGAGE_REGION            3568    //获取物品拿取侦测的单个区域配置
#define    NET_DVR_SET_ATTENDEDBAGGAGE_REGION            3569    //设置物品拿取侦测的单个区域配置
#define    NET_DVR_GET_ATTENDEDBAGGAGE_TRIGGER            3570    //获取物品拿取侦测联动配置
#define    NET_DVR_SET_ATTENDEDBAGGAGE_TRIGGER            3571    //设置物品拿取侦测联动配置
#define    NET_DVR_GET_ATTENDEDBAGGAGE_SCHEDULE        3572    //获取物品遗留侦测的布防时间配置
#define    NET_DVR_SET_ATTENDEDBAGGAGE_SCHEDULE        3573    //设置物品拿取侦测的布防时间配置
#define    NET_DVR_GET_REGIONCLIP_CAPABILITIES            3574    //获取区域裁剪能力
#define    NET_DVR_GET_REGION_CLIP                     3575    //获取区域裁剪配置
#define    NET_DVR_SET_REGION_CLIP                     3576    //设置区域裁剪配置
#define    NET_DVR_GET_NETWORK_CAPABILITIES            3577    //获取网络能力
#define    NET_DVR_GET_WIRELESS_DIAL                     3578    //获取无线参数配置
#define    NET_DVR_SET_WIRELESS_DIAL                     3579    //设置无线参数配置
#define    NET_DVR_GET_WIRELESSDIAL_CAPABILITIES        3580    //获取无线拨号参数能力
#define    NET_DVR_GET_WIRELESSDIAL_SCHEDULE            3581    //获取拨号计划配置
#define    NET_DVR_SET_WIRELESSDIAL_SCHEDULE            3582    //设置拨号计划配置
#define    NET_DVR_GET_WIRELESSDIAL_STATUS             3583    //获取拨号状态
#define    NET_DVR_GET_REGION_ENTRANCE_SCHEDULE_CAPABILITIES    3584    //获取进入区域侦测布防时间能力
#define    NET_DVR_GET_REGION_EXITING_SCHEDULE_CAPABILITIES    3585    //获取离开区域侦测布防时间能力
#define    NET_DVR_GET_LOITERING_SCHEDULE_CAPABILITIES    3586    //获取徘徊侦测布防时间能力
#define    NET_DVR_GET_GROUP_SCHEDULE_CAPABILITIES    3587    //获取人员聚集侦测布防时间能力
#define    NET_DVR_GET_RAPIDMOVE_SCHEDULE_CAPABILITIES    3588    //获取快速运动侦测布防时间能力
#define    NET_DVR_GET_PARKING_SCHEDULE_CAPABILITIES    3589    //获取停车侦测布防时间能力
#define    NET_DVR_GET_UNATTENDEDBAGGAGE_SCHEDULE_CAPABILITIES    3590    //获取物品遗留侦测布防时间能力
#define    NET_DVR_GET_ATTENDEDBAGGAGE_SCHEDULE_CAPABILITIES    3591    //获取物品拿取侦测布防时间能力
#define    NET_DVR_GET_WIRELESSDIAL_SCHEDULE_CAPABILITIES    3592    //获取拨号计划能力
#define    NET_DVR_WIRELESSDIAL_CONNECT    3593    //控制无线网络连网断网

#define    NET_DVR_GET_LITESTORAGE                    3594    //获取轻存储配置
#define    NET_DVR_SET_LITESTORAGE                    3595    //设置轻存储配置
#define    NET_DVR_GET_LITESTORAGE_CAPABILITIES    3596    //获取轻存储能力

#define    NET_DVR_GET_VEHICLE_CAPABILITIES    3597    //获取车俩检测标定能力
#define    NET_DVR_GET_VEHICLE_CALIBRATION     3598    //获取车辆检测标定

#define    NET_DVR_GET_SLAVECAMERA_CAPABILITIES    3599    //获取从摄像机IP信息配置能力
#define    NET_DVR_GET_SLAVECAMERA                    3600    //获取从摄像机IP信息配置
#define    NET_DVR_SET_SLAVECAMERA                    3601    //设置从摄像机IP信息配置
#define    NET_DVR_GET_SLAVECAMERA_STATUS            3602    //获取从摄像机连接状态
#define    NET_DVR_GET_SLAVECAMERA_CALIB_CAPABILITIES    3603  //获取从摄像机配置&&标定能力
#define    NET_DVR_GET_SLAVECAMERA_CALIB            3604    //获取从摄像机标定配置
#define    NET_DVR_SET_SLAVECAMERA_CALIB            3605    //设置从摄像机标定配置
#define NET_DVR_GET_PHY_RATIO                    3606    //获取物理倍率坐标信息
#define NET_DVR_SET_PHY_RATIO                    3607    //设置物理倍率坐标信息
#define NET_DVR_GET_MASTERSLAVETRACKING_CAPABILITIES   3608  //获取主从跟踪能力
#define    NET_DVR_SET_TRACKINGRATIO                3610    //设置从摄像机跟踪倍率
#define    NET_DVR_GET_TRACKING                    3611    //获取主从跟踪功能相机跟踪配置
#define    NET_DVR_SET_TRACKING                    3612    //设置主从跟踪功能相机跟踪配置
#define    NET_DVR_GET_TRACKING_CAPABILITIES        3613    //获取主从跟踪功能相机跟踪配置能力

#define    NET_DVR_GET_SLAVECAMERA_CALIB_V50        3614    //获取从摄像机标定配置V50
#define    NET_DVR_SET_SLAVECAMERA_CALIB_V50        3615    //设置从摄像机标定配置V50
#define    NET_DVR_SET_TRACKINGRATIO_MANUAL        3616    //设置从摄像机手动跟踪倍率
#define    NET_DVR_GET_TRACKINGRATIO_MANUAL        3617    //获取从摄像机手动跟踪倍率
#define    NET_DVR_SET_TRACK_INITPOSTION            3618    //设置从摄像机初始跟踪位置
#define    NET_DVR_GET_PTZ_CAPABILITIES            3619    //获取ptz球机控制能力

#define    NET_DVR_GET_THERMOMETRY_BASICPARAM_CAPABILITIES    3620 //获取测温配置能力
#define    NET_DVR_GET_THERMOMETRY_BASICPARAM      3621    //获取测温配置参数
#define    NET_DVR_SET_THERMOMETRY_BASICPARAM        3622    //设置测温配置参数
#define    NET_DVR_GET_THERMOMETRY_SCENE_CAPABILITIES    3623 //获取测温预置点关联配置能力
#define    NET_DVR_GET_THERMOMETRY_PRESETINFO      3624    //获取测温预置点关联配置参数
#define    NET_DVR_SET_THERMOMETRY_PRESETINFO        3625    //设置测温预置点关联配置参数
#define    NET_DVR_GET_THERMOMETRY_ALARMRULE_CAPABILITIES    3626//获取测温报警方式配置能力
#define    NET_DVR_GET_THERMOMETRY_ALARMRULE       3627    //获取测温预置点报警规则配置参数
#define    NET_DVR_SET_THERMOMETRY_ALARMRULE        3628    //设置测温预置点报警规则配置参数
#define    NET_DVR_GET_REALTIME_THERMOMETRY        3629    //实时温度检测
#define    NET_DVR_GET_THERMOMETRY_DIFFCOMPARISON  3630    //获取测温预置点温差规则配置参数
#define    NET_DVR_SET_THERMOMETRY_DIFFCOMPARISON    3631    //设置测温预置点温差规则配置参数
#define    NET_DVR_GET_THERMOMETRY_TRIGGER            3632    //获取测温联动配置
#define    NET_DVR_SET_THERMOMETRY_TRIGGER            3633    //设置测温联动配置

#define    NET_DVR_GET_THERMAL_CAPABILITIES        3634    //获取热成像（Thermal）能力
#define    NET_DVR_GET_FIREDETECTION_CAPABILITIES    3635    //获取火点检测配置能力
#define    NET_DVR_GET_FIREDETECTION               3636    //获取火点检测参数
#define    NET_DVR_SET_FIREDETECTION               3637    //设置火点检测参数
#define    NET_DVR_GET_FIREDETECTION_TRIGGER       3638    //获取火点检测联动配置
#define    NET_DVR_SET_FIREDETECTION_TRIGGER        3639    //设置火点检测联动配置

#define NET_DVR_GET_OIS_CAPABILITIES            3640    //获取光学防抖参数配置能力
#define NET_DVR_GET_OIS_CFG                     3641    //获取光学防抖配置
#define NET_DVR_SET_OIS_CFG                     3642    //设置光学防抖配置
#define NET_DVR_GET_MACFILTER_CAPABILITIES      3643    //获取MAC地址过滤配置能力
#define NET_DVR_GET_MACFILTER_CFG               3644    //获取MAC地址过滤配置
#define NET_DVR_SET_MACFILTER_CFG               3645    //设置MAC地址过滤配置
#define NET_DVR_GET_EAGLEFOCUS_CALCFG_CAPABILITIES   3646    //鹰视聚焦标定配置能力
#define NET_DVR_GET_EAGLEFOCUSING_CALCFG        3647    //获取鹰视聚焦标定配置
#define NET_DVR_SET_EAGLEFOCUSING_CALCFG        3648    //设置鹰视聚焦标定配置
#define NET_DVR_GET_EAGLEFOCUSING_CFG_CAPABILITIES   3649   //获取鹰视聚焦配置能力
#define NET_DVR_GET_EAGLEFOCUSING_CTRL          3650    //获取鹰视聚焦配置
#define NET_DVR_SET_EAGLEFOCUSING_CTRL          3651    //设置鹰视聚焦配置

#define    NET_DVR_GET_PXOFFLINE_CAPABILITIES      3652    //获取停车场票箱脱机下参数配置 能力
#define    NET_DVR_SET_PXOFFLINE_CFG                3653    //设置停车场票箱脱机下参数配置信息
#define    NET_DVR_GET_PXOFFLINE_CFG                3654    //获取停车场票箱脱机下参数配置信息
#define    NET_DVR_GET_PAPERCHARGEINFO_CAPABILITIES  3655  //获取停车场出入口纸票信息下发 能力
#define    NET_DVR_SET_PAPERCHARGEINFO                3656    //设置停车场出入口纸票信息下发
#define    NET_DVR_GET_PARKINGSAPCE_CAPABILITIES    3657    //获取停车场出入口停车位信息下发 能力
#define    NET_DVR_SET_PARKINGSAPCE_INFO            3658    //设置停车场出入口停车位信息下发
#define    NET_DVR_GET_PXMULTICTRL_CAPABILITIES    3659    //获取停车场票箱从属设备多角度参数配置 能力
#define    NET_DVR_GET_CHARGEACCOUNT_CAPABILITIES    3661    //获取停车场票箱参数配置能力
#define    NET_DVR_SET_CHARGE_ACCOUNTINFO          3662    //设置缴费金额信息
#define    NET_DVR_SET_PXMULTICTRL_CFG                3663    //设置停车场票箱从属设备多角度参数配置信息
#define    NET_DVR_GET_PXMULTICTRL_CFG                3664    //获取停车场票箱从属设备多角度参数配置信息
#define    NET_DVR_GET_TME_CHARGERULE              3665    //获取停车场出入口车卡收费规则规则
#define    NET_DVR_SET_TME_CHARGERULE                3666    //设置停车场出入口车卡收费规则规则
#define    NET_DVR_GET_TME_CHARGERULE_CAPABILITIES 3667    //获取停车场出入口 车卡收费信息配置能力
#define    NET_DVR_GET_ILLEGALCARDFILTERING_CAPABILITIES  3668    //获取停车场票箱参数配置能力
#define    NET_DVR_GET_ILLEGALCARDFILTERING_CFG    3669    //获取停车场票箱参数配置
#define    NET_DVR_SET_ILLEGALCARDFILTERING_CFG    3670    //设置停车场票箱参数配置
#define    NET_DVR_GET_LEDDISPLAY_CAPABILITIES        3671    //获取LED屏幕显示参数配置参数能力
#define    NET_DVR_SET_LEDDISPLAY_CFG              3672    //设置LED屏幕显示参数
#define    NET_DVR_GET_LEDDISPLAY_CFG              3673    //获取LED屏幕显示参数
#define    NET_DVR_GET_VOICEBROADCAST_CAPABILITIES    3674    //获取语音播报控制参数配置参数能力
#define    NET_DVR_SET_VOICEBROADCAST_CFG          3675    //设置语音播报控制参数
#define    NET_DVR_GET_PAPERPRINTFORMAT_CAPABILITIES    3676//获取纸票打印格式配置能力
#define    NET_DVR_GET_PAPERPRINTFORMAT_CFG        3677    //获取纸票打印格式参数配置
#define    NET_DVR_SET_PAPERPRINTFORMAT_CFG        3678    //设置纸票打印格式参数配置
#define    NET_DVR_GET_LOCkGATE_CAPABILITIES       3679    //获取智能锁闸配置能力
#define    NET_DVR_GET_LOCKGATE_CFG                3680    //获取智能锁闸参数配置
#define    NET_DVR_SET_LOCKGATE_CFG                3681    //设置智能锁闸参数配置
#define NET_DVR_GET_PARKING_DATASTATE            3682    //获取数据同步状态
#define NET_DVR_SET_PARKING_DATASTATE           3683    //设置数据同步状态
#define    NET_DVR_GET_TME_CAPABILITIES            3684    //获取停车场出入口设备 能力

#define    NET_DVR_GET_TMEVOICE_CAPABILITIES       3686    //获取语音配置信息能力
#define    NET_DVR_SET_TMEVOICE_CFG                3687    //设置语音参数配置
#define    NET_DVR_GET_TMEVOICE_CFG                3688    //获取语音参数配置
#define    NET_DVR_DEL_TMEVOICE_CFG                3689    //删除语音参数配置
#define    NET_DVR_GET_POSITION                    3698    // 获取方位矫正配置参数
#define    NET_DVR_SET_POSITION                    3699    // 设置方位矫正配置参数
#define    NET_DVR_GET_CENTRALIZEDCTRL_CAPABILITIES    3700//获取集中布控能力
#define    NET_DVR_GET_CENTRALIZEDCTRL                3701//获取集中布控参数配置
#define    NET_DVR_SET_CENTRALIZEDCTRL              3702//设置集中布控参数配置
#define    NET_DVR_GET_COMPASS_CAPABILITIES        3703//获取电子罗盘能力
#define    NET_DVR_GET_VANDALPROOFALARM              3704//获取防破坏报警参数配置
#define    NET_DVR_SET_VANDALPROOFALARM            3705//设置防破坏报警参数配置
#define    NET_DVR_COMPASS_CALIBRATE_CTRL            3706//电子罗盘矫正控制接口
#define    NET_DVR_COMPASS_NORTH_CTRL                3707//电子罗盘指向正北控制接口
#define    NET_DVR_GET_AZIMUTHINFO                    3708//获取方位角度参数配置


#define    NET_DVR_GET_SATELLITETIME                3709//获取卫星定位参数配置
#define    NET_DVR_SET_SATELLITETIME                3710//设置卫星定位参数配置
#define    NET_DVR_GET_GISINFO                     3711//获取当前球机的GIS信息数据
#define    NET_DVR_GET_STREAMING_CAPABILITIES        3712//获取视频流的能力
#define    NET_DVR_GET_REFRESHFRAME_CAPABILITIES    3713//获取刷新帧的能力
#define    NET_DVR_STREAMING_REFRESH_FRAME            3714//取流预览的强制刷新帧
#define    NET_DVR_FACECAPTURE_STATISTICS            3715//长连接人员统计
#define    NET_DVR_GET_WIRELESSSERVER_CAPABILITIES    3716    //获取热点功能配置协议的能力
#define    NET_DVR_GET_WIRELESSSERVER                3717    //获取热点功能配置协议
#define    NET_DVR_SET_WIRELESSSERVER                3718    //设置热点功能配置协议
#define    NET_DVR_GET_CONNECT_LIST_CAPABILITIES    3719    //获取连接设备列表信息的能力
#define    NET_DVR_GET_THSCREEN_CAPABILITIES        3720 //获取温湿度配置协议的能力
#define    NET_DVR_GET_THSCREEN                    3721 //获取温湿度配置协议
#define    NET_DVR_GET_EXTERNALDEVICE_CAPABILITIES    3722//获取外设配置协议的能力
#define    NET_DVR_GET_EXTERNALDEVICE              3723//获取外设配置协议
#define    NET_DVR_SET_EXTERNALDEVICE                3724//设置外设配置协议
#define    NET_DVR_GET_LEDDISPLAYINFO_CAPABILITIES     3725   //获取LED显示信息的能力
#define    NET_DVR_SET_LEDDISPLAYINFO                 3726   //设置LED显示信息
#define    NET_DVR_GET_SUPPLEMENTLIGHT_CAPABILITIES 3727   //获取内置补光灯配置协议的能力 (球机支持，软件实现，补光灯是设计在设备内部的)
#define    NET_DVR_GET_SUPPLEMENTLIGHT                 3728    //获取内置补光灯配置协议
#define    NET_DVR_SET_SUPPLEMENTLIGHT                 3729    //设置内置补光灯配置协议
#define    NET_DVR_SET_THSCREEN                     3730 //设置温湿度配置协议
#define    NET_DVR_GET_LOWPOWER_CAPABILITIES        3731   //获取低功耗配置协议的能力
#define    NET_DVR_GET_LOWPOWER                     3732    //获取低功耗配置协议
#define    NET_DVR_SET_LOWPOWER                     3733    //设置低功耗配置协议
#define    NET_DVR_GET_ZOOMLINKAGE_CAPABILITIES     3734   //获取变倍联动配置协议的能力
#define    NET_DVR_GET_ZOOMLINKAGE                     3735    //获取变倍联动配置协议
#define    NET_DVR_SET_ZOOMLINKAGE                     3736    //设置变倍联动配置协议
#define    NET_DVR_THSCREEN_TIMING                     3737    //温湿度
#define NET_DVR_GET_OSD_BATTERY_POWER_CFG        3741        //获取OSD电池电量显示参数
#define NET_DVR_SET_OSD_BATTERY_POWER_CFG        3742        //设置OSD电池电量显示参数
#define    NET_DVR_GET_OSD_BATTERY_POWER_CFG_CAPABILITIES    3743//OSD电池电量显示参数的能力
#define    NET_DVR_GET_VANDALPROOFALARM_TRIGGER    3744    //获取防破坏报警联动配置
#define    NET_DVR_SET_VANDALPROOFALARM_TRIGGER    3745    //设置防破坏报警联动配置
#define    NET_DVR_GET_PANORAMAIMAGE_CAPABILITIES    3746    //获取全景图像的能力
#define    NET_DVR_GET_PANORAMAIMAGE                3747    //获取全景图像参数的协议
#define    NET_DVR_SET_PANORAMAIMAGE                3748    //设置全景图像参数的协议
#define    NET_DVR_GET_STREAMENCRYPTION            3749    //获取码流加密配置
#define    NET_DVR_SET_STREAMENCRYPTION            3750    //设置码流加密配置
#define    NET_DVR_GET_STREAMENCRYPTION_CAPABILITIES 3751  //获取码流加密能力
#define    NET_DVR_GET_REVISE_GPS_CAPABILITIES     3752    //获取校准GPS经纬度能力
#define    NET_DVR_GET_REVISE_GPS                  3753    //获取校准GPS经纬度能力
#define    NET_DVR_SET_REVISE_GPS                  3754    //设置校准GPS经纬度能力
#define NET_DVR_GET_PDC_RECOMMEND                3755    //获取客流统计表示推荐值
#define NET_DVR_REMOVE_FLASHSTORAGE                3756    //客流数据清除操作
#define    NET_DVR_GET_COUNTING_CAPABILITIES        3757    //获取客流量统计能力
#define    NET_DVR_SET_SENSOR_ADJUSTMENT            3758    //设置Sensor 调节参数的协议
#define    NET_DVR_GET_SENSOR_ADJUSTMENT_CAPABILITIES        3759    //获取Sensor 调节参数的协议的能力
#define    NET_DVR_GET_WIRELESSSERVER_FULLVERSION_CFG         3760    //获取wifi热点参数配置(完整版)
#define    NET_DVR_SET_WIRELESSSERVER_FULLVERSION_CFG         3761    //设置wifi热点参数配置(完整版)
#define    NET_DVR_GET_ONLINEUSER_INFO                3762    //长连接获取用户在线信息
#define    NET_DVR_GET_SENSOR_ADJUSTMENT_INFO        3763    //获取指定sensor调节参数
#define NET_DVR_SENSOR_RESET_CTRL               3764    //Sensor 调节复位

#define    NET_DVR_GET_POSTRADAR_CAPABILITIES        3765    //获取雷达测速配置能力
#define    NET_DVR_GET_POSTRADARSPEED_CFG          3766    //获取雷达测速配置
#define    NET_DVR_SET_POSTRADARSPEED_CFG          3767    //设置雷达测速配置
#define    NET_DVR_GET_POSTRADARSPEED_RECOM_CFG    3768    //获取雷达测速推荐值
#define    NET_DVR_GET_POSTRADARPARAM_CFG          3769    //获取雷达参数配置
#define    NET_DVR_SET_POSTRADARPARAM_CFG          3770    //设置雷达参数配置
#define    NET_DVR_GET_POSTRADARPARAM_RECOM_CFG    3771    //获取雷达参数推荐值

#define NET_DVR_GET_ENCRYPT_DEVICE_INFO        3772   //获取加密设备信息
#define NET_DVR_GET_ANR_ARMING_HOST            3773  //获取断网续传的主机信息
#define NET_DVR_GET_FIRMWARE_VERSION    3776    //GET firmware version
/********************************IPC基线FF车牌****************************/
#define    NET_DVR_GET_FTP_CAPABILITIES            3782    //获取ftp能力
#define    NET_DVR_GET_FTPUPLOAD_CFG                3783    //获取ftp上传信息规整参数
#define    NET_DVR_SET_FTPUPLOAD_CFG                3784    //设置ftp上传信息规整参数
#define NET_DVR_GET_VEHICLE_INFORMATION             3785 //获取车辆信息
#define    NET_DVR_GET_DDNS_COUNTRY_ABILITY        3800//获取设备支持的DDNS国家能力列表
#define NET_DVR_GET_DEVICECFG_V50    3801    //获取设备参数
#define NET_DVR_SET_DEVICECFG_V50    3802    //设置设备参数
#define  NET_DVR_SET_VEHICLE_RECOG_TASK_V50    3851  //车辆二次识别任务提交V50扩展
#define NET_DVR_GET_SMARTCALIBRATION_CAPABILITIES    3900// Smart行为标定过滤尺寸功能能力
#define NET_DVR_GET_TEMPERATURE_TRIGGER              3903    //获取测温差联动配置
#define NET_DVR_SET_TEMPERATURE_TRIGGER              3904    //设置测温差联动配置

#define    NET_DVR_GET_SMARTCALIBRATION_CFG             3910 //获取Smart行为标定过滤尺寸功能
#define    NET_DVR_SET_SMARTCALIBRATION_CFG             3911  //设置Smart行为标定过滤尺寸功能
#define NET_DVR_POST_SETUP_CALIB                     3912  //架设标定
#define NET_DVR_SET_POS_INFO_OVERLAY                 3913//设置Pos信息码流叠加控制
#define NET_DVR_GET_POS_INFO_OVERLAY                 3914//获取Pos信息码流叠加控制
#define NET_DVR_GET_CAMERA_WORK_MODE                 3915  //设置相机工作模式参数
#define NET_DVR_SET_CAMERA_WORK_MODE                 3916  //获取相机工作模式参数
#define NET_DVR_GET_RESOLUTION_SWITCH_CAPABILITIES   3917  //获取分辨率模式切换能力
#define NET_DVR_GET_RESOLUTION_SWITCH                3918    //获取分辨率模式切换配置
#define NET_DVR_SET_RESOLUTION_SWITCH                3919     //设置分辨率模式切换配置
#define NET_DVR_GET_CONFIRM_MECHANISM_CAPABILITIES   3920    //报警上传确认机制控制能力
#define NET_DVR_CONFIRM_MECHANISM_CTRL               3921    //报警上传确认机制控制
#define NET_DVR_GET_VEHICLLE_RESULT_CAPABILITIES     3951   //获取获取车辆信息结果能力
#define NET_DVR_GET_CALIB_CAPABILITIES               3952//获取架设标定能力
#define NET_DVR_GET_POSINFO_OVERLAY_CAPABILITIES     3953//获取获取Pos叠加能力
#define NET_DVR_SET_POSINFO_OVERLAY                  3960//设置Pos叠加
#define NET_DVR_GET_POSINFO_OVERLAY                  3961//获取Pos叠加
#define NET_DVR_GET_FACELIB_TRIGGER                  3962   //获取人脸比对库的联动配置
#define NET_DVR_SET_FACELIB_TRIGGER                  3963   //设置人脸比对库的联动配置
#define NET_DVR_GET_FACECONTRAST_TRIGGER             3965//获取人脸比对联动配置
#define NET_DVR_SET_FACECONTRAST_TRIGGER             3966//设置人脸比对联动配置
#define NET_DVR_GET_FACECONTRAST_SCHEDULE_CAPABILITIES 3967 //获取人脸比对布防时间能力
#define NET_DVR_GET_FACECONTRAST_SCHEDULE            3968//获取人脸比对布防时间配置
#define NET_DVR_SET_FACECONTRAST_SCHEDULE            3969//设置人脸比对布防时间配置
#define NET_DVR_GET_FACELIB_SCHEDULE_CAPABILITIES    3970 //获取人脸比对库的布防时间能力
#define NET_DVR_GET_VCA_VERSION_LIST                 3973//获取算法库版本
#define NET_DVR_GET_SETUP_CALIB                      3974//获取架设标定
#define NET_DVR_GET_PANORAMA_LINKAGE                 3975//获取联动抓图上传使能配置
#define NET_DVR_SET_PANORAMA_LINKAGE                 3976//设置联动抓图上传使能配置
#define NET_DVR_GET_FACELIB_SCHEDULE                 3977 //获取人脸比对库的布防时间配置
#define NET_DVR_SET_FACELIB_SCHEDULE                 3978 //设置人脸比对库的布防时间配置
#define NET_DVR_GET_SOFTWARE_SERVICE_CAPABILITIES    3980//获取软件服务能力
#define NET_DVR_GET_SOFTWARE_SERVICE                 3981//获取软件服务配置
#define NET_DVR_SET_SOFTWARE_SERVICE                 3982//设置软件服务配置
#define NET_DVR_GET_PREVIEW_MODE_CAPABILITIES        3983//获取预览模式配置能力
#define NET_DVR_SET_EAGLE_FOCUS_GOTOSCENE            3984//鹰式聚焦设置摄像机转向指定的场景ID
#define NET_DVR_EAGLE_FOCUS_SCENE_DEL                3985//删除鹰式聚焦标定的场景
#define NET_DVR_ONE_KEY_CONFIG_SAN_V50               4152  //一键配置SAN(V50)
#define NET_DVR_GET_HDCFG_V50                        4153  //获取硬盘信息参数V50
#define NET_DVR_SET_HDCFG_V50                        4154  //设置硬盘信息参数V50
#define NET_DVR_GET_HDVOLUME_CFG                     4155  //获取硬盘卷信息
#define NET_DVR_SET_HDVOLUME_CFG                     4156  //设置硬盘卷信息
#define NET_DVR_GET_POWER_SUPPLY_CABINET_TRIGGER     4157  //获取机柜供电检测的联动配置
#define NET_DVR_SET_POWER_SUPPLY_CABINET_TRIGGER     4158  //设置机柜供电检测的联动配置
#define NET_DVR_GET_SENSOR_TRIGGER                   4159  //获取传感器检测的联动配置
#define NET_DVR_SET_SENSOR_TRIGGER                   4160  //设置传感器检测的联动配置
#define	NET_DVR_GET_FACESNAP_TRIGGER                 4161  //获取人脸抓拍联动配置
#define	NET_DVR_SET_FACESNAP_TRIGGER	             4162  //设置人脸抓拍联动配置
#define NET_DVR_GET_FACESNAP_SCHEDULE_CAPABILITIES   4163  //获取人脸抓拍布防时间能力
#define NET_DVR_GET_FACESNAP_SCHEDULE                4164  //获取人脸抓拍布防时间配置
#define NET_DVR_SET_FACESNAP_SCHEDULE                4165  //设置人脸抓拍布防时间配置

/********************************NVR_后端产品线****************************/
#define NET_DVR_GET_MUTEX_FUNCTION              4353  //获取功能互斥信息

#define NET_DVR_GET_SINGLE_CHANNELINFO          4360  //获取单个通道属性数据
#define NET_DVR_GET_CHANNELINFO                 4361  //获取通道属性数据
#define NET_DVR_CHECK_LOGIN_PASSWORDCFG                 4362  //用户登录密码校验
#define NET_DVR_GET_SINGLE_SECURITY_QUESTION_CFG        4363    //获取单个设备安全问题
#define NET_DVR_SET_SINGLE_SECURITY_QUESTION_CFG        4364    //设置单个设备安全问题
#define NET_DVR_GET_SECURITY_QUESTION_CFG       4365    //获取设备安全问题
#define NET_DVR_SET_SECURITY_QUESTION_CFG       4366    //设置设备安全问题
#define NET_DVR_GET_ONLINEUSERLIST_SC           4367  //远程获取登陆用户信息（短连接）

#define NET_DVR_GET_BLACKLIST_FACECONTRAST_TRIGGER   4368   //获取黑名单人脸比对联动配置
#define NET_DVR_SET_BLACKLIST_FACECONTRAST_TRIGGER   4369   //设置黑名单人脸比对联动配置
#define NET_DVR_GET_WHITELIST_FACECONTRAST_TRIGGER   4370   //获取白名单人脸比对联动配置
#define NET_DVR_SET_WHITELIST_FACECONTRAST_TRIGGER   4371   //设置白名单人脸比对联动配置
#define NET_DVR_GET_BLACKLIST_FACECONTRAST_SCHEDULE_CAPABILITIES 4372 //获取黑名单人脸比对布防时间能力
#define NET_DVR_GET_BLACKLIST_FACECONTRAST_SCHEDULE  4373   //获取黑名单人脸比对布防时间配置
#define NET_DVR_SET_BLACKLIST_FACECONTRAST_SCHEDULE  4374   //设置黑名单人脸比对布防时间配置
#define NET_DVR_GET_WHITELIST_FACECONTRAST_SCHEDULE_CAPABILITIES 4375 //获取白名单人脸比对布防时间能力
#define NET_DVR_GET_WHITELIST_FACECONTRAST_SCHEDULE  4376 //获取白名单人脸比对布防时间配置
#define NET_DVR_SET_WHITELIST_FACECONTRAST_SCHEDULE  4377 //设置白名单人脸比对布防时间配置

#define NET_DVR_GET_HUMAN_RECOGNITION_SCHEDULE_CAPABILITIES 4378 //获取人体识别布防时间能力
#define NET_DVR_GET_HUMAN_RECOGNITION_SCHEDULE 4379 //获取人体识别布防时间配置
#define NET_DVR_SET_HUMAN_RECOGNITION_SCHEDULE 4380 //设置人体识别布防时间配置
#define NET_DVR_GET_HUMAN_RECOGNITION_TRIGGER               4381 //获取人体识别联动配置
#define NET_DVR_SET_HUMAN_RECOGNITION_TRIGGER               4382 //设置人体识别联动配置
#define NET_DVR_GET_GBT28181_AUDIO_OUTPUT_CFG               4383 //获取GBT28181协议接入设备的语音对讲信息
#define NET_DVR_SET_GBT28181_AUDIO_OUTPUT_CFG               4384 //设置GBT28181协议接入设备的语音对讲信息

#define NET_DVR_GET_STUDENTS_STOODUP_TRIGGER         4386   //获取学生起立检测联动配置
#define NET_DVR_SET_STUDENTS_STOODUP_TRIGGER         4387   //设置学生起立检测联动配置
#define NET_DVR_GET_FRAMES_PEOPLE_COUNTING_SCHEDULE_CAPABILITIES    4388 //获取区域人数统计布防时间能力
#define NET_DVR_GET_FRAMES_PEOPLE_COUNTING_SCHEDULE  4389    //获取区域人数统计布防时间配置
#define NET_DVR_SET_FRAMES_PEOPLE_COUNTING_SCHEDULE  4390    //设置区域人数统计布防时间配置
#define NET_DVR_GET_FRAMES_PEOPLE_COUNTING_TRIGGER   4391   //获取区域人数统计联动配置
#define NET_DVR_SET_FRAMES_PEOPLE_COUNTING_TRIGGER   4392   //设置区域人数统计联动配置

#define NET_DVR_GET_PERSONDENSITY_TRIGGER   4393   //获取人员密度检测的联动配置
#define NET_DVR_SET_PERSONDENSITY_TRIGGER   4394   //设置人员密度检测的联动配置
#define NET_DVR_GET_PERSONDENSITY_SCHEDULE_CAPABILITIES 4395 //获取人员密度检测的布防时间能力
#define NET_DVR_GET_PERSONDENSITY_SCHEDULE 4396 //获取人员密度检测的布防时间配置
#define NET_DVR_SET_PERSONDENSITY_SCHEDULE 4397 //设置人员密度检测的布防时间配置

#define NET_DVR_GET_STUDENTS_STOODUP_SCHEDULE_CAPABILITIES  4398 //获取学生起立检测布防时间能力
#define NET_DVR_GET_STUDENTS_STOODUP_SCHEDULE        4399    //获取学生起立检测布防时间配置
#define NET_DVR_SET_STUDENTS_STOODUP_SCHEDULE        4400    //设置学生起立检测布防时间配置

#define NET_DVR_SET_FACE_THERMOMETRY_TRIGGER         4401 //设置人脸测温联动配置
#define NET_DVR_GET_FACE_THERMOMETRY_SCHEDULE_CAPABILITIES 4402 //获取人脸测温布防时间能力
#define NET_DVR_GET_FACE_THERMOMETRY_SCHEDULE        4403 //获取人脸测温布防时间配置
#define NET_DVR_SET_FACE_THERMOMETRY_SCHEDULE        4404 //设置人脸测温布防时间配置
#define NET_DVR_GET_FACE_THERMOMETRY_TRIGGER         4405 //获取人脸测温联动配置

/********************************智能人脸识别****************************/
#define NET_DVR_GET_FACESNAPCFG                 5001  //获取人脸抓拍参数
#define NET_DVR_SET_FACESNAPCFG                 5002  //设置人脸抓拍参数
#define NET_DVR_GET_DEVACCESS_CFG               5005  //获取接入设备参数
#define NET_DVR_SET_DEVACCESS_CFG               5006  //设置接入设备参数
#define NET_DVR_GET_SAVE_PATH_CFG               5007  //获取存储信息参数
#define NET_DVR_SET_SAVE_PATH_CFG               5008  //设置存储信息参数
#define NET_VCA_GET_RULECFG_V41                    5011  //获取行为分析参数(扩展)
#define NET_VCA_SET_RULECFG_V41                    5012  //设置行为分析参数(扩展)
#define NET_DVR_GET_AID_RULECFG_V41             5013  //获取交通事件规则参数
#define NET_DVR_SET_AID_RULECFG_V41             5014  //设置交通事件规则参数
#define NET_DVR_GET_TPS_RULECFG_V41             5015  //获取交通统计规则参数(扩展)
#define NET_DVR_SET_TPS_RULECFG_V41             5016  //设置交通统计规则参数(扩展)
#define NET_VCA_GET_FACEDETECT_RULECFG_V41      5017  //获取ATM人脸检测规则(扩展)
#define NET_VCA_SET_FACEDETECT_RULECFG_V41      5018  //设置ATM人脸检测规则(扩展)
#define NET_DVR_GET_PDC_RULECFG_V41             5019  //设置人流量统计规则(扩展)
#define NET_DVR_SET_PDC_RULECFG_V41             5020  //获取人流量统计规则(扩展)
#define NET_DVR_GET_TRIAL_VERSION_CFG           5021  //获取试用版信息
#define NET_DVR_GET_VCA_CTRLINFO_CFG            5022  //批量获取智能控制参数
#define NET_DVR_SET_VCA_CTRLINFO_CFG            5023  //批量设置智能控制参数
#define NET_DVR_SYN_CHANNEL_NAME                5024  //同步通道名
#define NET_DVR_GET_RESET_COUNTER               5025  //获取统计数据清零参数（人流量、交通统计）
#define NET_DVR_SET_RESET_COUNTER               5026  //设置统计数据清零参数（人流量、交通统计）
#define NET_DVR_GET_OBJECT_COLOR                5027  //获取物体颜色属性
#define NET_DVR_SET_OBJECT_COLOR                5028  //设置物体颜色属性
#define NET_DVR_GET_AUX_AREA                    5029  //获取辅助区域
#define NET_DVR_SET_AUX_AREA                    5030  //设置辅助区域
#define NET_DVR_GET_CHAN_WORKMODE               5031  //获取通道工作模式
#define NET_DVR_SET_CHAN_WORKMODE               5032  //设置通道工作模式
#define NET_DVR_GET_SLAVE_CHANNEL               5033  //获取从通道参数
#define NET_DVR_SET_SLAVE_CHANNEL               5034  //设置从通道参数
#define NET_DVR_GET_VQD_EVENT_RULE              5035  //获取视频质量诊断事件规则
#define NET_DVR_SET_VQD_EVENT_RULE              5036  //设置视频质量诊断事件规则
#define NET_DVR_GET_BASELINE_SCENE              5037  //获取基准场景参数
#define NET_DVR_SET_BASELINE_SCENE              5038  //设置基准场景参数
#define NET_DVR_CONTROL_BASELINE_SCENE          5039  //基准场景操作
#define NET_DVR_SET_VCA_DETION_CFG                5040  //设置智能移动参数配置
#define NET_DVR_GET_VCA_DETION_CFG                5041  //获取智能移动参数配置
#define NET_DVR_GET_STREAM_ATTACHINFO_CFG       5042  //获取码流附加信息配置
#define NET_DVR_SET_STREAM_ATTACHINFO_CFG       5043  //设置码流附加信息配置

#define NET_DVR_GET_BV_CALIB_TYPE               5044  //获取双目标定类型
#define NET_DVR_CONTROL_BV_SAMPLE_CALIB         5045  //双目样本标定
#define NET_DVR_GET_BV_SAMPLE_CALIB_CFG         5046  //获取双目标定参数
#define NET_DVR_GET_RULECFG_V42                    5049  //获取行为分析参数(支持16条规则扩展)
#define NET_DVR_SET_RULECFG_V42                    5050  //设置行为分析参数(支持16条规则扩展)
#define NET_DVR_SET_VCA_DETION_CFG_V40            5051  //设置智能移动参数配置
#define NET_DVR_GET_VCA_DETION_CFG_V40          5052  //获取智能移动参数配置
#define NET_DVR_SET_FLASH_CFG                   5110  //写入数据到Flash 测试使用
/********************************智能人脸识别 end****************************/

//2014-12-03
#define    NET_DVR_GET_T1TEST_CFG   5053     //产线测试配置接口（获取）
#define    NET_DVR_SET_T1TEST_CFG   5054     ////产线测试配置接口（设置）

/********************************ITS****************************/
#define NET_ITS_GET_OVERLAP_CFG_V50                5055  //获取字符叠加参数配置扩展
#define NET_ITS_SET_OVERLAP_CFG_V50                5056  //设置字符叠加参数配置扩展

#define NET_DVR_GET_PARKLAMP_STATE                5057  //获取停车场信号灯状态信息
#define NET_DVR_GET_CLOUDSTORAGE_CFG            5058  //获取云存储配置参数
#define NET_DVR_SET_CLOUDSTORAGE_CFG            5059  //设置云存储配置参数

#define NET_ITS_GET_BASE_INFO                    5060  //获取终端基本信息
#define NET_DVR_GET_SENSOR_INFO                 5061  //传感器信息查询
#define    NET_DVR_SET_SENSOR_SWITCH                5062  //传感器远程控制
#define NET_ITS_GET_IMGMERGE_CFG                5063  //获取图片合成配置参数
#define NET_ITS_SET_IMGMERGE_CFG                5064  //设置图片合成配置参数
#define NET_ITS_GET_UPLOAD_CFG                    5065  //获取数据上传配置
#define NET_ITS_SET_UPLOAD_CFG                    5066  //设置数据上传配置
#define    NET_DVR_GET_SENSOR_PORT_CAPABILITIES    5067  //获取传感器能力
#define NET_ITS_GET_WORKSTATE                    5069  //获取终端工作状态
#define NET_ITS_GET_IPC_CHAN_CFG                5070  //获取通道IPC信息
#define NET_ITS_SET_IPC_CHAN_CFG                5071  //设置通道IPC信息
#define NET_ITS_GET_OVERLAP_CFG                    5072  //获取字符叠加参数配置
#define NET_ITS_SET_OVERLAP_CFG                    5073  //设置字符叠加参数配置
#define NET_DVR_GET_TRIGGEREX_CFG               5074  //获取ITC扩展配置
#define NET_DVR_SET_TRIGGEREX_CFG               5075  //设置ITC扩展配置
#define NET_ITS_GET_ROAD_INFO                    5076  //获取路口信息

#define NET_ITS_REMOTE_DEVICE_CONTROL            5077//设置远程设备控制
#define NET_ITS_GET_GATEIPC_CHAN_CFG            5078//获取出入口参数
#define NET_ITS_SET_GATEIPC_CHAN_CFG            5079//设置出入口参数
#define NET_ITS_TRANSCHAN_START                    5080//同步数据服务器建立连接
#define NET_ITS_GET_ECTWORKSTATE                5081//获取出入口终端工作状态
#define NET_ITS_GET_ECT_CHAN_INFO                5082//获取出入口终端通道状态
#define NET_DVR_GET_HEATMAP_RESULT              5083//热度图数据查找
#define NET_DVR_SET_ITS_EXDEVCFG                5084 //设置ITS外接设备信息
#define NET_DVR_GET_ITS_EXDEVCFG                5085 //获取ITS外接设备信息
#define NET_DVR_GET_ITS_EXDEVSTATUS                5086 //获取ITS所有外接设备信息
#define NET_DVR_SET_ITS_ENDEVCMD                5087 //设置ITS终端出入口控制命令
#define NET_DVR_SET_ENISSUED_DATADEL            5088 //设置ITS终端出入口控制清除
#define NET_DVR_GET_PDC_RESULT                  5089//客流量数据查询 2014-03-21
#define NET_ITS_GET_LAMP_CTRLCFG                5090  //获取内外置灯参数
#define NET_ITS_SET_LAMP_CTRLCFG                5091  //设置内外置灯参数
#define NET_ITS_GET_PARKSPACE_ATTRIBUTE_CFG     5092  //获取特殊车位参数
#define NET_ITS_SET_PARKSPACE_ATTRIBUTE_CFG     5093  //设置特殊车位参数
#define NET_ITS_SET_LAMP_EXTERNAL_CFG            5095  //设置外控配置参数
#define NET_ITS_SET_COMPEL_CAPTURE                5096  //设置车位强制抓图
#define NET_DVR_SET_TIMESIGN_CFG                5097  //设置扩展校时自定义标记
#define NET_DVR_GET_TIMESIGN_CFG                5098  //获取扩展校时自定义标记
#define NET_DVR_GET_SIGNALLAMP_STATUS           5099  //信号灯检测
/********************************ITS end****************************/

#define NET_DVR_GET_MONITOR_PLAN_VQD            5100  //长连接获取诊断服务器计划
#define NET_DVR_GET_MONITORID_VQD               5101  //长连接获取对应计划内的监控点信息
#define NET_DVR_SET_MONITOR_INFO                5102  //批量设置计划内的监控点信息
#define NET_DVR_DEL_MONITOR_PLAN_VQD            5103  //删除计划
#define NET_DVR_GET_MONITOR_VQD_STATUS          5104  //平台查询诊断服务器的状态
#define NET_DVR_GET_RECORD_INFO                 5105  //获取资源图片查询
#define NET_DVR_GET_MONITOR_VQDCFG              5106  //获取服务器的监控点信息
#define NET_DVR_SET_MONITOR_VQDCFG              5107  //设置服务器的监控点信息
#define NET_DVR_SET_MONITOR_PLAN_VQDCFG         5108  //设置管理计划(单独的计划)

#define NET_DVR_SCENE_CHANGE_UPDATE                5109   //场景变更数据更新

#define NET_DVR_GET_CALIBRATE_POINT             5153  //归一化坐标转换（枪球联动设备 外部交互命令码 基线代码不实现，防止冲突，提交基线）/*************************智能多场景********************************/
#define NET_DVR_GET_SCENE_CFG                   5201  //获取场景信息
#define NET_DVR_SET_SCENE_CFG                   5202  //设置场景信息
#define NET_DVR_GET_SCENE_REFERENCE_REGION      5203  //获取参考区域
#define NET_DVR_SET_SCENE_REFERENCE_REGION      5204  //设置参考区域
#define NET_DVR_GET_SCENE_CALIBRATION           5205  //获取标定信息
#define NET_DVR_SET_SCENE_CALIBRATION           5206  //设置标定信息
#define NET_DVR_GET_SCENE_MASK_REGION           5207  //获取屏蔽区域
#define NET_DVR_SET_SCENE_MASK_REGION           5208  //设置屏蔽区域
#define    NET_DVR_GET_SCENE_LANECFG                5209  //获取车道规则
#define NET_DVR_SET_SCENE_LANECFG                5210  //设置车道规则
#define NET_DVR_GET_SCENE_AID_RULECFG           5211  //获取交通事件规则参数
#define NET_DVR_SET_SCENE_AID_RULECFG           5212  //设置交通事件规则参数
#define NET_DVR_GET_SCENE_TPS_RULECFG           5213  //获取交通统计规则参数
#define NET_DVR_SET_SCENE_TPS_RULECFG           5214  //设置交通统计规则参数
#define NET_DVR_GET_SCENE_TIME_CFG              5215  //获取通道的场景时间段配置
#define NET_DVR_SET_SCENE_TIME_CFG              5216  //设置通道的场景时间段配置
#define NET_DVR_GET_FORENSICS_MODE              5217  //获取取证方式参数
#define NET_DVR_SET_FORENSICS_MODE              5218  //设置取证方式参数
#define NET_DVR_FORCESTOP_FORENSICS_CTRL        5219  //强制停止取证
#define NET_DVR_GET_ALARM_PROCESS_CFG           5220   //获取报警处理参数
#define NET_DVR_SET_ALARM_PROCESS_CFG           5221   //设置报警处理参数
#define NET_DVR_GET_BLACKLIST_ALARM_INFO        5222   //获取黑白名单报警轨迹
#define NET_DVR_GET_STORAGE_RESOURCE_CFG        5225   //获取存储资源参数
#define NET_DVR_SET_STORAGE_RESOURCE_CFG        5226   //设置存储资源参数
#define NET_DVR_DEL_BLACKLIST_ALARM_RECORD        5227   //远程删除名单报警记录
#define NET_DVR_SET_BLACKLIST_GROUP_INFO        5229   //远程分组列表参数配置
#define NET_DVR_DEL_BLACKLIST_GROUP_INFO        5230   //远程删除分组列表
#define NET_DVR_GET_BLACKLIST_GROUP_INFO        5231   //远程获取全部分组列表
#define NET_DVR_SET_BLACKLIST_GROUP_RECORD_CFG    5232   //分组记录参数配置
#define NET_DVR_GET_BLACKLIST_GROUP_RECORD_CFG    5234   //远程获取分组记录参数
#define NET_DVR_DEL_BLACKLIST_GROUP_RECORD_CFG    5235   //远程删除分组记录参数
#define    NET_DVR_GET_AREA_MONITOR_CFG            5236   //获取区域监控点参数
#define    NET_DVR_SET_AREA_MONITOR_CFG            5237   //设置区域监控点参数
#define    NET_DVR_DEL_AREA_MONITOR_CFG            5238   //删除区域监控点
#define NET_DVR_RETRIEVAL_SNAP_RECORD            5240   //抓拍库检索
#define NET_DVR_GET_ALARMLIST                    5241   //获取名单报警列表
#define NET_DVR_DETECT_IMAGE                    5242   //单张图片检测
#define NET_DVR_GET_SNAP_RECORD                 5243   //获取抓拍记录
#define NET_DVR_DEL_SNAP_RECORD                 5244   //删除抓拍记录
#define NET_DVR_GET_FACE_RECORD                 5245   //远程获取人脸记录列表
#define NET_DVR_SET_FACE_RECORD                    5246   //添加人脸记录
#define NET_DVR_DEL_FACE_RECORD                    5247   //删除人脸记录
#define NET_DVR_GET_FACE_DATABASE                5248   //获取人脸库配置参数
#define NET_DVR_SET_FACE_DATABASE                5249   //设置人脸库配置参数
#define NET_DVR_DEL_FACE_DATABASE                5250   //删除人脸库
#define NET_DVR_RETRIEVAL_FACE_DATABASE            5251   //人脸库检索
#define NET_DVR_SET_BLACKLIST_REL_DEV_CFG        5252   //设备关联名单分组关联
#define NET_DVR_DEL_BLACKLIST_REL_DEV            5253   //删除 设备关联名单分组信息
/*************************智能多场景end*****************************/

#define NET_DVR_GET_DISK_RAID_INFO              6001  //获取磁盘Raid信息
#define NET_DVR_SET_DISK_RAID_INFO              6002  //设置磁盘Raid信息

#define NET_DVR_GET_DVR_SYNCHRONOUS_IPC         6005  //获取：是否为前端IPC同步设备参数
#define NET_DVR_SET_DVR_SYNCHRONOUS_IPC         6006  //设置：是否为前端IPC同步设备参数

#define NET_DVR_SET_DVR_IPC_PASSWD              6008  //设置：IPC用户名密码
#define NET_DVR_GET_DEVICE_NET_USING_INFO       6009  //获取：当前设备网络资源使用情况

#define NET_DVR_SET_DVR_IPC_NET                 6012  //设置：设置前端IPC的网络地址

#define NET_DVR_GET_RECORD_CHANNEL_INFO         6013  //获取：录像通道信息
#define NET_DVR_SET_RECORD_CHANNEL_INFO         6014  //设置：录像通道信息


#define NET_DVR_MOUNT_DISK                        6015     // 加载磁盘
#define NET_DVR_UNMOUNT_DISK                    6016     // 卸载磁盘

// CVR
#define NET_DVR_GET_STREAM_SRC_INFO                6017  //获取：流来源信息
#define NET_DVR_SET_STREAM_SRC_INFO                6018  //设置：流来源信息
#define NET_DVR_GET_STREAM_RECORD_INFO            6019  //获取：流录像信息
#define NET_DVR_SET_STREAM_RECORD_INFO            6020  //设置：流录像信息
#define NET_DVR_GET_STREAM_RECORD_STATUS        6021  //获取：流录像状态
#define NET_DVR_SET_STREAM_RECORD_STATUS        6022  //设置：流录像状态
#define NET_DVR_GET_STREAM_INFO                    6023  //获取已添加的流ID信息
#define NET_DVR_GET_STREAM_SRC_INFO_V40            6024  //获取：流来源信息
#define NET_DVR_SET_STREAM_SRC_INFO_V40          6025  //设置：流来源信息
#define NET_DVR_GET_RELOCATE_INFO               6026  //获取N+0模式下重定向信息
#define NET_DVR_START_GOP_INFO_PASSBACK         6032  //智能信息回填
#define NET_DVR_GET_CHANS_RECORD_STATUS_CFG     6035    //获取通道录像状态信息
#define NET_DVR_SET_CHANS_RECORD_STATUS_CFG     6036    //设置通道录像状态信息
//NVR：96xx
#define NET_DVR_GET_IP_ALARM_GROUP_NUM          6100  //获取：IP通道报警输入输出组数
#define NET_DVR_GET_IP_ALARM_IN                 6101  //获取：IP通道报警输入信息
#define NET_DVR_GET_IP_ALARM_OUT                6102  //获取：IP通道报警输出信息

//9000 v2.2
#define NET_DVR_GET_FTPCFG_SECOND                6103      //获取图片上传FTP参数
#define NET_DVR_SET_FTPCFG_SECOND                6104      //设置图片上传FTP参数

#define NET_DVR_GET_DEFAULT_VIDEO_EFFECT        6105       // 获取视频输入效果参数默认值
#define NET_DVR_SET_VIDEO_EFFECT                6106       // 设置通道视频输入图像参数
#define NET_DVR_DEL_INVALID_DISK                6107       // 删除无效磁盘

#define NET_DVR_GET_DRAWFRAME_DISK_QUOTA_CFG    6109    //获取抽帧通道磁盘配额
#define NET_DVR_SET_DRAWFRAME_DISK_QUOTA_CFG    6110    //设置抽帧通道磁盘配额

#define NET_DVR_GET_NAT_CFG                     6111     //获取NAT映射参数
#define NET_DVR_SET_NAT_CFG                     6112     //设置NAT映射参数
#define NET_DVR_GET_AES_KEY                     6113     //获取设备AES加密密钥
#define NET_DVR_GET_POE_CFG                     6114     //获取POE参数
#define NET_DVR_SET_POE_CFG                     6115     //设置POE参数
#define NET_DVR_GET_CUSTOM_PRO_CFG              6116     //获取自定义协议参数
#define NET_DVR_SET_CUSTOM_PRO_CFG              6117     //设置自定义协议参数
#define NET_DVR_GET_STREAM_CABAC                6118     //获取码流压缩性能选项
#define NET_DVR_SET_STREAM_CABAC                6119     //设置码流压缩性能选项
#define NET_DVR_GET_ESATA_MINISAS_USAGE_CFG        6120  //获取eSATA和miniSAS用途
#define NET_DVR_SET_ESATA_MINISAS_USAGE_CFG        6121  //设置eSATA和miniSAS用途

#define NET_DVR_GET_HDCFG_V40                    6122  //获取硬盘信息参数
#define NET_DVR_SET_HDCFG_V40                    6123  //设置硬盘信息参数
#define NET_DVR_GET_POE_CHANNEL_ADD_MODE        6124     //获取POE通道添加方式
#define NET_DVR_SET_POE_CHANNEL_ADD_MODE        6125     //设置POE通道添加方式
#define NET_DVR_GET_DIGITAL_CHANNEL_STATE       6126     //获取设备数字通道状态
#define   NET_DVR_GET_BONJOUR_CFG               6127 // 获取Bonjour信息
#define   NET_DVR_SET_BONJOUR_CFG               6128 // 设置Bonjour信息


#define NET_DVR_GET_SOCKS_CFG                    6130//获取SOCKS信息
#define NET_DVR_SET_SOCKS_CFG                      6131//设置SOCKS信息

#define    NET_DVR_GET_QOS_CFG                        6132//获取QoS信息
#define NET_DVR_SET_QOS_CFG                        6133//设置QoS信息

#define NET_DVR_GET_HTTPS_CFG                    6134//获取HTTPS信息
#define NET_DVR_SET_HTTPS_CFG                    6135//设置HTTPS信息

#define NET_DVR_GET_WD1_CFG                     6136//远程获取WD1使能开关
#define NET_DVR_SET_WD1_CFG                     6137//远程设置WD1使能开关

#define NET_DVR_CREATE_CERT                     6138//创建证书
#define NET_DVR_DELETE_CERT                     6139//删除证书


#define NET_DVR_GET_RECORD_LOCK_PERCENTAGE        6140  //获取录像段锁定比例
#define NET_DVR_SET_RECORD_LOCK_PERCENTAGE      6141  //设置录像段锁定比例

#define NET_DVR_CMD_TRIGGER_PERIOD_RECORD        6144 //外部命令触发指定时间录像
#define NET_DVR_UPLOAD_CERT                     6145    //上传证书
#define NET_DVR_DOWNLOAD_CERT                   6146     //下载证书
#define NET_DVR_GET_CERT                        6147     //获取证书

#define NET_DVR_GET_POS_FILTER_CFG                6148    //获取POS过滤规则
#define NET_DVR_SET_POS_FILTER_CFG                6149    //设置POS过滤规则
#define NET_DVR_GET_CONNECT_POS_CFG                6150    //获取DVR与POS连接方式
#define NET_DVR_SET_CONNECT_POS_CFG                6151    //设置DVR与POS连接方式
#define NET_DVR_GET_CHAN_FILTER_CFG                6152    //获取规则与通道关联信息
#define NET_DVR_SET_CHAN_FILTER_CFG                6153    //设置规则与通道关联信息


#define NET_DVR_GET_FTPCFG_V40                    6162    //获取FTP信息
#define NET_DVR_SET_FTPCFG_V40                    6163    //设置FTP信息

#define NET_DVR_GET_MONTHLY_RECORD_DISTRIBUTION 6164   //获取月历录像分布
#define NET_DVR_GET_ACCESS_DEVICE_CHANNEL_INFO  6165   //获取待接入设备通道信息
#define NET_DVR_GET_PREVIEW_SWITCH_CFG            6166   //获取设备本地预览切换参数
#define NET_DVR_SET_PREVIEW_SWITCH_CFG            6167   //设置设备本地预览切换参数

//Netra3.0.0
#define NET_DVR_GET_N_PLUS_ONE_WORK_MODE            6168    //获取N+1工作模式
#define NET_DVR_SET_N_PLUS_ONE_WORK_MODE            6169    //设置N+1工作模式

#define NET_DVR_GET_HD_STATUS                         6170    //获取硬盘状态
#define NET_DVR_SET_HD_STATUS                         6171    //设置硬盘状态

#define NET_DVR_IMPORT_IPC_CFG_FILE                    6172    //导入IPC配置文件
#define NET_DVR_EXPORT_IPC_CFG_FILE                    6173    //导出IPC配置文件
#define NET_DVR_UPGRADE_IPC                            6174    //升级IP通道

#define NET_DVR_GET_RAID_BACKGROUND_TASK_SPEED        6175    //获取RAID后台任务速度
#define NET_DVR_SET_RAID_BACKGROUND_TASK_SPEED        6176    //设置RAID后台任务速度

//marvell 256路NVR
#define NET_DVR_GET_EXCEPTIONCFG_V40                6177    //获取异常参数配置
#define NET_DVR_SET_EXCEPTIONCFG_V40                6178    //设置异常参数配置
#define NET_DVR_GET_PICCFG_V40                      6179    //获取图象参数 支持变长    NetSDK_
#define NET_DVR_SET_PICCFG_V40                      6180    //设置图象参数， 支持变长
#define NET_DVR_GET_ALARMINCFG_V40                  6181    //获取报警输入参数，支持变长
#define NET_DVR_SET_ALARMINCFG_V40                  6182    //获取报警输入参数，支持变长
#define NET_DVR_GET_IPALARMINCFG_V40                6183    //获取IP报警输入接入配置信息
#define NET_DVR_GET_IPALARMOUTCFG_V40               6185    //获取IP报警输出接入配置信息
#define NET_DVR_GET_USERCFG_V40                     6187    //获取用户参数
#define NET_DVR_SET_USERCFG_V40                     6188    //设置用户参数
#define NET_DVR_GET_WORK_STATUS                     6189    //获取设备工作状态
#define NET_DVR_GET_JPEG_CAPTURE_CFG_V40            6190    //获取DVR抓图配置
#define NET_DVR_SET_JPEG_CAPTURE_CFG_V40            6191    //设置DVR抓图配置
#define NET_DVR_GET_HDGROUP_CFG_V40                 6192    //获取盘组管理配置参数
#define NET_DVR_SET_HDGROUP_CFG_V40                 6193    //设置盘组管理配置参数
#define NET_DVR_GET_SMD_HOLIDAY_HANDLE              6194    //获取简易智能假日计划
#define NET_DVR_SET_SMD_HOLIDAY_HANDLE              6195    //设置简易智能假日计划
#define NET_DVR_GET_PIC_MODEL_CFG                   6196    //获取图片建模配置参数
#define NET_DVR_SET_PIC_MODEL_CFG                   6197    //设置图片建模配置参数
#define NET_DVR_START_LOCAL_MOUSE_EVENT             6198    //开启设备本地鼠标事件记录
#define NET_DVR_START_SIMULARE_MOUSE_EVENT          6199    //远程模拟鼠标事件

//91系列HD-SDI高清DVR
#define NET_DVR_GET_ACCESS_CAMERA_INFO          6201 // 获取前端相机信息
#define NET_DVR_SET_ACCESS_CAMERA_INFO          6202 // 设置前端相机信息
#define NET_DVR_PULL_DISK                        6203 // 安全拔盘
#define NET_DVR_SCAN_RAID                        6204 // 扫描阵列
// CVR 2.0.X
#define NET_DVR_GET_USER_RIGHT_CFG                6210        // 获取用户权限
#define NET_DVR_SET_USER_RIGHT_CFG                6211        // 设置用户权限

#define NET_DVR_ONE_KEY_CONFIG                    6212        // 一键配置CVR
#define NET_DVR_RESTART_SERVICE                    6213        // 重启CVR服务

#define NET_DVR_GET_MAX_MACHINE_NUM_CFG            6214        // 获取备机最大个数
#define NET_DVR_SET_MAX_MACHINE_NUM_CFG            6215        // 设置备机最大个数

#define NET_DVR_ADD_DEVICE                        6216        //N+1模式添加设备
#define NET_DVR_DEL_DEVICE                        6217        //N+1模式删除设备

#define NET_DVR_GET_DATA_CALLBACK_CFG            6218        // 获取数据回迁状态
#define NET_DVR_SET_DATA_CALLBACK_CFG            6219        // 设置数据回迁状态

#define NET_DVR_CLONE_LUN                        6220    //克隆LUN卷
#define NET_DVR_EXPAND_LUN                        6221    //扩展和重命名LUN卷

#define NET_DVR_GET_N_PLUS_ONE_DEVICE_INFO        6222    //获取N+1设备信息
#define NET_DVR_MODIFY_DVR_NET_DISK                6223    //修改DVR网盘
//#define NET_DVR_DEL_DVR_NET_DISK                6224    //删除DVR网盘

#define NET_DVR_CREATE_NAS                        6225    //创建NAS
#define NET_DVR_DELETE_NAS                        6226    //删除NAS

#define NET_DVR_OPEN_ISCSI                         6227    //开启iSCSI
#define NET_DVR_CLOSE_ISCSI                        6228    //关闭iSCSI

#define NET_DVR_GET_FC                            6229    //获取光纤信息
#define NET_DVR_OPEN_FC                             6230    //开启FC
#define NET_DVR_CLOSE_FC                         6231    //关闭FC
#define NET_DVR_ONE_KEY_CONFIG_SAN                6232   // 一键配置SAN, 与一键配置CVR逻辑一样

//CVR2.3.2
#define NET_DVR_RECORD_CHECK                        6233  //录像完整性检测
#define NET_DVR_ADD_RECORD_PASSBACK_TASK_MANUAL        6234  //手动添加录像回传任务
#define NET_DVR_GET_ALL_RECORD_PASSBACK_TASK_MANUAL    6235  //获取所有手动添加录像回传任务
#define NET_DVR_RECORD_PASSBACK_TASK_MANUAL_CTRL    6236  //控制手动录像回传任务
#define NET_DVR_DEL_RECORD_PASSBACK_TASK_MANUAL        6237  //删除手动录像回传任务
#define NET_DVR_GET_RECORD_PASSBACK_PLAN_CFG        6238  //获取录像回传计划配置
#define NET_DVR_SET_RECORD_PASSBACK_PLAN_CFG        6239  //设置录像回传计划配置
#define NET_DVR_GET_DEV_STORAGE_CFG                    6240  //获取设备存储信息
#define NET_DVR_GET_ONLINE_USER_CFG                    6241  //获取在线用户参数
#define NET_DVR_GET_RECORD_SEGMENT_CFG                6242  //获取录像段总量

#define NET_DVR_GET_REC_PASSBACK_TASK_EXECUTABLE    6243    //查询手动录像回传任务可执行性
#define NET_DVR_GET_STREAM_MEDIA_CFG                6244    //获取流媒体回传录像参数配置（流ID方式）
#define NET_DVR_SET_STREAM_MEDIA_CFG                6245    //设置流媒体回传录像参数配置（流ID方式）
#define NET_DVR_GET_USERCFG_V50                     6246  //获取用户参数V50
#define NET_DVR_SET_USERCFG_V50                     6247  //设置用户参数V50

#define NET_DVR_GET_RECORD_PASSBACK_BASIC_CFG_CAP    6248  //获取CVR回传功能基础配置能力
#define NET_DVR_GET_RECORD_PASSBACK_BASIC_CFG        6249  //获取CVR回传功能基础配置
#define NET_DVR_SET_RECORD_PASSBACK_BASIC_CFG        6250  //设置CVR回传功能基础配置
#define NET_DVR_ONE_KEY_CONFIG_V50                    6251  // 一键配置CVR(V50)
#define NET_DVR_GET_RACM_CAP                        6252  //获取存储总能力（RACM能力）
#define NET_DVR_GET_THUMBNAILS                        6253  //获取缩略图（默认是录像的缩略图）(支持流ID)
#define NET_DVR_ADD_RECORD_PASSBACK_TASK_MANUAL_V50        6254  //手动添加录像回传任务V50（返回任务ID）
#define NET_DVR_GET_RECORD_PASSBACK_HISTORY_PLAN_CFG_CAP    6255  //获取CVR回传历史录像计划能力
#define NET_DVR_GET_RECORD_PASSBACK_HISTORY_PLAN_CFG        6256  //获取CVR回传历史录像计划配置
#define NET_DVR_SET_RECORD_PASSBACK_HISTORY_PLAN_CFG        6257  //设置CVR回传历史录像计划配置


#define NET_DVR_GET_RECORD_PACK                    6301    //获取录像打包参数
#define NET_DVR_SET_RECORD_PACK                    6302    //设置录像打包参数

#define NET_DVR_GET_CLOUD_STORAGE_CFG           6303     //获取设备当前工作模式
#define NET_DVR_SET_CLOUD_STORAGE_CFG           6304    //设置设备当前工作模式
#define NET_DVR_GET_GOP_INFO                    6305    //获取GOP信息
#define NET_DVR_GET_PHY_DISK_INFO               6306     //获取物理磁盘信息
//录播主机外部命令
#define NET_DVR_GET_RECORDING_AUTO_TRACK_CFG    6307    //获取SDI自动跟踪配置信息
#define NET_DVR_SET_RECORDING_AUTO_TRACK_CFG    6308    //设置SDI自动跟踪配置信息

#define NET_DVR_GET_RECORDING_PUBLISH_CFG        6309  //获取一键发布信息
#define NET_DVR_SET_RECORDING_PUBLISH_CFG        6310  //设置一键发布信息


#define NET_DVR_RECORDING_ONEKEY_CONTROL        6311  //录播主机控制

#define NET_DVR_GET_RECORDING_END_TIME    6312  //获取录播剩余时间

#define NET_DVR_RECORDING_PUBLISH                6313  //一键发布录像

#define NET_DVR_GET_CURRICULUM_CFG            6314    //获取课表配置信息
#define NET_DVR_SET_CURRICULUM_CFG            6315  //设置课表配置信息

#define NET_DVR_GET_COURSE_INDEX_CFG        6316    //获取课程信息索引
#define NET_DVR_SET_COURSE_INDEX_CFG        6317  //设置课程信息索引

#define    NET_DVR_GET_PPT_CHANNEL                6318    //获取PPT支持通道号
#define    NET_DVR_GET_PPT_DETECT_CFG            6319    //获取PPT检测参数
#define    NET_DVR_SET_PPT_DETECT_CFG            6320    //设置PPT检测参数

#define NET_DVR_GET_RECORDINGHOST_CFG            6321    //获取录播主机配置信息
#define NET_DVR_SET_RECORDINGHOST_CFG            6322    //设置录播主机配置信息
#define NET_DVR_GET_BACKUP_RECORD_CFG           6323    //获取一键备份配置信息
#define NET_DVR_SET_BACKUP_RECORD_CFG           6324    //设置一键备份配置信息

//庭审主机
#define NET_DVR_GET_AUDIO_ACTIVATION_CFG        6326    //获取语音激励配置参数
#define NET_DVR_SET_AUDIO_ACTIVATION_CFG        6327    //设置语音激励配置参数
#define NET_DVR_GET_DECODERCFG_V40              6328    //获取解码器参数信息
#define NET_DVR_SET_DECODERCFG_V40                6329    //设置解码器参数信息

#define NET_DVR_INFRARED_OUTPUT_CONTROL         6330   //红外输出控制
#define NET_DVR_GET_INFRARED_CMD_NAME_CFG       6331   //获取红外命令名称参数配置
#define NET_DVR_SET_INFRARED_CMD_NAME_CFG       6332   //设置红外命令名称参数配置
#define NET_DVR_START_INFRARED_LEARN            6333   //远程红外学码

#define NET_DVR_GET_TRIAL_SYSTEM_CFG            6334   //获取庭审主机系统信息
#define NET_DVR_SET_CASE_INFO                    6335    //案件信息录入
#define NET_DVR_GET_TRIAL_MICROPHONE_STATUS        6336  //获取麦克风状态信息
#define NET_DVR_SET_TRIAL_MICROPHONE_STATUS        6337  //获取麦克风状态信息
#define NET_DVR_GET_TRIAL_HOST_STATUS            6338  //获取庭审主机状态信息
#define NET_DVR_GET_LAMP_OUT                    6339  //获取LAMP输出口信息
#define NET_DVR_SET_LAMP_OUT                    6340  //设置LAMP输出口信息
#define NET_DVR_LAMP_REMOTE_CONTROL                6341  // LAMP控制
#define NET_DVR_REMOTE_CONTROL_PLAY                6342  //远程控制本地回放
#define NET_DVR_GET_LOCAL_INPUT_CFG                6343  //获取庭审主机状态信息庭审主机本地输入信息
#define NET_DVR_SET_LOCAL_INPUT_CFG                6344  //设置庭审主机本地输入信息
#define NET_DVR_GET_CASE_INFO                    6345  //获取当前案件信息

//审讯机外部命令
#define NET_DVR_INQUEST_GET_CDW_STATUS             6350  //获取审讯机刻录状态-长连接
#define NET_DVR_GET_MIX_AUDIOIN_CFG             6351  //获取混音输入口参数配置
#define NET_DVR_SET_MIX_AUDIOIN_CFG             6352  //设置混音输入口参数配置
#define NET_DVR_GET_MIX_AUDIOOUT_CFG            6353  //获取混音输出口参数配置
#define NET_DVR_SET_MIX_AUDIOOUT_CFG            6354  //设置混音输出口参数配置
#define NET_DVR_GET_AUDIOIN_VOLUME_CFG          6355  //获取音频输入口音量调节参数配置
#define NET_DVR_SET_AUDIOIN_VOLUME_CFG          6356  //设置音频输入口音量调节参数配置
#define NET_DVR_GET_AREA_MASK_CFG               6357  //获取马赛克区域配置
#define NET_DVR_SET_AREA_MASK_CFG               6358  //设置马赛克区域配置
#define NET_DVR_GET_AUDIO_DIACRITICAL_CFG       6359  //获取音频变音配置
#define NET_DVR_SET_AUDIO_DIACRITICAL_CFG       6360  //设置音频变音配置
#define NET_DVR_GET_WIFI_DHCP_ADDR_CFG          6361  //获WIFI DHCP 地址范围参数配置
#define NET_DVR_SET_WIFI_DHCP_ADDR_CFG          6362  //设WIFI DHCP 地址范围参数配置
#define NET_DVR_GET_WIFI_CLIENT_LIST_INFO       6363  //获取wifi热点下连接的设备信息
#define NET_DVR_REMOTECONTROL_POWER_ON            6364  //远程开机
#define NET_DVR_GET_MULTISTREAM_RELATION_CHAN_CFG      6365  //获取多码流关联通道参数配置
#define NET_DVR_SET_MULTISTREAM_RELATION_CHAN_CFG     6366  //设置多码流关联通道参数配置
#define NET_DVR_GET_VIDEOOUT_RESOLUTION_CFG        6367  //获取设备本地视频输出口分辨率
#define NET_DVR_SET_VIDEOOUT_RESOLUTION_CFG        6368  //设置设备本地视频输出口分辨率
#define NET_DVR_GET_AUDIOOUT_VOLUME_CFG         6369  //获取音频输出口音量调节参数配置
#define NET_DVR_SET_AUDIOOUT_VOLUME_CFG         6370  //设置音频输出口音量调节参数配置
#define NET_DVR_INQUEST_PAUSE_CDW               6371  //暂停刻录
#define NET_DVR_INQUEST_RESUME_CDW              6372  //恢复刻录
#define NET_DVR_GET_INPUT_CHAN_CFG              6373  //获取输入通道配置
#define NET_DVR_SET_INPUT_CHAN_CFG              6374  //设置输入通道配置
#define  NET_DVR_GET_INQUEST_MIX_AUDIOIN_CFG    6375    //获取审讯机音频输入混音配置
#define  NET_DVR_SET_INQUEST_MIX_AUDIOIN_CFG    6376    //设置审讯机音频输入混音配置
#define     NET_DVR_CASE_INFO_CTRL                    6377    //案件信息显示控制
#define  NET_DVR_GET_INQUEST_USER_RIGHT            6378    //获取审讯机用户权限
#define  NET_DVR_SET_INQUEST_USER_RIGHT            6379    //设置审讯机用户权限
#define NET_DVR_GET_INQUEST_CASE_INFO            6380    //获取审讯案件信息配置
#define NET_DVR_SET_INQUEST_CASE_INFO            6381    //设置审讯案件信息配置

#define    NET_DVR_GET_FILM_MODE_CFG               6387    //获取电影模式
#define    NET_DVR_SET_FILM_MODE_CFG               6388    //设置电影模式
#define    NET_DVR_GET_FILM_MODE_CFG_CAP            6389    //获取电影模式配置能力

#define    NET_DVR_GET_DIRECTED_STRATEGY_CFG       6390    //获取导播策略类型
#define    NET_DVR_SET_DIRECTED_STRATEGY_CFG        6391    //设置导播策略类型
#define    NET_DVR_GET_DIRECTED_STRATEGY_CFG_CAP    6392    //获取电影模式配置能力
#define    NET_DVR_GET_FRAME_CFG                    6393    //获取画面边框
#define    NET_DVR_SET_FRAME_CFG                    6394    //设置画面边框
#define    NET_DVR_GET_FRAME_CFG_CAP                6395    //获取画面边框配置能力
#define    NET_DVR_GET_AUDIO_EFFECTIVE_CFG            6396    //获取音频优化参数
#define    NET_DVR_SET_AUDIO_EFFECTIVE_CFG            6397    //设置音频效果参数
#define    NET_DVR_GET_AUDIO_EFFECTIVE_CFG_CAP        6398    //获取音频效果优化配置能力
#define    NET_DVR_GET_RECORD_VIDEO_CFG              6399    //获取录制视频参数
#define    NET_DVR_SET_RECORD_VIDEO_CFG            6400    //设置录制视频参数


#define NET_DVR_GET_OUTPUT_CFG                  6401        //获取显示输出参数
#define NET_DVR_SET_OUTPUT_CFG                  6402        //设置显示输出参数
#define NET_DVR_CODER_DISPLAY_START             6403        //开始输出
#define NET_DVR_CODER_DISPLAY_STOP              6404        //停止输出
#define NET_DVR_GET_WINDOW_STATUS               6405        //获取显示窗口状态

//VQD功能接口
#define NET_DVR_GET_VQD_LOOP_DIAGNOSE_CFG       6406        //获取VQD循环诊断配置参数
#define NET_DVR_SET_VQD_LOOP_DIAGNOSE_CFG       6407        //设置VQD循环诊断配置参数
#define NET_DVR_GET_VQD_DIAGNOSE_INFO           6408        //手动获取VQD诊断信息

#define    NET_DVR_RECORDING_PUBLISH_FILE            6421        //文件发布
#define    NET_DVR_GET_RECORDING_PUBLISH_FILE_CAP    6422        //获取文件发布能力
#define    NET_DVR_GET_PUBLISH_PROGRESS            6423           //获取发布进度
#define    NET_DVR_GET_RECORD_VIDEO_CFG_CAP        6424        //获取录制视频配置能力
#define    NET_DVR_GET_RTMP_CFG                    6425        //获取RTMP参数
#define    NET_DVR_SET_RTMP_CFG                    6426        //设置RTMP参数
#define    NET_DVR_GET_RTMP_CFG_CAP                  6427        //获取RTMP配置能力
#define    NET_DVR_DEL_BACKGROUND_PIC                6428        //删除背景图片文件
#define    NET_DVR_GET_BACKGROUND_PIC_CFG            6429        //查询背景图片文件
#define    NET_DVR_GET_BACKGROUND_PIC_INFO            6430        //获取哪张图片作为背景图片
#define    NET_DVR_SET_BACKGROUND_PIC_INFO            6431        //设置哪张图片作为背景图片
#define    NET_DVR_GET_BACKGROUND_PIC_INFO_CAP      6432           //获取哪张图片作为背景图片配置能力
#define    NET_DVR_GET_RECORD_HOST_CAP                6433        //获取录播主机总能力
#define NET_DVR_GET_COURSE_LIST                 6434    //获取课程列表
#define    NET_DVR_GET_RECORD_STATUS                6435 //查询录播主机当前状态
#define    NET_DVR_MANUAL_CURRICULUM_CONTROL        6436    //手动课表控制
#define    NET_DVR_GET_IMAGE_DIFF_DETECTION_CFG        6437    //获取图像差分检测参数
#define    NET_DVR_SET_IMAGE_DIFF_DETECTION_CFG        6438    //设置图像差分检测参数
#define    NET_DVR_GET_IMAGE_DIFF_DETECTION_CFG_CAP    6439    //获取图像差分检测配置能力
#define    NET_DVR_GET_RECORDING_PUBLISH_FILE_INFO    6440    //获取发布文件信息参数
#define    NET_DVR_SET_RECORDING_PUBLISH_FILE_INFO    6441    //设置发布文件信息参数
#define    NET_DVR_GET_RECORDING_PUBLISH_FILE_INFO_CAP        6442    //获取发布文件信息配置能力
#define    NET_DVR_MANUAL_CURRICULUM_CONTROL_CAP        6443    //获取手动课程录像的能力
#define NET_DVR_GET_STATISTIC_DATA_LIST             6444    //获取统计数据列表

#define    NET_DVR_GET_DEVICE_LAN_ENCODE            6501        //获取设备的语言编码
#define NET_DVR_GET_GBT28181_SERVICE_CFG        6503        //获取GB28181服务器参数
#define NET_DVR_SET_GBT28181_SERVICE_CFG        6504        //设置GB28181服务器参数
#define NET_DVR_GET_GBT28181_SERVICE_CAPABILITIES 6505      //获取GB28181服务器能力

#define NET_DVR_GET_CLOUD_URL               6506    //获取云存储URL
#define NET_DVR_GET_CLOUD_URL_CAP           6507    //获取云存储URL-能力集
#define NET_DVR_GET_CLOUD_CFG               6508    //获取云存储配置参数
#define NET_DVR_SET_CLOUD_CFG               6509    //设置云存储配置参数
#define NET_DVR_GET_CLOUD_CFG_CAP           6510    //获取云存储配置-能力集
#define NET_DVR_GET_CLOUD_UPLOADSTRATEGY    6511    //获取云存储上传策略
#define NET_DVR_SET_CLOUD_UPLOADSTRATEGY    6512    //设置云存储上传策略
#define NET_DVR_GET_CLOUDSTORAGE_UPLOADSTRATEGY_CAP     6513    //云存储上传策略配置-能力集

#define    NET_DVR_GET_VIDEO_IMAGE_DB_CFG        6601        //获取视图库信息
#define    NET_DVR_SET_VIDEO_IMAGE_DB_CFG        6602        //设置视图库信息
#define    NET_DVR_GET_VIDEO_IMAGE_DB_CFG_CAP    6603        //获取视图库相关能力
#define    NET_DVR_GET_FILE_INFO_BY_ID            6604        //根据文件ID获取视图库中文件信息
#define    NET_DVR_QUERY_FILE_INFO_CAP            6605        //根据文件名查询文件信息能力
#define    NET_DVR_DEL_FILE_FROM_DB            6606        //从视图库中删除文件
#define    NET_DVR_GET_VIDEO_IMAGE_DB_CAP        6607        //获取视图库总能力

#define NET_DVR_GET_FIGURE                    6610       //获取缩略图

#define    NET_DVR_SYNC_IPC_PASSWD                  6621        //同步IPC密码与NVR一致
#define    NET_DVR_GET_VEHICLE_BLACKLST_SCHEDULE 6622    //获取黑名单布防时间配置
#define    NET_DVR_SET_VEHICLE_BLACKLST_SCHEDULE 6623    //设置黑名单布防时间配置

#define    NET_DVR_GET_VEHICLE_WHITELST_SCHEDULE 6624    //获取白名单布防时间配置
#define    NET_DVR_SET_VEHICLE_WHITELST_SCHEDULE 6625    //设置白名单布防时间配置

#define    NET_DVR_GET_VEHICLE_BLACKLIST_EVENT_TRIGGER     6626    //获取黑名单布防联动配置
#define    NET_DVR_SET_VEHICLE_BLACKLIST_EVENT_TRIGGER     6627    //设置黑名单布防联动配置

#define    NET_DVR_GET_VEHICLE_WHITELIST_EVENT_TRIGGER     6628    //获取白名单布防联动配置
#define    NET_DVR_SET_VEHICLE_WHITELIST_EVENT_TRIGGER     6629    //设置白名单布防联动配置

#define    NET_DVR_GET_TRAFFIC_CAP    6630    //获取抓拍相关能力集
#define    NET_DVR_GET_VEHICLE_ALLLIST_EVENT_TRIGGER     6631    //获取全部车辆检测布防联动配置
#define    NET_DVR_SET_VEHICLE_ALLLIST_EVENT_TRIGGER     6632    //设置全部车辆检测布防联动配置
#define    NET_DVR_GET_VEHICLE_OTHERLIST_EVENT_TRIGGER     6633    //获取其他单布防联动配置
#define    NET_DVR_SET_VEHICLE_OTHERLIST_EVENT_TRIGGER     6634    //设置其他单布防联动配置

#define    NET_DVR_GET_STORAGEDETECTION_EVENT_TRIGGER     6635    //获取存储健康检测联动配置
#define    NET_DVR_SET_STORAGEDETECTION_EVENT_TRIGGER     6636    //设置存储健康检测联动配置
#define    NET_DVR_GET_STORAGEDETECTION_SCHEDULE_CAPABILITIES    6637    //获取存储健康检测布防时间能力
#define    NET_DVR_GET_STORAGEDETECTION_SCHEDULE         6638    //获取存储健康布防时间配置
#define    NET_DVR_SET_STORAGEDETECTION_SCHEDULE         6639    //设置存储健康布防时间配置
#define    NET_DVR_GET_STORAGEDETECTION_STATE             6640    //获取存储健康状态


#define    NET_DVR_GET_FACECAPTURE_EVENT_TRIGGER         6641    //获取人脸抓拍联动配置
#define    NET_DVR_SET_FACECAPTURE_EVENT_TRIGGER         6642    //设置人脸抓拍联动配置
#define    NET_DVR_GET_FACECAPTURE_SCHEDULE_CAPABILITIES 6643    //获取人脸抓拍布防时间能力
#define    NET_DVR_GET_FACECAPTURE_SCHEDULE             6644    //获取人脸抓拍布防时间配置
#define    NET_DVR_SET_FACECAPTURE_SCHEDULE             6645    //设置人脸抓拍布防时间配置
#define    NET_DVR_GET_STORAGEDETECTION_RWLOCK             6646    //获取存储侦测的读写锁配置
#define    NET_DVR_GET_STORAGEDETECTION_RWLOCK_CAPABILITIES    6647    //获取存储侦测的读写锁配置能力
#define    NET_DVR_SET_STORAGEDETECTION_RWLOCK             6648    //设置存储侦测的读写锁配置
#define    NET_DVR_GET_PTZTRACKSTATUS                     6649    //获取球机联动跟踪状态

#define    NET_DVR_SET_STORAGEDETECTION_UNLOCK             6653    //设置存储侦测的解锁配置
#define    NET_DVR_GET_STORAGEDETECTION_UNLOCK_CAPABILITIES    6654    //获取存储侦测的解锁配置能力

#define    NET_DVR_SET_SHIPSDETECTION_CFG                 6655    //设置船只检测参数配置
#define    NET_DVR_GET_SHIPSDETECTION_CFG                 6656    //获取船只检测参数配置
#define    NET_DVR_GET_SHIPSDETECTION_CAPABILITIES         6657    //获取船只检测参数配置能力
#define    NET_DVR_GET_SHIPSDETECTION_COUNT               6658    //获取船只计数信息
#define    NET_DVR_SHIPSCOUNT_DELETE_CTRL                  6659   //清空船只计数信息

#define    NET_DVR_GET_BAREDATAOVERLAY_CAPABILITIES     6660   //获取裸数据叠加能力
#define    NET_DVR_SET_BAREDATAOVERLAY_CFG                 6661    //设置裸数据叠加
#define    NET_DVR_GET_BAREDATAOVERLAY_CFG                 6662    //获取裸数据叠加
#define    NET_DVR_GET_SHIPSDETECTION_SCHEDULE             6663    //获取船只检测布防时间配置
#define    NET_DVR_SET_SHIPSDETECTION_SCHEDULE             6664    //设置船只检测布防时间配置
#define    NET_DVR_GET_SHIPSDETECTION_EVENT_TRIGGER     6665    //获取船只检测联动配置
#define    NET_DVR_SET_SHIPSDETECTION_EVENT_TRIGGER     6666    //设置船只检测联动配置
#define    NET_DVR_GET_SHIPSDETECTION_SCHEDULE_CAPABILITIES    6667    //获取船只检测布防时间能力

#define    NET_DVR_FIRE_FOCUSZOOM_CTRL         6670        //火点可见光镜头聚焦变倍

#define    NET_DVR_GET_FIREDETECTION_SCHEDULE_CAPABILITIES    6671 //获取火点检测布防时间能力
#define    NET_DVR_GET_FIREDETECTION_SCHEDULE    6672    //获取火点检测布防时间配置
#define    NET_DVR_SET_FIREDETECTION_SCHEDULE    6673    //设置火点检测布防时间配置
#define    NET_DVR_GET_MANUALRANGING_CAPABILITIES    6675    //获取手动测距配置能力
#define    NET_DVR_SET_MANUALRANGING           6677        //设置手动测距参数
#define    NET_DVR_GET_MANUALDEICING_CAPABILITIES    6678//获取手动除冰配置能力
#define    NET_DVR_SET_MANUALDEICING           6679        //设置手动除冰
#define    NET_DVR_GET_MANUALDEICING           6680        //获取手动除冰


#define    NET_DVR_GET_PTZABSOLUTEEX_CAPABILITIES  6695    //获取高精度PTZ绝对位置配置扩展能力
#define    NET_DVR_GET_PTZABSOLUTEEX               6696    //获取高精度PTZ绝对位置配置扩展
#define    NET_DVR_SET_PTZABSOLUTEEX               6697    //设置高精度PTZ绝对位置配置扩展

#define    NET_DVR_GET_CRUISE_CAPABILITIES              6698    //获取设备巡航模式配置能力
#define    NET_DVR_GET_CRUISE_INFO                      6699    //获取设备巡航模式
#define    NET_DVR_GET_TEMP_HUMI_CAPABILITIES           6700    //温湿度实时能力获取
#define NET_DVR_GET_TEMP_HUMI_INFO                   6701   //温湿度实时获取

#define    NET_DVR_GET_MANUALTHERM_INFO                 6706   //手动测温实时获取
#define    NET_DVR_GET_MANUALTHERM_CAPABILITIES         6707   //获取手动测温实时数据能力
#define    NET_DVR_SET_MANUALTHERM                      6708     //设置手动测温数据设置

//DVR96000
#define    NET_DVR_GET_ACCESSORY_CARD_INFO_CAPABILITIES    6709 //获取配件板信息能力
#define    NET_DVR_GET_ACCESSORY_CARD_INFO                    6710 //获取配件板信息

#define    NET_DVR_GET_THERMINTELL_CAPABILITIES    6711         //获取热成像智能互斥能力
#define    NET_DVR_GET_THERMINTELL                 6712         //获取热成像智能互斥配置参数
#define    NET_DVR_SET_THERMINTELL                 6713         //设置热成像智能互斥配置参数
#define NET_GET_CRUISEPOINT_V50                      6714 //获取巡航路径配置扩展
#define    NET_DVR_GET_MANUALTHERM_BASIC_CAPABILITIES     6715   //获取手动测温基本参数配置能力
#define    NET_DVR_SET_MANUALTHERM_BASICPARAM           6716     //设置手动测温基本参数
#define    NET_DVR_GET_MANUALTHERM_BASICPARAM           6717     //获取手动测温基本参数

#define    NET_DVR_GET_FIRESHIELDMASK_CAPABILITIES            6718   //获取火点区域屏蔽能力

#define NET_DVR_GET_HIDDEN_INFORMATION_CAPABILITIES    6720 //隐藏信息配置能力
#define NET_DVR_GET_HIDDEN_INFORMATION                 6721 //获取隐藏信息参数
#define NET_DVR_SET_HIDDEN_INFORMATION                 6722 //设置隐藏信息参数

#define    NET_DVR_SET_FIRESHIELDMASK_CFG                  6723    //设置火点区域屏蔽参数
#define    NET_DVR_GET_FIRESHIELDMASK_CFG                  6724     //获取火点区域屏蔽参数

#define    NET_DVR_GET_SMOKESHIELDMASK_CAPABILITIES            6725   //获取烟雾区域屏蔽能力
#define    NET_DVR_SET_SMOKESHIELDMASK_CFG                     6726     //设置烟雾区域屏蔽参数
#define    NET_DVR_GET_SMOKESHIELDMASK_CFG                     6727        //获取烟雾区域屏蔽参数

#define    NET_DVR_GET_AREASCAN_CAPABILITIES                  6728   //获取区域扫描能力
#define    NET_DVR_GET_AREASCAN_CFG                          6730        //获取区域扫描参数

#define    NET_DVR_DEL_AREASCAN_CFG                          6731        //扫描区域删除
#define    NET_DVR_AREASCAN_INIT_CTRL                        6732        //进入区域扫描设置
#define    NET_DVR_AREASCAN_CONFIRM_CTRL                     6733        //保存区域扫描设置
#define    NET_DVR_AREASCAN_STOP_CTRL                        6734        //停止区域扫描设置
#define    NET_DVR_SAVE_SCANZOOM_CTRL                        6735        //设置扫描倍率；保存当前光学倍率为扫描倍率
#define    NET_DVR_GET_SCANZOOM_CTRL                         6736        //获取扫描倍率；将预览界面中的光学倍率返回到当前扫描倍率。
#define    NET_DVR_DEL_FIRESHIELDMASK_CTRL                   6737        //删除火点屏蔽区域
#define    NET_DVR_DEL_SMOKESHIELDMASK_CTRL                  6738        //删除烟雾屏蔽区域

#define    NET_DVR_GET_DENSEFOG_EVENT_TRIGGER                6740     //获取大雾检测联动配置
#define    NET_DVR_SET_DENSEFOG_EVENT_TRIGGER                6741     //设置大雾检测联动配置
#define    NET_DVR_SET_DENSEFOGDETECTION_CFG                 6742     //设置大雾检测参数配置
#define    NET_DVR_GET_DENSEFOGDETECTION_CFG                 6743     //获取大雾检测参数配置
#define    NET_DVR_GET_DENSEFOGDETECTION_CAPABILITIES        6744     //获取大雾检测参数配置能力

#define    NET_DVR_GET_THERMOMETRY_SCHEDULE_CAPABILITIES     6750     //获取测温检测布防时间能力
#define    NET_DVR_GET_THERMOMETRY_SCHEDULE                  6751     //获取测温检测布防时间配置
#define    NET_DVR_SET_THERMOMETRY_SCHEDULE                  6752     //设置测温检测布防时间配置
#define    NET_DVR_GET_TEMPERTURE_SCHEDULE_CAPABILITIES      6753     //获取温差布防时间能力
#define    NET_DVR_GET_TEMPERTURE_SCHEDULE                   6754     //获取温差布防时间配置
#define    NET_DVR_SET_TEMPERTURE_SCHEDULE                   6755     //设置温差布防时间配置
#define NET_DVR_GET_SEARCH_LOG_CAPABILITIES               6756     //日志类型支持能力
#define    NET_DVR_GET_VEHICLEFLOW                           6758     //获取车流量数据
#define NET_DVR_GET_IPADDR_FILTERCFG_V50                  6759     //获取IP地址过滤参数扩展
#define NET_DVR_SET_IPADDR_FILTERCFG_V50                  6760     //设置IP地址过滤参数扩展
#define    NET_DVR_GET_TEMPHUMSENSOR_CAPABILITIES            6761     //获取温湿度传感器的能力
#define    NET_DVR_GET_TEMPHUMSENSOR                         6762     //获取温湿度传感器配置协议
#define    NET_DVR_SET_TEMPHUMSENSOR                         6763     //设置温湿度传感器配置协议

#define    NET_DVR_GET_THERMOMETRY_MODE_CAPABILITIES  6764  //获取测温模式能力
#define    NET_DVR_GET_THERMOMETRY_MODE               6765  //获取测温模式参数
#define    NET_DVR_SET_THERMOMETRY_MODE               6766  //设置测温模式参数

#define    NET_DVR_GET_THERMAL_PIP_CAPABILITIES    6767    //获取热成像画中画配置能力
#define    NET_DVR_GET_THERMAL_PIP   6768    //获取热成像画中画配置参数
#define    NET_DVR_SET_THERMAL_PIP   6769    //设置热成像画中画配置参数
#define    NET_DVR_GET_THERMAL_INTELRULEDISPLAY_CAPABILITIES    6770    //获取热成像智能规则显示能力
#define    NET_DVR_GET_THERMAL_INTELRULE_DISPLAY   6771    //获取热成像智能规则显示参数
#define    NET_DVR_SET_THERMAL_INTELRULE_DISPLAY   6772    //设置热成像智能规则显示参数
#define    NET_DVR_GET_THERMAL_ALGVERSION   6773   //获取热成像相关算法库版本
#define    NET_DVR_GET_CURRENT_LOCK_CAPABILITIES    6774    //获取电流锁定配置能力
#define    NET_DVR_GET_CURRENT_LOCK   6775    //获取电流锁定配置参数
#define    NET_DVR_SET_CURRENT_LOCK   6776    //设置电流锁定配置参数

#define    NET_DVR_DEL_MANUALTHERM_RULE                      6778     //删除手动测温规则

#define NET_DVR_GET_UPGRADE_INFO    6779    //获取升级信息

#define    NET_DVR_SWITCH_TRANSFER  7000

#define NET_DVR_GET_MB_POWERCTRLPARA            8000//获取启动控制参数
#define    NET_DVR_SET_MB_POWERCTRLPARA            8001 //设置启动控制参数
#define NET_DVR_GET_AUTOBACKUPPARA                8002//获取自动备份参数
#define NET_DVR_SET_AUTOBACKUPPARA                8003 //设置自动备份参数
#define NET_DVR_GET_MB_GPSPARA                    8004//获取GPS参数
#define NET_DVR_SET_MB_GPSPARA                    8005 //设置GPS参数
#define NET_DVR_GET_MB_SENSORINPARA                8006//获取SENSOR参数
#define NET_DVR_SET_MB_SENSORINPARA                8007 //设置SENSOR参数
#define NET_DVR_GET_GSENSORPARA                    8008//获取GSENSOR参数
#define NET_DVR_SET_GSENSORPARA                    8009 //设置GSENSOR参数
#define NET_DVR_GET_MB_DOWNLOADSVRPARA            8010//获取下载服务器参数
#define NET_DVR_SET_MB_DOWNLOADSVRPARA            8011//设置下载服务器参数
#define NET_DVR_GET_PLATERECOG_PARA                8012//获取车牌识别参数
#define NET_DVR_SET_PLATERECOG_PARA                8013//设置车牌识别参数
#define NET_DVR_GET_ENFORCESYS_PARA                8014//获取车辆稽查参数
#define NET_DVR_SET_ENFORCESYS_PARA                8015//设置车辆稽查参数
#define NET_DVR_GET_GPS_DATA                    8016 //获取GPS数据
#define NET_DVR_GET_ANALOG_ALARMINCFG            8017//获取模拟报警输入参数
#define NET_DVR_SET_ANALOG_ALARMINCFG            8018//设置模拟报警输入参数

#define NET_DVR_GET_SYSTEM_CAPABILITIES         8100 //获取设备的系统能力
#define NET_DVR_GET_EAGLEEYE_CAPABILITIES       8101 //获取设备鹰眼能力
#define NET_DVR_GET_SLAVECAMERA_CALIB_V51       8102    //获取从摄像机标定配置V51
#define NET_DVR_SET_SLAVECAMERA_CALIB_V51       8103    //设置从摄像机标定配置V51
#define NET_DVR_SET_GOTOSCENE                   8105  //设置主摄像机转向指定的场景ID

//I、K、E系列NVR产品升级
#define NET_DVR_GET_PTZ_NOTIFICATION        8201//获取多通道事件联动PTZ
#define NET_DVR_SET_PTZ_NOTIFICATION        8202//设置多通道事件联动PTZ
/*****************************电视墙 start****************************/
#define    NET_DVR_MATRIX_WALL_SET                    9001  //设置电视墙中屏幕参数
#define    NET_DVR_MATRIX_WALL_GET                    9002  //获取电视墙中屏幕参数
#define    NET_DVR_WALLWIN_GET                        9003  //电视墙中获取窗口参数
#define    NET_DVR_WALLWIN_SET                        9004  //电视墙中设置窗口参数
#define    NET_DVR_WALLWINPARAM_SET                9005  //设置电视墙窗口相关参数
#define    NET_DVR_WALLWINPARAM_GET                9006  //获取电视墙窗口相关参数
#define NET_DVR_WALLSCENEPARAM_GET                9007  //设置场景模式参数
#define NET_DVR_WALLSCENEPARAM_SET                9008  //获取场景模式参数
#define NET_DVR_MATRIX_GETWINSTATUS             9009  //获取窗口解码状态
#define    NET_DVR_GET_WINASSOCIATEDDEVINFO        9010  //电视墙中获取对应资源信息
#define    NET_DVR_WALLOUTPUT_GET                    9011  //电视墙中获取显示输出参数
#define    NET_DVR_WALLOUTPUT_SET                    9012  //电视墙中设置显示输出参数
#define NET_DVR_GET_UNITEDMATRIXSYSTEM          9013  //电视墙中获取对应资源
#define NET_DVR_GET_WALL_CFG                    9014  //获取电视墙全局参数
#define NET_DVR_SET_WALL_CFG                    9015  //设置电视墙全局参数
#define NET_DVR_CLOSE_ALL_WND                    9016  //关闭所有窗口
#define NET_DVR_SWITCH_WIN_TOP                  9017  //窗口置顶
#define NET_DVR_SWITCH_WIN_BOTTOM               9018  //窗口置底

#define    NET_DVR_CLOSE_ALL_WND_V41                9019  //电视墙关闭所有窗口v41（有多个电视墙）
#define    NET_DVR_GET_WALL_WINDOW_V41                9020  //获取电视墙中的窗口v41
#define    NET_DVR_SET_WALL_WINDOW_V41                9021  //设置电视墙中的窗口v41
#define    NET_DVR_GET_CURRENT_SCENE_V41            9022  //获取当前电视墙中正在使用的场景v41
#define    NET_DVR_GET_WALL_SCENE_PARAM_V41        9023  //获取当前电视墙中正在使用的场景v41
#define    NET_DVR_SET_WALL_SCENE_PARAM_V41        9024  //设置当前电视墙中正在使用的场景v41
#define NET_DVR_GET_MATRIX_LOGO_CFG             9025  //获取logo参数
#define NET_DVR_SET_MATRIX_LOGO_CFG             9026  //设置logo参数
#define NET_DVR_GET_WIN_LOGO_CFG                9027  //获取窗口logo参数
#define NET_DVR_SET_WIN_LOGO_CFG                9028  //设置窗口logo参数
#define NET_DVR_DELETE_LOGO                     9029  //删除logo
#define NET_DVR_SET_DISPLAY_EFFECT_CFG            9030  //设置显示输出效果参数v41
#define NET_DVR_GET_DISPLAY_EFFECT_CFG            9031  //获取显示输出效果参数v41
#define NET_DVR_DEC_PLAY_REMOTE_FILE            9032  //解码播放远程文件
#define NET_DVR_GET_WIN_ZOOM_STATUS             9033  //获取窗口电子放大状态
#define NET_DVR_GET_ALL_MATRIX_LOGOCFG          9034  //获取所有logo参数

/*****************************电视墙 end******************************/

/*******************************LCD拼接屏 begin******************************************/
#define NET_DVR_SIMULATE_REMOTE_CONTROL         9035    //模拟遥控按键 2013-09-05
#define NET_DVR_SET_SCREEN_SIGNAL_CFG            9036    //设置屏幕信号源参数
#define    NET_DVR_GET_SCREEN_SIGNAL_CFG            9037    //获取屏幕信号源参数
#define NET_DVR_SET_SCREEN_SPLICE_CFG              9038    //设置屏幕拼接
#define    NET_DVR_GET_SCREEN_SPLICE_CFG            9039    //获取屏幕拼接
#define NET_DVR_GET_SCREEN_FAN_WORK_MODE         9040    //获取风扇工作方式
#define NET_DVR_SET_SCREEN_FAN_WORK_MODE         9041    //设置风扇工作方式
#define NET_DVR_SHOW_SCREEN_WORK_STATUS          9044    //显示屏幕状态
#define NET_DVR_GET_VGA_CFG                      9045    //获取VGA信号配置
#define NET_DVR_SET_VGA_CFG                      9046    //设置VGA信号配置
#define NET_DVR_GET_SCREEN_MENU_CFG                9048   //获取屏幕菜单配置
#define NET_DVR_SET_SCREEN_MENU_CFG              9049    //设置屏幕菜单配置
#define NET_DVR_SET_SCREEN_DISPLAY_CFG          9050    //设置显示参数 2013-08-28
#define    NET_DVR_GET_SCREEN_DISPLAY_CFG            9051    //获取显示参数 2013-08-28

#define NET_DVR_SET_FUSION_CFG                    9052    //设置图像融合参数
#define NET_DVR_GET_FUSION_CFG                    9053    //获取图像融合参数

#define NET_DVR_SET_PIP_CFG                      9060    //设置画中画参数
#define    NET_DVR_GET_PIP_CFG                        9061    //获取画中画参数
#define NET_DVR_SET_DEFOG_LCD                      9073    //设置透雾参数
#define    NET_DVR_GET_DEFOG_LCD                    9074    //获取透雾参数
#define NET_DVR_SHOW_IP                          9075    //显示IP
#define NET_DVR_SCREEN_MAINTENANCE_WALL            9076    //屏幕维墙
#define NET_DVR_SET_SCREEN_POS                  9077    //设置屏幕位置参数
#define    NET_DVR_GET_SCREEN_POS                    9078    //获取屏幕位置参数
/*******************************LCD拼接屏 end******************************************/

/*******************************LCD拼接屏V1.2 begin******************************************/
#define    NET_DVR_SCREEN_INDEX_SET                9079    //屏幕索引相关参数设置
#define    NET_DVR_SCREEN_INDEX_GET                9080    //屏幕索引相关参数获取
#define NET_DVR_SCREEN_SPLICE_SET               9081    //设置屏幕拼接参数
#define NET_DVR_SCREEN_SPLICE_GET               9082    //获取屏幕拼接参数
#define NET_DVR_SET_SCREEN_PARAM                9083    //设置屏幕相关参数
#define NET_DVR_GET_SCREEN_PARAM                9084    //获取屏幕相关参数
#define NET_DVR_SET_SWITCH_CFG                  9085    //设置定时开关机参数
#define NET_DVR_GET_SWITCH_CFG                  9086    //获取定时开关机参数
#define NET_DVR_SET_POWERON_DELAY_CFG           9087    //设置延时开机参数
#define NET_DVR_GET_POWERON_DELAY_CFG           9088    //获取延时开机参数
#define    NET_DVR_SET_SCREEN_POSITION                9089    //设置屏幕位置参数
#define    NET_DVR_GET_SCREEN_POSITION                9090    //获取屏幕位置参数
#define NET_DVR_SCREEN_SCENE_CONTROL            9091    //屏幕场景控制
#define NET_DVR_GET_CURRENT_SCREEN_SCENE        9092    //获取当前屏幕场景号
#define NET_DVR_GET_SCREEN_SCENE_PARAM          9093    //获取屏幕场景模式参数
#define NET_DVR_SET_SCREEN_SCENE_PARAM          9094    //设置屏幕场景模式参数
#define NET_DVR_GET_EXTERNAL_MATRIX_RELATION    9095    //获取外接矩阵输入输出关联关系
#define NET_DVR_GET_LCD_AUDIO_CFG                9096     //获取LCD屏幕音频参数
#define NET_DVR_SET_LCD_AUDIO_CFG                9097     //设置LCD屏幕音频参数
#define NET_DVR_GET_LCD_WORK_STATE                9098     //获取LCD屏幕工作状态
#define NET_DVR_GET_BOOT_LOGO_CFG                9099    //获取LCD屏幕开机logo显示参数
#define NET_DVR_SET_BOOT_LOGO_CFG                9100    //设置LCD屏幕开机logo显示参数

/*******************************LCD拼接屏V1.2 end ******************************************/
#define NET_DVR_GET_STREAM_DST_COMPRESSIONINFO    9101  //获取目标压缩参数
#define NET_DVR_SET_STREAM_DST_COMPRESSIONINFO  9102  //设置目标压缩参数
#define NET_DVR_GET_STREAM_TRANS_STATUS            9103  //获取流状态
#define NET_DVR_GET_DEVICE_TRANS_STATUS            9104  //获取设备转码状态
#define NET_DVR_GET_ALLSTREAM_SRC_INFO          9105  //获取所有流信息
#define NET_DVR_GET_BIG_SCREEN_AUDIO            9106  //获取大屏音频信息
#define NET_DVR_SET_BIG_SCREEN_AUDIO            9107  //设置大屏音频信息
#define NET_DVR_GET_DEV_WORK_MODE                9108  //获取转码设备工作模式
#define NET_DVR_SET_DEV_WORK_MODE                9109  //设置转码设备工作模式
#define NET_DVR_APPLY_TRANS_CHAN                9110  //按流ID申请转码通道
#define NET_DVR_GET_DISPCHAN_CFG                9111  //批量获取显示通道参数
#define NET_DVR_SET_DISPCHAN_CFG                9112  //批量设置显示通道参数

#define NET_DVR_GET_DEC_CHAN_STATUS                9113  //获取解码通道解码状态
#define NET_DVR_GET_DISP_CHAN_STATUS            9114  //获取显示通道状态
#define NET_DVR_GET_ALARMIN_STATUS                9115  //获取报警输入状态
#define NET_DVR_GET_ALARMOUT_STATUS                9116  //获取报警输出状态
#define NET_DVR_GET_AUDIO_CHAN_STATUS            9117  //获取语音对讲状态

#define    NET_DVR_GET_VIDEO_AUDIOIN_CFG            9118   //获取视频的音频输入参数
#define NET_DVR_SET_VIDEO_AUDIOIN_CFG            9119   //设置视频的音频输入参数

#define    NET_DVR_SET_BASEMAP_CFG                    9120  //设置底图参数
#define NET_DVR_GET_BASEMAP_CFG                    9121  //获取底图参数
#define NET_DVR_GET_VIRTUAL_SCREEN_CFG          9122  //获取超高清输入子系统参数
#define NET_DVR_SET_VIRTUAL_SCREEN_CFG          9123  //设置超高清输入子系统参数
#define NET_DVR_GET_BASEMAP_WIN_CFG                9124  //获取底图窗口参数
#define NET_DVR_SET_BASEMAP_WIN_CFG                9125  //设置底图窗口参数
#define NET_DVR_DELETE_PICTURE                    9126  //删除底图
#define NET_DVR_GET_BASEMAP_PIC_INFO            9127  //获取底图图片信息
#define    NET_DVR_SET_BASEMAP_WIN_CFG_V40         9128  //设置底图窗口参数V40
#define NET_DVR_GET_BASEMAP_WIN_CFG_V40         9129  //获取底图窗口参数V40

#define NET_DVR_GET_DEC_VCA_CFG                    9130    //获取解码器智能报警参数
#define NET_DVR_SET_DEC_VCA_CFG                    9131    //设置解码器智能报警参数

#define NET_DVR_SET_VS_INPUT_CHAN_INIT_ALL  9132  //初始化虚拟屏子板的所有输入通道
#define NET_DVR_GET_VS_INPUT_CHAN_INIT_ALL  9133  //获取虚拟屏子板的所有输入通道的初始化参数
#define NET_DVR_GET_VS_INPUT_CHAN_INIT 9134  //获取虚拟屏输入通道的初始化参数
#define NET_DVR_GET_VS_INPUT_CHAN_CFG  9135  //获取虚拟屏输入通道配置参数

#define NET_DVR_GET_TERMINAL_CONFERENCE_STATUS    9136    //获取终端会议状态
#define NET_DVR_GET_TERMINAL_INPUT_CFG_CAP        9137    //获取终端输入参数能力
#define NET_DVR_GET_TERMINAL_INPUT_CFG            9138    //获取终端视频会议输入参数
#define NET_DVR_SET_TERMINAL_INPUT_CFG            9139    //设置终端视频会议输入参数

#define NET_DVR_GET_CONFERENCE_REGION_CAP        9140    //获取终端会议区域能力
#define NET_DVR_GET_CONFERENCE_REGION            9141    //获取终端会议区域参数
#define NET_DVR_SET_CONFERENCE_REGION            9142    //设置终端会议区域参数
#define NET_DVR_GET_TERMINAL_CALL_CFG_CAP        9143    //获取终端呼叫配置能力
#define NET_DVR_GET_TERMINAL_CALL_CFG            9144    //获取终端呼叫参数
#define NET_DVR_SET_TERMINAL_CALL_CFG            9145    //设置终端呼叫参数
#define NET_DVR_GET_TERMINAL_CTRL_CAP            9146    //获取终端呼叫控制能力
#define NET_DVR_TERMINAL_CTRL                    9147    //终端呼叫控制
#define    NET_DVR_GET_CALL_QUERY_CAP                9148    //获取会议查找能力
#define NET_DVR_GET_CALLINFO_BY_COND            9149    //按条件查询呼叫记录

#define    NET_DVR_SET_FUSION_SCALE                9150    //设置图像融合规模
#define NET_DVR_GET_FUSION_SCALE                9151    //获取图像融合规模

#define NET_DVR_GET_VCS_CAP                        9152    //获取MCU能力集


#define NET_DVR_GET_TERMINAL_GK_CFG_CAP            9153    //获取终端注册GK能力
#define NET_DVR_GET_TERMINAL_GK_CFG                9154    //获取终端注册GK参数
#define NET_DVR_SET_TERMINAL_GK_CFG                9155    //设置终端注册GK参数
#define NET_DVR_GET_MCU_CONFERENCESEARCH_CAP    9156    //获取MCU设备的能力
#define NET_DVR_SET_VS_INPUT_CHAN_CFG  9157  //设置虚拟屏输入通道配置参数
#define NET_DVR_GET_VS_NETSRC_CFG      9158  //设置虚拟屏网络源参数
#define NET_DVR_SET_VS_NETSRC_CFG      9159  //设置虚拟屏网络源参数

#define    NET_DVR_GET_LLDP_CFG                    9160    //获取LLDP参数
#define    NET_DVR_SET_LLDP_CFG                    9161    //设置LLDP参数
#define NET_DVR_GET_LLDP_CAP                    9162    //获取LLDP能力集
#define    NET_DVR_GET_FIBER_CONVERT_BASIC_INFO    9163    //获取光纤收发器基本信息
#define    NET_DVR_GET_FIBER_CONVERT_WORK_STATE    9164    //获取光纤收发器工作状
#define    NET_DVR_GET_FIBER_CONVERT_TOPOLOGY      9165    //获取光纤收发器拓扑信息
#define    NET_DVR_GET_FC_PORT_REMARKS                9166    //获取光纤收发器端口注释参数
#define    NET_DVR_SET_FC_PORT_REMARKS                9167    //设置光纤收发器端口注释参数
#define NET_DVR_GET_PORT_REMARKS_CAP            9168    //获取光纤收发器端口注释能力集

#define NET_DVR_GET_MCU_CONFERENCECONTROL_CAP   9169    //获取会议控制能力
#define NET_DVR_GET_MCU_TERMINALCONTROL_CAP     9170    //获取终端控制能力
#define NET_DVR_GET_MCU_TERIMINALGROUP_CAP      9171    //获取终端分组能力
#define NET_DVR_GET_MCU_TERMINAL_CAP            9174    //获取终端管理能力
#define NET_DVR_GET_MCU_CONFERENCE_CAP          9175    //获取会议能力
#define NET_DVR_GET_MCU_GK_CFG_CAP              9176    //获取MCUGK配置能力
#define NET_DVR_GET_MCU_GK_SERVER_CAP           9177    //获取MCUGK服务能力

#define NET_DVR_GET_EDID_CFG_FILE_INFO  9178  //获取EDID配置文件信息
#define NET_DVR_GET_EDID_CFG_FILE_INFO_LIST  9179  //获取所有EDID配置文件信息
#define NET_DVR_SET_EDID_CFG_FILE_INFO  9180  //设置EDID配置文件信息
#define NET_DVR_DEL_EDID_CFG_FILE_INFO  9181  //删除EDID配置文件信息（包括文件）
#define NET_DVR_GET_EDID_CFG_FILE_INFO_CAP  9182  //EDID配置文件信息能力集

#define NET_DVR_GET_SUBWND_DECODE_OSD  9183  //获取子窗口解码OSD信息
#define NET_DVR_GET_SUBWND_DECODE_OSD_ALL  9184  //获取所有子窗口解码OSD信息
#define NET_DVR_SET_SUBWND_DECODE_OSD  9185  //设置子窗口解码OSD信息
#define NET_DVR_GET_SUBWND_DECODE_OSD_CAP  9186  //获取子窗口解码OSD信息能力集
#define NET_DVR_GET_DECODE_CHANNEL_OSD  9187  //获取解码通道OSD信息
#define NET_DVR_SET_DECODE_CHANNEL_OSD  9188  //设置解码通道OSD信息


#define NET_DVR_GET_OUTPUT_PIC_INFO             9200    //获取输出口图片参数
#define NET_DVR_SET_OUTPUT_PIC_INFO             9201    //设置输出口图片参数
#define NET_DVR_GET_OUTPUT_PIC_WIN_CFG          9202    //获取输出口图片窗口参数
#define NET_DVR_SET_OUTPUT_PIC_WIN_CFG          9203    //设置输出口图片窗口参数
#define NET_DVR_GET_OUTPUT_ALL_PIC_WIN_CFG      9204    //获取输出口所有图片窗口参数
#define NET_DVR_DELETE_OUPUT_PIC                9205    //删除输出口图片
#define NET_DVR_GET_OUTPUT_OSD_CFG              9206    //获取输出口OSD参数
#define NET_DVR_SET_OUTPUT_OSD_CFG              9207    //设置输出口OSD参数
#define NET_DVR_GET_OUTPUT_ALL_OSD_CFG          9208    //获取输出口所有OSD参数
#define NET_DVR_GET_CHAN_RELATION               9209    //获取编码通道关联资源参数
#define NET_DVR_SET_CHAN_RELATION               9210    //设置编码通道关联资源参数
#define NET_DVR_GET_ALL_CHAN_RELATION           9211    //获取所有编码通道关联资源参数
#define NET_DVR_GET_NS_RING_CFG                    9212    //获取光纤板环网配置
#define NET_DVR_SET_NS_RING_CFG                   9213    //设置光纤板环网配置
#define NET_DVR_GET_NS_RING_STATUS              9214    //获取光纤板环网状态
#define NET_DVR_GET_OPTICAL_PORT_INFO            9220    //获取光口信息
#define NET_DVR_SET_OPTICAL_PORT_INFO            9221    //设置光口信息
#define NET_DVR_GET_OPTICAL_CHAN_RELATE_CFG        9222    //获取编码通道关联光口输入源参数
#define NET_DVR_SET_OPTICAL_CHAN_RELATE_CFG        9223    //设置编码通道关联光口输入源参数
#define  NET_DVR_GET_WIN_ROAM_SWITCH_CFG        9224    //获取解码器窗口漫游开关参数
#define  NET_DVR_SET_WIN_ROAM_SWITCH_CFG        9225    //设置解码器窗口漫游开关参数
#define    NET_DVR_START_SCREEN_CRTL                9226    //开始屏幕控制
#define    NET_DVR_GET_SCREEN_FLIE_LIST            9227    //获取屏幕文件列表
#define    NET_DVR_GET_SCREEN_FILEINFO                9228    //获取屏幕文件信息参数
#define    NET_DVR_SET_SCREEN_FILEINFO             9229    //设置屏幕文件信息参数

/*******************************小间距LED显示屏 begin***************************************/
#define NET_DVR_GET_LED_OUTPUT_CFG                9230    //获取发送卡输出参数
#define NET_DVR_SET_LED_OUTPUT_CFG                9231    //设置发送卡输出参数
#define NET_DVR_GET_LED_OUTPUT_PORT_CFG            9232    //获取LED发送卡输出端口参数
#define NET_DVR_SET_LED_OUTPUT_PORT_CFG            9233    //设置LED发送卡输出端口参数
#define NET_DVR_GET_LED_DISPLAY_AREA_CFG        9234    //获取LED发送卡显示区域
#define NET_DVR_SET_LED_DISPLAY_AREA_CFG        9235    //设置LED发送卡显示区域
#define NET_DVR_GET_LED_PORT_CFG                9236    //获取LED发送卡端口参数
#define NET_DVR_SET_LED_PORT_CFG                9237    //设置LED发送卡端口参数
#define NET_DVR_GET_LED_DISPLAY_CFG                9238    //获取LED发送卡显示参数
#define NET_DVR_SET_LED_DISPLAY_CFG                9239    //设置LED发送卡显示参数
#define NET_DVR_GET_ALL_LED_PORT_CFG            9240    //获取LED发送卡某个输出对应
#define NET_DVR_SAVE_LED_CONFIGURATION            9241    //参数固化
#define NET_DVR_GET_LED_TEST_SIGNAL_CFG            9242    //获取LED屏测试信号参数
#define NET_DVR_SET_LED_TEST_SIGNAL_CFG            9243    //设置LED屏测试信号参数
#define NET_DVR_GET_LED_NOSIGNAL_CFG            9244    //获取LED屏无信号显示模式参数
#define NET_DVR_SET_LED_NOSIGNAL_CFG            9245    //设置LED屏无信号显示模式参数
#define NET_DVR_GET_LED_INPUT_CFG                9246    //获取LED发送卡输入参数
#define NET_DVR_SET_LED_INPUT_CFG                9247    //设置LED发送卡输入参数
#define NET_DVR_GET_LED_RECV_GAMMA_CFG            9248    //获取接收卡GAMMA表参数
#define NET_DVR_SET_LED_RECV_GAMMA_CFG            9249    //设置接收卡GAMMA表参数
#define NET_DVR_GET_LED_RECV_CFG                9250    //获取接收卡基本参数
#define NET_DVR_SET_LED_RECV_CFG                9251    //设置接收卡基本参数
#define NET_DVR_GET_LED_RECV_ADVANCED_CFG        9252    //获取接收卡高级参数
#define NET_DVR_SET_LED_RECV_ADVANCED_CFG        9253    //设置接收卡高级参数
#define NET_DVR_GET_LED_SCREEN_DISPLAY_CFG        9254    //获取LED屏显示参数
#define NET_DVR_SET_LED_SCREEN_DISPLAY_CFG        9255    //设置LED屏显示参数
/*******************************小间距LED显示屏 end*****************************************/

#define NET_DVR_GET_INSERTPLAY_PROGRESS            9273    //获取插播进度

#define    NET_DVR_GET_SCREEN_CONFIG               9260    //获取屏幕服务器参数
#define    NET_DVR_SET_SCREEN_CONFIG               9261    //设置屏幕服务器参数
#define NET_DVR_GET_SCREEN_CONFIG_CAP              9262    //获取屏幕服务器参数能力集

#define    NET_DVR_GET_SCHEDULE_PUBLISH_PROGRESS    9271    //获取日程发布进度
#define    NET_DVR_GET_PUBLISH_UPGRADE_PROGRESS    9272    //获取信息发布终端升级进度

#define NET_DVR_GET_INPUT_BOARD_CFG                9281    //获取输入板配置信息
#define NET_DVR_GET_INPUT_BOARD_CFG_LIST        9282    //获取输入板配置信息列表
#define NET_DVR_SET_INPUT_BOARD_CFG                9283    //设置输入板配置信息

#define NET_DVR_GET_INPUT_SOURCE_TEXT_CAP    9284            //获取输入源字符叠加能力
#define NET_DVR_GET_INPUT_SOURCE_TEXT_CFG    9285            //获取输入源字符叠加参数
#define NET_DVR_GET_INPUT_SOURCE_TEXT_CFG_LSIT 9286        //获取输入源字符叠加参数列表
#define NET_DVR_SET_INPUT_SOURCE_TEXT_CFG    9287            //设置输入源字符叠加参数
#define NET_DVR_SET_INPUT_SOURCE_TEXT_CFG_LIST 9288        //设置输入源字符叠加参数列表
#define NET_DVR_GET_INPUT_SOURCE_RESOLUTION_CAP    9289    //获取输入源自定义分辨率能力
#define NET_DVR_GET_INPUT_SOURCE_RESOLUTION_CFG    9290    //获取输入源自定义分辨率参数
#define NET_DVR_GET_INPUT_SOURCE_RESOLUTION_CFG_LIST    9291 //获取输入源自定义分辨率列表
#define NET_DVR_SET_INPUT_SOURCE_RESOLUTION_CFG    9292    //设置输入源自定义分辨率参数
#define NET_DVR_SET_INPUT_SOURCE_RESOLUTION_CFG_LIST  9293  //设置输入源自定义分辨率参数
#define NET_DVR_GET_LED_AREA_INFO_LIST  9295  //获取LED区域列表

#define NET_DVR_GET_DISPINPUT_CFG  9296  //获取显示输入参数
#define NET_DVR_GET_DISPINPUT_CFG_LIST  9297  //获取所有显示输入参数
#define NET_DVR_SET_DISPINPUT_CFG  9298  //设置显示输入参数
#define NET_DVR_GET_DISPINPUT_CFG_CAP  9299  //获取显示输入参数能力集
#define NET_DVR_GET_CURRENT_VALID_PORT          9300    //获取当前有效的,可以连接的端口

#define    NET_DVR_SET_ONLINE_UPGRADE                9301    //允许在线升级
#define NET_DVR_GET_ONLINEUPGRADE_PROGRESS      9302    //获取在线升级进度
#define    NET_DVR_GET_FIRMWARECODE                9303    //获取识别码
#define NET_DVR_GET_ONLINEUPGRADE_SERVER        9304    //获取升级服务器状态
#define NET_DVR_GET_ONLINEUPGRADE_VERSION       9305    //获取新版本信息
#define NET_DVR_GET_RECOMMEN_VERSION            9306    //检测是否推荐升级到此版本
#define NET_DVR_GET_ONLINEUPGRADE_ABILITY       9309    //获取在线升级能力集

#define    NET_DVR_GET_FIBER_CONVERT_BASIC_INFO_V50     9310    //获取远端网管收发器基本信息V50
#define    NET_DVR_GET_FIBER_CONVERT_WORK_STATE_V50     9311    //获取远端网管收发器工作状态

#define  NET_SDK_LED_SCREEN_CHECK  9312  //LED屏幕校正

#define NET_DVR_GET_RS485_WORK_MODE             10001 //获取RS485串口工作模式
#define NET_DVR_SET_RS485_WORK_MODE             10002 //设置RS485串口工作模式
#define NET_DVR_GET_SPLITTER_TRANS_CHAN_CFG     10003 //获取码分器透明通道参数
#define NET_DVR_SET_SPLITTER_TRANS_CHAN_CFG     10004 //设置码分器透明通道参数

#define NET_DVR_GET_RS485_PROTOCOL_VERSION              10301       //获取RS485协议库版本信息

#define  NET_DVR_GET_SIP_CFG                    11001   //IP可视化机获取SIP参数
#define  NET_DVR_SET_SIP_CFG                    11002   //IP可视化机设置SIP参数
#define  NET_DVR_GET_IP_VIEW_DEVCFG                11003   //获取IP对讲分机配置
#define  NET_DVR_SET_IP_VIEW_DEVCFG                11004   //设置IP对讲分机配置
#define  NET_DVR_GET_IP_VIEW_AUDIO_CFG            11005   //获取IP对讲分机音频参数
#define  NET_DVR_SET_IP_VIEW_AUDIO_CFG            11006   //设置IP对讲分机音频参数
#define     NET_DVR_GET_IP_VIEW_CALL_CFG            11007   //获取IP对讲分机呼叫参数
#define  NET_DVR_SET_IP_VIEW_CALL_CFG            11008   //设置IP对讲分机呼叫参数
#define     NET_DVR_GET_AUDIO_LIMIT_ALARM_CFG        11009    //获取声音超限配置参数
#define     NET_DVR_SET_AUDIO_LIMIT_ALARM_CFG        11010    //设置声音超限配置参数
#define     NET_DVR_GET_BUTTON_DOWN_ALARM_CFG        11011    //获取按钮按下告警配置参数
#define     NET_DVR_SET_BUTTON_DOWN_ALARM_CFG        11012    //设置按钮按下告警配置参数

#define  NET_DVR_GET_ISCSI_CFG                  11070   // 获取ISCSI存储配置协议
#define  NET_DVR_SET_ISCSI_CFG                  11071   // 获取ISCSI存储配置协议

#define NET_DVR_GET_SECURITYMODE                12004   //获取当前安全模式
//2013-11-21 获取设备当前的温度和湿度
#define  NET_DVR_GET_TEMP_HUMI                  12005

//2014-02-15 民用IPC自动化测试项目
#define  NET_DVR_SET_ALARMSOUNDMODE             12006   //设置报警声音模式
#define  NET_DVR_GET_ALARMSOUNDMODE             12007   //获取报警声音模式

#define    NET_DVR_SET_IPDEVICE_ACTIVATED       13000//通过NVR激活前端设备
#define NET_DVR_GET_DIGITAL_CHAN_SECURITY_STATUS    13001   //获取数字通道对应设备安全状态
#define    NET_DVR_GET_ACTIVATE_IPC_ABILITY     13003    //获取NVR激活IPC能力集


/*******************************楼宇可视对讲机 start***********************************/
#define NET_DVR_GET_VIDEO_INTERCOM_DEVICEID_CFG  16001  //获取可视对讲设备编号
#define NET_DVR_SET_VIDEO_INTERCOM_DEVICEID_CFG  16002  //设置可视对讲设备编号
#define NET_DVR_SET_PRIVILEGE_PASSWORD           16003  //设置权限密码配置信息
#define NET_DVR_GET_OPERATION_TIME_CFG           16004  //获取操作时间配置
#define NET_DVR_SET_OPERATION_TIME_CFG           16005  //设置操作时间配置
#define NET_DVR_GET_VIDEO_INTERCOM_RELATEDEV_CFG 16006  //获取关联网络设备参数
#define NET_DVR_SET_VIDEO_INTERCOM_RELATEDEV_CFG 16007  //设置关联网络设备参数
#define NET_DVR_REMOTECONTROL_NOTICE_DATA        16008  //公告信息下发
#define NET_DVR_REMOTECONTROL_GATEWAY            16009  //远程开锁
#define NET_DVR_REMOTECONTROL_OPERATION_AUTH     16010  //操作权限验证

#define NET_DVR_GET_VIDEO_INTERCOM_IOIN_CFG      16016  //获取IO输入参数
#define NET_DVR_SET_VIDEO_INTERCOM_IOIN_CFG      16017  //设置IO输入参数
#define NET_DVR_GET_VIDEO_INTERCOM_IOOUT_CFG     16018  //获取IO输出参数
#define NET_DVR_SET_VIDEO_INTERCOM_IOOUT_CFG     16019  //设置IO输出参数
#define NET_DVR_GET_ELEVATORCONTROL_CFG          16020  //获取梯控器参数
#define NET_DVR_SET_ELEVATORCONTROL_CFG          16021  //设置梯控器参数
#define NET_DVR_GET_VIDEOINTERCOM_STREAM         16022  //获取可视对讲流通道参数
#define NET_DVR_SET_VIDEOINTERCOM_STREAM         16023  //设置可视对讲流通道参数
#define NET_DVR_GET_WDR_CFG                      16024  //获取宽动态参数配置
#define NET_DVR_SET_WDR_CFG                      16025  //设置宽动态参数配置
#define NET_DVR_GET_VIS_DEVINFO                  16026  //获取可设备编号信息
#define NET_DVR_GET_VIS_REGISTER_INFO            16027  //获取可设备注册的设备信息
#define NET_DVR_GET_ELEVATORCONTROL_CFG_V40      16028  //获取梯控器参数-扩展
#define NET_DVR_SET_ELEVATORCONTROL_CFG_V40      16029  //设置梯控器参数-扩展
#define NET_DVR_GET_CALL_ROOM_CFG                 16030  //获取按键呼叫住户配置
#define NET_DVR_SET_CALL_ROOM_CFG                 16031  //设置按键呼叫住户配置
#define NET_DVR_VIDEO_CALL_SIGNAL_PROCESS        16032  //可视话对讲信令处理
#define NET_DVR_GET_CALLER_INFO                  16033  //获取主叫长号信息
#define NET_DVR_GET_CALL_STATUS                  16034  //获取通话状态
#define NET_DVR_GET_SERVER_DEVICE_INFO           16035  //获取设备列表
#define NET_DVR_SET_CALL_SIGNAL                  16036  //可视对讲手机端发送信令
#define NET_DVR_GET_VIDEO_INTERCOM_ALARM_CFG       16037    //获取可视对讲报警事件参数
#define NET_DVR_SET_VIDEO_INTERCOM_ALARM_CFG       16038    //设置可视对讲报警事件参数
#define NET_DVR_GET_RING_LIST                    16039    //查询铃音参数列表

#define NET_DVR_GET_ROOM_CUSTOM_CFG             16040  //房间自定义获取
#define NET_DVR_SET_ROOM_CUSTOM_CFG             16041  //房间自定义设置
#define NET_DVR_GET_ELEVATORCONTROL_CFG_V50     16042  //获取梯控器参数V50
#define NET_DVR_SET_ELEVATORCONTROL_CFG_V50     16043  //设置梯控器参数V50
/*******************************楼宇可视对讲机 end***********************************/

#define    NET_DVR_DEBUGINFO_START                     18000    //网传设备调试信息启动命令
#define    NET_DVR_AUTO_TEST_START                     18001    //自动测试长连接获取

#define NET_DVR_GET_SELFCHECK_RESULT        20000    //获取设备自检结果
#define NET_DVR_SET_TEST_COMMAND            20001    //设置测试控制命令
#define NET_DVR_SET_TEST_DEVMODULE          20002    //设置测试硬件模块控制命令
#define NET_DVR_GET_TEST_DEVMODULE          20003    //获取测试硬件模块控制命令

#define NET_DVR_SET_AUTOFOCUS_TEST          20004    //保存自动对焦参数 2013-10-26
#define NET_DVR_CHECK_USER_STATUS           20005    //检测用户是否在线
#define NET_DVR_GET_TEST_COMMAND            20010    //获取测试控制命令
#define NET_DVR_GET_DIAL_SWITCH_CFG         20200    //获取拨码开关信息
#define NET_DVR_SET_AGING_TRICK_SCAN          20201  //设置老化前后工具参数
#define NET_DVR_GET_ECCENTRIC_CORRECT_STATE   20202  //获取获取偏心校正状态

#define NET_DVR_T1_TEST_CMD                    131073 //当测试命令来用，通过数据区域的文本内容区分具体做什么.数据长度不得大于1024
//数据区格式为：<T1TestCmd type="0"/>//恢复设备默认参数并关机。

// 美分定制菜单输出模式外部命令
#define NET_DVR_GET_MEMU_OUTPUT_MODE            155649            // 获取菜单输出模式
#define NET_DVR_SET_MEMU_OUTPUT_MODE            155650            // 设置菜单输出模式

/***************************DS9000新增命令(_V30) end *****************************/

#define NET_DVR_GET_DEV_LOGIN_RET_INFO      16777200  //设备登陆返回参数


#define NET_DVR_GET_TEST_VERSION_HEAD           268435441   //获取测试版本头
#define NET_DVR_SET_TEST_VERSION_HEAD           268435442   //设置测试版本头
#define NET_DVR_GET_TEST_VERSION_HEAD_V1        268435443   //获取测试版本头-第二版
#define NET_DVR_SET_TEST_VERSION_HEAD_V1        268435444   //设置测试版本头-第二版
#define NET_DVR_GET_TEST_VERSION_HEAD_V2        268435445   //获取测试版本头-第三版
#define NET_DVR_SET_TEST_VERSION_HEAD_V2        268435446   //设置测试版本头-第三版

#define NET_DVR_GET_TEST_VERSION_HEAD_ONLY_0    268435447   //获取测试版本头,当前仅有一个版本
#define NET_DVR_SET_TEST_VERSION_HEAD_ONLY_0    268435448   //设置测试版本头,当前仅有一个版本


#define MAX_LOCAL_ADDR_LEN             96        //SOCKS最大本地网段个数
#define    MAX_COUNTRY_NAME_LEN          4        //国家简写名称长度

/************************DVR日志 begin***************************/

/* 报警 */
//主类型
#define MAJOR_ALARM                        0x1
//次类型
#define MINOR_ALARM_IN                    0x1        /* 报警输入 */
#define MINOR_ALARM_OUT                    0x2        /* 报警输出 */
#define MINOR_MOTDET_START                0x3        /* 移动侦测报警开始 */
#define MINOR_MOTDET_STOP                0x4        /* 移动侦测报警结束 */
#define MINOR_HIDE_ALARM_START            0x5        /* 遮挡报警开始 */
#define MINOR_HIDE_ALARM_STOP            0x6        /* 遮挡报警结束 */
#define MINOR_VCA_ALARM_START            0x7        /*智能报警开始*/
#define MINOR_VCA_ALARM_STOP            0x8        /*智能报警停止*/
#define MINOR_ITS_ALARM_START           0x09    // 交通事件报警开始
#define MINOR_ITS_ALARM_STOP            0x0A    // 交通事件报警结束
//2010-11-10 网络报警日志
#define MINOR_NETALARM_START            0x0b    /*网络报警开始*/
#define MINOR_NETALARM_STOP             0x0c    /*网络报警结束*/
//2010-12-16 报警板日志，与"MINOR_ALARM_IN"配对使用
#define MINOR_NETALARM_RESUME            0x0d    /*网络报警恢复*/
//2012-4-5 IPC PIR、无线、呼救报警
#define MINOR_WIRELESS_ALARM_START      0x0e  /* 无线报警开始 */
#define MINOR_WIRELESS_ALARM_STOP          0x0f /* 无线报警结束 */
#define MINOR_PIR_ALARM_START           0x10  /* 人体感应报警开始 */
#define MINOR_PIR_ALARM_STOP               0x11  /* 人体感应报警结束 */
#define MINOR_CALLHELP_ALARM_START      0x12  /* 呼救报警开始 */
#define MINOR_CALLHELP_ALARM_STOP          0x13  /* 呼救报警结束 */
#define MINOR_IPCHANNEL_ALARMIN_START   0x14  //数字通道报警输入开始：PCNVR在接收到数字通道的MINOR_ALARM_IN产生“数字通道报警输入开始”，10s，再收不到MINOR_ALARM_IN，产生“数字通道报警输入结束”
#define MINOR_IPCHANNEL_ALARMIN_STOP    0x15  //数字通道报警输入开始：同上
#define MINOR_DETECTFACE_ALARM_START    0x16  /* 人脸侦测报警开始 */
#define MINOR_DETECTFACE_ALARM_STOP      0x17  /* 人脸侦测报警结束 */
#define MINOR_VQD_ALARM_START           0x18  //VQD报警
#define MINOR_VQD_ALARM_STOP            0x19  //VQD报警结束
#define MINOR_VCA_SECNECHANGE_DETECTION 0x1a  //场景侦测报警 2013-07-16

#define MINOR_SMART_REGION_EXITING_BEGIN            0x1b  //离开区域侦测开始
#define MINOR_SMART_REGION_EXITING_END              0x1c  //离开区域侦测结束
#define MINOR_SMART_LOITERING_BEGIN                 0x1d  //徘徊侦测开始
#define MINOR_SMART_LOITERING_END                   0x1e  //徘徊侦测结束

#define MINOR_VCA_ALARM_LINE_DETECTION_BEGIN        0x20
#define MINOR_VCA_ALARM_LINE_DETECTION_END          0x21
#define MINOR_VCA_ALARM_INTRUDE_BEGIN                0x22  //区域侦测开始
#define MINOR_VCA_ALARM_INTRUDE_END                       0x23  //区域侦测结束
#define MINOR_VCA_ALARM_AUDIOINPUT                    0x24   //音频异常输入
#define MINOR_VCA_ALARM_AUDIOABNORMAL                 0x25   //声强突变
#define MINOR_VCA_DEFOCUS_DETECTION_BEGIN           0x26  //虚焦侦测开始
#define MINOR_VCA_DEFOCUS_DETECTION_END                0x27  //虚焦侦测结束

//民用NVR
#define MINOR_EXT_ALARM                             0x28/*IPC外部报警*/
#define MINOR_VCA_FACE_ALARM_BEGIN                    0x29    /*人脸侦测开始*/
#define MINOR_SMART_REGION_ENTRANCE_BEGIN           0x2a  //进入区域侦测开始
#define MINOR_SMART_REGION_ENTRANCE_END             0x2b  //进入区域侦测结束
#define MINOR_SMART_PEOPLE_GATHERING_BEGIN          0x2c  //人员聚集侦测开始
#define MINOR_SMART_PEOPLE_GATHERING_END            0x2d  //人员聚集侦测结束
#define MINOR_SMART_FAST_MOVING_BEGIN               0x2e  //快速运动侦测开始
#define MINOR_SMART_FAST_MOVING_END                 0x2f  //快速运动侦测结束

#define MINOR_VCA_FACE_ALARM_END                    0x30    /*人脸侦测结束*/
#define MINOR_VCA_SCENE_CHANGE_ALARM_BEGIN            0x31   /*场景变更侦测开始*/
#define MINOR_VCA_SCENE_CHANGE_ALARM_END            0x32   /*场景变更侦测结束*/
#define MINOR_VCA_ALARM_AUDIOINPUT_BEGIN            0x33   /*音频异常输入开始*/
#define MINOR_VCA_ALARM_AUDIOINPUT_END                0x34   /*音频异常输入结束*/
#define MINOR_VCA_ALARM_AUDIOABNORMAL_BEGIN            0x35  /*声强突变侦测开始*/
#define MINOR_VCA_ALARM_AUDIOABNORMAL_END            0x36  /*声强突变侦测结束*/

#define MINOR_VCA_LECTURE_DETECTION_BEGIN           0x37  //授课侦测开始报警
#define MINOR_VCA_LECTURE_DETECTION_END             0x38  //授课侦测结束报警
#define MINOR_VCA_ALARM_AUDIOSTEEPDROP              0x39  //声强陡降 2014-03-21
#define MINOR_VCA_ANSWER_DETECTION_BEGIN            0x3a  //回答问题侦测开始报警
#define MINOR_VCA_ANSWER_DETECTION_END              0x3b  //回答问题侦测结束报警

#define MINOR_SMART_PARKING_BEGIN                   0x3c   //停车侦测开始
#define MINOR_SMART_PARKING_END                     0x3d   //停车侦测结束
#define MINOR_SMART_UNATTENDED_BAGGAGE_BEGIN        0x3e   //物品遗留侦测开始
#define MINOR_SMART_UNATTENDED_BAGGAGE_END          0x3f   //物品遗留侦测结束
#define MINOR_SMART_OBJECT_REMOVAL_BEGIN            0x40   //物品拿取侦测开始
#define MINOR_SMART_OBJECT_REMOVAL_END              0x41   //物品拿取侦测结束
#define MINOR_SMART_VEHICLE_ALARM_START             0x46   //车牌检测开始
#define MINOR_SMART_VEHICLE_ALARM_STOP              0x47   //车牌检测结束
#define MINOR_THERMAL_FIREDETECTION                 0x48   //热成像火点检测侦测开始
#define MINOR_THERMAL_FIREDETECTION_END             0x49   //热成像火点检测侦测结束
#define MINOR_SMART_VANDALPROOF_BEGIN               0x50   //防破坏检测开始
#define MINOR_SMART_VANDALPROOF_END                 0x51   //防破坏检测结束

#define MINOR_FACESNAP_MATCH_ALARM_START            0x55  /*人脸比对报警开始*/
#define MINOR_FACESNAP_MATCH_ALARM_STOP             0x56  /*人脸比对报警结束*/

#define MINOR_THERMAL_SHIPSDETECTION                0x5a   //热成像船只检测侦测
#define MINOR_THERMAL_THERMOMETRY_EARLYWARNING_BEGIN 0x5b  //热成像测温预警开始
#define MINOR_THERMAL_THERMOMETRY_EARLYWARNING_END  0x5c   //热成像测温预警结束
#define MINOR_THERMAL_THERMOMETRY_ALARM_BEGIN       0x5d   //热成像测温报警开始
#define MINOR_THERMAL_THERMOMETRY_ALARM_END         0x5e   //热成像测温报警结束
#define MINOR_THERMAL_THERMOMETRY_DIFF_ALARM_BEGIN  0x5f   //热成像温差报警开始
#define MINOR_THERMAL_THERMOMETRY_DIFF_ALARM_END    0x60   //热成像温差报警结束
#define MINOR_FACE_THERMOMETRY_ALARM                0x63   //人脸测温报警
#define MINOR_SMART_DENSEFOGDETECTION_BEGIN         0x6e   //大雾侦测开始
#define MINOR_SMART_DENSEFOGDETECTION_END           0x6f   //大雾侦测结束
#define MINOR_RUNNING_ALARM                         0x70   //奔跑检测
#define MINOR_RETENTION_ALARM                       0x71   //滞留检测
#define MINOR_VCA_GET_UP_ALARM_BEGIN                0x80   //起床检测报警开始
#define MINOR_VCA_GET_UP_ALARM_END                  0x81   //起床检测报警结束
#define MINOR_VCA_ADV_REACH_HEIGHT_ALARM_BEGIN      0x82   //折线攀高报警开始
#define MINOR_VCA_ADV_REACH_HEIGHT_ALARM_END        0x83   //折线攀高报警结束
#define MINOR_VCA_TOILET_TARRY_ALARM_BEGIN          0x84   //如厕超时报警开始
#define MINOR_VCA_TOILET_TARRY_ALARM_END            0x85   //如厕超时报警结束
#define MINOR_HUMAN_RECOGNITION_ALARM_BEGIN         0x86   //人体识别报警开始
#define MINOR_HUMAN_RECOGNITION_ALARM_END           0x87   //人体识别报警结束
#define MINOR_STUDENTS_STOODUP_ALARM_BEGIN          0x88   //学生起立报警开始
#define MINOR_STUDENTS_STOODUP_ALARM_END            0x89   //学生起立报警结束
#define MINOR_FRAMES_PEOPLE_COUNTING_ALARM          0x8a   //区域人数统计报警

//0x400-0x1000 门禁报警
#define MINOR_ALARMIN_SHORT_CIRCUIT                 0x400  //防区短路报警
#define MINOR_ALARMIN_BROKEN_CIRCUIT                0x401  //防区断路报警
#define MINOR_ALARMIN_EXCEPTION                     0x402  //防区异常报警
#define MINOR_ALARMIN_RESUME                        0x403  //防区报警恢复
#define MINOR_HOST_DESMANTLE_ALARM                  0x404  //设备防拆报警
#define MINOR_HOST_DESMANTLE_RESUME                 0x405  //设备防拆恢复
#define MINOR_CARD_READER_DESMANTLE_ALARM           0x406  //读卡器防拆报警
#define MINOR_CARD_READER_DESMANTLE_RESUME          0x407  //读卡器防拆恢复
#define MINOR_CASE_SENSOR_ALARM                     0x408  //事件输入报警
#define MINOR_CASE_SENSOR_RESUME                    0x409  //事件输入恢复
#define MINOR_STRESS_ALARM                          0x40a  //胁迫报警
#define MINOR_OFFLINE_ECENT_NEARLY_FULL             0x40b  //离线事件满90%报警
#define MINOR_CARD_MAX_AUTHENTICATE_FAIL            0x40c  //卡号认证失败超次报警
#define MINOR_SD_CARD_FULL                          0x40d  //SD卡存储满报警
#define MINOR_LINKAGE_CAPTURE_PIC                   0x40e  //联动抓拍事件报警
#define MINOR_SECURITY_MODULE_DESMANTLE_ALARM        0x40f  //门控安全模块防拆报警
#define MINOR_SECURITY_MODULE_DESMANTLE_RESUME        0x410  //门控安全模块防拆恢复

#define MINOR_POS_START_ALARM                       0x411  //POS开启
#define MINOR_POS_END_ALARM                         0x412  //POS结束
#define MINOR_FACE_IMAGE_QUALITY_LOW                0x413  //人脸图像画质低
#define MINOR_FINGE_RPRINT_QUALITY_LOW              0x414  //指纹图像画质低
#define MINOR_FIRE_IMPORT_SHORT_CIRCUIT             0x415  //消防输入短路报警
#define MINOR_FIRE_IMPORT_BROKEN_CIRCUIT            0x416  //消防输入断路报警
#define MINOR_FIRE_IMPORT_RESUME                    0x417  //消防输入恢复
#define MINOR_FIRE_BUTTON_TRIGGER                   0x418  //消防按钮触发
#define MINOR_FIRE_BUTTON_RESUME                    0x419  //消防按钮恢复
#define MINOR_MAINTENANCE_BUTTON_TRIGGER            0x41a  //维护按钮触发
#define MINOR_MAINTENANCE_BUTTON_RESUME             0x41b  //维护按钮恢复
#define MINOR_EMERGENCY_BUTTON_TRIGGER              0x41c  //紧急按钮触发
#define MINOR_EMERGENCY_BUTTON_RESUME               0x41d  //紧急按钮恢复
#define MINOR_DISTRACT_CONTROLLER_ALARM             0x41e  //分控器防拆报警
#define MINOR_DISTRACT_CONTROLLER_RESUME            0x41f  //分控器防拆报警恢复

#define MINOR_PERSON_DENSITY_DETECTION_START        0x420  //人员密度超阈值报警开始
#define MINOR_PERSON_DENSITY_DETECTION_END          0x421  //人员密度超阈值报警结束

#define MINOR_CHANNEL_CONTROLLER_DESMANTLE_ALARM    0x422  //通道控制器防拆报警
#define MINOR_CHANNEL_CONTROLLER_DESMANTLE_RESUME   0x423  //通道控制器防拆报警恢复
#define MINOR_CHANNEL_CONTROLLER_FIRE_IMPORT_ALARM  0x424  //通道控制器消防输入报警
#define MINOR_CHANNEL_CONTROLLER_FIRE_IMPORT_RESUME 0x425  //通道控制器消防输入报警恢复

#define MINOR_ALARM_CUSTOM1                         0x900  //门禁自定义报警1
#define MINOR_ALARM_CUSTOM2                         0x901  //门禁自定义报警2
#define MINOR_ALARM_CUSTOM3                         0x902  //门禁自定义报警3
#define MINOR_ALARM_CUSTOM4                         0x903  //门禁自定义报警4
#define MINOR_ALARM_CUSTOM5                         0x904  //门禁自定义报警5
#define MINOR_ALARM_CUSTOM6                         0x905  //门禁自定义报警6
#define MINOR_ALARM_CUSTOM7                         0x906  //门禁自定义报警7
#define MINOR_ALARM_CUSTOM8                         0x907  //门禁自定义报警8
#define MINOR_ALARM_CUSTOM9                         0x908  //门禁自定义报警9
#define MINOR_ALARM_CUSTOM10                        0x909  //门禁自定义报警10
#define MINOR_ALARM_CUSTOM11                        0x90a  //门禁自定义报警11
#define MINOR_ALARM_CUSTOM12                        0x90b  //门禁自定义报警12
#define MINOR_ALARM_CUSTOM13                        0x90c  //门禁自定义报警13
#define MINOR_ALARM_CUSTOM14                        0x90d  //门禁自定义报警14
#define MINOR_ALARM_CUSTOM15                        0x90e  //门禁自定义报警15
#define MINOR_ALARM_CUSTOM16                        0x90f  //门禁自定义报警16
#define MINOR_ALARM_CUSTOM17                        0x910  //门禁自定义报警17
#define MINOR_ALARM_CUSTOM18                        0x911  //门禁自定义报警18
#define MINOR_ALARM_CUSTOM19                        0x912  //门禁自定义报警19
#define MINOR_ALARM_CUSTOM20                        0x913  //门禁自定义报警20
#define MINOR_ALARM_CUSTOM21                        0x914  //门禁自定义报警21
#define MINOR_ALARM_CUSTOM22                        0x915  //门禁自定义报警22
#define MINOR_ALARM_CUSTOM23                        0x916  //门禁自定义报警23
#define MINOR_ALARM_CUSTOM24                        0x917  //门禁自定义报警24
#define MINOR_ALARM_CUSTOM25                        0x918  //门禁自定义报警25
#define MINOR_ALARM_CUSTOM26                        0x919  //门禁自定义报警26
#define MINOR_ALARM_CUSTOM27                        0x91a  //门禁自定义报警27
#define MINOR_ALARM_CUSTOM28                        0x91b  //门禁自定义报警28
#define MINOR_ALARM_CUSTOM29                        0x91c  //门禁自定义报警29
#define MINOR_ALARM_CUSTOM30                        0x91d  //门禁自定义报警30
#define MINOR_ALARM_CUSTOM31                        0x91e  //门禁自定义报警31
#define MINOR_ALARM_CUSTOM32                        0x91f  //门禁自定义报警32
#define MINOR_ALARM_CUSTOM33                        0x920  //门禁自定义报警33
#define MINOR_ALARM_CUSTOM34                        0x921  //门禁自定义报警34
#define MINOR_ALARM_CUSTOM35                        0x922  //门禁自定义报警35
#define MINOR_ALARM_CUSTOM36                        0x923  //门禁自定义报警36
#define MINOR_ALARM_CUSTOM37                        0x924  //门禁自定义报警37
#define MINOR_ALARM_CUSTOM38                        0x925  //门禁自定义报警38
#define MINOR_ALARM_CUSTOM39                        0x926  //门禁自定义报警39
#define MINOR_ALARM_CUSTOM40                        0x927  //门禁自定义报警40
#define MINOR_ALARM_CUSTOM41                        0x928  //门禁自定义报警41
#define MINOR_ALARM_CUSTOM42                        0x929  //门禁自定义报警42
#define MINOR_ALARM_CUSTOM43                        0x92a  //门禁自定义报警43
#define MINOR_ALARM_CUSTOM44                        0x92b  //门禁自定义报警44
#define MINOR_ALARM_CUSTOM45                        0x92c  //门禁自定义报警45
#define MINOR_ALARM_CUSTOM46                        0x92d  //门禁自定义报警46
#define MINOR_ALARM_CUSTOM47                        0x92e  //门禁自定义报警47
#define MINOR_ALARM_CUSTOM48                        0x92f  //门禁自定义报警48
#define MINOR_ALARM_CUSTOM49                        0x930  //门禁自定义报警49
#define MINOR_ALARM_CUSTOM50                        0x931  //门禁自定义报警50
#define MINOR_ALARM_CUSTOM51                        0x932  //门禁自定义报警51
#define MINOR_ALARM_CUSTOM52                        0x933  //门禁自定义报警52
#define MINOR_ALARM_CUSTOM53                        0x934  //门禁自定义报警53
#define MINOR_ALARM_CUSTOM54                        0x935  //门禁自定义报警54
#define MINOR_ALARM_CUSTOM55                        0x936  //门禁自定义报警55
#define MINOR_ALARM_CUSTOM56                        0x937  //门禁自定义报警56
#define MINOR_ALARM_CUSTOM57                        0x938  //门禁自定义报警57
#define MINOR_ALARM_CUSTOM58                        0x939  //门禁自定义报警58
#define MINOR_ALARM_CUSTOM59                        0x93a  //门禁自定义报警59
#define MINOR_ALARM_CUSTOM60                        0x93b  //门禁自定义报警60
#define MINOR_ALARM_CUSTOM61                        0x93c  //门禁自定义报警61
#define MINOR_ALARM_CUSTOM62                        0x93d  //门禁自定义报警62
#define MINOR_ALARM_CUSTOM63                        0x93e  //门禁自定义报警63
#define MINOR_ALARM_CUSTOM64                        0x93f  //门禁自定义报警64

/* 异常 */
//主类型
#define MAJOR_EXCEPTION                    0x2
//次类型
#define MINOR_RAID_ERROR                0x20    /* 阵列异常 */
#define MINOR_VI_LOST                    0x21    /* 视频信号丢失 */
#define MINOR_ILLEGAL_ACCESS            0x22    /* 非法访问 */
#define MINOR_HD_FULL                    0x23    /* 硬盘满 */
#define MINOR_HD_ERROR                    0x24    /* 硬盘错误 */
#define MINOR_DCD_LOST                    0x25    /* MODEM 掉线(保留不使用) */
#define MINOR_IP_CONFLICT                0x26    /* IP地址冲突 */
#define MINOR_NET_BROKEN                0x27    /* 网络断开*/
#define MINOR_REC_ERROR                 0x28    /* 录像出错 */
#define MINOR_IPC_NO_LINK               0x29    /* IPC连接异常 */
#define MINOR_VI_EXCEPTION              0x2a    /* 视频输入异常(只针对模拟通道) */
#define MINOR_IPC_IP_CONFLICT           0x2b    /*ipc ip 地址 冲突*/
#define MINOR_SENCE_EXCEPTION           0x2c    // 场景异常

#define MINOR_PIC_REC_ERROR              0x2d    /* 抓图出错--获取图片文件失败*/
#define MINOR_VI_MISMATCH                0x2e    /* 视频制式不匹配*/
#define MINOR_RESOLUTION_MISMATCH        0x2f    /*前端/录像分辨率不匹配  */

//2009-12-16 增加视频综合平台日志类型
#define MINOR_FANABNORMAL                0x31    /* 视频综合平台：风扇状态异常 */
#define MINOR_FANRESUME                    0x32    /* 视频综合平台：风扇状态恢复正常 */
#define MINOR_SUBSYSTEM_ABNORMALREBOOT    0x33    /* 视频综合平台：6467异常重启 */
#define MINOR_MATRIX_STARTBUZZER        0x34    /* 视频综合平台：dm6467异常，启动蜂鸣器 */

//2010-01-22 增加视频综合平台异常日志次类型
#define MINOR_NET_ABNORMAL                0x35    /*网络状态异常*/
#define MINOR_MEM_ABNORMAL                0x36    /*内存状态异常*/
#define MINOR_FILE_ABNORMAL                0x37    /*文件状态异常*/
#define MINOR_PANEL_ABNORMAL            0x38 /*前面板连接异常*/
#define MINOR_PANEL_RESUME                0x39 /*前面板恢复正常*/
#define MINOR_RS485_DEVICE_ABNORMAL        0x3a     /*RS485连接状态异常*/
#define MINOR_RS485_DEVICE_REVERT        0x3b    /*RS485连接状态异常恢复*/

//2012-2-18 增加大屏控制器异常日志次类型
#define MINOR_SCREEN_SUBSYSTEM_ABNORMALREBOOT   0x3c            //子板异常启动
#define    MINOR_SCREEN_SUBSYSTEM_ABNORMALINSERT    0x3d            //子板插入
#define    MINOR_SCREEN_SUBSYSTEM_ABNORMALPULLOUT    0x3e            //子板拔出
#define    MINOR_SCREEN_ABNARMALTEMPERATURE        0x3f            //温度异常
//2012-07-26 视频综合平台v2.1
#define MINOR_HIGH_TEMPERATURE_PROTECT          0x40 //子板过热保护

//Netra 2.2.2
#define MINOR_RECORD_OVERFLOW                   0x41              /*缓冲区溢出*/
#define MINOR_DSP_ABNORMAL                      0x42              //DSP异常

//Netra 3.0.0
#define MINOR_ANR_RECORD_FAIED                 0x43         /*ANR录像失败*/
#define MINOR_SPARE_WORK_DEVICE_EXCEPT         0x44            /*热备设备工作机异常*/
#define MINOR_START_IPC_MAS_FAILED             0x45            /*开启IPC MAS失败*/
//高性能 256路NVR
#define MINOR_IPCM_CRASH                       0x46         /*IPCM异常重启*/
#define MINOR_POE_POWER_EXCEPTION              0x47         /*POE 供电异常*/
#define MINOR_UPLOAD_DATA_CS_EXCEPTION         0x48          //云存储数据上传失败/
#define MINOR_DIAL_EXCEPTION                   0x49         /*拨号异常*/
#define MINOR_DEV_EXCEPTION_OFFLINE            0x50  //设备异常下线
#define MINOR_UPGRADEFAIL                      0x51 //远程升级设备失败
#define MINOR_AI_LOST                           0x52    /* 音频信号丢失 */
#define MINOR_SYNC_IPC_PASSWD                   0x53    /* 同步IPC密码异常 */
#define MINOR_EZVIZ_OFFLINE                        0x54    /* 萤石下线异常*/
#define MINOR_VQD_ABNORMAL                        0x55 //VQD异常
#define MINOR_ACCESSORIES_PLATE                0x57 //配件板异常
#define MINOR_KMS_EXPAMSION_DISK_LOST         0x58 // KMS扩容盘丢失
#define MINOR_ABNORMAL_PORT                 0x59 // 端口异常
#define MINOR_CAMERA_ANGLE_ANOMALY          0x60//  相机视角异常
#define MINOR_DATA_DISK_ERROE               0x61//  数据盘错误
#define MINOR_INTELLIGENT_SYSTEM_RUNNING_ERROR     0x62//  智能系统运行异常

//0x400-0x1000 门禁异常类型
#define MINOR_DEV_POWER_ON                     0x400  //设备上电启动
#define MINOR_DEV_POWER_OFF                    0x401  //设备掉电关闭
#define MINOR_WATCH_DOG_RESET                  0x402  //看门狗复位
#define MINOR_LOW_BATTERY                      0x403  //蓄电池电压低
#define MINOR_BATTERY_RESUME                   0x404  //蓄电池电压恢复正常
#define MINOR_AC_OFF                           0x405  //交流电断电
#define MINOR_AC_RESUME                        0x406  //交流电恢复
#define MINOR_NET_RESUME                       0x407  //网络恢复
#define MINOR_FLASH_ABNORMAL                   0x408  //FLASH读写异常
#define MINOR_CARD_READER_OFFLINE              0x409  //读卡器掉线
#define MINOR_CARD_READER_RESUME               0x40a  //读卡器掉线恢复
#define MINOR_INDICATOR_LIGHT_OFF              0x40b  //指示灯关闭
#define MINOR_INDICATOR_LIGHT_RESUME           0x40c  //指示灯恢复
#define MINOR_CHANNEL_CONTROLLER_OFF           0x40d  //通道控制器掉线
#define MINOR_CHANNEL_CONTROLLER_RESUME        0x40e  //通道控制器恢复
#define MINOR_SECURITY_MODULE_OFF               0x40f  //门控安全模块掉线
#define MINOR_SECURITY_MODULE_RESUME           0x410  //门控安全模块在线
#define MINOR_BATTERY_ELECTRIC_LOW             0x411  //电池电压低(仅人脸设备使用)
#define MINOR_BATTERY_ELECTRIC_RESUME          0x412  //电池电压恢复正常(仅人脸设备使用)
#define MINOR_LOCAL_CONTROL_NET_BROKEN           0x413  //就地控制器网络断开
#define MINOR_LOCAL_CONTROL_NET_RSUME           0x414  //就地控制器网络恢复
#define MINOR_MASTER_RS485_LOOPNODE_BROKEN     0x415  //主控RS485环路节点断开
#define MINOR_MASTER_RS485_LOOPNODE_RESUME     0x416  //主控RS485环路节点恢复
#define MINOR_LOCAL_CONTROL_OFFLINE            0x417  //就地控制器掉线
#define MINOR_LOCAL_CONTROL_RESUME             0x418  //就地控制器掉线恢复
#define MINOR_LOCAL_DOWNSIDE_RS485_LOOPNODE_BROKEN  0x419  //就地下行RS485环路断开
#define MINOR_LOCAL_DOWNSIDE_RS485_LOOPNODE_RESUME  0x41a  //就地下行RS485环路恢复
#define MINOR_DISTRACT_CONTROLLER_ONLINE       0x41b  //分控器在线
#define MINOR_DISTRACT_CONTROLLER_OFFLINE      0x41c  //分控器离线
#define MINOR_ID_CARD_READER_NOT_CONNECT       0x41d  //身份证阅读器未连接（智能专用）
#define MINOR_ID_CARD_READER_RESUME            0x41e  //身份证阅读器连接恢复（智能专用）
#define MINOR_FINGER_PRINT_MODULE_NOT_CONNECT  0x41f  //指纹模组未连接（智能专用）
#define MINOR_FINGER_PRINT_MODULE_RESUME       0x420  //指纹模组连接恢复（智能专用）
#define MINOR_CAMERA_NOT_CONNECT               0x421  //摄像头未连接
#define MINOR_CAMERA_RESUME                    0x422  //摄像头连接恢复
#define MINOR_COM_NOT_CONNECT                  0x423  //COM口未连接
#define MINOR_COM_RESUME                       0x424  //COM口连接恢复
#define MINOR_DEVICE_NOT_AUTHORIZE             0x425  //设备未授权
#define MINOR_PEOPLE_AND_ID_CARD_DEVICE_ONLINE 0x426  //人证设备在线
#define MINOR_PEOPLE_AND_ID_CARD_DEVICE_OFFLINE 0x427 //人证设备离线
#define MINOR_LOCAL_LOGIN_LOCK                 0x428  //本地登录锁定
#define MINOR_LOCAL_LOGIN_UNLOCK               0x429  //本地登录解锁
#define MINOR_SUBMARINEBACK_COMM_BREAK         0x42a  //与反潜回服务器通信断开
#define MINOR_SUBMARINEBACK_COMM_RESUME        0x42b  //与反潜回服务器通信恢复
#define MINOR_MOTOR_SENSOR_EXCEPTION           0x42c  //电机传感器异常
#define MINOR_CAN_BUS_EXCEPTION                0x42d  //CAN总线异常
#define MINOR_CAN_BUS_RESUME                   0x42e  //CAN总线恢复
#define MINOR_GATE_TEMPERATURE_OVERRUN         0x42f  //闸机腔体温度超限
#define MINOR_IR_EMITTER_EXCEPTION             0x430  //红外对射异常
#define MINOR_IR_EMITTER_RESUME                0x431  //红外对射恢复
#define MINOR_LAMP_BOARD_COMM_EXCEPTION        0x432  //灯板通信异常
#define MINOR_LAMP_BOARD_COMM_RESUME           0x433  //灯板通信恢复
#define MINOR_IR_ADAPTOR_COMM_EXCEPTION        0x434  //红外转接板通信异常
#define MINOR_IR_ADAPTOR_COMM_RESUME           0x435  //红外转接板通信恢复

#define MINOR_EXCEPTION_CUSTOM1                 0x900  //门禁自定义异常1
#define MINOR_EXCEPTION_CUSTOM2                 0x901  //门禁自定义异常2
#define MINOR_EXCEPTION_CUSTOM3                 0x902  //门禁自定义异常3
#define MINOR_EXCEPTION_CUSTOM4                 0x903  //门禁自定义异常4
#define MINOR_EXCEPTION_CUSTOM5                 0x904  //门禁自定义异常5
#define MINOR_EXCEPTION_CUSTOM6                 0x905  //门禁自定义异常6
#define MINOR_EXCEPTION_CUSTOM7                 0x906  //门禁自定义异常7
#define MINOR_EXCEPTION_CUSTOM8                 0x907  //门禁自定义异常8
#define MINOR_EXCEPTION_CUSTOM9                 0x908  //门禁自定义异常9
#define MINOR_EXCEPTION_CUSTOM10                0x909  //门禁自定义异常10
#define MINOR_EXCEPTION_CUSTOM11                0x90a  //门禁自定义异常11
#define MINOR_EXCEPTION_CUSTOM12                0x90b  //门禁自定义异常12
#define MINOR_EXCEPTION_CUSTOM13                0x90c  //门禁自定义异常13
#define MINOR_EXCEPTION_CUSTOM14                0x90d  //门禁自定义异常14
#define MINOR_EXCEPTION_CUSTOM15                0x90e  //门禁自定义异常15
#define MINOR_EXCEPTION_CUSTOM16                0x90f  //门禁自定义异常16
#define MINOR_EXCEPTION_CUSTOM17                0x910  //门禁自定义异常17
#define MINOR_EXCEPTION_CUSTOM18                0x911  //门禁自定义异常18
#define MINOR_EXCEPTION_CUSTOM19                0x912  //门禁自定义异常19
#define MINOR_EXCEPTION_CUSTOM20                0x913  //门禁自定义异常20
#define MINOR_EXCEPTION_CUSTOM21                0x914  //门禁自定义异常21
#define MINOR_EXCEPTION_CUSTOM22                0x915  //门禁自定义异常22
#define MINOR_EXCEPTION_CUSTOM23                0x916  //门禁自定义异常23
#define MINOR_EXCEPTION_CUSTOM24                0x917  //门禁自定义异常24
#define MINOR_EXCEPTION_CUSTOM25                0x918  //门禁自定义异常25
#define MINOR_EXCEPTION_CUSTOM26                0x919  //门禁自定义异常26
#define MINOR_EXCEPTION_CUSTOM27                0x91a  //门禁自定义异常27
#define MINOR_EXCEPTION_CUSTOM28                0x91b  //门禁自定义异常28
#define MINOR_EXCEPTION_CUSTOM29                0x91c  //门禁自定义异常29
#define MINOR_EXCEPTION_CUSTOM30                0x91d  //门禁自定义异常30
#define MINOR_EXCEPTION_CUSTOM31                0x91e  //门禁自定义异常31
#define MINOR_EXCEPTION_CUSTOM32                0x91f  //门禁自定义异常32
#define MINOR_EXCEPTION_CUSTOM33                0x920  //门禁自定义异常33
#define MINOR_EXCEPTION_CUSTOM34                0x921  //门禁自定义异常34
#define MINOR_EXCEPTION_CUSTOM35                0x922  //门禁自定义异常35
#define MINOR_EXCEPTION_CUSTOM36                0x923  //门禁自定义异常36
#define MINOR_EXCEPTION_CUSTOM37                0x924  //门禁自定义异常37
#define MINOR_EXCEPTION_CUSTOM38                0x925  //门禁自定义异常38
#define MINOR_EXCEPTION_CUSTOM39                0x926  //门禁自定义异常39
#define MINOR_EXCEPTION_CUSTOM40                0x927  //门禁自定义异常40
#define MINOR_EXCEPTION_CUSTOM41                0x928  //门禁自定义异常41
#define MINOR_EXCEPTION_CUSTOM42                0x929  //门禁自定义异常42
#define MINOR_EXCEPTION_CUSTOM43                0x92a  //门禁自定义异常43
#define MINOR_EXCEPTION_CUSTOM44                0x92b  //门禁自定义异常44
#define MINOR_EXCEPTION_CUSTOM45                0x92c  //门禁自定义异常45
#define MINOR_EXCEPTION_CUSTOM46                0x92d  //门禁自定义异常46
#define MINOR_EXCEPTION_CUSTOM47                0x92e  //门禁自定义异常47
#define MINOR_EXCEPTION_CUSTOM48                0x92f  //门禁自定义异常48
#define MINOR_EXCEPTION_CUSTOM49                0x930  //门禁自定义异常49
#define MINOR_EXCEPTION_CUSTOM50                0x931  //门禁自定义异常50
#define MINOR_EXCEPTION_CUSTOM51                0x932  //门禁自定义异常51
#define MINOR_EXCEPTION_CUSTOM52                0x933  //门禁自定义异常52
#define MINOR_EXCEPTION_CUSTOM53                0x934  //门禁自定义异常53
#define MINOR_EXCEPTION_CUSTOM54                0x935  //门禁自定义异常54
#define MINOR_EXCEPTION_CUSTOM55                0x936  //门禁自定义异常55
#define MINOR_EXCEPTION_CUSTOM56                0x937  //门禁自定义异常56
#define MINOR_EXCEPTION_CUSTOM57                0x938  //门禁自定义异常57
#define MINOR_EXCEPTION_CUSTOM58                0x939  //门禁自定义异常58
#define MINOR_EXCEPTION_CUSTOM59                0x93a  //门禁自定义异常59
#define MINOR_EXCEPTION_CUSTOM60                0x93b  //门禁自定义异常60
#define MINOR_EXCEPTION_CUSTOM61                0x93c  //门禁自定义异常61
#define MINOR_EXCEPTION_CUSTOM62                0x93d  //门禁自定义异常62
#define MINOR_EXCEPTION_CUSTOM63                0x93e  //门禁自定义异常63
#define MINOR_EXCEPTION_CUSTOM64                0x93f  //门禁自定义异常64

//[add]by silujie 2013-3-22 14:16
//0x2000~0x3fff 为设备报警日志
//0x4000~0x5000 为设备异常日志
#define MINOR_SUBSYSTEM_IP_CONFLICT        0x4000        //子板IP冲突
#define MINOR_SUBSYSTEM_NET_BROKEN        0x4001        //子板断网
#define    MINOR_FAN_ABNORMAL                0x4002        //风扇异常
#define    MINOR_BACKPANEL_TEMPERATURE_ABNORMAL        0x4003        //背板温度异常

#define    MINOR_SDCARD_ABNORMAL            0x4004        //SD卡不健康
#define    MINOR_SDCARD_DAMAGE                0x4005        //SD卡损坏
#define    MINOR_POC_ABNORMAL				0x4006   //设备POC模块异常

/* 操作 */
//主类型
#define MAJOR_OPERATION                    0x3

//次类型
#define MINOR_VCA_MOTIONEXCEPTION        0x29  //智能侦测异常
#define MINOR_START_DVR                    0x41    /* 开机 */
#define MINOR_STOP_DVR                    0x42    /* 关机 */
#define MINOR_STOP_ABNORMAL                0x43    /* 异常关机 */
#define MINOR_REBOOT_DVR                0x44    /*本地重启设备*/

#define MINOR_LOCAL_LOGIN                0x50    /* 本地登陆 */
#define MINOR_LOCAL_LOGOUT                0x51    /* 本地注销登陆 */
#define MINOR_LOCAL_CFG_PARM            0x52    /* 本地配置参数 */
#define MINOR_LOCAL_PLAYBYFILE          0x53    /* 本地按文件回放或下载 */
#define MINOR_LOCAL_PLAYBYTIME          0x54    /* 本地按时间回放或下载*/
#define MINOR_LOCAL_START_REC            0x55    /* 本地开始录像 */
#define MINOR_LOCAL_STOP_REC            0x56    /* 本地停止录像 */
#define MINOR_LOCAL_PTZCTRL                0x57    /* 本地云台控制 */
#define MINOR_LOCAL_PREVIEW                0x58    /* 本地预览 (保留不使用)*/
#define MINOR_LOCAL_MODIFY_TIME         0x59    /* 本地修改时间(保留不使用) */
#define MINOR_LOCAL_UPGRADE             0x5a    /* 本地升级 */
#define MINOR_LOCAL_RECFILE_OUTPUT      0x5b    /* 本地备份录象文件 */
#define MINOR_LOCAL_FORMAT_HDD          0x5c    /* 本地初始化硬盘 */
#define MINOR_LOCAL_CFGFILE_OUTPUT      0x5d    /* 导出本地配置文件 */
#define MINOR_LOCAL_CFGFILE_INPUT       0x5e    /* 导入本地配置文件 */
#define MINOR_LOCAL_COPYFILE            0x5f    /* 本地备份文件 */
#define MINOR_LOCAL_LOCKFILE            0x60    /* 本地锁定录像文件 */
#define MINOR_LOCAL_UNLOCKFILE          0x61    /* 本地解锁录像文件 */
#define MINOR_LOCAL_DVR_ALARM           0x62    /* 本地手动清除和触发报警*/
#define MINOR_IPC_ADD                   0x63    /* 本地添加IPC */
#define MINOR_IPC_DEL                   0x64    /* 本地删除IPC */
#define MINOR_IPC_SET                   0x65    /* 本地设置IPC */
#define MINOR_LOCAL_START_BACKUP        0x66    /* 本地开始备份 */
#define MINOR_LOCAL_STOP_BACKUP            0x67    /* 本地停止备份*/
#define MINOR_LOCAL_COPYFILE_START_TIME 0x68    /* 本地备份开始时间*/
#define MINOR_LOCAL_COPYFILE_END_TIME    0x69    /* 本地备份结束时间*/
#define MINOR_LOCAL_ADD_NAS             0x6a    /*本地添加网络硬盘 （nfs、iscsi）*/
#define MINOR_LOCAL_DEL_NAS             0x6b    /* 本地删除nas盘 （nfs、iscsi）*/
#define MINOR_LOCAL_SET_NAS             0x6c    /* 本地设置nas盘 （nfs、iscsi）*/
#define MINOR_LOCAL_RESET_PASSWD        0x6d    /* 本地恢复管理员默认密码*/

#define MINOR_REMOTE_LOGIN                0x70    /* 远程登录 */
#define MINOR_REMOTE_LOGOUT                0x71    /* 远程注销登陆 */
#define MINOR_REMOTE_START_REC            0x72    /* 远程开始录像 */
#define MINOR_REMOTE_STOP_REC            0x73    /* 远程停止录像 */
#define MINOR_START_TRANS_CHAN            0x74    /* 开始透明传输 */
#define MINOR_STOP_TRANS_CHAN            0x75    /* 停止透明传输 */
#define MINOR_REMOTE_GET_PARM            0x76    /* 远程获取参数 */
#define MINOR_REMOTE_CFG_PARM            0x77    /* 远程配置参数 */
#define MINOR_REMOTE_GET_STATUS         0x78    /* 远程获取状态 */
#define MINOR_REMOTE_ARM                0x79    /* 远程布防 */
#define MINOR_REMOTE_DISARM                0x7a    /* 远程撤防 */
#define MINOR_REMOTE_REBOOT                0x7b    /* 远程重启 */
#define MINOR_START_VT                    0x7c    /* 开始语音对讲 */
#define MINOR_STOP_VT                    0x7d    /* 停止语音对讲 */
#define MINOR_REMOTE_UPGRADE            0x7e    /* 远程升级 */
#define MINOR_REMOTE_PLAYBYFILE         0x7f    /* 远程按文件回放 */
#define MINOR_REMOTE_PLAYBYTIME         0x80    /* 远程按时间回放 */
#define MINOR_REMOTE_PTZCTRL            0x81    /* 远程云台控制 */
#define MINOR_REMOTE_FORMAT_HDD         0x82    /* 远程格式化硬盘 */
#define MINOR_REMOTE_STOP               0x83    /* 远程关机 */
#define MINOR_REMOTE_LOCKFILE            0x84    /* 远程锁定文件 */
#define MINOR_REMOTE_UNLOCKFILE         0x85    /* 远程解锁文件 */
#define MINOR_REMOTE_CFGFILE_OUTPUT     0x86    /* 远程导出配置文件 */
#define MINOR_REMOTE_CFGFILE_INTPUT     0x87    /* 远程导入配置文件 */
#define MINOR_REMOTE_RECFILE_OUTPUT     0x88    /* 远程导出录象文件 */
#define MINOR_REMOTE_DVR_ALARM          0x89    /* 远程手动清除和触发报警*/
#define MINOR_REMOTE_IPC_ADD            0x8a    /* 远程添加IPC */
#define MINOR_REMOTE_IPC_DEL            0x8b    /* 远程删除IPC */
#define MINOR_REMOTE_IPC_SET            0x8c    /* 远程设置IPC */
#define MINOR_REBOOT_VCA_LIB            0x8d    /*重启智能库*/
#define MINOR_REMOTE_ADD_NAS            0x8e   /* 远程添加nas盘 （nfs、iscsi）*/
#define MINOR_REMOTE_DEL_NAS            0x8f   /* 远程删除nas盘 （nfs、iscsi）*/
#define MINOR_REMOTE_SET_NAS            0x90   /* 远程设置nas盘 （nfs、iscsi）*/
#define MINOR_LOCAL_OPERATE_LOCK        0x9d            /* 本地操作锁定             */
#define MINOR_LOCAL_OPERATE_UNLOCK      0x9e            /* 本地操作解除锁定         */
#define MINOR_REMOTE_DELETE_HDISK       0x9a            /* 远程删除异常不存在的硬盘 */
#define MINOR_REMOTE_LOAD_HDISK         0x9b            /* 远程加载硬盘             */
#define MINOR_REMOTE_UNLOAD_HDISK       0x9c            /* 远程卸载硬盘   */


//2010-05-26 增加审讯DVR日志类型
#define MINOR_LOCAL_START_REC_CDRW      0x91   /* 本地开始讯问 */
#define MINOR_LOCAL_STOP_REC_CDRW       0x92   /* 本地停止讯问 */
#define MINOR_REMOTE_START_REC_CDRW     0x93   /* 远程开始讯问 */
#define MINOR_REMOTE_STOP_REC_CDRW      0x94   /* 远程停止讯问 */

#define MINOR_LOCAL_PIC_OUTPUT            0x95   /* 本地备份图片文件 */
#define MINOR_REMOTE_PIC_OUTPUT            0x96   /* 远程备份图片文件 */

//2011-07-26 增加81审讯DVR日志类型
#define MINOR_LOCAL_INQUEST_RESUME      0x97   /* 本地恢复审讯事件*/
#define MINOR_REMOTE_INQUEST_RESUME     0x98   /* 远程恢复审讯事件*/

//2013-01-23 增加86高清审讯NVR操作日志
#define MINOR_LOCAL_ADD_FILE            0x99        /*本地导入文件*/
#define MINOR_LOCAL_DEL_FILE            0x9f        /*本地删除审讯*/
#define MINOR_REMOTE_INQUEST_ADD_FILE   0x100       /*远程导入文件*/

//2009-12-16 增加视频综合平台日志类型
#define MINOR_SUBSYSTEMREBOOT           0xa0    /*视频综合平台：dm6467 正常重启*/
#define MINOR_MATRIX_STARTTRANSFERVIDEO 0xa1    /*视频综合平台：矩阵切换开始传输图像*/
#define MINOR_MATRIX_STOPTRANSFERVIDEO    0xa2    /*视频综合平台：矩阵切换停止传输图像*/
#define MINOR_REMOTE_SET_ALLSUBSYSTEM   0xa3    /*视频综合平台：设置所有6467子系统信息*/
#define MINOR_REMOTE_GET_ALLSUBSYSTEM   0xa4    /*视频综合平台：获取所有6467子系统信息*/
#define MINOR_REMOTE_SET_PLANARRAY      0xa5    /*视频综合平台：设置计划轮巡组*/
#define MINOR_REMOTE_GET_PLANARRAY      0xa6    /*视频综合平台：获取计划轮巡组*/
#define MINOR_MATRIX_STARTTRANSFERAUDIO 0xa7    /*视频综合平台：矩阵切换开始传输音频*/
#define MINOR_MATRIX_STOPRANSFERAUDIO   0xa8    /*视频综合平台：矩阵切换停止传输音频*/
#define MINOR_LOGON_CODESPITTER         0xa9    /*视频综合平台：登陆码分器*/
#define MINOR_LOGOFF_CODESPITTER        0xaa    /*视频综合平台：退出码分器*/

//2010-01-22 增加视频综合平台中解码器操作日志
#define MINOR_START_DYNAMIC_DECODE         0xb0    /*开始动态解码*/
#define MINOR_STOP_DYNAMIC_DECODE        0xb1    /*停止动态解码*/
#define MINOR_GET_CYC_CFG                0xb2    /*获取解码器通道轮巡配置*/
#define MINOR_SET_CYC_CFG                0xb3    /*设置解码通道轮巡配置*/
#define MINOR_START_CYC_DECODE            0xb4    /*开始轮巡解码*/
#define MINOR_STOP_CYC_DECODE            0xb5    /*停止轮巡解码*/
#define MINOR_GET_DECCHAN_STATUS        0xb6    /*获取解码通道状态*/
#define MINOR_GET_DECCHAN_INFO            0xb7    /*获取解码通道当前信息*/
#define MINOR_START_PASSIVE_DEC            0xb8    /*开始被动解码*/
#define MINOR_STOP_PASSIVE_DEC            0xb9    /*停止被动解码*/
#define MINOR_CTRL_PASSIVE_DEC            0xba    /*控制被动解码*/
#define MINOR_RECON_PASSIVE_DEC            0xbb    /*被动解码重连*/
#define MINOR_GET_DEC_CHAN_SW            0xbc    /*获取解码通道总开关*/
#define MINOR_SET_DEC_CHAN_SW            0xbd    /*设置解码通道总开关*/
#define MINOR_CTRL_DEC_CHAN_SCALE        0xbe    /*解码通道缩放控制*/
#define MINOR_SET_REMOTE_REPLAY            0xbf    /*设置远程回放*/
#define MINOR_GET_REMOTE_REPLAY            0xc0    /*获取远程回放状态*/
#define MINOR_CTRL_REMOTE_REPLAY        0xc1    /*远程回放控制*/
#define MINOR_SET_DISP_CFG                0xc2    /*设置显示通道*/
#define MINOR_GET_DISP_CFG                0xc3    /*获取显示通道设置*/
#define MINOR_SET_PLANTABLE                0xc4    /*设置计划轮巡表*/
#define MINOR_GET_PLANTABLE                0xc5    /*获取计划轮巡表*/
#define MINOR_START_PPPPOE                0xc6    /*开始PPPoE连接*/
#define MINOR_STOP_PPPPOE                0xc7    /*结束PPPoE连接*/
#define MINOR_UPLOAD_LOGO                0xc8    /*上传LOGO*/
//推模式操作日志
#define MINOR_LOCAL_PIN                    0xc9    /* 本地PIN功能操作 */
#define MINOR_LOCAL_DIAL                0xca    /* 本地手动启动断开拨号 */
#define MINOR_SMS_CONTROL                0xcb    /* 短信控制上下线 */
#define MINOR_CALL_ONLINE                0xcc    /* 呼叫控制上线 */
#define MINOR_REMOTE_PIN                0xcd    /* 远程PIN功能操作 */

//2010-12-16 报警板日志
#define MINOR_REMOTE_BYPASS             0xd0    /* 远程旁路*/
#define MINOR_REMOTE_UNBYPASS           0xd1    /* 远程旁路恢复*/
#define MINOR_REMOTE_SET_ALARMIN_CFG    0xd2    /* 远程设置报警输入参数*/
#define MINOR_REMOTE_GET_ALARMIN_CFG    0xd3    /* 远程获取报警输入参数*/
#define MINOR_REMOTE_SET_ALARMOUT_CFG   0xd4    /* 远程设置报警输出参数*/
#define MINOR_REMOTE_GET_ALARMOUT_CFG   0xd5    /* 远程获取报警输出参数*/
#define MINOR_REMOTE_ALARMOUT_OPEN_MAN  0xd6    /* 远程手动开启报警输出*/
#define MINOR_REMOTE_ALARMOUT_CLOSE_MAN 0xd7    /* 远程手动关闭报警输出*/
#define MINOR_REMOTE_ALARM_ENABLE_CFG   0xd8    /* 远程设置报警主机的RS485串口使能状态*/
#define MINOR_DBDATA_OUTPUT                0xd9    /* 导出数据库记录 */
#define MINOR_DBDATA_INPUT                0xda    /* 导入数据库记录 */
#define MINOR_MU_SWITCH                    0xdb    /* 级联切换 */
#define MINOR_MU_PTZ                    0xdc    /* 级联PTZ控制 */
#define MINOR_DELETE_LOGO               0xdd    /* 删除logo */
#define MINOR_REMOTE_INQUEST_DEL_FILE   0xde       /*远程删除文件*/

#define MINOR_LOCAL_CONF_REB_RAID       0x101           /*本地配置自动重建*/
#define MINOR_LOCAL_CONF_SPARE          0x102           /*本地配置热备*/
#define MINOR_LOCAL_ADD_RAID            0x103           /*本地创建阵列*/
#define MINOR_LOCAL_DEL_RAID            0x104           /*本地删除阵列*/
#define MINOR_LOCAL_MIG_RAID            0x105           /*本地迁移阵列*/
#define MINOR_LOCAL_REB_RAID            0x106           /* 本地手动重建阵列*/
#define MINOR_LOCAL_QUICK_CONF_RAID     0x107           /*本地一键配置*/
#define MINOR_LOCAL_ADD_VD              0x108           /*本地创建虚拟磁盘*/
#define MINOR_LOCAL_DEL_VD              0x109           /*本地删除虚拟磁盘*/
#define MINOR_LOCAL_RP_VD               0x10a           /*本地修复虚拟磁盘*/
#define MINOR_LOCAL_FORMAT_EXPANDVD     0X10b           /*本地扩展虚拟磁盘扩容*/
#define MINOR_LOCAL_RAID_UPGRADE        0X10c           /*本地raid卡升级*/
#define MINOR_LOCAL_STOP_RAID           0x10d           /*本地暂停RAID操作(即安全拔盘)*/
#define MINOR_REMOTE_CONF_REB_RAID      0x111           /*远程配置自动重建*/
#define MINOR_REMOTE_CONF_SPARE         0x112            /*远程配置热备*/
#define MINOR_REMOTE_ADD_RAID           0x113           /*远程创建阵列*/
#define MINOR_REMOTE_DEL_RAID           0x114           /*远程删除阵列*/
#define MINOR_REMOTE_MIG_RAID           0x115           /*远程迁移阵列*/
#define MINOR_REMOTE_REB_RAID           0x116           /* 远程手动重建阵列*/
#define MINOR_REMOTE_QUICK_CONF_RAID    0x117           /*远程一键配置*/
#define MINOR_REMOTE_ADD_VD             0x118           /*远程创建虚拟磁盘*/
#define MINOR_REMOTE_DEL_VD             0x119           /*远程删除虚拟磁盘*/
#define MINOR_REMOTE_RP_VD              0x11a           /*远程修复虚拟磁盘*/
#define MINOR_REMOTE_FORMAT_EXPANDVD    0X11b           /*远程虚拟磁盘扩容*/
#define MINOR_REMOTE_RAID_UPGRADE       0X11c           /*远程raid卡升级*/
#define MINOR_REMOTE_STOP_RAID          0x11d           /*远程暂停RAID操作(即安全拔盘)*/
#define MINOR_LOCAL_START_PIC_REC       0x121          /*本地开始抓图*/
#define MINOR_LOCAL_STOP_PIC_REC        0x122          /*本地停止抓图*/
#define MINOR_LOCAL_SET_SNMP            0x125           /*本地配置SNMP*/
#define MINOR_LOCAL_TAG_OPT             0x126          /*本地标签操作*/
#define MINOR_REMOTE_START_PIC_REC      0x131          /*远程开始抓图*/
#define MINOR_REMOTE_STOP_PIC_REC       0x132           /*远程停止抓图*/
#define MINOR_REMOTE_SET_SNMP           0x135            /*远程配置SNMP*/
#define MINOR_REMOTE_TAG_OPT            0x136             /*远程标签操作*/

// 9000 v2.2.0
#define MINOR_LOCAL_VOUT_SWITCH         0x140   /* 本地输出口切换操作*/
#define MINOR_STREAM_CABAC                 0x141   /* 码流压缩性能选项配置操作*/

//Netra 3.0.0
#define MINOR_LOCAL_SPARE_OPT           0x142   /*本地N+1 热备相关操作*/
#define MINOR_REMOTE_SPARE_OPT            0x143   /*远程N+1 热备相关操作*/
#define MINOR_LOCAL_IPCCFGFILE_OUTPUT    0x144      /* 本地导出ipc配置文件*/
#define MINOR_LOCAL_IPCCFGFILE_INPUT      0x145   /* 本地导入ipc配置文件 */
#define MINOR_LOCAL_IPC_UPGRADE         0x146   /* 本地升级IPC */
#define MINOR_REMOTE_IPCCFGFILE_OUTPUT  0x147   /* 远程导出ipc配置文件*/
#define MINOR_REMOTE_IPCCFGFILE_INPUT   0x148   /* 远程导入ipc配置文件*/
#define MINOR_REMOTE_IPC_UPGRADE        0x149   /* 远程升级IPC */

#define MINOR_LOCAL_UNLOAD_HDISK        0x150     /*本地卸载硬盘*/
#define MINOR_LOCAL_AUDIO_MIX           0x151     /*本地配置音频混音参数*/
#define MINOR_REMOTE_AUDIO_MIX          0x152     /*远程配置音频混音参数*/
#define MINOR_LOCAL_TRIAL_PAUSE         0x153     /*本地暂停讯问*/
#define MINOR_LOCAL_TRIAL_RESUME        0x154     /*本地继续讯问*/
#define MINOR_REMOTE_TRIAL_PAUSE        0x155     /*远程暂停讯问*/
#define MINOR_REMOTE_TRIAL_RESUME       0x156     /*远程继续讯问*/
#define MINOR_REMOTE_MODIFY_VERIFICATION_CODE   0x157 /*修改平台的验证码*/

#define MINOR_SET_MULTI_MASTER          0x201    /*设置大屏主屏*/
#define MINOR_SET_MULTI_SLAVE           0x202    /*设置大屏子屏*/
#define MINOR_CANCEL_MULTI_MASTER       0x203    /*取消大屏主屏*/
#define MINOR_CANCEL_MULTI_SLAVE        0x204    /*取消大屏子屏*/

#define MINOR_DISPLAY_LOGO                0x205    /*显示LOGO*/
#define MINOR_HIDE_LOGO                 0x206    /*隐藏LOGO*/
#define MINOR_SET_DEC_DELAY_LEVEL       0x207    /*解码通道延时级别设置*/
#define MINOR_SET_BIGSCREEN_DIPLAY_AREA 0x208    /*设置大屏显示区域*/
#define MINOR_CUT_VIDEO_SOURCE          0x209    /*大屏视频源切割设置*/
#define MINOR_SET_BASEMAP_AREA          0x210    /*大屏底图区域设置*/
#define MINOR_DOWNLOAD_BASEMAP          0x211    /*下载大屏底图*/
#define MINOR_CUT_BASEMAP               0x212    /*底图切割配置*/
#define MINOR_CONTROL_ELEC_ENLARGE      0x213    /*电子放大操作(放大或还原)*/
#define MINOR_SET_OUTPUT_RESOLUTION     0x214    /*显示输出分辨率设置*/
#define MINOR_SET_TRANCSPARENCY         0X215    /*图层透明度设置*/
#define MINOR_SET_OSD                   0x216    /*显示OSD设置*/
#define MINOR_RESTORE_DEC_STATUS        0x217    /*恢复初始状态(场景切换时，解码恢复初始状态)*/

//2011-11-11 增加大屏控制器操作日志次类型
#define MINOR_SCREEN_OPEN_SCREEN        0x218   //打开屏幕
#define MINOR_SCREEN_CLOSE_SCREEN       0x219   //关闭屏幕
#define MINOR_SCREEN_SWITCH_SIGNAL      0x21a   //信号源切换
#define MINOR_SCREEN_MODIFY_NETWORK     0x21b   //配置网络参数
#define MINOR_SCREEN_MODIFY_LEDRES      0x21c   //配置输出口LED分辨率
#define MINOR_SCREEN_SHOW_NORMAL        0x21d   //配置窗口普通显示模式
#define MINOR_SCREEN_SHOW_TILE          0x21e   //配置窗口平铺显示模式
#define MINOR_SCREEN_DEC_NORMAL         0x21f   //配置普通解码模式
#define MINOR_SCREEN_DEC_LOWLATENCY     0x220   //配置低延时解码模式
#define MINOR_SCREEN_MODIFY_SELFRES     0x221   //配置信号源自定义分辨率
#define MINOR_SCREEN_OUTPUT_POSITION    0x222   //输出口关联屏幕
#define MINOR_SCREEN_IMAGE_ENHANCE      0x223   //图像增强
#define MINOR_SCREEN_JOIN_SIGNAL        0x224   //信号源拼接
#define MINOR_SCREEN_SIGNAL_OSD         0x225   //信号源字符叠加
#define MINOR_SCREEN_ASSOCIATED_INTERACTION 0x226   //信号源关联多屏互动服务器
#define MINOR_SCREEN_MODIFY_MATRIX      0x227   //配置矩阵参数
#define MINOR_SCREEN_WND_TOP_KEEP       0x228   //窗口置顶保持
#define MINOR_SCREEN_WND_OPEN_KEEP      0x229   //窗口打开保持
#define MINOR_SCREEN_WALL_MIRROR        0x22a   //电视墙区域镜像
#define MINOR_SCREEN_UPLOAD_BASEMAP     0x22b   //上传底图
#define MINOR_SCREEN_SHOW_BASEMAP       0x22c   //显示底图
#define MINOR_SCREEN_HIDE_BASEMAP       0x22d   //隐藏底图
#define MINOR_SCREEN_MODIFY_SERIAL      0x22e   //配置串口参数

#define MINOR_SCREEN_SET_INPUT          0x251    /*修改输入源*/
#define MINOR_SCREEN_SET_OUTPUT         0x252    /*修改输出通道*/
#define MINOR_SCREEN_SET_OSD            0x253    /*修改虚拟LED*/
#define MINOR_SCREEN_SET_LOGO           0x254    /*修改LOGO*/
#define MINOR_SCREEN_SET_LAYOUT         0x255    /*设置布局*/
#define MINOR_SCREEN_PICTUREPREVIEW     0x256    /*回显操作*/


//2012-06-14 CVCS2.0, 窗口设置等操作在V1.0， V1.1中已经有了，当时在设备日志中没有定义
#define MINOR_SCREEN_GET_OSD            0x257   /*获取虚拟LED*/
#define MINOR_SCREEN_GET_LAYOUT            0x258   /*获取布局*/
#define MINOR_SCREEN_LAYOUT_CTRL        0x259   /*布局控制*/
#define MINOR_GET_ALL_VALID_WND            0x260    /*获取所有有效窗口*/
#define MINOR_GET_SIGNAL_WND            0x261    /*获取单个窗口信息*/
#define MINOR_WINDOW_CTRL                0x262    /*窗口控制*/
#define MINOR_GET_LAYOUT_LIST            0x263    /*获取布局列表*/
#define MINOR_LAYOUT_CTRL                0x264    /*布局控制*/
#define MINOR_SET_LAYOUT                0x265    /*设置布局*/
#define MINOR_GET_SIGNAL_LIST            0x266    /*获取输入信号源列表*/
#define MINOR_GET_PLAN_LIST                0x267    /*获取预案列表*/
#define MINOR_SET_PLAN                    0x268    /*修改预案*/
#define MINOR_CTRL_PLAN                    0x269    /*控制预案*/
#define MINOR_CTRL_SCREEN                0x270    /*屏幕控制*/
#define MINOR_ADD_NETSIG                0x271    /*添加信号源*/
#define MINOR_SET_NETSIG                0x272    /*修改信号源*/
#define MINOR_SET_DECBDCFG                0x273    /*设置解码板参数*/
#define MINOR_GET_DECBDCFG                0x274    /*获取解码板参数*/
#define MINOR_GET_DEVICE_STATUS            0x275    /*获取设备信息*/
#define MINOR_UPLOAD_PICTURE            0x276    /*底图上传*/
#define MINOR_SET_USERPWD                0x277    /*设置用户密码*/
#define MINOR_ADD_LAYOUT                0x278    /*添加布局*/
#define MINOR_DEL_LAYOUT                0x279    /*删除布局*/
#define MINOR_DEL_NETSIG                0x280    /*删除信号源*/
#define MINOR_ADD_PLAN                    0x281    /*添加预案*/
#define MINOR_DEL_PLAN                    0x282    /*删除预案*/
#define MINOR_GET_EXTERNAL_MATRIX_CFG    0x283    //获取外接矩阵配置
#define MINOR_SET_EXTERNAL_MATRIX_CFG    0x284    //设置外接矩阵配置
#define    MINOR_GET_USER_CFG                0x285    //获取用户配置
#define    MINOR_SET_USER_CFG                0x286    //设置用户配置
#define    MINOR_GET_DISPLAY_PANEL_LINK_CFG 0x287    //获取显示墙连接配置
#define    MINOR_SET_DISPLAY_PANEL_LINK_CFG 0x288    //设置显示墙连接配置

#define    MINOR_GET_WALLSCENE_PARAM        0x289        //获取电视墙场景
#define    MINOR_SET_WALLSCENE_PARAM        0x28a        //设置电视墙场景
#define    MINOR_GET_CURRENT_WALLSCENE        0x28b        //获取当前使用场景
#define    MINOR_SWITCH_WALLSCENE            0x28c        //场景切换
#define    MINOR_SIP_LOGIN                    0x28d        //SIP注册成功
#define MINOR_VOIP_START                0x28e        //VOIP对讲开始
#define MINOR_VOIP_STOP                    0x28f        //VOIP对讲停止
#define MINOR_WIN_TOP                   0x290       //电视墙窗口置顶
#define MINOR_WIN_BOTTOM                0x291       //电视墙窗口置底

// Netra 2.2.2
#define MINOR_LOCAL_LOAD_HDISK          0x300            //本地加载硬盘
#define MINOR_LOCAL_DELETE_HDISK        0x301            //本地删除异常不存在的硬盘

//KY2013 3.0.0
#define MINOR_LOCAL_MAIN_AUXILIARY_PORT_SWITCH    0X302 //本地主辅口切换
#define MINOR_LOCAL_HARD_DISK_CHECK                0x303 //本地物理硬盘自检

//Netra3.1.0
#define MINOR_LOCAL_CFG_DEVICE_TYPE        0x310    //本地配置设备类型
#define MINOR_REMOTE_CFG_DEVICE_TYPE    0x311    //远程配置设备类型
#define MINOR_LOCAL_CFG_WORK_HOT_SERVER    0x312    //本地配置工作机热备服务器
#define MINOR_REMOTE_CFG_WORK_HOT_SERVER 0x313    //远程配置工作机热备服务器
#define MINOR_LOCAL_DELETE_WORK            0x314    //本地删除工作机
#define MINOR_REMOTE_DELETE_WORK        0x315    //远程删除工作机
#define    MINOR_LOCAL_ADD_WORK            0x316    //本地添加工作机
#define MINOR_REMOTE_ADD_WORK            0x317    //远程添加工作机
#define MINOR_LOCAL_IPCHEATMAP_OUTPUT   0x318            /* 本地导出热度图文件      */
#define MINOR_LOCAL_IPCHEATFLOW_OUTPUT  0x319          /* 本地导出热度流量文件      */
#define MINOR_REMOTE_SMS_SEND           0x350    /*远程发送短信*/
#define MINOR_LOCAL_SMS_SEND            0x351   /*本地发送短信*/
#define MINOR_ALARM_SMS_SEND            0x352    /*发送短信报警*/
#define MINOR_SMS_RECV                  0x353     /*接收短信*/
//（备注：0x350、0x351是指人工在GUI或IE控件上编辑并发送短信）
#define MINOR_LOCAL_SMS_SEARCH          0x354  /*本地搜索短信*/
#define MINOR_REMOTE_SMS_SEARCH         0x355   /*远程搜索短信*/
#define MINOR_LOCAL_SMS_READ            0x356   /*本地查看短信*/
#define MINOR_REMOTE_SMS_READ           0x357   /*远程查看短信*/
#define MINOR_REMOTE_DIAL_CONNECT       0x358   /*远程开启手动拨号*/
#define MINOR_REMOTE_DIAL_DISCONN       0x359   /*远程停止手动拨号*/
#define MINOR_LOCAL_WHITELIST_SET       0x35A   /*本地配置白名单*/
#define MINOR_REMOTE_WHITELIST_SET      0x35B   /*远程配置白名单*/
#define MINOR_LOCAL_DIAL_PARA_SET       0x35C   /*本地配置拨号参数*/
#define MINOR_REMOTE_DIAL_PARA_SET      0x35D   /*远程配置拨号参数*/
#define MINOR_LOCAL_DIAL_SCHEDULE_SET   0x35E   /*本地配置拨号计划*/
#define MINOR_REMOTE_DIAL_SCHEDULE_SET  0x35F   /*远程配置拨号计划*/
#define MINOR_PLAT_OPER                 0x360   /* 平台操作*/

//0x400-0x1000 门禁操作类型
#define MINOR_REMOTE_OPEN_DOOR          0x400   //远程开门
#define MINOR_REMOTE_CLOSE_DOOR         0x401   //远程关门(受控)
#define MINOR_REMOTE_ALWAYS_OPEN        0x402   //远程常开(自由)
#define MINOR_REMOTE_ALWAYS_CLOSE       0x403   //远程常关(禁用)
#define MINOR_REMOTE_CHECK_TIME         0x404   //远程手动校时
#define MINOR_NTP_CHECK_TIME            0x405   //NTP自动校时
#define MINOR_REMOTE_CLEAR_CARD         0x406   //远程清空卡号
#define MINOR_REMOTE_RESTORE_CFG        0x407   //远程恢复默认参数
#define MINOR_ALARMIN_ARM               0x408   //防区布防
#define MINOR_ALARMIN_DISARM            0x409   //防区撤防
#define MINOR_LOCAL_RESTORE_CFG         0x40a   //本地恢复默认参数
#define MINOR_REMOTE_CAPTURE_PIC        0x40b  //远程抓拍
#define MINOR_MOD_NET_REPORT_CFG        0x40c   //修改网络中心参数配置
#define MINOR_MOD_GPRS_REPORT_PARAM     0x40d   //修改GPRS中心参数配置
#define MINOR_MOD_REPORT_GROUP_PARAM    0x40e   //修改中心组参数配置
#define    MINOR_UNLOCK_PASSWORD_OPEN_DOOR  0x40f  //解除码输入
#define MINOR_AUTO_RENUMBER              0x410  //自动重新编号
#define MINOR_AUTO_COMPLEMENT_NUMBER     0x411  //自动补充编号
#define MINOR_NORMAL_CFGFILE_INPUT          0x412   //导入普通配置文件
#define MINOR_NORMAL_CFGFILE_OUTTPUT     0x413   //导出普通配置文件
#define MINOR_CARD_RIGHT_INPUT              0x414   //导入卡权限参数
#define MINOR_CARD_RIGHT_OUTTPUT          0x415   //导出卡权限参数
#define MINOR_LOCAL_USB_UPGRADE             0x416   //本地U盘升级
#define MINOR_REMOTE_VISITOR_CALL_LADDER     0x417  //访客呼梯
#define MINOR_REMOTE_HOUSEHOLD_CALL_LADDER   0x418  //住户呼梯
#define MINOR_REMOTE_ACTUAL_GUARD            0x419  //远程实时布防
#define MINOR_REMOTE_ACTUAL_UNGUARD          0x41a  //远程实时撤防
#define MINOR_REMOTE_CONTROL_NOT_CODE_OPER_FAILED     0x41b   //遥控器未对码操作失败
#define MINOR_REMOTE_CONTROL_CLOSE_DOOR               0x41c   //遥控器关门
#define MINOR_REMOTE_CONTROL_OPEN_DOOR                0x41d   //遥控器开门
#define MINOR_REMOTE_CONTROL_ALWAYS_OPEN_DOOR         0x41e   //遥控器常开门

#define MINOR_OPERATION_CUSTOM1        0x900  //门禁自定义操作1
#define MINOR_OPERATION_CUSTOM2        0x901  //门禁自定义操作2
#define MINOR_OPERATION_CUSTOM3        0x902  //门禁自定义操作3
#define MINOR_OPERATION_CUSTOM4        0x903  //门禁自定义操作4
#define MINOR_OPERATION_CUSTOM5        0x904  //门禁自定义操作5
#define MINOR_OPERATION_CUSTOM6        0x905  //门禁自定义操作6
#define MINOR_OPERATION_CUSTOM7        0x906  //门禁自定义操作7
#define MINOR_OPERATION_CUSTOM8        0x907  //门禁自定义操作8
#define MINOR_OPERATION_CUSTOM9        0x908  //门禁自定义操作9
#define MINOR_OPERATION_CUSTOM10       0x909  //门禁自定义操作10
#define MINOR_OPERATION_CUSTOM11       0x90a  //门禁自定义操作11
#define MINOR_OPERATION_CUSTOM12       0x90b  //门禁自定义操作12
#define MINOR_OPERATION_CUSTOM13       0x90c  //门禁自定义操作13
#define MINOR_OPERATION_CUSTOM14       0x90d  //门禁自定义操作14
#define MINOR_OPERATION_CUSTOM15       0x90e  //门禁自定义操作15
#define MINOR_OPERATION_CUSTOM16       0x90f  //门禁自定义操作16
#define MINOR_OPERATION_CUSTOM17       0x910  //门禁自定义操作17
#define MINOR_OPERATION_CUSTOM18       0x911  //门禁自定义操作18
#define MINOR_OPERATION_CUSTOM19       0x912  //门禁自定义操作19
#define MINOR_OPERATION_CUSTOM20       0x913  //门禁自定义操作20
#define MINOR_OPERATION_CUSTOM21       0x914  //门禁自定义操作21
#define MINOR_OPERATION_CUSTOM22       0x915  //门禁自定义操作22
#define MINOR_OPERATION_CUSTOM23       0x916  //门禁自定义操作23
#define MINOR_OPERATION_CUSTOM24       0x917  //门禁自定义操作24
#define MINOR_OPERATION_CUSTOM25       0x918  //门禁自定义操作25
#define MINOR_OPERATION_CUSTOM26       0x919  //门禁自定义操作26
#define MINOR_OPERATION_CUSTOM27       0x91a  //门禁自定义操作27
#define MINOR_OPERATION_CUSTOM28       0x91b  //门禁自定义操作28
#define MINOR_OPERATION_CUSTOM29       0x91c  //门禁自定义操作29
#define MINOR_OPERATION_CUSTOM30       0x91d  //门禁自定义操作30
#define MINOR_OPERATION_CUSTOM31       0x91e  //门禁自定义操作31
#define MINOR_OPERATION_CUSTOM32       0x91f  //门禁自定义操作32
#define MINOR_OPERATION_CUSTOM33       0x920  //门禁自定义操作33
#define MINOR_OPERATION_CUSTOM34       0x921  //门禁自定义操作34
#define MINOR_OPERATION_CUSTOM35       0x922  //门禁自定义操作35
#define MINOR_OPERATION_CUSTOM36       0x923  //门禁自定义操作36
#define MINOR_OPERATION_CUSTOM37       0x924  //门禁自定义操作37
#define MINOR_OPERATION_CUSTOM38       0x925  //门禁自定义操作38
#define MINOR_OPERATION_CUSTOM39       0x926  //门禁自定义操作39
#define MINOR_OPERATION_CUSTOM40       0x927  //门禁自定义操作40
#define MINOR_OPERATION_CUSTOM41       0x928  //门禁自定义操作41
#define MINOR_OPERATION_CUSTOM42       0x929  //门禁自定义操作42
#define MINOR_OPERATION_CUSTOM43       0x92a  //门禁自定义操作43
#define MINOR_OPERATION_CUSTOM44       0x92b  //门禁自定义操作44
#define MINOR_OPERATION_CUSTOM45       0x92c  //门禁自定义操作45
#define MINOR_OPERATION_CUSTOM46       0x92d  //门禁自定义操作46
#define MINOR_OPERATION_CUSTOM47       0x92e  //门禁自定义操作47
#define MINOR_OPERATION_CUSTOM48       0x92f  //门禁自定义操作48
#define MINOR_OPERATION_CUSTOM49       0x930  //门禁自定义操作49
#define MINOR_OPERATION_CUSTOM50       0x931  //门禁自定义操作50
#define MINOR_OPERATION_CUSTOM51       0x932  //门禁自定义操作51
#define MINOR_OPERATION_CUSTOM52       0x933  //门禁自定义操作52
#define MINOR_OPERATION_CUSTOM53       0x934  //门禁自定义操作53
#define MINOR_OPERATION_CUSTOM54       0x935  //门禁自定义操作54
#define MINOR_OPERATION_CUSTOM55       0x936  //门禁自定义操作55
#define MINOR_OPERATION_CUSTOM56       0x937  //门禁自定义操作56
#define MINOR_OPERATION_CUSTOM57       0x938  //门禁自定义操作57
#define MINOR_OPERATION_CUSTOM58       0x939  //门禁自定义操作58
#define MINOR_OPERATION_CUSTOM59       0x93a  //门禁自定义操作59
#define MINOR_OPERATION_CUSTOM60       0x93b  //门禁自定义操作60
#define MINOR_OPERATION_CUSTOM61       0x93c  //门禁自定义操作61
#define MINOR_OPERATION_CUSTOM62       0x93d  //门禁自定义操作62
#define MINOR_OPERATION_CUSTOM63       0x93e  //门禁自定义操作63
#define MINOR_OPERATION_CUSTOM64       0x93f  //门禁自定义操作64

//2012-03-05 ITC操作日志类型
#define MINOR_SET_TRIGGERMODE_CFG          0x1001    /*设置触发模式参数*/
#define MINOR_GET_TRIGGERMODE_CFG          0x1002    /*获取触发模式参数*/
#define MINOR_SET_IOOUT_CFG                0x1003    /*设置IO输出参数*/
#define MINOR_GET_IOOUT_CFG                0x1004    /*获取IO输出参数*/
#define MINOR_GET_TRIGGERMODE_DEFAULT      0x1005    /*获取触发模式推荐参数*/
#define MINOR_GET_ITCSTATUS                0x1006    /*获取状态检测参数*/
#define MINOR_SET_STATUS_DETECT_CFG        0x1007    /*设置状态检测参数*/
#define MINOR_GET_STATUS_DETECT_CFG        0x1008    /*获取状态检测参数*/
#define MINOR_SET_VIDEO_TRIGGERMODE_CFG    0x1009  /*设置视频触发模式参数*/
#define MINOR_GET_VIDEO_TRIGGERMODE_CFG    0x100a   /*获取视频触发模式参数*/

//2013-04-19 ITS操作日志类型
#define MINOR_LOCAL_ADD_CAR_INFO            0x2001  /*本地添加车辆信息*/
#define MINOR_LOCAL_MOD_CAR_INFO            0x2002  /*本地修改车辆信息*/
#define MINOR_LOCAL_DEL_CAR_INFO            0x2003  /*本地删除车辆信息*/
#define MINOR_LOCAL_FIND_CAR_INFO           0x2004  /*本地查找车辆信息*/
#define MINOR_LOCAL_ADD_MONITOR_INFO        0x2005  /*本地添加布控信息*/
#define MINOR_LOCAL_MOD_MONITOR_INFO        0x2006  /*本地修改布控信息*/
#define MINOR_LOCAL_DEL_MONITOR_INFO        0x2007  /*本地删除布控信息*/
#define MINOR_LOCAL_FIND_MONITOR_INFO       0x2008  /*本地查询布控信息*/
#define MINOR_LOCAL_FIND_NORMAL_PASS_INFO   0x2009  /*本地查询正常通行信息*/
#define MINOR_LOCAL_FIND_ABNORMAL_PASS_INFO 0x200a  /*本地查询异常通行信息*/
#define MINOR_LOCAL_FIND_PEDESTRIAN_PASS_INFO   0x200b  /*本地查询正常通行信息*/
#define MINOR_LOCAL_PIC_PREVIEW             0x200c  /*本地图片预览*/
#define MINOR_LOCAL_SET_GATE_PARM_CFG       0x200d  /*设置本地配置出入口参数*/
#define MINOR_LOCAL_GET_GATE_PARM_CFG       0x200e  /*获取本地配置出入口参数*/
#define MINOR_LOCAL_SET_DATAUPLOAD_PARM_CFG 0x200f  /*设置本地配置数据上传参数*/
#define MINOR_LOCAL_GET_DATAUPLOAD_PARM_CFG 0x2010  /*获取本地配置数据上传参数*/

//2013-11-19新增日志类型
#define MINOR_LOCAL_DEVICE_CONTROL                         0x2011   /*本地设备控制(本地开关闸)*/
#define MINOR_LOCAL_ADD_EXTERNAL_DEVICE_INFO               0x2012   /*本地添加外接设备信息 */
#define MINOR_LOCAL_MOD_EXTERNAL_DEVICE_INFO               0x2013   /*本地修改外接设备信息 */
#define MINOR_LOCAL_DEL_EXTERNAL_DEVICE_INFO               0x2014   /*本地删除外接设备信息 */
#define MINOR_LOCAL_FIND_EXTERNAL_DEVICE_INFO              0x2015   /*本地查询外接设备信息 */
#define MINOR_LOCAL_ADD_CHARGE_RULE                        0x2016   /*本地添加收费规则 */
#define MINOR_LOCAL_MOD_CHARGE_RULE                        0x2017   /*本地修改收费规则 */
#define MINOR_LOCAL_DEL_CHARGE_RULE                        0x2018   /*本地删除收费规则 */
#define MINOR_LOCAL_FIND_CHARGE_RULE                       0x2019   /*本地查询收费规则 */
#define MINOR_LOCAL_COUNT_NORMAL_CURRENTINFO               0x2020   /*本地统计正常通行信息 */
#define MINOR_LOCAL_EXPORT_NORMAL_CURRENTINFO_REPORT       0x2021   /*本地导出正常通行信息统计报表 */
#define MINOR_LOCAL_COUNT_ABNORMAL_CURRENTINFO             0x2022   /*本地统计异常通行信息 */
#define MINOR_LOCAL_EXPORT_ABNORMAL_CURRENTINFO_REPORT     0x2023   /*本地导出异常通行信息统计报表 */
#define MINOR_LOCAL_COUNT_PEDESTRIAN_CURRENTINFO           0x2024   /*本地统计行人通行信息 */
#define MINOR_LOCAL_EXPORT_PEDESTRIAN_CURRENTINFO_REPORT   0x2025   /*本地导出行人通行信息统计报表 */
#define MINOR_LOCAL_FIND_CAR_CHARGEINFO                    0x2026   /*本地查询过车收费信息 */
#define MINOR_LOCAL_COUNT_CAR_CHARGEINFO                   0x2027   /*本地统计过车收费信息 */
#define MINOR_LOCAL_EXPORT_CAR_CHARGEINFO_REPORT           0x2028   /*本地导出过车收费信息统计报表 */
#define MINOR_LOCAL_FIND_SHIFTINFO                         0x2029   /*本地查询交接班信息 */
#define MINOR_LOCAL_FIND_CARDINFO                          0x2030   /*本地查询卡片信息 */
#define MINOR_LOCAL_ADD_RELIEF_RULE                        0x2031   /*本地添加减免规则 */
#define MINOR_LOCAL_MOD_RELIEF_RULE                        0x2032   /*本地修改减免规则 */
#define MINOR_LOCAL_DEL_RELIEF_RULE                        0x2033   /*本地删除减免规则 */
#define MINOR_LOCAL_FIND_RELIEF_RULE                       0x2034   /*本地查询减免规则 */
#define MINOR_LOCAL_GET_ENDETCFG                           0x2035   /*本地获取出入口控制机离线检测配置 */
#define MINOR_LOCAL_SET_ENDETCFG                           0x2036   /*本地设置出入口控制机离线检测配置*/
#define MINOR_LOCAL_SET_ENDEV_ISSUEDDATA                   0x2037   /*本地设置出入口控制机下发卡片信息 */
#define MINOR_LOCAL_DEL_ENDEV_ISSUEDDATA                   0x2038   /*本地清空出入口控制机下发卡片信息 */

#define MINOR_REMOTE_DEVICE_CONTROL                        0x2101   /*远程设备控制*/
#define MINOR_REMOTE_SET_GATE_PARM_CFG                     0x2102   /*设置远程配置出入口参数*/
#define MINOR_REMOTE_GET_GATE_PARM_CFG                     0x2103   /*获取远程配置出入口参数*/
#define MINOR_REMOTE_SET_DATAUPLOAD_PARM_CFG               0x2104   /*设置远程配置数据上传参数*/
#define MINOR_REMOTE_GET_DATAUPLOAD_PARM_CFG               0x2105   /*获取远程配置数据上传参数*/
#define MINOR_REMOTE_GET_BASE_INFO                         0x2106   /*远程获取终端基本信息*/
#define MINOR_REMOTE_GET_OVERLAP_CFG                       0x2107   /*远程获取字符叠加参数配置*/
#define MINOR_REMOTE_SET_OVERLAP_CFG                       0x2108   /*远程设置字符叠加参数配置*/
#define MINOR_REMOTE_GET_ROAD_INFO                         0x2109   /*远程获取路口信息*/
#define MINOR_REMOTE_START_TRANSCHAN                       0x210a   /*远程建立同步数据服务器*/
#define MINOR_REMOTE_GET_ECTWORKSTATE                      0x210b   /*远程获取出入口终端工作状态*/
#define MINOR_REMOTE_GET_ECTCHANINFO                       0x210c   /*远程获取出入口终端通道状态*/

//远程控制 2013-11-19
#define MINOR_REMOTE_ADD_EXTERNAL_DEVICE_INFO              0x210d   /*远程添加外接设备信息 */
#define MINOR_REMOTE_MOD_EXTERNAL_DEVICE_INFO              0x210e   /*远程修改外接设备信息 */
#define MINOR_REMOTE_GET_ENDETCFG                          0x210f   /*远程获取出入口控制机离线检测配置 */
#define MINOR_REMOTE_SET_ENDETCFG                          0x2110   /*远程设置出入口控制机离线检测配置*/
#define MINOR_REMOTE_ENDEV_ISSUEDDATA                      0x2111   /*远程设置出入口控制机下发卡片信息 */
#define MINOR_REMOTE_DEL_ENDEV_ISSUEDDATA                  0x2112   /*远程清空出入口控制机下发卡片信息 */

//ITS 0x2115~0x2120 停车场车位项目
#define MINOR_REMOTE_ON_CTRL_LAMP           0x2115  /*开启远程控制车位指示灯*/
#define MINOR_REMOTE_OFF_CTRL_LAMP          0x2116  /*关闭远程控制车位指示灯*/
//Netra3.1.0
#define MINOR_SET_VOICE_LEVEL_PARAM         0x2117  /*设置音量大小 */
#define MINOR_SET_VOICE_INTERCOM_PARAM      0x2118  /*设置音量录音 */
#define MINOR_SET_INTELLIGENT_PARAM         0x2119  /*智能配置*/
#define MINOR_LOCAL_SET_RAID_SPEED          0x211a  /*本地设置raid速度*/
#define MINOR_REMOTE_SET_RAID_SPEED         0x211b /*远程设置raid速度*/
//Nerta3.1.2
#define MINOR_REMOTE_CREATE_STORAGE_POOL    0x211c   //远程添加存储池
#define MINOR_REMOTE_DEL_STORAGE_POOL       0x211d    //远程删除存储池

#define MINOR_REMOTE_DEL_PIC                0x2120   //远程删除图片数据
#define MINOR_REMOTE_DEL_RECORD             0x2121   //远程删除录像数据
#define MINOR_REMOTE_CLOUD_ENABLE           0x2123  //远程设置云系统启用
#define MINOR_REMOTE_CLOUD_DISABLE          0x2124  //远程设置云系统禁用
#define MINOR_REMOTE_CLOUD_MODIFY_PARAM     0x2125  //远程修改存储池参数
#define MINOR_REMOTE_CLOUD_MODIFY_VOLUME    0x2126  //远程修改存储池容量
#define MINOR_REMOTE_GET_GB28181_SERVICE_PARAM    0x2127  //远程获取GB28181服务参数
#define MINOR_REMOTE_SET_GB28181_SERVICE_PARAM    0x2128  //远程设置GB28181服务参数
#define MINOR_LOCAL_GET_GB28181_SERVICE_PARAM     0x2129  //本地获取GB28181服务参数
#define MINOR_LOCAL_SET_GB28181_SERVICE_PARAM     0x212a  //本地配置B28181服务参数
#define MINOR_REMOTE_SET_SIP_SERVER               0x212b  //远程配置SIP SERVER
#define MINOR_LOCAL_SET_SIP_SERVER                0x212c  //本地配置SIP SERVER
#define MINOR_LOCAL_BLACKWHITEFILE_OUTPUT         0x212d  //本地黑白名单导出
#define MINOR_LOCAL_BLACKWHITEFILE_INPUT          0x212e  //本地黑白名单导入
#define MINOR_REMOTE_BALCKWHITECFGFILE_OUTPUT     0x212f  //远程黑白名单导出
#define MINOR_REMOTE_BALCKWHITECFGFILE_INPUT      0x2130  //远程黑白名单导入


#define MINOR_REMOTE_CREATE_MOD_VIEWLIB_SPACE        0x2200    /*远程创建/修改视图库空间*/
#define MINOR_REMOTE_DELETE_VIEWLIB_FILE            0x2201    /*远程删除视图库文件*/
#define MINOR_REMOTE_DOWNLOAD_VIEWLIB_FILE            0x2202    /*远程下载视图库文件*/
#define MINOR_REMOTE_UPLOAD_VIEWLIB_FILE            0x2203    /*远程上传视图库文件*/
#define MINOR_LOCAL_CREATE_MOD_VIEWLIB_SPACE        0x2204    /*本地创建/修改视图库空间*/

#define MINOR_LOCAL_SET_DEVICE_ACTIVE   0x3000  //本地激活设备
#define MINOR_REMOTE_SET_DEVICE_ACTIVE  0x3001  //远程激活设备
#define MINOR_LOCAL_PARA_FACTORY_DEFAULT    0x3002  //本地回复出厂设置
#define MINOR_REMOTE_PARA_FACTORY_DEFAULT   0x3003  //远程恢复出厂设置

/*信息发布服务器操作日志*/
#define MINOR_UPLAOD_STATIC_MATERIAL                0x2401  //静态素材上传
#define MINOR_UPLOAD_DYNAMIC_MATERIAL               0x2402  //动态素材上传
#define MINOR_DELETE_MATERIAL                       0x2403  //删除素材
#define MINOR_DOWNLOAD_STATIC_MATERIAL              0x2404  //静态素材下载
#define MINOR_COVER_STATIC_MATERIAL                 0x2405  //静态素材覆盖
#define MINOR_APPROVE_MATERIAL                      0x2406  //素材审核
#define MINOR_UPLAOD_PROGRAM                        0x2407  //上传节目
#define MINOR_DOWNLOAD_PROGRAM                      0x2408  //下载节目
#define MINOR_DELETE_PROGRAM                        0x2409  //删除节目
#define MINOR_MODIFY_PROGRAM                        0x240a  //节目属性修改
#define MINOR_APPROVE_PRAGRAM                       0x240b  //节目审核
#define MINOR_UPLAOD_SCHEDULE                       0x240c  //上传日程
#define MINOR_DOWNLOAD_SCHEDULE                     0x240d  //下载日程
#define MINOR_DELETE_SCHEDULE                       0x240e  //删除日程
#define MINOR_MODIFY_SCHEDULE                       0x240f  //修改日程属性
#define MINOR_RELEASE_SCHEDULE                      0x2410  //发布日程
#define MINOR_ADD_TERMINAL                          0x2411  //添加终端
#define MINOR_DELETE_TERMINAL                       0x2412  //删除终端
#define MINOR_MODIFY_TERMIANL_PARAM                 0x2413  //修改终端参数
#define MINOR_MODIFY_TERMIANL_PLAY_PARAM            0x2414  //配置终端播放参数
#define MINOR_ADD_TERMIANL_GROUP                    0x2415  //添加终端组
#define MINOR_MODIFY_TERMINAL_GROUP_PARAM           0x2416  //修改终端组参数
#define MINOR_DELETE_TERMIANL_GROUP                 0x2417  //删除终端组
#define MINOR_TERMINAL_PLAY_CONTROL                 0x2418  //终端播放控制
#define MINOR_TERMINAL_ON_OFF_LINE                  0x2419  //终端上下线
#define MINOR_SET_SWITCH_PLAN                       0x241a  //设置终端定时开关机计划
#define MINOR_SET_VOLUME_PLAN                       0x241b  //设置终端定时音量计划
#define MINOR_TERMINAL_SCREENSHOT                   0x241c  //终端截屏


#define MINOR_REMOTE_CONFERENCE_CONFIG             0x2501  //MCU会议配置
#define MINOR_REMOTE_TERMINAL_CONFIG               0x2502  //MCU终端配置
#define MINOR_REMOTE_GROUP_CONFIG                  0x2503  //MCU分组配置
#define MINOR_REMOTE_CONFERENCE_CTRL               0x2504  //MCU会议控制
#define MINOR_REMOTE_TERMINAL_CTRL                 0x2505  //MCU终端控制

//NVR后端
#define MINOR_LOCAL_RESET_LOGIN_PASSWORD           0x2600    /* 本地重置admin登陆密码*/
#define MINOR_REMOTE_RESET_LOGIN_PASSWORD          0x2601    /* 远程重置admin登录密码 */
#define MINOR_LOCAL_FACE_BASE_CREATE        0x2602    /* 本地人脸对比库创建*/
#define MINOR_REMOTE_FACE_BASE_CREATE       0x2603    /* 远程人脸对比库创建*/
#define MINOR_LOCAL_FACE_BASE_MODIFY        0x2604    /* 本地人脸对比库修改*/
#define MINOR_REMOTE_FACE_BASE_MODIFY      0x2605    /* 远程人脸对比库修改*/
#define MINOR_LOCAL_FACE_BASE_DELETE        0x2606    /* 本地人脸对比库删除*/
#define MINOR_REMOTE_FACE_BASE_DELETE       0x2607    /* 远程人脸对比库删除*/
#define MINOR_LOCAL_FACE_DATA_APPEND        0x2608    /* 本地录入人脸数据*/
#define MINOR_REMOTE_FACE_DATA_APPEND       0x2609    /* 远程录入人脸数据*/
#define MINOR_LOCAL_FACE_DATA_SEARCH       0x2610    /* 本地人脸比对数据查找*/
#define MINOR_REMOTE_FACE_DATA_SEARCH       0x2611    /* 远程人脸比对数据查找*/
#define MINOR_LOCAL_FACE_DATA_ANALYSIS        0x2612    /* 本地图片分析操作*/
#define MINOR_REMOTE_FACE_DATA_ANALYSIS       0x2613    /* 远程图片分析操作*/
#define MINOR_LOCAL_FACE_DATA_EDIT            0x2614    /* 本地人脸数据修改*/
#define MINOR_REMOTE_FACE_DATA_EDIT           0x2615    /* 远程人脸数据修改*/

#define MINOR_LOCAL_FACE_DATA_DELETE          0x2616    /* 本地人脸数据删除*/
#define MINOR_REMOTE_FACE_DATA_DELET          0x2617    /* 远程人脸数据删除*/

#define MINOR_LOCAL_VCA_ANALYSIS_CFG          0x2618    /* 本地智能分析配置*/
#define MINOR_REMOTE_VCA_ANALYSIS_CFG         0x2619    /* 远程智能分析配置*/

/*日志附加信息*/
//主类型
#define MAJOR_INFORMATION               0x4     /*附加信息*/
//次类型
#define MINOR_HDD_INFO                  0xa1 /*硬盘信息*/
#define MINOR_SMART_INFO                0xa2 /*SMART信息*/
#define MINOR_REC_START                 0xa3 /*开始录像*/
#define MINOR_REC_STOP                  0xa4 /*停止录像*/
#define MINOR_REC_OVERDUE                0xa5 /*过期录像删除*/
#define MINOR_LINK_START                0xa6 //连接前端设备
#define MINOR_LINK_STOP                    0xa7 //断开前端设备　
#define MINOR_NET_DISK_INFO                0xa8 //网络硬盘信息
#define MINOR_RAID_INFO                 0xa9 //raid相关信息
#define MINOR_RUN_STATUS_INFO           0xaa /*系统运行状态信息*/

//Netra3.0.0
#define MINOR_SPARE_START_BACKUP        0xab   /*热备系统开始备份指定工作机*/
#define MINOR_SPARE_STOP_BACKUP            0xac   /*热备系统停止备份指定工作机*/
#define MINOR_SPARE_CLIENT_INFO         0xad   /*热备客户机信息*/
#define MINOR_ANR_RECORD_START            0xae   /*ANR录像开始*/
#define MINOR_ANR_RECORD_END            0xaf   /*ANR录像结束*/
#define MINOR_ANR_ADD_TIME_QUANTUM        0xb0    /*ANR添加时间段*/
#define MINOR_ANR_DEL_TIME_QUANTUM        0xb1    /*ANR删除时间段*/

#define MINOR_PIC_REC_START             0xb3  /* 开始抓图*/
#define MINOR_PIC_REC_STOP              0xb4  /* 停止抓图*/
#define MINOR_PIC_REC_OVERDUE           0xb5  /* 过期图片文件删除 */
//Netra3.1.0
#define  MINOR_CLIENT_LOGIN             0xb6   /*登录服务器成功*/
#define  MINOR_CLIENT_RELOGIN            0xb7   /*重新登录服务器*/
#define  MINOR_CLIENT_LOGOUT            0xb8   /*退出服务器成功*/
#define  MINOR_CLIENT_SYNC_START        0xb9   /*录像同步开始*/
#define  MINOR_CLIENT_SYNC_STOP            0xba   /*录像同步终止*/
#define  MINOR_CLIENT_SYNC_SUCC            0xbb   /*录像同步成功*/
#define  MINOR_CLIENT_SYNC_EXCP            0xbc   /*录像同步异常*/
#define  MINOR_GLOBAL_RECORD_ERR_INFO   0xbd   /*全局错误记录信息*/
#define  MINOR_BUFFER_STATE             0xbe   /*缓冲区状态日志记录*/
#define  MINOR_DISK_ERRORINFO_V2        0xbf   /*硬盘错误详细信息V2*/
#define  MINOR_CS_DATA_EXPIRED          0xc0   //云存储数据过期
#define  MINOR_PLAT_INFO                0xc1   //平台操作信息
#define  MINOR_DIAL_STAT                0xc2   /*拨号状态*/

#define MINOR_UNLOCK_RECORD             0xc3   //开锁记录
#define MINOR_VIS_ALARM                 0xc4   //防区报警
#define MINOR_TALK_RECORD               0xc5   //通话记录
#define MINOR_ACCESSORIES_MESSAGE       0xc6 //配件板信息
#define MINOR_KMS_EXPAMSION_DISK_INSERT 0xc7// KMS扩容盘插入
#define MINOR_IPC_CONNECT               0xc8//  IPC连接
#define MINOR_INTELLIGENT_BOARD_STATUS  0xc9//  智能板状态
#define MINOR_EZVIZ_OPERATION           0xcc   //萤石运行状态
/*事件*/
//主类型
#define MAJOR_EVENT                             0x5     /*事件*/
//次类型
#define MINOR_LEGAL_CARD_PASS                   0x01    //合法卡认证通过
#define MINOR_CARD_AND_PSW_PASS                 0x02    //刷卡加密码认证通过
#define MINOR_CARD_AND_PSW_FAIL                 0x03    //刷卡加密码认证失败
#define MINOR_CARD_AND_PSW_TIMEOUT              0x04    //数卡加密码认证超时
#define MINOR_CARD_AND_PSW_OVER_TIME            0x05    //刷卡加密码超次
#define MINOR_CARD_NO_RIGHT                     0x06    //未分配权限
#define MINOR_CARD_INVALID_PERIOD               0x07    //无效时段
#define MINOR_CARD_OUT_OF_DATE                  0x08    //卡号过期
#define MINOR_INVALID_CARD                      0x09    //无此卡号
#define MINOR_ANTI_SNEAK_FAIL                   0x0a    //反潜回认证失败
#define MINOR_INTERLOCK_DOOR_NOT_CLOSE          0x0b    //互锁门未关闭
#define MINOR_NOT_BELONG_MULTI_GROUP            0x0c    //卡不属于多重认证群组
#define MINOR_INVALID_MULTI_VERIFY_PERIOD       0x0d    //卡不在多重认证时间段内
#define MINOR_MULTI_VERIFY_SUPER_RIGHT_FAIL     0x0e    //多重认证模式超级权限认证失败
#define MINOR_MULTI_VERIFY_REMOTE_RIGHT_FAIL    0x0f    //多重认证模式远程认证失败
#define MINOR_MULTI_VERIFY_SUCCESS              0x10    //多重认证成功
#define MINOR_LEADER_CARD_OPEN_BEGIN            0x11    //首卡开门开始
#define MINOR_LEADER_CARD_OPEN_END              0x12    //首卡开门结束
#define MINOR_ALWAYS_OPEN_BEGIN                 0x13    //常开状态开始
#define MINOR_ALWAYS_OPEN_END                   0x14    //常开状态结束
#define MINOR_LOCK_OPEN                         0x15    //门锁打开
#define MINOR_LOCK_CLOSE                        0x16    //门锁关闭
#define MINOR_DOOR_BUTTON_PRESS                 0x17    //开门按钮打开
#define MINOR_DOOR_BUTTON_RELEASE               0x18    //开门按钮放开
#define MINOR_DOOR_OPEN_NORMAL                  0x19    //正常开门（门磁）
#define MINOR_DOOR_CLOSE_NORMAL                 0x1a    //正常关门（门磁）
#define MINOR_DOOR_OPEN_ABNORMAL                0x1b    //门异常打开（门磁）
#define MINOR_DOOR_OPEN_TIMEOUT                 0x1c    //门打开超时（门磁）
#define MINOR_ALARMOUT_ON                       0x1d    //报警输出打开
#define MINOR_ALARMOUT_OFF                      0x1e    //报警输出关闭
#define MINOR_ALWAYS_CLOSE_BEGIN                0x1f    //常关状态开始
#define MINOR_ALWAYS_CLOSE_END                  0x20    //常关状态结束
#define MINOR_MULTI_VERIFY_NEED_REMOTE_OPEN     0x21    //多重多重认证需要远程开门
#define MINOR_MULTI_VERIFY_SUPERPASSWD_VERIFY_SUCCESS  0x22  //多重认证超级密码认证成功事件
#define MINOR_MULTI_VERIFY_REPEAT_VERIFY        0x23    //多重认证重复认证事件
#define MINOR_MULTI_VERIFY_TIMEOUT               0x24    //多重认证重复认证事件
#define MINOR_DOORBELL_RINGING                  0x25    //门铃响
#define MINOR_FINGERPRINT_COMPARE_PASS          0x26    //指纹比对通过
#define MINOR_FINGERPRINT_COMPARE_FAIL          0x27    //指纹比对失败
#define MINOR_CARD_FINGERPRINT_VERIFY_PASS              0x28    //刷卡加指纹认证通过
#define MINOR_CARD_FINGERPRINT_VERIFY_FAIL              0x29    //刷卡加指纹认证失败
#define MINOR_CARD_FINGERPRINT_VERIFY_TIMEOUT           0x2a    //刷卡加指纹认证超时
#define MINOR_CARD_FINGERPRINT_PASSWD_VERIFY_PASS       0x2b    //刷卡加指纹加密码认证通过
#define MINOR_CARD_FINGERPRINT_PASSWD_VERIFY_FAIL       0x2c    //刷卡加指纹加密码认证失败
#define MINOR_CARD_FINGERPRINT_PASSWD_VERIFY_TIMEOUT    0x2d    //刷卡加指纹加密码认证超时
#define MINOR_FINGERPRINT_PASSWD_VERIFY_PASS            0x2e    //指纹加密码认证通过
#define MINOR_FINGERPRINT_PASSWD_VERIFY_FAIL            0x2f    //指纹加密码认证失败
#define MINOR_FINGERPRINT_PASSWD_VERIFY_TIMEOUT         0x30    //指纹加密码认证超时
#define MINOR_FINGERPRINT_INEXISTENCE                   0x31    //指纹不存在
#define MINOR_CARD_PLATFORM_VERIFY                      0x32    //刷卡平台认证
#define MINOR_CALL_CENTER                               0x33    //呼叫中心事件
#define MINOR_FIRE_RELAY_TURN_ON_DOOR_ALWAYS_OPEN       0x34    //消防继电器导通触发门常开
#define MINOR_FIRE_RELAY_RECOVER_DOOR_RECOVER_NORMAL    0x35   //消防继电器恢复门恢复正常
#define MINOR_FACE_AND_FP_VERIFY_PASS                   0x36    //人脸加指纹认证通过
#define MINOR_FACE_AND_FP_VERIFY_FAIL                   0x37    //人脸加指纹认证失败
#define MINOR_FACE_AND_FP_VERIFY_TIMEOUT                0x38    //人脸加指纹认证超时
#define MINOR_FACE_AND_PW_VERIFY_PASS                   0x39    //人脸加密码认证通过
#define MINOR_FACE_AND_PW_VERIFY_FAIL                   0x3a    //人脸加密码认证失败
#define MINOR_FACE_AND_PW_VERIFY_TIMEOUT                0x3b    //人脸加密码认证超时
#define MINOR_FACE_AND_CARD_VERIFY_PASS                 0x3c    //人脸加刷卡认证通过
#define MINOR_FACE_AND_CARD_VERIFY_FAIL                 0x3d    //人脸加刷卡认证失败
#define MINOR_FACE_AND_CARD_VERIFY_TIMEOUT              0x3e    //人脸加刷卡认证超时
#define MINOR_FACE_AND_PW_AND_FP_VERIFY_PASS            0x3f    //人脸加密码加指纹认证通过
#define MINOR_FACE_AND_PW_AND_FP_VERIFY_FAIL            0x40    //人脸加密码加指纹认证失败
#define MINOR_FACE_AND_PW_AND_FP_VERIFY_TIMEOUT         0x41    //人脸加密码加指纹认证超时
#define MINOR_FACE_CARD_AND_FP_VERIFY_PASS              0x42    //人脸加刷卡加指纹认证通过
#define MINOR_FACE_CARD_AND_FP_VERIFY_FAIL              0x43    //人脸加刷卡加指纹认证失败
#define MINOR_FACE_CARD_AND_FP_VERIFY_TIMEOUT           0x44    //人脸加刷卡加指纹认证超时
#define MINOR_EMPLOYEENO_AND_FP_VERIFY_PASS             0x45    //工号加指纹认证通过
#define MINOR_EMPLOYEENO_AND_FP_VERIFY_FAIL             0x46    //工号加指纹认证失败
#define MINOR_EMPLOYEENO_AND_FP_VERIFY_TIMEOUT          0x47    //工号加指纹认证超时
#define MINOR_EMPLOYEENO_AND_FP_AND_PW_VERIFY_PASS      0x48    //工号加指纹加密码认证通过
#define MINOR_EMPLOYEENO_AND_FP_AND_PW_VERIFY_FAIL      0x49    //工号加指纹加密码认证失败
#define MINOR_EMPLOYEENO_AND_FP_AND_PW_VERIFY_TIMEOUT   0x4a    //工号加指纹加密码认证超时
#define MINOR_FACE_VERIFY_PASS                          0x4b    //人脸认证通过
#define MINOR_FACE_VERIFY_FAIL                          0x4c    //人脸认证失败
#define MINOR_EMPLOYEENO_AND_FACE_VERIFY_PASS           0x4d    //工号加人脸认证通过
#define MINOR_EMPLOYEENO_AND_FACE_VERIFY_FAIL           0x4e    //工号加人脸认证失败
#define MINOR_EMPLOYEENO_AND_FACE_VERIFY_TIMEOUT        0x4f    //工号加人脸认证超时
#define MINOR_FACE_RECOGNIZE_FAIL                       0x50    //人脸识别失败
#define MINOR_FIRSTCARD_AUTHORIZE_BEGIN                    0x51    //首卡授权开始
#define MINOR_FIRSTCARD_AUTHORIZE_END                    0x52    //首卡授权结束
#define MINOR_DOORLOCK_INPUT_SHORT_CIRCUIT                0x53    //门锁输入短路报警
#define MINOR_DOORLOCK_INPUT_BROKEN_CIRCUIT                0x54    //门锁输入断路报警
#define MINOR_DOORLOCK_INPUT_EXCEPTION                    0x55    //门锁输入异常报警
#define MINOR_DOORCONTACT_INPUT_SHORT_CIRCUIT            0x56    //门磁输入短路报警
#define MINOR_DOORCONTACT_INPUT_BROKEN_CIRCUIT            0x57    //门磁输入断路报警
#define MINOR_DOORCONTACT_INPUT_EXCEPTION                0x58    //门磁输入异常报警
#define MINOR_OPENBUTTON_INPUT_SHORT_CIRCUIT            0x59    //开门按钮输入短路报警
#define MINOR_OPENBUTTON_INPUT_BROKEN_CIRCUIT            0x5a    //开门按钮输入断路报警
#define MINOR_OPENBUTTON_INPUT_EXCEPTION                0x5b    //开门按钮输入异常报警
#define MINOR_DOORLOCK_OPEN_EXCEPTION                    0x5c    //门锁异常打开
#define MINOR_DOORLOCK_OPEN_TIMEOUT                        0x5d    //门锁打开超时
#define MINOR_FIRSTCARD_OPEN_WITHOUT_AUTHORIZE            0x5e    //首卡未授权开门失败
#define MINOR_CALL_LADDER_RELAY_BREAK                   0x5f    //呼梯继电器断开
#define MINOR_CALL_LADDER_RELAY_CLOSE                   0x60    //呼梯继电器闭合
#define MINOR_AUTO_KEY_RELAY_BREAK                      0x61    //自动按键继电器断开
#define MINOR_AUTO_KEY_RELAY_CLOSE                      0x62    //自动按键继电器闭合
#define MINOR_KEY_CONTROL_RELAY_BREAK                   0x63    //按键梯控继电器断开
#define MINOR_KEY_CONTROL_RELAY_CLOSE                   0x64    //按键梯控继电器闭合
#define MINOR_EMPLOYEENO_AND_PW_PASS                    0x65    //工号加密码认证通过
#define MINOR_EMPLOYEENO_AND_PW_FAIL                    0x66    //工号加密码认证失败
#define MINOR_EMPLOYEENO_AND_PW_TIMEOUT                 0x67    //工号加密码认证超时
#define MINOR_HUMAN_DETECT_FAIL                         0x68    //真人检测失败
#define MINOR_PEOPLE_AND_ID_CARD_COMPARE_PASS           0x69    //人证比对通过
#define MINOR_PEOPLE_AND_ID_CARD_COMPARE_FAIL           0x70    //人证比对失败
#define MINOR_CERTIFICATE_BLACK_LIST                    0x71    //黑名单事件
#define MINOR_LEGAL_MESSAGE                             0x72    //合法短信
#define MINOR_ILLEGAL_MESSAGE                           0x73    //非法短信
#define MINOR_MAC_DETECT                                0x74    //MAC侦测
#define MINOR_DOOR_OPEN_OR_DORMANT_FAIL                 0x75   //门状态常闭或休眠状态认证失败
#define MINOR_AUTH_PLAN_DORMANT_FAIL                    0x76   //认证计划休眠模式认证失败
#define MINOR_CARD_ENCRYPT_VERIFY_FAIL                  0x77   //卡加密校验失败
#define MINOR_SUBMARINEBACK_REPLY_FAIL                  0x78   //反潜回服务器应答失败
#define MINOR_DOOR_OPEN_OR_DORMANT_OPEN_FAIL            0x82   //门常闭或休眠时开门按钮开门失败
#define MINOR_HEART_BEAT                                0x83    //心跳事件
#define MINOR_DOOR_OPEN_OR_DORMANT_LINKAGE_OPEN_FAIL    0x84   //门常闭或休眠时开门联动开门失败
#define MINOR_TRAILING                                  0x85   //尾随通行
#define MINOR_REVERSE_ACCESS                            0x86   //反向闯入
#define MINOR_FORCE_ACCESS                              0x87   //外力冲撞
#define MINOR_CLIMBING_OVER_GATE                        0x88   //翻越
#define MINOR_PASSING_TIMEOUT                           0x89   //通行超时
#define MINOR_INTRUSION_ALARM                           0x8a   //误闯报警
#define MINOR_FREE_GATE_PASS_NOT_AUTH                   0x8b   //闸机自由通行时未认证通过
#define MINOR_DROP_ARM_BLOCK                            0x8c   //摆臂被阻挡
#define MINOR_DROP_ARM_BLOCK_RESUME                     0x8d   //摆臂阻挡消除

#define MINOR_EVENT_CUSTOM1                         0x500  //门禁自定义事件1
#define MINOR_EVENT_CUSTOM2                         0x501  //门禁自定义事件2
#define MINOR_EVENT_CUSTOM3                         0x502  //门禁自定义事件3
#define MINOR_EVENT_CUSTOM4                         0x503  //门禁自定义事件4
#define MINOR_EVENT_CUSTOM5                         0x504  //门禁自定义事件5
#define MINOR_EVENT_CUSTOM6                         0x505  //门禁自定义事件6
#define MINOR_EVENT_CUSTOM7                         0x506  //门禁自定义事件7
#define MINOR_EVENT_CUSTOM8                         0x507  //门禁自定义事件8
#define MINOR_EVENT_CUSTOM9                         0x508  //门禁自定义事件9
#define MINOR_EVENT_CUSTOM10                        0x509  //门禁自定义事件10
#define MINOR_EVENT_CUSTOM11                        0x50a  //门禁自定义事件11
#define MINOR_EVENT_CUSTOM12                        0x50b  //门禁自定义事件12
#define MINOR_EVENT_CUSTOM13                        0x50c  //门禁自定义事件13
#define MINOR_EVENT_CUSTOM14                        0x50d  //门禁自定义事件14
#define MINOR_EVENT_CUSTOM15                        0x50e  //门禁自定义事件15
#define MINOR_EVENT_CUSTOM16                        0x50f  //门禁自定义事件16
#define MINOR_EVENT_CUSTOM17                        0x510  //门禁自定义事件17
#define MINOR_EVENT_CUSTOM18                        0x511  //门禁自定义事件18
#define MINOR_EVENT_CUSTOM19                        0x512  //门禁自定义事件19
#define MINOR_EVENT_CUSTOM20                        0x513  //门禁自定义事件20
#define MINOR_EVENT_CUSTOM21                        0x514  //门禁自定义事件21
#define MINOR_EVENT_CUSTOM22                        0x515  //门禁自定义事件22
#define MINOR_EVENT_CUSTOM23                        0x516  //门禁自定义事件23
#define MINOR_EVENT_CUSTOM24                        0x517  //门禁自定义事件24
#define MINOR_EVENT_CUSTOM25                        0x518  //门禁自定义事件25
#define MINOR_EVENT_CUSTOM26                        0x519  //门禁自定义事件26
#define MINOR_EVENT_CUSTOM27                        0x51a  //门禁自定义事件27
#define MINOR_EVENT_CUSTOM28                        0x51b  //门禁自定义事件28
#define MINOR_EVENT_CUSTOM29                        0x51c  //门禁自定义事件29
#define MINOR_EVENT_CUSTOM30                        0x51d  //门禁自定义事件30
#define MINOR_EVENT_CUSTOM31                        0x51e  //门禁自定义事件31
#define MINOR_EVENT_CUSTOM32                        0x51f  //门禁自定义事件32
#define MINOR_EVENT_CUSTOM33                        0x520  //门禁自定义事件33
#define MINOR_EVENT_CUSTOM34                        0x521  //门禁自定义事件34
#define MINOR_EVENT_CUSTOM35                        0x522  //门禁自定义事件35
#define MINOR_EVENT_CUSTOM36                        0x523  //门禁自定义事件36
#define MINOR_EVENT_CUSTOM37                        0x524  //门禁自定义事件37
#define MINOR_EVENT_CUSTOM38                        0x525  //门禁自定义事件38
#define MINOR_EVENT_CUSTOM39                        0x526  //门禁自定义事件39
#define MINOR_EVENT_CUSTOM40                        0x527  //门禁自定义事件40
#define MINOR_EVENT_CUSTOM41                        0x528  //门禁自定义事件41
#define MINOR_EVENT_CUSTOM42                        0x529  //门禁自定义事件42
#define MINOR_EVENT_CUSTOM43                        0x52a  //门禁自定义事件43
#define MINOR_EVENT_CUSTOM44                        0x52b  //门禁自定义事件44
#define MINOR_EVENT_CUSTOM45                        0x52c  //门禁自定义事件45
#define MINOR_EVENT_CUSTOM46                        0x52d  //门禁自定义事件46
#define MINOR_EVENT_CUSTOM47                        0x52e  //门禁自定义事件47
#define MINOR_EVENT_CUSTOM48                        0x52f  //门禁自定义事件48
#define MINOR_EVENT_CUSTOM49                        0x530  //门禁自定义事件49
#define MINOR_EVENT_CUSTOM50                        0x531  //门禁自定义事件50
#define MINOR_EVENT_CUSTOM51                        0x532  //门禁自定义事件51
#define MINOR_EVENT_CUSTOM52                        0x533  //门禁自定义事件52
#define MINOR_EVENT_CUSTOM53                        0x534  //门禁自定义事件53
#define MINOR_EVENT_CUSTOM54                        0x535  //门禁自定义事件54
#define MINOR_EVENT_CUSTOM55                        0x536  //门禁自定义事件55
#define MINOR_EVENT_CUSTOM56                        0x537  //门禁自定义事件56
#define MINOR_EVENT_CUSTOM57                        0x538  //门禁自定义事件57
#define MINOR_EVENT_CUSTOM58                        0x539  //门禁自定义事件58
#define MINOR_EVENT_CUSTOM59                        0x53a  //门禁自定义事件59
#define MINOR_EVENT_CUSTOM60                        0x53b  //门禁自定义事件60
#define MINOR_EVENT_CUSTOM61                        0x53c  //门禁自定义事件61
#define MINOR_EVENT_CUSTOM62                        0x53d  //门禁自定义事件62
#define MINOR_EVENT_CUSTOM63                        0x53e  //门禁自定义事件63
#define MINOR_EVENT_CUSTOM64                        0x53f  //门禁自定义事件64

typedef enum tagALARMHOST_MAJOR_TYPE
{
    MAJOR_ALARMHOST_ALARM = 1,
        MAJOR_ALARMHOST_EXCEPTION,
        MAJOR_ALARMHOST_OPERATION,
        MAJ0R_ALARMHOST_EVENT
}ALARMHOST_MAJOR_TYPE;

typedef enum tagALARMHOST_MINOR_TYPE
{
    // 报警
    MINOR_SHORT_CIRCUIT =0x01,      // 短路报警
        MINOR_BROKEN_CIRCUIT,           // 断路报警
        MINOR_ALARM_RESET,              // 报警复位
        MINOR_ALARM_NORMAL,                // 报警恢复正常
        MINOR_PASSWORD_ERROR,            // 密码错误（连续3次输入密码错误）
        MINOR_ID_CARD_ILLEGALLY,        // 非法感应卡ID
        MINOR_KEYPAD_REMOVE,            // 键盘防拆
        MINOR_KEYPAD_REMOVE_RESTORE,    // 键盘防拆复位
        MINOR_DEV_REMOVE,                // 设备防拆
        MINOR_DEV_REMOVE_RESTORE,        // 设备防拆复位
        MINOR_BELOW_ALARM_LIMIT1,        // 模拟量低于报警限1
        MINOR_BELOW_ALARM_LIMIT2,        // 模拟量低于报警限2
        MINOR_BELOW_ALARM_LIMIT3,        // 模拟量低于报警限3
        MINOR_BELOW_ALARM_LIMIT4,        // 模拟量低于报警限4
        MINOR_ABOVE_ALARM_LIMIT1,        // 模拟量高于报警限1
        MINOR_ABOVE_ALARM_LIMIT2,        // 模拟量高于报警限2
        MINOR_ABOVE_ALARM_LIMIT3,        // 模拟量高于报警限3
        MINOR_ABOVE_ALARM_LIMIT4,        // 模拟量高于报警限4
        MINOR_URGENCYBTN_ON,            // 紧急按钮按下
        MINOR_URGENCYBTN_OFF,            // 紧急按钮复位
        MINOR_VIRTUAL_DEFENCE_BANDIT,            //软防区匪警
        MINOR_VIRTUAL_DEFENCE_FIRE,                //软防区火警
        MINOR_VIRTUAL_DEFENCE_URGENT,            //软防区紧急
        MINOR_ALARMHOST_MOTDET_START,            //移动侦测报警开始
        MINOR_ALARMHOST_MOTDET_STOP,            //移动侦测报警结束
        MINOR_ALARMHOST_HIDE_ALARM_START,        //遮挡报警开始
        MINOR_ALARMHOST_HIDE_ALARM_STOP,        //遮挡报警结束
        MINOR_ALARMHOST_UPS_ALARM,                //UPS报警
        MINOR_ALARMHOST_ELECTRICITY_METER_ALARM, //电量表报警
        MINOR_ALARMHOST_SWITCH_POWER_ALARM,        //开关电源报警
        MINOR_ALARMHOST_GAS_DETECT_SYS_ALARM,      //气体检测系统报警
        MINOR_ALARMHOST_TRANSFORMER_TEMPRATURE_ALARM, //变电器温显表报警
        MINOR_ALARMHOST_TEMP_HUMI_ALARM,            //温湿度传感器报警
        MINOR_ALARMHOST_UPS_ALARM_RESTORE,    //UPS报警恢复
        MINOR_ALARMHOST_ELECTRICITY_METER_ALARM_RESTORE, //电量表报警恢复
        MINOR_ALARMHOST_SWITCH_POWER_ALARM_RESTORE,      //开关电源报警恢复
        MINOR_ALARMHOST_GAS_DETECT_SYS_ALARM_RESTORE,      //气体检测系统报警恢复
        MINOR_ALARMHOST_TRANSFORMER_TEMPRATURE_ALARM_RESTORE, //变电器温显表报警恢复
        MINOR_ALARMHOST_TEMP_HUMI_ALARM_RESTORE,          //温湿度传感器报警恢复
        MINOR_ALARMHOST_WATER_LEVEL_SENSOR_ALARM,            //水位传感器报警
        MINOR_ALARMHOST_WATER_LEVEL_SENSOR_ALARM_RESTORE,    //水位传感器报警恢复
        MINOR_ALARMHOST_DUST_NOISE_ALARM,                    //扬尘噪声传感器报警
        MINOR_ALARMHOST_DUST_NOISE_ALARM_RESTORE,            //扬尘噪声传感器报警恢复
        MINOR_ALARMHOST_ENVIRONMENTAL_LOGGER_ALARM,            //环境采集仪报警
        MINOR_ALARMHOST_ENVIRONMENTAL_LOGGER_ALARM_RESTORE,    //环境采集仪报警恢复

        MINOR_ALARMHOST_TRIGGER_TAMPER,                //探测器防拆
        MINOR_ALARMHOST_TRIGGER_TAMPER_RESTORE,                //探测器防拆恢复
        MINOR_ALARMHOST_EMERGENCY_CALL_HELP_ALARM,            //紧急呼叫求助报警
        MINOR_ALARMHOST_EMERGENCY_CALL_HELP_ALARM_RESTORE,    //紧急呼叫求助报警恢复
        MINOR_ALARMHOST_CONSULTING_ALARM,                     //业务咨询报警
        MINOR_ALARMHOST_CONSULTING_ALARM_RESTORE,             //业务咨询报警恢复
        MINOR_ZONE_MODULE_REMOVE,            // 防区模块防拆
        MINOR_ZONE_MODULE_RESET,    // 防区模块防拆复位

        // 异常
        MINOR_POWER_ON      = 0x01,    // 上电
        MINOR_POWER_OFF,                // 掉电
        MINOR_WDT_RESET,                // WDT 复位
        MINOR_LOW_BATTERY_VOLTAGE,        // 蓄电池电压低
        MINOR_AC_LOSS,                    // 交流电断电
        MINOR_AC_RESTORE,                // 交流电恢复
        MINOR_RTC_EXCEPTION,            // RTC实时时钟异常
        MINOR_NETWORK_CONNECT_FAILURE,    // 网络连接断
        MINOR_NETWORK_CONNECT_RESTORE,    // 网络连接恢复
        MINOR_TEL_LINE_CONNECT_FAILURE,    // 电话线连接断
        MINOR_TEL_LINE_CONNECT_RESTORE,    // 电话线连接恢复
        MINOR_EXPANDER_BUS_LOSS,        // 扩展总线模块掉线
        MINOR_EXPANDER_BUS_RESTORE,        // 扩展总线模块掉线恢复
        MINOR_KEYPAD_BUS_LOSS,            // 键盘总线模块掉线
        MINOR_KEYPAD_BUS_RESTORE,        // 键盘总线模块掉线恢复
        MINOR_SENSOR_FAILURE,            // 模拟量传感器故障
        MINOR_SENSOR_RESTORE,            // 模拟量传感器恢复
        MINOR_RS485_CONNECT_FAILURE,    // RS485通道连接断
        MINOR_RS485_CONNECT_RESTORE,    // RS485通道连接断恢复
        MINOR_BATTERT_VOLTAGE_RESTORE,  // 蓄电池电压恢复正常
        MINOR_WIRED_NETWORK_ABNORMAL,    //有线网络异常
        MINOR_WIRED_NETWORK_RESTORE,    //有线网络恢复正常
        MINOR_GPRS_ABNORMAL,            //GPRS通信异常
        MINOR_GPRS_RESTORE,                //GPRS恢复正常
        MINOR_3G_ABNORMAL,                //3G通信异常
        MINOR_3G_RESTORE,                //3G恢复正常
        MINOR_SIM_CARD_ABNORMAL,        //SIM卡异常
        MINOR_SIM_CARD_RESTORE,            //SIM卡恢复正常
        MINOR_ALARMHOST_VI_LOST,        // 视频信号丢失
        MINOR_ALARMHOST_ILLEGAL_ACCESS,    // 非法访问
        MINOR_ALARMHOST_HD_FULL,        // 硬盘满
        MINOR_ALARMHOST_HD_ERROR,        // 硬盘错误
        MINOR_ALARMHOST_DCD_LOST,        // MODEM 掉线(保留不使用)
        MINOR_ALARMHOST_IP_CONFLICT,    // IP地址冲突
        MINOR_ALARMHOST_NET_BROKEN,        // 网络断开
        MINOR_ALARMHOST_REC_ERROR,      // 录像出错
        MINOR_ALARMHOST_VI_EXCEPTION,   // 视频输入异常(只针对模拟通道)
        MINOR_ALARMHOST_FORMAT_HDD_ERROR, //远程格式化硬盘失败
        MINOR_ALARMHOST_USB_ERROR,        //USB通信故障
        MINOR_ALARMHOST_USB_RESTORE,    //USB通信故障恢复
        MINOR_ALARMHOST_PRINT_ERROR,    //打印机故障
        MINOR_ALARMHOST_PRINT_RESTORE,    //打印机故障恢复
        MINOR_SUBSYSTEM_COMMUNICATION_ERROR, //子板通讯错误
        MINOR_ALARMHOST_IPC_NO_LINK,                /* IPC连接断开  */
        MINOR_ALARMHOST_IPC_IP_CONFLICT,            /*ipc ip 地址 冲突*/
        MINOR_ALARMHOST_VI_MISMATCH,                /*视频制式不匹配*/
        MINOR_ALARMHOST_MCU_RESTART,                //MCU重启
        MINOR_ALARMHOST_GPRS_MODULE_FAULT,          //GPRS模块故障
        MINOR_ALARMHOST_TELEPHONE_MODULE_FAULT,     //电话模块故障
        MINOR_ALARMHOST_WIFI_ABNORMAL,              //WIFI通信异常
        MINOR_ALARMHOST_WIFI_RESTORE,               //WIFI恢复正常
        MINOR_ALARMHOST_RF_ABNORMAL,                //RF信号异常
        MINOR_ALARMHOST_RF_RESTORE,                 //RF信号恢复正常
        MINOR_ALARMHOST_DETECTOR_ONLINE,            //探测器在线
        MINOR_ALARMHOST_DETECTOR_OFFLINE,           //探测器离线
        MINOR_ALARMHOST_DETECTOR_BATTERY_NORMAL,    //探测器电量正常
        MINOR_ALARMHOST_DETECTOR_BATTERY_LOW,       //探测器电量欠压
        MINOR_ALARMHOST_DATA_TRAFFIC_OVERFLOW,     //流量超额
        MINOR_ZONE_MODULE_LOSS,            // 防区模块掉线
        MINOR_ZONE_MODULE_RESTORE,        // 防区模块掉线恢复
        MINOR_ALARMHOST_WIRELESS_OUTPUT_LOSS,   //无线输出模块离线
        MINOR_ALARMHOST_WIRELESS_OUTPUT_RESTORE,   //无线输出模块恢复在线
        MINOR_ALARMHOST_WIRELESS_REPEATER_LOSS,   //无线中继器离线
        MINOR_ALARMHOST_WIRELESS_REPEATER_RESTORE,   //无线中继器恢复在线
        MINOR_TRIGGER_MODULE_LOSS,            // 触发器模块掉线
        MINOR_TRIGGER_MODULE_RESTORE,        // 触发器模块掉线恢复


        // 操作
        MINOR_GUARD         = 0x01,        // 普通布防
        MINOR_UNGUARD,                    // 普通撤防
        MINOR_BYPASS,                    // 旁路
        MINOR_DURESS_ACCESS,            // 挟持
        MINOR_ALARMHOST_LOCAL_REBOOT,    // 本地重启
        MINOR_ALARMHOST_REMOTE_REBOOT,    // 远程重启
        MINOR_ALARMHOST_LOCAL_UPGRADE,    // 本地升级
        MINOR_ALARMHOST_REMOTE_UPGRADE,    // 远程升级
        MINOR_RECOVERY_DEFAULT_PARAM,    // 恢复默认参数
        MINOR_ALARM_OUTPUT,                // 控制报警输出
        MINOR_ACCESS_OPEN,                // 控制门禁开
        MINOR_ACCESS_CLOSE,                // 控制门禁关
        MINOR_SIREN_OPEN,                // 控制警号开
        MINOR_SIREN_CLOSE,                // 控制警号关
        MINOR_MOD_ZONE_CONFIG,            // 修改防区设置
        MINOR_MOD_ALARMOUT_CONIFG,        // 控制报警输出配置
        MINOR_MOD_ANALOG_CONFIG,        // 修改模拟量配置
        MINOR_RS485_CONFIG,                // 修改485通道配置
        MINOR_PHONE_CONFIG,                // 修改拨号配置
        MINOR_ADD_ADMIN,                // 增加管理员
        MINOR_MOD_ADMIN_PARAM,            // 修改管理员参数
        MINOR_DEL_ADMIN,                // 删除管理员
        MINOR_ADD_NETUSER,                // 增加后端操作员
        MINOR_MOD_NETUSER_PARAM,        // 修改后端操作员参数
        MINOR_DEL_NETUSER,                // 删除后端操作员
        MINOR_ADD_OPERATORUSER,            // 增加前端操作员
        MINOR_MOD_OPERATORUSER_PW,        // 修改前端操作员密码
        MINOR_DEL_OPERATORUSER,            // 删除前端操作员
        MINOR_ADD_KEYPADUSER,            // 增加键盘/读卡器用户
        MINOR_DEL_KEYPADUSER,            // 删除键盘/读卡器用户
        MINOR_REMOTEUSER_LOGIN,            // 远程用户登陆
        MINOR_REMOTEUSER_LOGOUT,        // 远程用户注销
        MINOR_REMOTE_GUARD,                // 远程布防
        MINOR_REMOTE_UNGUARD,            // 远程撤防
        MINOR_MOD_HOST_CONFIG,          // 修改主机配置
        MINOR_RESTORE_BYPASS,            // 旁路恢复
        MINOR_ALARMOUT_OPEN,            // 报警输出开启
        MINOR_ALARMOUT_CLOSE,            // 报警输出关闭
        MINOR_MOD_SUBSYSTEM_PARAM,        // 修改子系统参数配置
        MINOR_GROUP_BYPASS,                // 组旁路
        MINOR_RESTORE_GROUP_BYPASS,        // 组旁路恢复
        MINOR_MOD_GRPS_PARAM,            // 修改GPRS参数
        MINOR_MOD_NET_REPORT_PARAM,        // 修改网络上报参数配置
        MINOR_MOD_REPORT_MOD,            // 修改上传方式配置
        MINOR_MOD_GATEWAY_PARAM,        // 修改门禁参数配置
        MINOR_ALARMHOST_REMOTE_START_REC,        // 远程开始录像
        MINOR_ALARMHOST_REMOTE_STOP_REC,        // 远程停止录像
        MINOR_ALARMHOST_START_TRANS_CHAN,        // 开始透明传输
        MINOR_ALARMHOST_STOP_TRANS_CHAN,        // 停止透明传输
        MINOR_ALARMHOST_START_VT,                // 开始语音对讲
        MINOR_ALARMHOST_STOP_VTM,                // 停止语音对讲
        MINOR_ALARMHOST_REMOTE_PLAYBYFILE,        // 远程按文件回放
        MINOR_ALARMHOST_REMOTE_PLAYBYTIME,      // 远程按时间回放
        MINOR_ALARMHOST_REMOTE_PTZCTRL,            // 远程云台控制
        MINOR_ALARMHOST_REMOTE_FORMAT_HDD,      // 远程格式化硬盘
        MINOR_ALARMHOST_REMOTE_LOCKFILE,        // 远程锁定文件
        MINOR_ALARMHOST_REMOTE_UNLOCKFILE,      // 远程解锁文件
        MINOR_ALARMHOST_REMOTE_CFGFILE_OUTPUT,  // 远程导出配置文件
        MINOR_ALARMHOST_REMOTE_CFGFILE_INTPUT,  // 远程导入配置文件
        MINOR_ALARMHOST_REMOTE_RECFILE_OUTPUT,  // 远程导出录象文件

        MINOR_ALARMHOST_STAY_ARM,                        //留守布防
        MINOR_ALARMHOST_QUICK_ARM,                        //即时布防
        MINOR_ALARMHOST_AUTOMATIC_ARM,                    //自动布防
        MINOR_ALARMHOST_AUTOMATIC_DISARM,                //自动撤防
        MINOR_ALARMHOST_KEYSWITCH_ARM,                    //钥匙防区布防
        MINOR_ALARMHOST_KEYSWITCH_DISARM,                //钥匙防区撤防
        MINOR_ALARMHOST_CLEAR_ALARM,                    //消警
        MINOR_ALARMHOST_MOD_FAULT_CFG,                    //修改系统故障配置
        MINOR_ALARMHOST_MOD_EVENT_TRIGGER_ALARMOUT_CFG,    //修改事件触发报警输出配置
        MINOR_ALARMHOST_SEARCH_EXTERNAL_MODULE,            //搜索外接模块
        MINOR_ALARMHOST_REGISTER_EXTERNAL_MODULE,        //重新注册外接模块
        MINOR_ALARMHOST_CLOSE_KEYBOARD_ALARM,            //关闭键盘报警提示音
        MINOR_ALARMHOST_MOD_3G_PARAM,                    //修改3G参数
        MINOR_ALARMHOST_MOD_PRINT_PARAM, //修改打印机参数
        MINOR_SD_CARD_FORMAT,        //SD卡格式化
        MINOR_SUBSYSTEM_UPGRADE,        //子板固件升级

        MINOR_ALARMHOST_PLAN_ARM_CFG,    //计划布撤防参数配置
        MINOR_ALARMHOST_PHONE_ARM,        //手机布防
        MINOR_ALARMHOST_PHONE_STAY_ARM,    //手机留守布防
        MINOR_ALARMHOST_PHONE_QUICK_ARM,//手机即时布防
        MINOR_ALARMHOST_PHONE_DISARM,    //手机撤防
        MINOR_ALARMHOST_PHONE_CLEAR_ALARM,    //手机消警
        MINOR_ALARMHOST_WHITELIST_CFG,    //白名单配置
        MINOR_ALARMHOST_TIME_TRIGGER_CFG,            //定时开关触发器配置
        MINOR_ALARMHOST_CAPTRUE_CFG,                //抓图参数配置
        MINOR_ALARMHOST_TAMPER_CFG,                //防区防拆参数配置

        MINOR_ALARMHOST_REMOTE_KEYPAD_UPGRADE,               //远程升级键盘
        MINOR_ALARMHOST_ONETOUCH_AWAY_ARMING,                //一键外出布防
        MINOR_ALARMHOST_ONETOUCH_STAY_ARMING,                //一键留守布防
        MINOR_ALARMHOST_SINGLE_PARTITION_ARMING_OR_DISARMING,    //单防区布撤防
        MINOR_ALARMHOST_CARD_CONFIGURATION,         //卡参数配置
        MINOR_ALARMHOST_CARD_ARMING_OR_DISARMING,         //刷卡布撤防
        MINOR_ALARMHOST_EXPENDING_NETCENTER_CONFIGURATION,         //扩展网络中心配置
        MINOR_ALARMHOST_NETCARD_CONFIGURATION,         //网卡配置
        MINOR_ALARMHOST_DDNS_CONFIGURATION,         //DDNS配置
        MINOR_ALARMHOST_RS485BUS_CONFIGURATION,        // 485总线参数配置
        MINOR_ALARMHOST_RS485BUS_RE_REGISTRATION,            //485总线重新注册

        MINOR_ALARMHOST_REMOTE_OPEN_ELECTRIC_LOCK,    //远程打开电锁
        MINOR_ALARMHOST_REMOTE_CLOSE_ELECTRIC_LOCK,    //远程关闭电锁
        MINOR_ALARMHOST_LOCAL_OPEN_ELECTRIC_LOCK,    //本地打开电锁
        MINOR_ALARMHOST_LOCAL_CLOSE_ELECTRIC_LOCK,    //本地关闭电锁
        MINOR_ALARMHOST_OPEN_ALARM_LAMP,            //打开警灯(远程)
        MINOR_ALARMHOST_CLOSE_ALARM_LAMP,            //关闭警灯(远程)


        MINOR_ALARMHOST_TEMPORARY_PASSWORD,         //临时密码操作记录
        MINOR_ALARMHOST_ONEKEY_AWAY_ARM,            //一键外出布防
        MINOR_ALARMHOST_ONEKEY_STAY_ARM,            //一键留守布防
        MINOR_ALARMHOST_SINGLE_ZONE_ARM,            //单防区布防
        MINOR_ALARMHOST_SINGLE_ZONE_DISARM,         //单防区撤防
        MINOR_ALARMHOST_HIDDNS_CONFIG,                // HIDDNS配置
        MINOR_ALARMHOST_REMOTE_KEYBOARD_UPDATA,     //远程键盘升级日志
        MINOR_ALARMHOST_ZONE_ADD_DETECTOR,          //防区添加探测器
        MINOR_ALARMHOST_ZONE_DELETE_DETECTOR,       //防区删除探测器
        MINOR_ALARMHOST_QUERY_DETECTOR_SIGNAL,      //主机查询探测器信号强度
        MINOR_ALARMHOST_QUERY_DETECTOR_BATTERY,     //主机查询探测器电量
        MINOR_ALARMHOST_SET_DETECTOR_GUARD,         //探测器布防
        MINOR_ALARMHOST_SET_DETECTOR_UNGUARD,       //探测器撤防
        MINOR_ALARMHOST_SET_WIFI_PARAMETER,         //设置WIFI配置参数
        MINOR_ALARMHOST_OPEN_VOICE,                 //打开语音
        MINOR_ALARMHOST_CLOSE_VOICE,                //关闭语音
        MINOR_ALARMHOST_ENABLE_FUNCTION_KEY,        //启用功能键
        MINOR_ALARMHOST_DISABLE_FUNCTION_KEY,        //关闭功能键
        MINOR_ALARMHOST_READ_CARD,                  //巡更刷卡
        MINOR_ALARMHOST_START_BROADCAST,             //打开语音广播
        MINOR_ALARMHOST_STOP_BROADCAST,               //关闭语音广播
        MINOR_ALARMHOST_REMOTE_ZONE_MODULE_UPGRADE,            //远程升级防区模块
        MINOR_ALARMHOST_NETWORK_MODULE_EXTEND,    //网络模块参数配置
        MINOR_ALARMHOST_ADD_CONTROLLER,		//添加遥控器用户
        MINOR_ALARMHOST_DELETE_CONTORLLER,		//删除遥控器用户
        MINOR_ALARMHOST_REMOTE_NETWORKMODULE_UPGRADE,            //远程升级网络模块

        MINOR_ALARMHOST_LOCAL_SET_DEVICE_ACTIVE = 0xf0,        //本地激活设备
        MINOR_ALARMHOST_REMOTE_SET_DEVICE_ACTIVE = 0xf1,        //远程激活设备
        MINOR_ALARMHOST_LOCAL_PARA_FACTORY_DEFAULT = 0xf2,    //本地回复出厂设置
        MINOR_ALARMHOST_REMOTE_PARA_FACTORY_DEFAULT = 0xf3,    //远程恢复出厂设置


        // 事件
        MINOR_SCHOOLTIME_IRGI_B = 0x01,        // B码校时
        MINOR_SCHOOLTIME_SDK,                // SDK校时
        MINOR_SCHOOLTIME_SELFTEST,            // 定时自检校时
        MINOR_SUBSYSTEM_ABNORMALINSERT,        //子板插入
        MINOR_SUBSYSTEM_ABNORMALPULLOUT,        //子板拔出

        MINOR_AUTO_ARM,                    //自动布防
        MINOR_AUTO_DISARM,                //自动撤防
        MINOR_TIME_TIGGER_ON,            //定时开启触发器
        MINOR_TIME_TIGGER_OFF,            //定时关闭触发器
        MINOR_AUTO_ARM_FAILD,            //自动布防失败
        MINOR_AUTO_DISARM_FAILD,        //自动撤防失败
        MINOR_TIME_TIGGER_ON_FAILD,        //定时开启触发器失败
        MINOR_TIME_TIGGER_OFF_FAILD,    //定时关闭触发器失败
        MINOR_MANDATORY_ALARM,            //强制布防
        MINOR_KEYPAD_LOCKED,            //键盘锁定
        MINOR_USB_INSERT,               //USB插入
        MINOR_USB_PULLOUT,              //USB拔出
}ALARMHOST_MINOR_TYPE;


//当日志的主类型为MAJOR_OPERATION=03，次类型为MINOR_LOCAL_CFG_PARM=0x52或者MINOR_REMOTE_GET_PARM=0x76
//或者MINOR_REMOTE_CFG_PARM=0x77时，dwParaType:参数类型有效，其含义如下：
#define PARA_VIDEOOUT    0x1
#define PARA_IMAGE        0x2
#define PARA_ENCODE        0x4
#define PARA_NETWORK    0x8
#define PARA_ALARM        0x10
#define PARA_EXCEPTION    0x20
#define PARA_DECODER    0x40    /*解码器*/
#define PARA_RS232        0x80
#define PARA_PREVIEW    0x100
#define PARA_SECURITY    0x200
#define PARA_DATETIME    0x400
#define PARA_FRAMETYPE    0x800    /*帧格式*/
#define PARA_DETECTION  0x1000   //侦测配置
#define PARA_VCA_RULE   0x1001  //行为规则
#define PARA_VCA_CTRL   0x1002  //配置智能控制信息
#define PARA_VCA_PLATE  0x1003 // 车牌识别

#define PARA_CODESPLITTER 0x2000 /*码分器参数*/
//2010-01-22 增加视频综合平台日志信息次类型
#define PARA_RS485          0x2001            /* RS485配置信息*/
#define PARA_DEVICE          0x2002            /* 设备配置信息*/
#define PARA_HARDDISK      0x2003            /* 硬盘配置信息 */
#define PARA_AUTOBOOT      0x2004            /* 自动重启配置信息*/
#define PARA_HOLIDAY      0x2005            /* 节假日配置信息*/
#define PARA_IPC          0x2006            /* IP通道配置 */
/*************************参数配置命令 end*******************************/


/*******************查找文件和日志函数返回值*************************/
#define NET_DVR_FILE_SUCCESS            1000    //获得文件信息
#define NET_DVR_FILE_NOFIND                1001    //没有文件
#define NET_DVR_ISFINDING                1002    //正在查找文件
#define    NET_DVR_NOMOREFILE                1003    //查找文件时没有更多的文件
#define    NET_DVR_FILE_EXCEPTION            1004    //查找文件时异常

/*********************回调函数类型 begin************************/

//报警回调命令
#define COMM_ALARM                           0x1100    //8000报警信息主动上传

//对应NET_VCA_RULE_ALARM
#define COMM_ALARM_RULE                      0x1102     //行为分析报警信息
#define COMM_ALARM_PDC                       0x1103  //人数统计报警信息
#define COMM_ALARM_VIDEOPLATFORM             0x1104  //视频综合平台报警
#define COMM_ALARM_ALARMHOST                 0x1105  //网络报警主机报警
#define COMM_ALARM_FACE                      0x1106  //人脸检测识别报警信息
#define COMM_RULE_INFO_UPLOAD                0x1107  // 事件数据信息上传
#define COMM_ALARM_AID                       0x1110  //交通事件报警信息
#define COMM_ALARM_TPS                       0x1111  //交通参数统计报警信息
//智能人脸抓拍结果上传
#define COMM_UPLOAD_FACESNAP_RESULT          0x1112  //人脸识别结果上传
#define COMM_ALARM_TFS                       0x1113  //交通取证报警信息
#define COMM_ALARM_TPS_V41                   0x1114  //交通参数统计报警信息扩展
#define COMM_ALARM_AID_V41                   0x1115  //交通事件报警信息扩展
#define COMM_ALARM_VQD_EX                    0x1116     //视频质量诊断报警
#define COMM_SENSOR_VALUE_UPLOAD             0x1120  //模拟量数据实时上传
#define COMM_SENSOR_ALARM                    0x1121  //模拟量报警上传
#define COMM_SWITCH_ALARM                    0x1122     //开关量报警
#define COMM_ALARMHOST_EXCEPTION             0x1123  //报警主机故障报警
#define COMM_ALARMHOST_OPERATEEVENT_ALARM    0x1124  //操作事件报警上传
#define COMM_ALARMHOST_SAFETYCABINSTATE      0x1125     //防护舱状态
#define COMM_ALARMHOST_ALARMOUTSTATUS        0x1126     //报警输出口/警号状态
#define COMM_ALARMHOST_CID_ALARM               0x1127     //报告报警上传
#define    COMM_ALARMHOST_EXTERNAL_DEVICE_ALARM 0x1128     //报警主机外接设备报警上传
#define COMM_ALARMHOST_DATA_UPLOAD           0x1129     //报警数据上传
#define COMM_FACECAPTURE_STATISTICS_RESULT   0x112a  //人脸抓拍统计上传
#define COMM_SCENECHANGE_DETECTION_UPLOAD     0x1130     //场景变更报警上传(布防)2013-7-16
#define COMM_CROSSLINE_ALARM                 0x1131    //压线报警(监听) 2013-09-27
#define COMM_UPLOAD_VIDEO_INTERCOM_EVENT     0x1132  //可视对讲事件记录上传
#define COMM_ALARM_VIDEO_INTERCOM               0x1133  //可视对讲报警上传
#define COMM_ALARM_AUDIOEXCEPTION             0x1150     //声音报警信息
#define COMM_ALARM_DEFOCUS                   0x1151     //虚焦报警信息
#define COMM_ALARM_BUTTON_DOWN_EXCEPTION     0x1152     //按钮按下报警信息
#define COMM_ALARM_ALARMGPS                  0x1202  //GPS报警信息上传
#define    COMM_TRADEINFO                       0x1500  //ATMDVR主动上传交易信息
#define COMM_UPLOAD_PLATE_RESULT             0x2800     //上传车牌信息
#define COMM_ITC_STATUS_DETECT_RESULT        0x2810  //实时状态检测结果上传(智能高清IPC)
#define COMM_IPC_AUXALARM_RESULT             0x2820  //PIR报警、无线报警、呼救报警上传
#define COMM_UPLOAD_PICTUREINFO              0x2900     //上传图片信息
#define COMM_SNAP_MATCH_ALARM                0x2902  //黑名单比对结果上传
#define COMM_ITS_PLATE_RESULT                0x3050  //终端图片上传
#define    COMM_ITS_TRAFFIC_COLLECT             0x3051  //终端统计数据上传
#define COMM_ITS_GATE_VEHICLE                0x3052  //出入口车辆抓拍数据上传
#define COMM_ITS_GATE_FACE                   0x3053  //出入口人脸抓拍数据上传
#define COMM_ITS_GATE_COSTITEM                 0x3054  //出入口过车收费明细 2013-11-19
#define COMM_ITS_GATE_HANDOVER                 0x3055  //出入口交接班数据 2013-11-19
#define COMM_ITS_PARK_VEHICLE                0x3056  //停车场数据上传
#define COMM_ITS_BLACKLIST_ALARM             0x3057  //黑名单报警上传

#define COMM_VEHICLE_CONTROL_LIST_DSALARM    0x3058  //黑白名单数据需要同步报警2013-11-04
#define COMM_VEHICLE_CONTROL_ALARM           0x3059  //车辆报警2013-11-04
#define COMM_FIRE_ALARM                      0x3060  //消防报警2013-11-04

#define COMM_ITS_GATE_ALARMINFO              0x3061  //出入口控制机数据上传

#define COMM_VEHICLE_RECOG_RESULT            0x3062  //车辆二次识别结果上传 2014-11-12
#define COMM_PLATE_RESULT_V50                0x3063  //车牌上传 V50

#define COMM_GATE_CHARGEINFO_UPLOAD          0x3064  //出入口付费信息上传
#define COMM_TME_VEHICLE_INDENTIFICATION     0x3065  //TME车辆抓图上传
#define COMM_GATE_CARDINFO_UPLOAD            0x3066  //出入口卡片信息上传

#define COMM_ALARM_SENSORINFO_UPLOAD         0x3077     //传感器上传信息
#define COMM_ALARM_CAPTURE_UPLOAD             0x3078     //抓拍图片上传

#define COMM_ITS_RADARINFO                   0x3079  //雷达报警上传

#define COMM_SIGNAL_LAMP_ABNORMAL            0x3080  //信号灯异常检测上传

#define COMM_ALARM_TPS_REAL_TIME             0x3081  //TPS实时过车数据上传
#define COMM_ALARM_TPS_STATISTICS            0x3082  //TPS统计过车数据上传

#define COMM_ALARM_V30                         0x4000     //9000报警信息主动上传
#define COMM_IPCCFG                             0x4001     //9000设备IPC接入配置改变报警信息主动上传
#define COMM_IPCCFG_V31                         0x4002     //9000设备IPC接入配置改变报警信息主动上传扩展 9000_1.1
#define COMM_IPCCFG_V40                      0x4003  // IVMS 2000 编码服务器 NVR IPC接入配置改变时报警信息上传
#define COMM_ALARM_DEVICE                    0x4004  //设备报警内容，由于通道值大于256而扩展
#define COMM_ALARM_CVR                         0x4005  //CVR 2.0.X外部报警类型
#define COMM_ALARM_HOT_SPARE                 0x4006  //热备异常报警（N+1模式异常报警）
#define COMM_ALARM_V40                         0x4007    //移动侦测，视频丢失，遮挡，IO信号量等报警信息主动上传，报警数据为可变长

#define COMM_UPLOAD_HEATMAP_RESULT           0x4008 //热度图报警上传 2014-03-21
#define COMM_ALARM_DEVICE_V40                0x4009  //设备报警内容扩展
#define COMM_ALARM_FACE_DETECTION            0x4010 //人脸侦测报警
#define COMM_ALARM_TARGET_LEFT_REGION        0x4011 //检测目标离开检测区域报警(教师走向学生报警(用于联动切换录播主机控制检测学生的球机))
#define COMM_GISINFO_UPLOAD                  0x4012 //GIS信息上传
#define COMM_VANDALPROOF_ALARM               0x4013 //上传防破坏报警信息
#define COMM_PEOPLE_DETECTION_UPLOAD         0x4014 //人员侦测信息上传
#define COMM_ALARM_STORAGE_DETECTION         0x4015 //存储智能检测报警上传
#define    COMM_ITS_ROAD_EXCEPTION                 0x4500     //路口设备异常报警
#define    COMM_ITS_EXTERNAL_CONTROL_ALARM         0x4520  //外控报警
#define COMM_ALARM_SHIPSDETECTION             0x4521    // 船只检测报警信息
#define COMM_FIREDETECTION_ALARM             0x4991 //火点检测报警
#define COMM_ALARM_DENSEFOGDETECTION    0x4992     //大雾检测报警信息
#define COMM_VCA_ALARM                     0x4993     //智能检测报警
#define COMM_FACE_THERMOMETRY_ALARM        0x4994     //人脸测温报警

#define    COMM_SCREEN_ALARM                    0x5000  //多屏控制器报警类型
#define COMM_DVCS_STATE_ALARM                 0x5001  //分布式大屏控制器报警上传
#define COMM_ALARM_ACS                         0x5002  //门禁主机报警
#define COMM_ALARM_FIBER_CONVERT             0x5003  //光纤收发器报警
#define COMM_ALARM_SWITCH_CONVERT             0x5004  //交换机报警
#define COMM_ALARM_DEC_VCA                   0x5010  //智能解码报警
#define COMM_ALARM_LCD                         0x5011     //屏幕报警
#define COMM_CONFERENCE_CALL_ALARM             0x5012     //会议呼叫告警

#define COMM_ALARM_WALL_CONFERNECE  0x5015  //MCU单个已开会的会议信息报警

#define COMM_DIAGNOSIS_UPLOAD                0x5100  //诊断服务器VQD报警上传
#define COMM_HIGH_DENSITY_UPLOAD             0x5101  //人员聚集密度输出报警上传

#define COMM_ID_INFO_ALARM                   0x5200  //身份证信息上传
#define COMM_PASSNUM_INFO_ALARM              0x5201  //通行人数上报

#define COMM_THERMOMETRY_DIFF_ALARM          0x5211  //温差报警上传
#define COMM_THERMOMETRY_ALARM               0x5212  //温度报警上传
#define COMM_PANORAMIC_LINKAGE_ALARM         0x5213  //全景联动到位上传
#define COMM_TAG_INFO_ALARM                  0x5215  // 标签信息上传
#define COMM_ALARM_VQD                         0x6000  //VQD主动报警上传
#define COMM_PUSH_UPDATE_RECORD_INFO          0x6001  //推模式录像信息上传
#define COMM_SWITCH_LAMP_ALARM               0x6002  //开关灯检测
#define COMM_INQUEST_ALARM             0x6005  // 审讯主机报警上传
#define COMM_GPS_STATUS_ALARM                0x6010  // GPS状态上传

#define COMM_FACESNAP_RAWDATA_ALARM          0x6015  //人脸比对报警（数据透传方式）

//PJ01C20170209084超脑录播NVS软件功能开发定制项目专用
#define COMM_FRAMES_PEOPLE_COUNTING_ALARM	 0x6069	 //单帧画面人数统计结果上传

/*************操作异常类型(消息方式, 回调方式(保留))****************/
#define EXCEPTION_EXCHANGE                0x8000    //用户交互时异常
#define EXCEPTION_AUDIOEXCHANGE            0x8001    //语音对讲异常
#define EXCEPTION_ALARM                    0x8002    //报警异常
#define EXCEPTION_PREVIEW                0x8003    //网络预览异常
#define EXCEPTION_SERIAL                0x8004    //透明通道异常
#define EXCEPTION_RECONNECT                0x8005    //预览时重连
#define EXCEPTION_ALARMRECONNECT        0x8006    //报警时重连
#define EXCEPTION_SERIALRECONNECT        0x8007    //透明通道重连
#define SERIAL_RECONNECTSUCCESS         0x8008    //透明通道重连成功
#define EXCEPTION_PLAYBACK                0x8010    //回放异常
#define EXCEPTION_DISKFMT                0x8011    //硬盘格式化
#define EXCEPTION_PASSIVEDECODE         0x8012  //被动解码异常
#define EXCEPTION_EMAILTEST             0x8013  //邮件测试异常
#define EXCEPTION_BACKUP                0x8014  //备份异常
#define PREVIEW_RECONNECTSUCCESS        0x8015  //预览时重连成功
#define ALARM_RECONNECTSUCCESS          0x8016  //报警时重连成功
#define RESUME_EXCHANGE                    0x8017    //用户交互恢复
#define NETWORK_FLOWTEST_EXCEPTION      0x8018  //网络流量检测异常
#define EXCEPTION_PICPREVIEWRECONNECT    0x8019    //图片预览重连
#define PICPREVIEW_RECONNECTSUCCESS        0x8020    //图片预览重连成功
#define EXCEPTION_PICPREVIEW            0x8021    //图片预览异常
#define    EXCEPTION_MAX_ALARM_INFO        0x8022    //报警信息缓存已达上限
#define    EXCEPTION_LOST_ALARM            0x8023  //报警丢失
#define EXCEPTION_PASSIVETRANSRECONNECT 0x8024  //被动转码重连
#define PASSIVETRANS_RECONNECTSUCCESS   0x8025  //被动转码重连成功
#define EXCEPTION_PASSIVETRANS          0x8026  //被动转码异常
#define SUCCESS_PUSHDEVLOGON            0x8030  //推模式设备注册成功
#define EXCEPTION_RELOGIN                0x8040    //用户重登陆
#define RELOGIN_SUCCESS                    0x8041    //用户重登陆成功
#define EXCEPTION_PASSIVEDECODE_RECONNNECT  0x8042  //被动解码重连

#define EXCEPTION_RELOGIN_FAILED                0x8044   //重登陆失败，停止重登陆
#define EXCEPTION_PREVIEW_RECONNECT_CLOSED      0x8045   //关闭预览重连功能
#define EXCEPTION_ALARM_RECONNECT_CLOSED        0x8046   //关闭报警重连功能
#define EXCEPTION_SERIAL_RECONNECT_CLOSED       0x8047   //关闭透明通道重连功能
#define EXCEPTION_PIC_RECONNECT_CLOSED          0x8048   //关闭回显重连功能
#define EXCEPTION_PASSIVE_DECODE_RECONNECT_CLOSED 0x8049 //关闭被动解码重连功能
#define EXCEPTION_PASSIVE_TRANS_RECONNECT_CLOSED 0x804a  //关闭被动转码重连功能

/********************预览回调函数*********************/
#define NET_DVR_SYSHEAD            1    //系统头数据
#define NET_DVR_STREAMDATA        2    //视频流数据（包括复合流和音视频分开的视频流数据）
#define NET_DVR_AUDIOSTREAMDATA    3    //音频流数据
#define NET_DVR_STD_VIDEODATA    4    //标准视频流数据
#define NET_DVR_STD_AUDIODATA    5    //标准音频流数据
#define NET_DVR_SDP             6   //SDP信息(Rstp传输时有效)
#define NET_DVR_CHANGE_FORWARD  10  //码流改变为正放
#define NET_DVR_CHANGE_REVERSE  11  //码流改变为倒放
#define NET_DVR_PLAYBACK_ALLFILEEND      12  //回放文件结束标记
#define NET_DVR_VOD_DRAW_FRAME      13  //回放抽帧码流
#define NET_DVR_PRIVATE_DATA    112 //私有数据,包括智能信息

//设备型号(DVR类型)
/* 设备类型 */
#define DVR                            1                /*对尚未定义的dvr类型返回DVR*/
#define ATMDVR                        2                /*atm dvr*/
#define DVS                            3                /*DVS*/
#define DEC                            4                /* 6001D */
#define ENC_DEC                        5                /* 6001F */
#define DVR_HC                        6                /*8000HC*/
#define DVR_HT                        7                /*8000HT*/
#define DVR_HF                        8                /*8000HF*/
#define DVR_HS                        9                /* 8000HS DVR(no audio) */
#define DVR_HTS                        10              /* 8016HTS DVR(no audio) */
#define DVR_HB                        11              /* HB DVR(SATA HD) */
#define DVR_HCS                        12              /* 8000HCS DVR */
#define DVS_A                        13              /* 带ATA硬盘的DVS */
#define DVR_HC_S                    14              /* 8000HC-S */
#define DVR_HT_S                    15              /* 8000HT-S */
#define DVR_HF_S                    16              /* 8000HF-S */
#define DVR_HS_S                    17              /* 8000HS-S */
#define ATMDVR_S                    18              /* ATM-S */
#define DVR_7000H                    19                /*7000H系列*/
#define DEC_MAT                        20              /*多路解码器*/
#define DVR_MOBILE                    21                /* mobile DVR */
#define DVR_HD_S                    22              /* 8000HD-S */
#define DVR_HD_SL                    23                /* 8000HD-SL */
#define DVR_HC_SL                    24                /* 8000HC-SL */
#define DVR_HS_ST                    25                /* 8000HS_ST */
#define DVS_HW                        26              /* 6000HW */
#define DS630X_D                    27              /* 多路解码器 */
#define DS640X_HD                    28                /*640X高清解码器*/
#define DS610X_D                    29              /*610X解码器*/
#define IPCAM                        30                /*IP 摄像机*/
#define MEGA_IPCAM                    31                /*高清IP摄像机*/
#define IPCAM_X62MF                    32                /*862MF可以接入9000设备*/
#define ITCCAM                      35              /*智能高清网络摄像机*/
#define IVS_IPCAM                   36              /*智能分析高清网络摄像机*/
#define ZOOMCAM                     38              /*一体机*/
#define IPDOME                      40              /*IP 标清球机*/
#define IPDOME_MEGA200              41              /*IP 200万高清球机*/
#define IPDOME_MEGA130              42              /*IP 130万高清球机*/
#define IPDOME_AI                   43              /*IP 高清智能快球*/
#define TII_IPCAM                   44              /*红外热成像摄像机*/
#define IPTC_DOME                   45              /*红外热成像双目球机*/
#define DS_2DP_Z                    46              /*球型鹰眼（大）*/
#define DS_2DP                       47              /*非球型鹰眼（小）*/
#define ITS_WMS                      48              /*称重数据管理服务器*/
#define IPMOD                        50                /*IP 模块*/
#define TRAFFIC_YTDOME              51              //交通智能云台（不带雷达测速）
#define TRAFFIC_RDDOME              52              //交通智能云台（带雷达测速）
#define IDS6501_HF_P                60              // 6501 车牌
#define IDS6101_HF_A                61              //智能ATM
#define IDS6002_HF_B                62          //双机跟踪：DS6002-HF/B
#define IDS6101_HF_B                63              //行为分析：DS6101-HF/B DS6101-HF/B_SATA
#define IDS52XX                        64          //智能分析仪IVMS
#define IDS90XX                        65                // 9000智能
#define IDS8104_AHL_S_HX            66          // 海鑫人脸识别 ATM
#define IDS8104_AHL_S_H             67              // 私有人脸识别 ATM
#define IDS91XX                        68                // 9100智能
#define IIP_CAM_B                   69              // 智能行为IP摄像机
#define IIP_CAM_F                   70              //智能人脸IP摄像机
#define DS71XX_H                    71                /* DS71XXH_S */
#define DS72XX_H_S                    72                /* DS72XXH_S */
#define DS73XX_H_S                    73                /* DS73XXH_S */
#define DS72XX_HF_S                 74              //DS72XX_HF_S
#define DS73XX_HFI_S                75              //DS73XX_HFI_S
#define DS76XX_H_S                    76                /* DVR,e.g. DS7604_HI_S */
#define DS76XX_N_S                    77                /* NVR,e.g. DS7604_NI_S */
#define DS_TP3200_EC                   78              /*机柜智能检测仪*/
#define DS81XX_HS_S                    81                /* DS81XX_HS_S */
#define DS81XX_HL_S                    82                /* DS81XX_HL_S */
#define DS81XX_HC_S                    83                /* DS81XX_HC_S */
#define DS81XX_HD_S                    84                /* DS81XX_HD_S */
#define DS81XX_HE_S                    85                /* DS81XX_HE_S */
#define DS81XX_HF_S                    86                /* DS81XX_HF_S */
#define DS81XX_AH_S                    87                /* DS81XX_AH_S */
#define DS81XX_AHF_S                88                /* DS81XX_AHF_S */
#define DS90XX_HF_S                    90              /*DS90XX_HF_S*/
#define DS91XX_HF_S                    91              /*DS91XX_HF_S*/
#define DS91XX_HD_S                    92              /*91XXHD-S(MD)*/
#define IDS90XX_A                    93                // 9000智能 ATM
#define IDS91XX_A                    94                // 9100智能 ATM
#define DS95XX_N_S                    95              /*DS95XX_N_S NVR 不带任何输出*/
#define DS96XX_N_SH                    96              /*DS96XX_N_SH NVR*/
#define DS90XX_HF_SH                97              /*DS90XX_HF_SH */
#define DS91XX_HF_SH                98              /*DS91XX_HF_SH */
#define DS_B10_XY                   100             /*视频综合平台设备型号(X:编码板片数，Y:解码板片数)*/
#define DS_6504HF_B10               101             /*视频综合平台内部编码器*/
#define DS_6504D_B10                102             /*视频综合平台内部解码器*/
#define DS_1832_B10                 103             /*视频综合平台内部码分器*/
#define DS_6401HFH_B10              104             /*视频综合平台内部光纤板*/
#define DS_65XXHC                    105                //65XXHC DVS
#define DS_65XXHC_S                    106                //65XXHC-SATA DVS
#define DS_65XXHF                    107                //65XXHF DVS
#define DS_65XXHF_S                    108                //65XXHF-SATA DVS
#define DS_6500HF_B                 109             //65 rack DVS
#define IVMS_6200_C                 110             // iVMS-6200(/C)
#define IVMS_6200_B                 111             // iVMS-6200(/B)
#define DS_72XXHV_ST15                112                //72XXHV_ST  海思3515平台 DVR
#define DS_72XXHV_ST20                113                //72XXHV_ST  海思3520平台 DVR
#define IVMS_6200_T                    114             // IVMS-6200(/T)
#define IVMS_6200_BP                115             // IVMS-6200(/BP)
#define DS_81XXHC_ST                116                //DS_81XXHC_ST
#define DS_81XXHS_ST                117                //DS_81XXHS_ST
#define DS_81XXAH_ST                118                //DS_81XXAH_ST
#define DS_81XXAHF_ST                119                //DS_81XXAHF_ST
#define DS_66XXDVS                    120                //66XX DVS

#define DS_1964_B10                 121             /*视频综合平台内部报警器*/
#define DS_B10N04_IN                122             /*视频综合平台内部级联输入*/
#define DS_B10N04_OUT                123             /*视频综合平台内部级联输出*/
#define DS_B10N04_INTEL             124             /*视频综合平台内部智能*/
#define DS_6408HFH_B10E_RM          125             //V6高清
#define DS_B10N64F1_RTM             126             //V6级联不带DSP
#define DS_B10N64F1D_RTM            127             //V6级联带DSP
#define DS_B10_SDS                  128             //视频综合平台子域控制器
#define DS_B10_DS                   129             //视频综合平台域控制器
#define DS_6401HFH_B10V                130             //VGA高清编码器
#define DS_6504D_B10B               131             /*视频综合平台内部标清解码器*/
#define DS_6504D_B10H               132             /*视频综合平台内部高清解码器*/
#define DS_6504D_B10V               133             /*视频综合平台内部VGA解码器*/
#define DS_6408HFH_B10S                134             //视频综合平台SDI子板
#define DS_18XX_N                      135             /* 矩阵接入网关*/
#define DS_6504HF_B10F_CLASS        136                //光端机SD
#define DS_18XX_PTZ                    141                /*网络码分类产品*/
#define DS_19AXX                    142                /*通用报警主机类产品*/
#define DS_19BXX                    143                /*家用报警主机*/
#define DS_19CXX                    144                /*自助银行报警主机*/
#define DS_19DXX                    145                /*动环监控报警主机*/
#define DS_19XX                     146             /*1900系列报警主机*/
#define DS_19SXX                    147                /*视频报警主机*/
#define DS_1HXX                        148                /*CS类产品*/ //防护舱
#define DS_PEAXX                    149                /*一键式紧急报警产品*/
#define DS_PWXX                     150                 /*无线报警主机产品*/
#define DS_PMXX                     151                 /*4G网络模块*/
#define DS_19DXX_S                  152                /*视频动环监控主机*/


//2011-11-30
#define    DS_C10H                        161                /*多屏控制器*/
#define DS_C10N_BI                    162                //BNC处理器
#define DS_C10N_DI                    163                //rbg处理器
#define DS_C10N_SI                    164                //码流处理器
#define DS_C10N_DO                    165                //显示处理器
#define DS_C10N_SERVER                166                //分布式服务器


#define IDS_8104_AHFL_S_H           171             // 8104ATM
#define IDS_65XX_HF_A               172             // 65 ATM
#define IDS90XX_HF_RH               173             // 9000 智能RH
#define IDS91XX_HF_RH               174             // 9100 智能RH设备
#define IDS_65XX_HF_B               175             // 65 行为分析
#define IDS_65XX_HF_P               176             // 65 车牌识别
#define IVMS_6200_F                 177             // IVMS-6200(/F)
#define IVMS_6200_A                 178             //iVMS-6200(/A)
#define IVMS_6200_F_S                 179             // IVMS-6200(/F_S)人脸后检索分析仪

#define DS90XX_HF_RH                181             // 9000 RH    648
#define DS91XX_HF_RH                182             // 9100 RH设备 648
#define DS78XX_S                    183             // 78系列设备 6446
#define DS81XXHW_S                    185                // 81 Resolution 960 KY2011
#define DS81XXHW_ST                    186             // DS81XXHW_ST  KY2011
#define DS91XXHW_ST                    187             // DS91XXHW_ST  KY2011
#define DS91XX_ST                    188             // DS91XX_ST netra
#define DS81XX_ST                    189             // DS81XX_ST netra
#define DS81XXHX_ST                    190             // DS81XXHDI_ST,DS81XXHE_ST ky2012
#define DS73XXHX_ST                    191             // DS73XXHI_ST ky2012
#define DS81XX_SH                   192             // 审讯81SH,81SHF
#define DS81XX_SN                   193             // 审讯81SNL

#define DS96XXN_ST                  194             //NVR:DS96xxN_ST
#define DS86XXN_ST                  195             //NVR:DS86xxN_ST
#define DS80XXHF_ST                 196             //DVR:DS80xxHF_ST
#define DS90XXHF_ST                 197             //DVR:DS90xxHF_ST
#define DS76XXN_ST                  198             //NVR:DS76xxN_ST

#define DS_9664N_RX                 199         //NVR:DS_9664N_RX
#define ENCODER_SERVER                200            // 编码卡服务器
#define DECODER_SERVER              201         // 解码卡服务器
#define PCNVR_SERVER                202         // PCNVR存储服务器
#define CVR_SERVER                  203         // 邦诺CVR，他给自己定的类型为DVR_S-1
#define DS_91XXHFH_ST                204         // 91系列HD-SDI高清DVR
#define DS_66XXHFH                    205         // 66高清编码器
#define    TRAFFIC_TS_SERVER            210           //终端服务器
#define    TRAFFIC_VAR                    211           //视频分析记录仪
#define IPCALL                      212        //IP可视对讲分机
#define SAN_SERVER                  213         //与CVR_SERVER相同的程序，只是模式不同

#define DS_B11_M_CLASS                 301             /*视频综合平台设备型号*/
#define DS_B12_M_CLASS                  302             /*视频综合平台设备型号*/
#define DS_6504HF_B11_CLASS         303             /*视频综合平台内部编码器*/
#define DS_6504HF_B12_CLASS         304              /*视频综合平台内部编码器*/
#define  DS_6401HFH_B11V_CLASS         305     //VGA高清
#define  DS_6401HFH_B12V_CLASS         306     //VGA高清
#define  DS_6408HFH_B11S_CLASS         307     //SDI
#define  DS_6408HFH_B12S_CLASS      308     //SDI
#define  DS_6504D_B11H_CLASS        309   /*视频综合平台内部高清解码器*/
#define  DS_6504D_B11B_CLASS        310    /*视频综合平台内部标清解码器*/
#define  DS_6504D_B12B_CLASS        311       /*视频综合平台内部标清解码器*/
#define  DS_6504D_B11V_CLASS        312      /*视频综合平台内部VGA解码器*/
#define  DS_6504D_B12V_CLASS        313     /*视频综合平台内部VGA解码器*/
//B10新增
#define  DS_6401HFH_B10R_CLASS         314     //B10 RGB高清
#define  DS_6401HFH_B10D_CLASS         315     //B10 DVI高清
#define  DS_6401HFH_B10H_CLASS         316     //B10 HDMI高清
//B11新增
#define  DS_6401HFH_B11R_CLASS         317     //B11 RGB高清
#define  DS_6401HFH_B11D_CLASS         318     //B11 DVI高清
#define  DS_6401HFH_B11H_CLASS         319     //B11 HDMI高清
//B12新增
#define  DS_6401HFH_B12R_CLASS         320     //B12 RGB高清
#define  DS_6401HFH_B12D_CLASS         321     //B12 DVI高清
#define  DS_6401HFH_B12H_CLASS         322     //B12 HDMI高清
#define  DS_65XXD_B10Ex_CLASS        323     //netra高清解码

//B10 V2.1新增
#define  DS_6516HW_B10_CLASS        324     //netra高线编码
#define  DS_6401HFH_B10F_RX_CLASS   326        //高清光端机接入（支持1/2路光端机接入）
#define  DS_6502HW_B10F_RX_CLASS    327        //960H光端机接入（支持1/4/8路光端机接入）
//2012-5-16新增
#define  DS_6504D_B11Ex_CLASS        328     //netra高清解码
#define  DS_6504D_B12Ex_CLASS        329     //netra高清解码
#define  DS_6512_B11_CLASS            330     //netra高线编码
#define  DS_6512_B12_CLASS            331     //netra高线编码
#define  DS_6504D_B10H_CLASS        332     //视频综合平台内部高清解码器

#define  DS_65XXT_B10_CLASS         333     //视频综合平台转码子系统
#define  DS_65XXD_B10_CLASS         335     //视频综合平台万能解码板
#define  DS_IVMSE_B10X_CLASS        336     //X86服务器子系统
#define  DS_6532D_B10ES_CLASS        337     //增强型解码板_SDI(B10)
#define  DS_6508HFH_B10ES_CLASS        338     //SDI输入编码子系统
#define  DS_82NCG_CLASS                340     //联网网关中的子系统
#define  DS_82VAG_CLASS                341     //联网网关中的子系统
#define  DS_1802XXF_B10_CLASS       342     //光口交换子系统
#define  iDS_6504_B10EVAC_CLASS     343     //智能子系统
#define  iDS_6504_B10EDEC_CLASS     344     //智能子系统
#define  DS_6402HFH_B10EV_CLASS     345     //netra编码(VGA)
#define  DS_6402HFH_B10ED_CLASS     346     //netra编码(DVI)
#define  DS_6402HFH_B10EH_CLASS     347     //netra编码(HDMI)
#define  DS_6404HFH_B10T_RX_CLASS   348     //光纤接入编码
#define  DS_6504D_AIO_CLASS         349        //netra高清解码
#define  DS_IVMST_B10_CLASS            350        //X86转码子系统
#define  DS_6402_AIO_CLASS          351     //netra编码
#define  DS_iVMSE_AIO_CLASS         352     //x86服务器子系统
#define  DS_AIO_M_CLASS             353     //一体机


#define  DS_6508HF_B10E_CLASS        355        //BNC输入编码子系统
#define  DS_6404HFH_B10ES_CLASS        356        //SDI输入编码子系统
#define  DS_6402HFH_B10ER_CLASS        358        //RGB输入编码子系统
#define  DS_6404HFH_B10T_RM_CLASS    361        //光纤输入编码子系统
#define  DS_6516D_B10EB_CLASS        362        //BNC输出解码子系统
#define  DS_6516D_B10ES_CLASS        363        //SDI输出解码子系统

//DVI/HDMI/VGA畅显解码公用一个类型
#define  DS_6508D_B10FH_CLASS        364
#define  DS_6508D_B10FD_CLASS        364
#define  DS_6508D_B10FV_CLASS        364

#define  DS_6508_B11E_CLASS            365        //BNC输入编码子系统
#define  DS_6402_B11ES_CLASS        366        //SDI输入编码子系统
#define  DS_6402_B11EV_CLASS        367        //VGA输入编码子系统
#define  DS_6402_B11ER_CLASS        368        //RGB输入编码子系统
#define  DS_6402_B11ED_CLASS        369        //DVI输入编码子系统
#define  DS_6402_B11EH_CLASS        370        //HDMI输入编码子系统
#define  DS_6516D_B11EB_CLASS        371        //BNC输出解码子系统
#define  DS_6516D_B11ES_CLASS        372        //SDI输出解码子系统

#define  DS_6508_B12E_CLASS         373     //BNC输入编码子系统
#define     DS_6402_B12ES_CLASS        375        //SDI输入编码子系统
#define  DS_6402_B12EV_CLASS        376        //VGA输入编码子系统
#define  DS_6402_B12ER_CLASS        377        //RGB输入编码子系统
#define  DS_6402_B12ED_CLASS        378        //DVI输入编码子系统
#define  DS_6402_B12EH_CLASS        379        //HDMI输入编码子系统
#define  DS_6516D_B12EB_CLASS        380        //BNC输出解码子系统

#define  DS_iVMSE_AIO_8100x_CLASS   381     //金融行业一体机X86子系统
#define  DS_iVMSE_AIO_87x_CLASS     382     //智能楼宇一体机X86子系统
#define  DS_6532D_B11ES_CLASS        384        //增强型解码板_SDI(B11)
#define  DS_6532D_B12ES_CLASS        385        //增强型解码板_SDI(B12)
//B20新增
#define  DS_B20_MSU_NP              400     //B20主控板
#define  DS_6416HFH_B20S            401     //SDI输入编码
#define  DS_6416HFH_B20_RM          402     //光纤输入高清编码
#define  DS_6564D_B20D              403     //DVI解码
#define  DS_6564D_B20H              404     //HDMI解码
#define  DS_6564D_B20V              405     //VGA解码
#define  DS_B20_6516D_DEV_CLASS     406     //B20解码子系统
#define  DS_6408HFH_B20V            407     //VGA编码板
#define  DS_MMC_B20_CLASS           408     //B20主控
#define  DS_CARD_CHIP_B20_CLASS     409     //B20主控子板
#define  DS_6564D_B20B_DEV_CLASS    410     //BNC解码子系统
#define  DS_6564D_B20S_DEV_CLASS    411     //SDI解码子系统
#define  DS_6532HF_B20B_DEV_CLASS   412     //BNC编码子系统
#define  DS_6408HFH_B20D_DEV_CLASS  413     //DVI编码子系统
#define  DS_6408HFH_B20H_DEV_CLASS  414     //HDMI编码子系统
#define  DS_IVMSE_B20_CLASS            415     //X86服务器子系统
#define  DS_6402HFH_B20Y_DEV_CLASS  416     //YUV编码子系统
#define  DS_6508HW_B20_DEV_CLASS    417     //HW编码子系统
#define  DS_B20N128Fx_B20_DEV_CLASS 418     //DS_B20N128Fx_M级联板
#define  DS_AIO_MCU_NP_DEV_CLASS    419     //IO主控板
#define  DS_6402_AIO_EV_DEV_CLASS   420     //VGA编码
#define  DS_6508D_AIO_EV_DEV_CLASS  421     //VGA解码
#define  DS_6508D_AIO_ED_DEV_CLASS  422     //DVI解码
#define  DS_6508D_AIO_EH_DEV_CLASS  423     //HDMI解码
#define  DS_6508HD_B20F_DEV_CLASS    424     //视频增强板
#define  DS_6402HFH_B20ES_DEV_CLASS 425     //3G SID编码
#define  DS_6532D_B20_DEV_CLASS     426     //B20解码子系统
#define  DS_IVMST_B20_DEV_CLASS     427     //X86服务器子系统
#define  DS_6416HFH_B20DD_DEV_CLASS 428     //DVI双链路
#define  DS_6441VS_B20_DEV_CLASS    429        //相机拼接类型
#define  DS_6404HFH_B20T_CLASS         431        //TVI
#define  DS_FS22_B20_DEV_CLASS         432        //交换机子系统
#define  DS_IVMSE_B20UH_DEV_CLASS   433     //超高清X86输入
#define  IDS_6524J_B20_DEV_CLASS    434
#define  IDS_6532B_B20_DEV_CLASS    435
#define DS_6404HFH_B20Fx_DEV_CLASS  436        //光端机接入子系统
#define DS_N128x_B20Fy_CLASS        437     //级联子系统
#define DS_181600F_B20_CLASS        438     //网络光纤子系统
#define  DS_6904UD_B20H_CLASS       439     //超高清解码子系统

#define DS_B21_MCU_NP_CLASS         440     //B21主控
#define DS_B21_S10_x_CLASS          441     //B21机箱 x = A/S/D
#define DS_6402HFH_B21D_CLASS       442     //B21编码子系统
#define DS_6508HD_B21D_CLASS        443     //B21解码子系统
#define DS_iVMSE_B21HW_CLASS        444     //B21 X86子系统

#define  DS_C10S                    501     //C10S 集中式大屏控制器

#define  DS_C10N_SDI                551        //SDI处理器
#define  DS_C10N_BIW                552        //8路BNC处理器
#define  DS_C10N_DON                553        //显示处理器
#define  DS_C10N_TVI                554     //TVI输入板
#define  DS_C10N_DI2                555     //DVI 2路输入板
#define  DS_C10N_AUDIO_OUT          556     //DVI，HDMI，VGA输出板带音频
#define  DS_C10N_AUDIO_IN           557     //DVI，HDMI，VGA输入板带音频

//软服务器版本的分布式大屏控制器
#define  DS_C20N                    570     //分布式大屏控制器
#define  DS_C20N_BNC                571     //BNC输入设备
#define  DS_C20N_DVI                572     //DVI输入设备
#define  DS_C20N_DP                 573     //DP输入设备
#define  DS_C20N_OUT                574     //输出设备

//硬服务器版本的分布式大屏控制器
#define DS_C20N_VWMS                5351    //服务器
#define DS_C20N_DI2                 5352    //两路DVI输入设备
#define DS_C20N_DO2                 5353    //两路DVI输出设备
#define DS_C20N_UHDI                5354    //DP/HDMI 1路4K超高清输入设备

//无线传输设备
#define ELEVATO_BRIDGE  5751  //无线电梯网桥

//报警设备
#define DS_19M00_MN                    601     //报警主机百兆网络模块
#define DS_KH8302_A                 602  //室内机
#define DS_KD8101_2                 603  //门口机
#define DS_KM8301                   604  //管理机
#define DS_KVXXXX_XX                605  //别墅门口机
#define DS_LHPM1D_C                 606  //酒店锁

#define DS64XXHD_T                    701        //64-T高清解码器
#define DS_65XXD                    703     //65万能解码器
#define DS63XXD_T                    704        //63-T标清解码器
#define SCE_SERVER                  705     //抓屏服务器
#define DS_64XXHD_S                 706     //64XXHD-S高清解码器
#define DS_68XXT                    707     //多功能视音频转码器
#define DS_65XXD_T                  708     //65D-T万能解码器
#define DS_65XXHD_T                 709     //65HD-T万能解码器
#define DS_69XXUD                   710     //69XXUD超高清解码器
#define DS_65XXUD                   711     //65XXUD解码器
#define DS_65XXUD_L                 712     //65XXUD_L解码器
#define DS_65XXUD_T                 713     //65XXUD_T解码器

#define DS_D20XX                    750     //LCD屏幕 解码卡
//SDI矩阵
#define DS_C50S                     751     //SDI矩阵
#define DS_D50XX                    752     //LCD屏幕 解码卡

#define DS_D40                      760     //LED屏发送卡

#define DS_65VMXX                   770     //视频会议服务器
#define DS_65VTXX                   771     //视频会议终端
#define DS_65VTA                    772     //视频会议一体式终端
#define DS_65VT_RX                  773     //互动教学终端
#define DS_65VC10                   5571    //一体式视频会议终端

#define DS_CS_SERVER                800     //虚拟屏服务器
#define DS_68GAP_MCU                831     //视频网闸
#define DS_K260X                    850     //门禁主机
#define DS_K1TXXX                   851     //指纹一体机
#define DS_K280X                    852     //经济型门禁主机
#define DS_K1T80X                   854     //经济型门禁一体机
#define RAC_6X00                    856     //汉军指纹门禁一体机
#define DS_K2602_AX                 857     //人员通道主机
#define DS_K1T803F                  858     //经济型指纹门禁产品
#define DS_K2700                    859     //分布式三层架构门禁主机
#define DS_K270X                    860     //分布式三层架构就地控制器
#define DS_K1T500S                  861     //视屏门禁一体机
#define DS_K1A801F                  862     //经济型指纹门禁产品
#define DS_K1T600X                  863     //人脸识别门禁一体机
#define DS_K22X                     864     //梯控主控制器
#define DS_K2M0016AX                865     //梯控分控制器
#define DS_K560XX                   870     //立式/台式智能身份识别终端
#define DS_6800M                    900     //68M合码器
#define DS_68NTH                    901     //信息发布主机
#define DS_D60S                     902     //信息发布服务器
#define DS_D10                      931     //背投显示设备
#define DS_3K0X_NM                  951     //光纤收发器
#define DS_3E2328                   952     //百兆交换机
#define DS_3E1528                   953     //千兆交换机
#define SCREEN_LINK_SERVER          971     //屏幕服务器
#define DS_D51OPSXX                 972     //OPS电脑盒
//一体化云台
#define IP_PTSYS_MEGA200            1001   //IP 200万一体化云台
#define IPCAM_FISHEYE               1002   //鱼眼摄像机
#define IPCAM_FISHEYE_E             1003   //经济型鱼眼摄像机

//68xx系列双目3D相机
#define IPCAM_BINOCULAR             1004   //双目摄像机

#define IPCAM_365                    1010    //支持365的平台的IPC CAM
#define IPCAM_R0                    1011    //支持A5S的平台的IPC CAM
#define IPCAM_R1                    1012    //支持385的平台的IPC CAM
#define IPCAM_R2                    1013    //支持R2的平台的IPC CAM
#define IPCAM_R3                    1014    //支持8127的平台的IPC CAM
#define IPCAM_R4                    1015    //支持S2的平台的IPC CAM

#define IPDOME_365                    1110    //支持365的平台的IPD CAM
#define IPDOME_R0                    1111    //支持A5S的平台的IPD CAM
#define IPDOME_R1                    1112    //支持385的平台的IPD CAM
#define IPDOME_R2                    1113    //支持R2的平台的IPD CAM
#define IPDOME_R3                    1114    //支持8127的平台的IPD CAM
#define IPDOME_R4                    1115    //支持S2的平台的IPD CAM
#define ITCCAM_R3                    1211    //支持8127的平台的ITCCAM

//无人机业务设备（1300~1350）
#define UAV_S                       1300    //无人机基站设备 （Ummanned Aerial Vehicle – Station）

//新增设备类型 2013-11-19
#define TRAFFIC_ECT                    1400  //ECT设备类型
#define TRAFFIC_PARKING_SERVER        1401  //停车场服务器
#define TRAFFIC_TME                    1402  //出入口控制机
// DVR
#define DS90XXHW_ST                    2001    // DS90XXHW_ST混合DVR
#define DS72XXHX_SH                 2002    // DS-72xxHV_SH, DS-72xxHF-SH
#define DS_92XX_HF_ST                2003    // DS-92XX-HF-ST
#define DS_91XX_HF_XT                2004    // 9100DVR_HF_XT
#define DS_90XX_HF_XT               2005    // 9000DVR_HF_XT
#define DS_73XXHX_SH                2006    // 7300DVR_HX_SH
#define DS_72XXHFH_ST                2007    // 7200DVR_HFH_ST
//DS_67系列

#define DS_67XXHF_SATA              2008 // DS-67XXHF-SATA
#define DS_67XXHW                   2009 // DS-67XXHW
#define DS_67XXHW_SATA              2010 // DS-67XXHW-SATA
#define DS_67XXHF                   2011 // DS-67XXHF

//Netra2.3
#define DS_72XXHF_SV                2012  // DS-72xxHF-SV
#define DS_72XXHW_SV                2013   // DS-72xxHW-SV

#define DS_81XXHX_SH                2014   // 8100DVR_HX_SH

#define DS_71XXHX_SL                2015    //小型DVR

#define DS_76XXH_ST                    2016    //DS_76XXH_ST


#define DS_73XXHFH_ST               2017   //73HFH系列
#define DS_81XXHFH_ST               2018   //81HFH系列 ST

#define DS_72XXHFH_SL                2019    //hi3521
#define DS_FDXXCGA_FLT                2020    //2盘位ATM

#define IDS_91XX_HF_ST_A            2100    //iDS-9100HF-ST/A
#define IDS_91XX_HF_ST_B            2101    //iDS-9100HF-ST/B
#define IDS_90XX_HF_ST_A            2102    //iDS-9000HF-ST/A
#define IDS_90XX_HF_ST_B            2103    //iDS-9000HF-ST/B
#define IDS_81XX_HF_ST_A            2104    //iDS-8100HF-ST/A
#define IDS_81XX_HF_ST_B            2105    //iDS-8100HF-ST/B
#define IDS_80XX_HF_ST_A            2106    //iDS-8000HF-ST/A
#define IDS_80XX_HF_ST_B            2107    //iDS-8000HF-ST/B
#define IDS_8104_AHFL_ST            2108    //智能混合ATM机
#define IDS_2CD6812F_C              2109    //垂直双目相机


// NVR
#define DS_77XXN_ST                    2201    //  NVR DS-77XXHF-ST
#define DS_95XX_N_ST                2202    //  95XXN_ST NVR
#define DS_85XX_N_ST                2203    //  85XXN_ST NVR
#define DS_96XX_N_XT                2204    // 9600NVR_N_XT
#define DS_76XX_N_SE                2205    // 7600NVR_N_SE

//高清审讯机
#define DS_86XXSN_SX                2206    // 8608NVR_SX，包括4中类型DS-8608SNL-SP、DS-8608SNL-ST、DS-8608SN-SP、DS-8608SN-ST，L表示带LCD，P表POE

//#define DS_96XX_N_RX                2207  //DS-96XX-N-RX
#define DS_71XXN_SL                    2208  //DS-71XXN-SL 民用产品
#define CS_N1_1XX                    2209  //CS_N1_1XX，民用事业部所用

#define DS_71XXN_SN                    2210    //71XX_N_SN  经济型民用产品
#define CS_N1_2XX                    2211    //N1_2XX        民用事业部所用
#define DS_76XX_N_SHT                2212    //76XX_N_SHT  后端基线产品
#define DS_96XXX_N_E                2213    //高新性能NVR(256)

#define    DS_76XXN_EX                    2214 /* 76 78系列NVR，注：包括 4 8 16路的E1一盘位， 8 16 32路 E2两盘位； /N /P设备*/
#define DS_77XXN_E4                    2215/* 77系列NVR，   注：包括8 16 32路， /N /P设备*/
#define DS_86XXN_E8                    2216/* 86系列NVR，   注：包括8 16 32路， /N /P设备*/
#define DS_9616N_H8                 2217   //DS_9616N_H8
#define DS_72XXHX_EX_GXY            2218   //表示72系列无线DVR产品，其中72后面的xx表示通道数，H后的X目前仅有HW,为了后续扩展保留，E后面的X表示的是盘位数，G XY表示的是无线类型
#define DS_76XXN_EX_GXY             2219   //表示是76系列无线NVR产品，其中76后面的xx表示通道数，E后面的X表示的是盘位数，G XY表示的是无线类型
#define DS_72XXHXH_SH_21            2220   //  72XXHXH_SH_21
#define DS_72XXHXH_SH_31            2221  //  72XXHXH_SH_31
#define DS_73XXHXH_SH_31            2222  // 73XXHXH_SH_31
#define DS_81XXHXH_SH_31            2223  //  81XXHXH_SH_31
#define DS_71XXHXH_SH_21            2224  // 71XXHXH_SH_21
#define DS_71XXHXH_SH_31            2225  // 71XXHXH_SH_31
#define DS_NBXX_N_E1_X              2226  //便携式主机
#define DS_96XXN_FX                 2230
#define DS_86XXN_FX                 2231
#define DS_96XXXN_HX                2232  //96系列高性能设备


#define DS_86XXN_I                    2233    //DS_86XXN_I
#define DS_77XX_N_I                    2234    //DS_77XX_N_I
#define DS_76XX_N_I                    2235    //DS_76XX_N_I
#define DS_78XX_N_I                    2236    //DS_78XX_N_I
#define DS_96XXXN_IX                2237    //DS-96XXX_N_I（DS-96128N-I16、DS-96128N-I24、DS-96256N-I16、DS-96256N-I24）

#define DS_90XXHXH_XT               2238    //DS_90XXHXH_XT（DS-9016HQH-XT）

//PCNVR
#define PCNVR_IVMS_4200             2301    // PCNVR_IVMS_4200


//智能分析仪
#define IVMS_6200_TP                2401   //IVMS-6200 交通诱导分析仪
#define IVMS_6200_TF                2402   //IVMS-6200 交通取证分析仪
#define IVMS_6200_D                 2403   //iVMS-6200(/D)
#define IDS_81XXAHW_ST              2405   //iDS-81xxAHW-ST
#define IDS_81XXAHW_SP              2406   //iDS-81xxAHW-SP
#define IDS_81XXAHWL_ST             2407   //iDS-81xxAHWL-ST
#define IDS_81XXAHWL_SP             2408   //iDS-81xxAHWL-SP
#define IDS_9616N_H8                2409   //iDS_9616N_H8
#define IVMS_6200_SMD               2500   //IVMS_6200_SMD
//HISI3531平台混合ATM DVR， 其中L表示带液晶屏，P表示带poe
#define DS_81XXAHW_ST                2501
#define DS_81XXAHW_SP                2502
#define DS_81XXAHWL_ST                2503
#define DS_81XXAHWL_SP                2504

//TVI ATM
#define DS_81XXAHGH_E4                2601    //DS_81XXAHGH_E4

#define DS_6904UD_AIOE_H_CLASS      4002    //B20一体机
#define DS_6402HFH_B21B_CLASS       4005    //B21 编码
#define DS_6902UD_B21H_CLASS        4006    //B21 HDMI解码
#define DS_6902UD_B21D_CLASS        4007    //B21 DVI解码
#define DS_6902UD_B21V_CLASS        4008    //B21 VGA解码
#define DS_6904UD_B20D_CLASS        4010    //B20 DVI解码
#define DS_6904UD_B20V_CLASS        4011    //B20 VGA解码

//B21一体机设备型号
#define DS_AIOH_MCU_NP              4042    //主控板
#define DS_6404HFH_AIOH_D           4043    //4路DVI输入板
#define DS_6908UD_AIOH_D            4044    //4路DVI输出板
#define DS_6908UD_AIOH_H            4045    //4路HDMI输出板

//解码一体机设备型号
#define DS_69XXUD_B                 4046    //解码一体机
#define DS_6404HFH_I                4047    //4路DVI输入板
#define DS_6904UD_O                 4048    //8路HDMI输出板

#define DS_81XX_SHXL_K4               6101    //KY2017平台审讯机DS-8104SHFH（L）-K4/4P

#define DS_8116THFHL_F4               6201    //标准庭审主机DS-8116THFHL-F4

#define DS_81XXAHQ_E4                 6301    //DS_81XXAHQ_E4(TVI ATM)
#define IDS_81XXAHQ_E4                6302    //IDS_81XXAHQ_E4(智能TVI ATM)

#define IDS_86XX_NX_A               7501    //超脑智能ATM NVR(iDS-8632NX-I8/A)
#define IDS_96XX_NX_S               7502    //人体超脑智能NVR
#define IDS_96XX_NX_V               7503    //超脑加油站NVR
#define DS_TRIXX                    8471    //超高频固定式读卡器DS_TRI900

#define IDS_67XX_NX_A               12501    //67系列NVS产品(iDS-6704NX/A)
#define IDS_67XX_NX_L               12502    //67系列录播NVS产品
#define IDS_ENIXX_XHE               12503    //录播NVS行业专业产品
#define IDS_67XX_NX_V               12504    //超脑加油站NVS

/**********************设备类型 end***********************/
/**********************设备大类 begin**********************/

/* dvr相关 1-50 */
#define DEV_CLASS_DVR      1          //普通dvr类型
#define DEV_CLASS_INTERROGATION  2    //审讯机
#define DEV_CLASS_SIMPLE_TRAIL  3    //简易庭审主机
#define DEV_CLASS_TRAIL  4           //标准庭审主机
#define DEV_CLASS_RECORD_PLAY  5     //录播主机
#define DEV_CLASS_ATM 6           //ATM机

/* dvs相关 51-100 */
#define DEV_CLASS_DVS 51          //普通dvs

/* nvr相关 101-150 */
#define DEV_CLASS_NVR 101          //普通nvr

/* ipc相关 151-200 */
#define DEV_CLASS_GUN 151          //ipc枪机
#define DEV_CLASS_BALL 152          //ipc球机
#define DEV_CLASS_SNAP 153          //抓拍机
#define DEV_CLASS_INTELLI_TILT 154   //智能云台
#define DEV_CLASS_FISH_EYE 155          //鱼眼
#define DEV_CLASS_2DP_Z 156         //大鹰眼
#define DEV_CLASS_2DP 157   //小鹰眼
#define DEV_CLASS_PT 158   //全景细节相机
#define DEV_CLASS_TRI 159   //超高频固定式读卡器

/* CVR相关 201 - 250*/
#define DEV_CLASS_CVR 201          //CVR

/* 传显相关 251 - 300*/
#define DEV_CLASS_B20 251          //传显B20系列
#define DEV_CLASS_B10 252          //传显B10系列
#define DEV_CLASS_DECODER 253      //解码器
#define DEV_CLASS_MATRIXMANAGEDEVICE 254      //矩阵接入网关
#define DEV_CLASS_OTICAL 255      //光端机
#define DEV_CLASS_CODESPITTER 256      //码分器
#define DEV_CLASS_ALARMHOST 257      //行业报警主机
#define DEV_CLASS_MOVING_RING 258      //动环设备
#define DEV_CLASS_CVCS 259      //集中式多屏控制器
#define DEV_CLASS_DVCS 260      //分布式多屏控制器
#define DEV_CLASS_TRANSCODER 261      //转码器
#define DEV_CLASS_LCD_SCREEN 262      //LCD屏幕
#define DEV_CLASS_LED_SCREEN 263      //LED屏幕
#define DEV_CLASS_MATRIX 264      //矩阵
#define DEV_CLASS_CONFERENCE_SYSTEM 265      //视频会议设备
#define DEV_CLASS_INFORMATION_RELEASE_EQUIPMENT  266      //信息发布设备
#define DEV_CLASS_NET_GAP 267      //网闸
#define DEV_CLASS_MERGE 268      //合码器
#define DEV_CLASS_REAR_PROJECTION 269      //背投显示设备
#define DEV_CLASS_SWITCH 270      //交换机
#define DEV_CLASS_FIBER_CONVERTER 271      //光纤收发器
#define DEV_CLASS_SCREEN_SERVER 272      //屏幕服务器
#define DEV_CLASS_SCE_SERVER 273      //抓屏服务器
#define DEV_CLASS_WIRELESS_TRANS  274    //无线传输设备
/* 报警主机相关 301 - 350*/
#define DEV_CLASS_VIDEO_ALARM_HOST 301          //视频报警主机
#define DEV_CLASS_NET_ALARM_HOST 302          //网络报警主机
#define DEV_CLASS_ONE_KEY_ALARM 303      //一键式报警产品
#define DEV_CLASS_WIRELESS_ALARM_HOST 304      //无线报警主机
#define DEV_CLASS_ALARM_MODULE 305      //报警模块
#define DEV_CLASS_HOME_ALARM_HOST 306      //家用报警主机

/* 门禁相关 351 - 400*/
#define DEV_CLASS_ACCESS_CONTROL 351          //门禁产品

/* 可视对讲 401 - 450*/
#define DEV_CLASS_VIDEO_INTERCOM 401          //可视对讲

/* 无人机 451 - 500*/
#define DEV_CLASS_UMMANNED_AERIAL_VEHICLE 451          //无人机产品

/* 移动产品: 501-550*/
#define DEV_CLASS_MOBILE 501          //移动产品

/* 移动车载设备: 551-600*/
#define DEV_CLASS_MOBILE_VEHICLE 551          //移动车载设备

//智能分析仪：601-650
#define DEV_CLASS_INTELLIGENT_ANALYZER 601  //智能分析仪

//智能交通服务器：651-700
#define DEV_CLASS_INTELLIGENT_TRAFFIC_SERVER 651  //智能交通服务器
#define DS_TP2200_EC                         652  //经济型机柜监测仪

/* nvs相关 701-750 */
#define DEV_CLASS_NVS 701          //普通nvs

/*全景细节相机： 8451-8470*/
#define iDS_PT              8451  //全景细节相机

/* 其他设备类型 65534 */
#define DEV_CLASS_DEFAULT 65534   //默认设备类型
/**********************设备大类 end**********************/

/******************************能力集获取*********************************/
//能力获取命令
#define DEVICE_SOFTHARDWARE_ABILITY         0x001  //设备软硬件能力
#define DEVICE_NETWORK_ABILITY              0x002  //设备网络能力
#define DEVICE_ENCODE_ALL_ABILITY           0x003  //设备所有编码能力
#define    DEVICE_ENCODE_CURRENT               0x004  //设备当前编码能力
#define IPC_FRONT_PARAMETER                    0x005     //ipc前端参数1.0
#define IPC_UPGRADE_DESCRIPTION                0x006     //ipc升级信息
#define DEVICE_RAID_ABILITY                 0x007  //RAID能力
#define DEVICE_ENCODE_ALL_ABILITY_V20       0x008     //设备所有编码能力2.0
#define IPC_FRONT_PARAMETER_V20                0x009     //ipc前端参数2.0
#define DEVICE_ALARM_ABILITY                0x00a  //辅助报警能力
#define DEVICE_DYNCHAN_ABILITY                0x00b  //设备数字通道能力
#define DEVICE_USER_ABILITY                 0x00c  //设备用户管理参数能力
#define DEVICE_NETAPP_ABILITY               0x00d  //设备网络应用参数能力
#define DEVICE_VIDEOPIC_ABILITY             0x00e  //设备图像参数能力
#define DEVICE_JPEG_CAP_ABILITY             0x00f  //设备JPEG抓图能力
#define DEVICE_SERIAL_ABILITY               0x010  //RS232和RS485串口能力
#define DEVICE_ABILITY_INFO                    0x011     //设备通用能力类型，具体能力根据发送的能力节点来区分
#define STREAM_ABILITY                      0x012  //流能力
#define SYSTEM_MANAGEMENT_ABILITY           0x013  //设备系统管理能力
#define IP_VIEW_DEV_ABILITY                    0x014  //IP可视对讲分机能力
#define VCA_DEV_ABILITY                     0x100  //设备智能分析的总能力
#define VCA_CHAN_ABILITY                    0x110  //行为分析能力
#define TRANSFER_ABILITY                    0x120
#define MATRIXDECODER_ABILITY               0x200  //多路解码器显示、解码能力
#define VIDEOPLATFORM_ABILITY               0x210 //视频综合平台能力集
#define VIDEOPLATFORM_SBUCODESYSTEM_ABILITY 0x211 //视频综合平台编码子系统能力集
#define WALL_ABILITY                        0x212  //电视墙能力集
#define MATRIX_ABILITY                      0x213  //SDI矩阵能力
#define DECODECARD_ABILITY                  0x220 //解码卡服务器能力集
#define VIDEOPLATFORM_ABILITY_V40           0x230 //视频综合平台能力集
#define MATRIXMANAGEDEVICE_ABILITY          0x240 //矩阵接入网关能力集
#define MATRIXDECODER_ABILITY_V41           0x260 //解码器能力集
#define DECODER_ABILITY                     0x261 //解码器xml能力集
#define DECODECARD_ABILITY_V41              0x270 //解码卡服务器能力集V41
#define CODECARD_ABILITY                    0x271  //编码卡能力集
#define SNAPCAMERA_ABILITY                  0x300  //抓拍机能力集
#define ITC_TRIGGER_MODE_ABILITY            0x301  //智能IPC设备的触发模式能力
#define COMPRESSIONCFG_ABILITY              0x400  //获取压缩参数能力集合
#define COMPRESSION_LIMIT                   0x401  //获取主子码流压缩参数能力限制
#define PIC_CAPTURE_ABILITY                    0x402  //获图片分辨率能力集合
#define ALARMHOST_ABILITY                   0x500 //网络报警主机能力集
#define IT_DEVICE_ABILITY                   0x501  //智能交通能力集
#define    SCREENCONTROL_ABILITY                0x600     //大屏控制器能力集
#define    SCREENSERVER_ABILITY                0x610     //大屏服务器能力集
#define FISHEYE_ABILITY                     0x700   //鱼眼能力集
#define LCD_SCREEN_ABILITY                    0x800    //LCD屏幕能力 2013-10-12
#define ACS_ABILITY                         0x801   //门禁能力
#define MERGEDEV_ABILITY                    0x802   //合码器能力集
#define CAM_FUSION_ABILITY                  0x803   //相机拼接能力
#define OPTICAL_DEV_ACCESS_ABILITY          0x805   //光端机接入能力
#define NET_RING_ABILITY                    0x806    //环网能力集
#define LED_ABILITY                            0x807    //LED屏能力集
#define PUBLISHDEV_ABILITY                    0x80a    //信息发布能力
#define SCREEN_EXCHANGE_ABILITY             0x80b   //屏幕互动能力
#define REMOTE_NETMGR_FOT_ABILITY   0x80e   //远端网管收发器能力
/*************************************************
参数配置结构、参数(其中_V30为9000新增)
**************************************************/

//子板异常信息
//主类型
#define EXCEPTION_MAJOR_MAINBOARD_BOOT                    0x1  //主板启动类型
//次类型
#define EXCEPTION_MINOR_PCIE_SCAN                        0x1  // pcie链路扫描异常
#define EXCEPTION_MINOR_DOWNLOAD_SUBBOARD                 0xa  //下载子板完成异常

//主类型
#define EXCEPTION_MAJOR_SUBBOARD_BOOT                    0x2  //子板启动类型
//次类型
#define EXCEPTION_MINOR_INEXISTENCE                       0x1  //PCI-E扫不到或当前子板不存在
#define EXCEPTION_MINOR_UBOOT_DOWNLOAD                  0xa  // uboot下载异常
#define EXCEPTION_MINOR_UBOOT_INIT                      0xe  //uboot初始化异常
#define EXCEPTION_MINOR_ROOTFS_DOWNLOAD                 0x14  //rootfs.img下载异常
#define EXCEPTION_MINOR_UIMAGE_DOWNLOAD                 0x19  //uImage下载异常
#define EXCEPTION_MINOR_UBOOT_SETBOOTFLAG               0x1e  // uboot启动标志位置位异常
#define EXCEPTION_MINOR_ROOTFS_BOOT_SUBBOARD            0x23  // rootfs启动异常
#define EXCEPTION_MINOR_NEED_FILE_FINISH                0x28  //子板所需文件传输异常

//主类型
#define EXCEPTION_MAJOR_SUBBOARD_HARDWARE                0x3  //子板硬件类型
//次类型
#define EXCEPTION_MINOR_AD                               0x1  //AD异常
#define EXCEPTION_MINOR_DA                                 0xa  // DA异常
#define EXCEPTION_MINOR_TIMER                            0xb     //时钟异常

//主类型
#define EXCEPTION_MAJOR_FPGA                            0x4  //FPGA类型
//次类型
#define EXCEPTION_MINOR_IDLE                              0x1  //无法IDLE
#define EXCEPTION_MINOR_LANE                             0xa  // LANE OK失败
#define EXCEPTION_MINOR_REGISTER_ALL_F                     0xe  //FPGA寄存器全F
#define EXCEPTION_MINOR_MEMORY_INIT_FAIL                 0x14 //FPGA内存初始化失败
//主类型
#define EXCEPTION_MAJOR_DSP                                0x5  //DSP类型

//主类型
#define EXCEPTION_MAJOR_ARM                                0x6  //ARM类型

//主类型
#define EXCEPTION_MAJOR_BACKBOARD                        0x7  //背板类型
//次类型
#define EXCEPTION_MINOR_BLACKBOARD_TYPE                   0x1  //获取背板类型异常
#define EXCEPTION_MINOR_SERDES                           0xa  //视频交换芯片
#define EXCEPTION_MINOR_CLOCK                             0xe  //时钟故障
#define EXCEPTION_MINOR_SYNCH                             0x14  //同步信号故障

//主类型
#define EXCEPTION_MAJOR_SUBBOARD_NET                    0x8  //子板网络
//次类型
#define EXCEPTION_MINOR_IP_CONFLICT                       0x1  //IP冲突
#define EXCEPTION_MINOR_DISCONNECT                         0x14  // 断网


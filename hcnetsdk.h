//�궨��
#define MAX_NAMELEN                16        //DVR���ص�½��
#define MAX_RIGHT                32        //�豸֧�ֵ�Ȩ�ޣ�1-12��ʾ����Ȩ�ޣ�13-32��ʾԶ��Ȩ�ޣ�
#define NAME_LEN                32      //�û�������
#define MIN_PASSWD_LEN          8          //��С���볤��
#define PASSWD_LEN                16      //���볤��
#define MAX_PASSWD_LEN_EX            64      //���볤��64λ
#define GUID_LEN                16      //GUID����
#define DEV_TYPE_NAME_LEN        24      //�豸�������Ƴ���
#define SERIALNO_LEN            48      //���кų���
#define MACADDR_LEN                6       //mac��ַ����
#define MAC_ADDRESS_NUM         48      //Mac��ַ����
#define MAX_SENCE_NUM           16      //������
#define RULE_REGION_MAX         128      //�������
#define MAX_ETHERNET            2       //�豸������̫����
#define MAX_NETWORK_CARD        4       //�豸�������������Ŀ
#define MAX_NETWORK_CARD_EX     12      //�豸�������������Ŀ��չ
#define PATHNAME_LEN            128     //·������
#define MAX_PRESET_V13          16      //Ԥ�õ�
#define MAX_TEST_COMMAND_NUM   32      //���߲��Ա����ֶγ���
#define MAX_NUMBER_LEN            32        //������󳤶�
#define MAX_NAME_LEN            128        //�豸������󳤶�
#define MAX_INDEX_LED           8       //LED�������ֵ 2013-11-19
#define MAX_CUSTOM_DIR            64      //�Զ���Ŀ¼��󳤶�
#define URL_LEN_V40             256        //���URL����
#define CLOUD_NAME_LEN          48      //�ƴ洢�������û�������
#define CLOUD_PASSWD_LEN        48      //�ƴ洢���������볤��
#define MAX_SENSORNAME_LEN      64      //���������Ƴ���
#define MAX_SENSORCHAN_LEN      32      //������ͨ������
#define MAX_DESCRIPTION_LEN     32      //��������������
#define MAX_DEVNAME_LEN_EX      64      //�豸���Ƴ�����չ
#define NET_SDK_MAX_FILE_PATH   256     //�ļ�·������
#define MAX_TMEVOICE_LEN        64      //TME�����������ݳ���

#define MAX_NUM_INPUT_BOARD     512     //�����������
#define MAX_SHIPSDETE_REGION_NUM    8 // ��ֻ��������б������Ŀ

#define MAX_RES_NUM_ONE_VS_INPUT_CHAN  8  //һ������������ͨ��֧�ֵķֱ��ʵ��������
#define MAX_VS_INPUT_CHAN_NUM  16  //����������ͨ���������

#define NET_SDK_MAX_FDID_LEN 256//������ID��󳤶�
#define NET_SDK_MAX_PICID_LEN 256 //����ID��󳤶�
#define NET_SDK_FDPIC_CUSTOM_INFO_LEN 96 //������ͼƬ�Զ�����Ϣ����
#define NET_DVR_MAX_FACE_ANALYSIS_NUM      32   //���֧�ֵ���ͼƬʶ����������������
#define NET_DVR_MAX_FACE_SEARCH_NUM      5   //���֧�����������������
#define NET_SDK_SECRETKEY_LEN      128   //�����ļ���Կ����
#define NET_SDK_CUSTOM_LEN                  512 //�Զ�����Ϣ��󳤶�
#define NET_SDK_CHECK_CODE_LEN          128//У���볤��
//С���LED������
#define  MAX_LEN_TEXT_CONTENT    128  //�ַ����ݳ���
#define  MAX_NUM_INPUT_SOURCE_TEXT    32    //�ź�Դ�ɵ��ӵ��ı�����
#define  MAX_NUM_OUTPUT_CHANNEL  512  //LED�������������ڸ���

//�Ӵ��ڽ���OSD
#define MAX_LEN_OSD_CONTENT  256  //OSD��Ϣ��󳤶�
#define MAX_NUM_OSD_ONE_SUBWND  8  //�����Ӵ���֧�ֵ����OSD����
#define MAX_NUM_SPLIT_WND  64 //��������֧�ֵ��������������������Ӵ���������
#define MAX_NUM_OSD 8

//2013-11-19
#define MAX_DEVNAME_LEN         32      //�豸������󳤶�
#define MAX_LED_INFO            256     //��Ļ������ʾ��Ϣ��󳤶�
#define MAX_TIME_LEN            32      //ʱ����󳤶�
#define MAX_CARD_LEN            24      //������󳤶�
#define MAX_OPERATORNAME_LEN    32      //������Ա������󳤶�

#define THERMOMETRY_ALARMRULE_NUM 40     //�ȳ��񱨾�������
#define MAX_THERMOMETRY_REGION_NUM  40  //�ȶ�ͼ����������֧����
#define MAX_THERMOMETRY_DIFFCOMPARISON_NUM  40 //�ȳ����²��������
#define MAX_SHIPS_NUM           20      //��ֻ������ֻ��
#define KEY_WORD_NUM             3 //�ؼ��ָ���
#define KEY_WORD_LEN            128  //�ؼ��ֳ���
//�첽��¼�ص�״̬�궨��
#define ASYN_LOGIN_SUCC            1        //�첽��¼�ɹ�
#define ASYN_LOGIN_FAILED        0        //�첽��¼ʧ��

#define NET_SDK_MAX_VERIFICATION_CODE_LEN  32        //өʯ����֤�볤��
#define MAX_TIMESEGMENT_V30        8       //9000�豸���ʱ�����
#define MAX_TIMESEGMENT            4       //8000�豸���ʱ�����
#define MAX_ICR_NUM             8       //ץ�Ļ������˹�ƬԤ�õ���2013-07-09
#define MAX_VEHICLEFLOW_INFO                       24       //��������Ϣ������
#define MAX_SHELTERNUM            4       //8000�豸����ڵ�������
#define MAX_DAYS                7       //ÿ������
#define PHONENUMBER_LEN            32      //pppoe���ź�����󳤶�
#define MAX_ACCESSORY_CARD      256      //�������Ϣ��󳤶�
#define MAX_DISKNUM_V30            33        //9000�豸���Ӳ����/* ���33��Ӳ��(����16������SATAӲ�̡�1��eSATAӲ�̺�16��NFS��) */

#define NET_SDK_DISK_LOCATION_LEN  16      //Ӳ��λ�ó���
#define NET_SDK_SUPPLIER_NAME_LEN  32      //��Ӧ�����Ƴ���
#define NET_SDK_DISK_MODEL_LEN     64      //Ӳ���ͺų���
#define NET_SDK_MAX_DISK_VOLUME    33      //���Ӳ�̾����
#define NET_SDK_DISK_VOLUME_LEN    36      //Ӳ�̾����Ƴ���

#define MAX_DISKNUM                16      //8000�豸���Ӳ����
#define MAX_DISKNUM_V10            8       //1.2�汾֮ǰ�汾
#define CARD_READER_DESCRIPTION    32            //����������
#define MAX_FACE_NUM               2             //���������

#define MAX_WINDOW_V30            32      //9000�豸������ʾ��󲥷Ŵ�����
#define MAX_WINDOW_V40            64      //Netra 2.3.1��չ
#define MAX_WINDOW                16      //8000�豸���Ӳ����
#define MAX_VGA_V30                4       //9000�豸���ɽ�VGA��
#define MAX_VGA                    1       //8000�豸���ɽ�VGA��

#define MAX_USERNUM_V30            32      //9000�豸����û���
#define MAX_USERNUM                16      //8000�豸����û���
#define MAX_EXCEPTIONNUM_V30    32      //9000�豸����쳣������
#define MAX_EXCEPTIONNUM        16      //8000�豸����쳣������
#define MAX_LINK                6       //8000�豸��ͨ�������Ƶ��������
#define MAX_ITC_EXCEPTIONOUT    32      //ץ�Ļ���󱨾����
#define MAX_SCREEN_DISPLAY_LEN            512    //��Ļ��ʾ�ַ�����

#define MAX_DECPOOLNUM            4       //��·������ÿ������ͨ������ѭ��������
#define MAX_DECNUM                4       //��·��������������ͨ������ʵ��ֻ��һ������������������
#define MAX_TRANSPARENTNUM        2       //��·���������������͸��ͨ����
#define MAX_CYCLE_CHAN            16      //��·�����������Ѳͨ����
#define MAX_CYCLE_CHAN_V30      64      //�����Ѳͨ��������չ��
#define MAX_DIRNAME_LENGTH        80      //���Ŀ¼����
#define MAX_WINDOWS                16      //��󴰿���


#define MAX_STRINGNUM_V30        8        //9000�豸���OSD�ַ�������
#define MAX_STRINGNUM            4       //8000�豸���OSD�ַ�������
#define MAX_STRINGNUM_EX        8       //8000������չ
#define MAX_AUXOUT_V30            16      //9000�豸����������
#define MAX_AUXOUT                4       //8000�豸����������
#define MAX_HD_GROUP            16      //9000�豸���Ӳ������
#define MAX_HD_GROUP_V40        32      //�豸���Ӳ������
#define MAX_NFS_DISK            8       //8000�豸���NFSӲ����
#define NET_SDK_VERSION_LIST_LEN 64 //�㷨��汾���ֵ
#define IW_ESSID_MAX_SIZE        32      //WIFI��SSID�ų���
#define IW_ENCODING_TOKEN_MAX    32      //WIFI��������ֽ���
#define MAX_SERIAL_NUM            64        //���֧�ֵ�͸��ͨ��·��
#define MAX_DDNS_NUMS            10      //9000�豸������ddns��
#define MAX_DOMAIN_NAME            64        /* ����������� */
#define MAX_EMAIL_ADDR_LEN        48      //���email��ַ����
#define MAX_EMAIL_PWD_LEN        32      //���email���볤��
#define MAX_SLAVECAMERA_NUM     8       //�����������
#define MAX_CALIB_NUM           6       //�궨��ĸ���
#define MAX_CALIB_NUM_EX        20      //��չ�궨��ĸ���
#define MAX_LEDDISPLAYINFO_LEN  1024    //���LED����ʾ����
#define MAX_PEOPLE_DETECTION_NUM    8  //�����Ա���������
#define MAXPROGRESS                100     //�ط�ʱ�����ٷ���
#define MAX_SERIALNUM            2       //8000�豸֧�ֵĴ����� 1-232�� 2-485
#define CARDNUM_LEN                20      //���ų���
#define CARDNUM_LEN_OUT            32      //�ⲿ�ṹ�忨�ų���
#define MAX_VIDEOOUT_V30        4       //9000�豸����Ƶ�����
#define MAX_VIDEOOUT            2       //8000�豸����Ƶ�����

#define MAX_PRESET_V30            256        /* 9000�豸֧�ֵ���̨Ԥ�õ��� */
#define MAX_TRACK_V30            256        /* 9000�豸֧�ֵ���̨�켣�� */
#define MAX_CRUISE_V30            256        /* 9000�豸֧�ֵ���̨Ѳ���� */
#define MAX_PRESET                128        /* 8000�豸֧�ֵ���̨Ԥ�õ��� */
#define MAX_TRACK                128        /* 8000�豸֧�ֵ���̨�켣�� */
#define MAX_CRUISE                128        /* 8000�豸֧�ֵ���̨Ѳ���� */

#define MAX_PRESET_V40            300        /* ��̨֧�ֵ����Ԥ�õ��� */
#define MAX_CRUISE_POINT_NUM    128     /* ���֧�ֵ�Ѳ����ĸ��� */
#define MAX_CRUISEPOINT_NUM_V50 256     //���֧�ֵ�Ѳ����ĸ�����չ

#define CRUISE_MAX_PRESET_NUMS    32         /* һ��Ѳ������Ѳ���� */
#define MAX_FACE_PIC_NUM        30      /*������ͼ����*/
#define LOCKGATE_TIME_NUM       4       //��բʱ��θ���

#define MAX_SERIAL_PORT         8       //9000�豸֧��232������
#define MAX_PREVIEW_MODE        8       /* �豸֧�����Ԥ��ģʽ��Ŀ 1����,4����,9����,16����.... */
#define MAX_MATRIXOUT           16      /* ���ģ������������ */
#define LOG_INFO_LEN            11840   /* ��־������Ϣ */
#define DESC_LEN                16      /* ��̨�����ַ������� */
#define PTZ_PROTOCOL_NUM        200     /* 9000���֧�ֵ���̨Э���� */
#define IPC_PROTOCOL_NUM        50   //ipc Э��������

#define MAX_AUDIO                1       //8000�����Խ�ͨ����
#define MAX_AUDIO_V30            2       //9000�����Խ�ͨ����
#define MAX_CHANNUM                16      //8000�豸���ͨ����
#define MAX_ALARMIN                16      //8000�豸��󱨾�������
#define MAX_ALARMOUT            4       //8000�豸��󱨾������
//9000 IPC����
#define MAX_ANALOG_CHANNUM      32      //���32��ģ��ͨ��
#define MAX_ANALOG_ALARMOUT     32      //���32·ģ�ⱨ�����
#define MAX_ANALOG_ALARMIN      32      //���32·ģ�ⱨ������

#define MAX_IP_DEVICE           32      //�����������IP�豸��
#define MAX_IP_DEVICE_V40       64      // �����������IP�豸�� �������64�� IVMS 2000�����豸
#define MAX_IP_CHANNEL          32      //�����������IPͨ����
#define MAX_IP_ALARMIN          128     //����������౨��������
#define MAX_IP_ALARMOUT         64      //����������౨�������
#define MAX_IP_ALARMIN_V40      4096    //����������౨��������
#define MAX_IP_ALARMOUT_V40     4096    //����������౨�������

#define MAX_RECORD_FILE_NUM     20      // ÿ��ɾ�����߿�¼������ļ���
//SDK_V31 ATM
#define MAX_ACTION_TYPE            12        //�Զ���Э����ӽ�����Ϊ�����Ϊ����
#define MAX_ATM_PROTOCOL_NUM    256   //ÿ�����뷽ʽ��Ӧ��ATM���Э����
#define ATM_CUSTOM_PROTO        1025   //�Զ���Э�� ֵΪ1025
#define ATM_PROTOCOL_SORT       4       //ATMЭ�����
#define ATM_DESC_LEN            32      //ATM�����ַ�������
// SDK_V31 ATM


#define MAX_IPV6_LEN              64   //IPv6��ַ��󳤶�
#define MAX_EVENTID_LEN         64   //�¼�ID����

#define INVALID_VALUE_UINT32    0xffffffff   //��Чֵ
#define MAX_CHANNUM_V40         512
#define MAX_MULTI_AREA_NUM      24

//SDK ¼������
#define COURSE_NAME_LEN                32    //�γ�����
#define INSTRUCTOR_NAME_LEN            16    //�ڿν�ʦ
#define COURSE_DESCRIPTION_LEN        256    //�γ���Ϣ

#define MAX_TIMESEGMENT_V40            16    //ÿ�ڿ���Ϣ


#define MAX_MIX_CHAN_NUM        16    /*Ŀǰ֧�ֵ�������ͨ����������ͨ�� + MIC + LINE IN + ���4��С����*/
#define MAX_LINE_IN_CHAN_NUM    16    //���line inͨ����
#define MAX_MIC_CHAN_NUM        16    //���MICͨ����
#define INQUEST_CASE_NO_LEN        64    //��Ѷ������ų���
#define INQUEST_CASE_NAME_LEN    64    //��Ѷ�������Ƴ���
#define CUSTOM_INFO_LEN            64    //�Զ�����Ϣ����
#define INQUEST_CASE_LEN        64    //��Ѷ��Ϣ����


#define MAX_FILE_ID_LEN         128    //��ͼ����Ŀ���ļ�ID����󳤶�
#define MAX_PIC_NAME_LEN        128 //ͼƬ���Ƴ���

/* ���֧�ֵ�ͨ���� ���ģ��������IP֧�� */
#define MAX_CHANNUM_V30               ( MAX_ANALOG_CHANNUM + MAX_IP_CHANNEL )//64
#define MAX_ALARMOUT_V40             (MAX_IP_ALARMOUT_V40 +MAX_ANALOG_ALARMOUT) //4128
#define MAX_ALARMOUT_V30              ( MAX_ANALOG_ALARMOUT + MAX_IP_ALARMOUT )//96
#define MAX_ALARMIN_V30               ( MAX_ANALOG_ALARMIN + MAX_IP_ALARMIN )//160
#define MAX_ALARMIN_V40             (MAX_IP_ALARMIN_V40 +MAX_ANALOG_ALARMOUT) //4128
#define MAX_ANALOG_ALARM_WITH_VOLT_LIMIT    16 //�ܵ�ѹ�޶���ģ�ⱨ�����������

#define MAX_ROIDETECT_NUM       8    //֧�ֵ�ROI������
#define MAX_LANERECT_NUM        5    //�����ʶ��������
#define MAX_FORTIFY_NUM         10   //��󲼷�����
#define MAX_INTERVAL_NUM        4    //���ʱ��������
#define MAX_CHJC_NUM            3    //�����ʡ�ݼ���ַ�����
#define MAX_VL_NUM              5    //���������Ȧ����
#define MAX_DRIVECHAN_NUM       16   //��󳵵���
#define MAX_COIL_NUM            3    //�����Ȧ����
#define MAX_SIGNALLIGHT_NUM     6   //����źŵƸ���
#define LEN_16                    16
#define LEN_32                    32
#define LEN_31                    31
#define MAX_CABINET_COUNT       8    //���֧�ֻ�������
#define MAX_ID_LEN              48
#define MAX_PARKNO_LEN          16
#define MAX_ALARMREASON_LEN     32
#define MAX_UPGRADE_INFO_LEN    48 //��ȡ�����ļ�ƥ����Ϣ(ģ������)
#define MAX_CUSTOMDIR_LEN       32 //�Զ���Ŀ¼����
#define MAX_LED_INFO_LEN        512//LED���ݳ���
#define MAX_VOICE_INFO_LEN      128//�����������ݳ���
#define MAX_LITLE_INFO_LEN      64 //ֽƱ�������ݳ���
#define MAX_CUSTOM_INFO_LEN     64 //ֽƱ�Զ�����Ϣ���ݳ���
#define MAX_PHONE_NUM_LEN       16 //��ϵ�绰���ݳ���
#define MAX_APP_SERIALNUM_LEN   32 //Ӧ�����кų���

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
#define HIK_H264_E_FRAME    (1 << 6)   // ��ǰE֡������,��P֡Ҳû�õ�
#define MAX_TRANSPARENT_CHAN_NUM      4   //ÿ�����������������͸��ͨ����
#define MAX_TRANSPARENT_ACCESS_NUM    4   //ÿ�������˿������������������

//ITS
#define MAX_PARKING_STATUS       8    //��λ״̬ 0�����޳���1�����г���2����ѹ��(���ȼ����), 3���⳵λ
#define MAX_PARKING_NUM             4    //һ��ͨ�����4����λ (�����ҳ�λ ����0��3)

#define MAX_ITS_SCENE_NUM        16   //��󳡾�����
#define MAX_SCENE_TIMESEG_NUM    16   //��󳡾�ʱ�������
#define MAX_IVMS_IP_CHANNEL      128  //���IPͨ����
#define DEVICE_ID_LEN            48   //�豸��ų���
#define MONITORSITE_ID_LEN       48   //�����ų���
#define MAX_AUXAREA_NUM          16   //�������������Ŀ
#define MAX_SLAVE_CHANNEL_NUM    16   //����ͨ������
#define MAX_DEVDESC_LEN          64   //�豸������Ϣ��󳤶�
#define ILLEGAL_LEN       32      //Υ�����볤��



#define MAX_SECRETKEY_LEN           512     //�����Կ����
#define MAX_INDEX_CODE_LEN          64      //�����ų���
#define MAX_ILLEGAL_LEN          64     //Υ����������ַ�����
#define CODE_LEN        64  //��Ȩ��
#define ALIAS_LEN       32  //������ֻ��
#define MAX_SCH_TASKS_NUM        10

#define MAX_SERVERID_LEN            64 //��������ID�ĳ���
#define MAX_SERVERDOMAIN_LEN        128 //������������󳤶�
#define MAX_AUTHENTICATEID_LEN      64 //��֤ID��󳤶�
#define MAX_AUTHENTICATEPASSWD_LEN  32 //��֤������󳤶�
#define MAX_SERVERNAME_LEN          64 //���������û���
#define MAX_COMPRESSIONID_LEN       64 //����ID����󳤶�
#define MAX_SIPSERVER_ADDRESS_LEN   128 //SIP��������ַ֧��������IP��ַ
//ѹ�߱���
#define MAX_PlATE_NO_LEN            32   //���ƺ�����󳤶� 2013-09-27
#define UPNP_PORT_NUM                12      //upnp�˿�ӳ��˿���Ŀ

#define MAX_PEOPLE_DETECTION_NUM    8  //�����Ա���������

#define MAX_NOTICE_NUMBER_LEN       32   //��������󳤶�
#define MAX_NOTICE_THEME_LEN        64   //����������󳤶�
#define MAX_NOTICE_DETAIL_LEN       1024 //����������󳤶�
#define MAX_NOTICE_PIC_NUM          6    //������Ϣ���ͼƬ����
#define MAX_DEV_NUMBER_LEN          32   //�豸�����󳤶�



#define HOLIDAY_GROUP_NAME_LEN          32  //���������Ƴ���
#define MAX_HOLIDAY_PLAN_NUM            16  //�����������ռƻ���
#define TEMPLATE_NAME_LEN               32  //�ƻ�ģ�����Ƴ���
#define MAX_HOLIDAY_GROUP_NUM           16   //�ƻ�ģ������������
#define DOOR_NAME_LEN                   32  //������
#define STRESS_PASSWORD_LEN             8   //в�����볤��
#define SUPER_PASSWORD_LEN              8   //в�����볤��
#define GROUP_NAME_LEN                  32  //Ⱥ�����Ƴ���
#define GROUP_COMBINATION_NUM           8   //Ⱥ�������
#define MULTI_CARD_GROUP_NUM            4   //���������ؿ�����
#define ACS_CARD_NO_LEN                 32  //�Ž����ų���
#define CARD_PASSWORD_LEN               8   //�����볤��
#define MAX_DOOR_NUM                    32  //�������
#define MAX_CARD_RIGHT_PLAN_NUM         4   //��Ȩ�����ƻ�����
#define MAX_GROUP_NUM_128               128 //���Ⱥ����
#define MAX_CARD_READER_NUM             64  //����������
#define MAX_SNEAK_PATH_NODE             8   //��������������
#define MAX_MULTI_DOOR_INTERLOCK_GROUP  8   //�����Ż�������
#define MAX_INTER_LOCK_DOOR_NUM         8   //һ�����Ż����������������
#define MAX_CASE_SENSOR_NUM             8   //���case sensor��������
#define MAX_DOOR_NUM_256                256 //�������
#define MAX_READER_ROUTE_NUM            16  //���ˢ��ѭ��·��
#define MAX_FINGER_PRINT_NUM            10  //���ָ�Ƹ���
#define MAX_CARD_READER_NUM_512            512 //����������
#define NET_SDK_MULTI_CARD_GROUP_NUM_20     20   //���������ؿ�����

#define ERROR_MSG_LEN      32 //�·�������Ϣ
#define MAX_DOOR_CODE_LEN               8 //������볤��
#define MAX_LOCK_CODE_LEN               8 //�����볤��
#define PER_RING_PORT_NUM                2   //ÿ�����Ķ˿���
#define SENSORNAME_LEN                  32  //���������Ƴ���
#define MAX_SENSORDESCR_LEN             64  //��������������
#define MAX_DNS_SERVER_NUM              2 //���DNS����
#define SENSORUNIT_LEN                  32 //���λ����

#define WEP_KEY_MAX_SIZE                32 //���WEP������Կ����
#define WEP_KEY_MAX_NUM                 4  //���WEP������Կ����
#define WPA_KEY_MAX_SIZE                64 //���WPA������Կ����

#define MAX_SINGLE_FTPPICNAME_LEN       20 //��󵥸�FTPͨ������
#define MAX_CAMNAME_LEN                 32 //���ͨ������
#define MAX_FTPNAME_NUM                 12 //TFP������


#define MAX_IDCODE_LEN      128 //  ʶ������󳤶�
#define MAX_VERSIIN_LEN     64  //�汾��󳤶�
#define MAX_IDCODE_NUM      32  // ʶ�������
#define SDK_LEN_2048        2048

#define RECT_POINT_NUM                    4    //���ν���

#define MAX_PUBLIC_KEY_LEN 512 // ���Կ����
#define CHIP_SERIALNO_LEN 32 //����оƬ���кų���
#define ENCRYPT_DEV_ID_LEN        20  //�豸ID����

//MCU��ص�
#define MAX_SEARCH_ID_LEN               36  //������ʶ����󳤶�
#define TERMINAL_NAME_LEN               64  //�ն����Ƴ���
#define MAX_URL_LEN                     512 //URL����
#define REGISTER_NAME_LEN               64 //�ն�ע��GK������󳤶�

//����
#define MAX_PORT_NUM            64  //���˿���
#define MAX_SINGLE_CARD_PORT_NO 4   //�����շ����������˿���
#define MAX_FUNC_CARD_NUM       32  //�����շ�������ܿ���
#define MAX_FC_CARD_NUM         33  //�����շ��������
#define MAX_REMARKS_LEN         128 //ע����󳤶�
#define MAX_OUTPUT_PORT_NUM                32    //��·����������������˿���
#define MAX_SINGLE_PORT_RECVCARD_NUM    64    //�����˿����ӵ������տ���
#define MAX_GAMMA_X_VALUE                256    //GAMMA��X��ȡֵ����
#define NET_DEV_NAME_LEN        64  //�豸���Ƴ���
#define NET_DEV_TYPE_NAME_LEN  64  //�豸�������Ƴ���
#define ABNORMAL_INFO_NUM               4        //�쳣ʱ��θ���

#define PLAYLIST_NAME_LEN                64            //���ű����Ƴ���
#define PLAYLIST_ITEM_NUM                64            //��������Ŀ

//������
#define NET_SDK_MAX_LOGIN_PASSWORD_LEN           128 //�û���¼������󳤶�
#define NET_SDK_MAX_ANSWER_LEN                   256 //��ȫ�������󳤶�
#define NET_SDK_MAX_QUESTION_LIST_LEN            32//��ȫ�����б���󳤶�

#define  MAX_SCREEN_AREA_NUM  128  //��Ļ�����������
#define NET_SDK_MAX_THERMOMETRYALGNAME           128//�����㷨��汾��󳤶�
#define NET_SDK_MAX_SHIPSALGNAME                 128//��ֻ�㷨��汾��󳤶�
#define NET_SDK_MAX_FIRESALGNAME                 128//����㷨��汾��󳤶�
/*******************ȫ�ִ����� begin**********************/
#define NET_DVR_NOERROR                     0    //û�д���
#define NET_DVR_PASSWORD_ERROR                 1    //�û����������
#define NET_DVR_NOENOUGHPRI                 2    //Ȩ�޲���
#define NET_DVR_NOINIT                         3    //û�г�ʼ��
#define NET_DVR_CHANNEL_ERROR                 4    //ͨ���Ŵ���
#define NET_DVR_OVER_MAXLINK                 5    //���ӵ�DVR�Ŀͻ��˸����������
#define NET_DVR_VERSIONNOMATCH                6    //�汾��ƥ��
#define NET_DVR_NETWORK_FAIL_CONNECT        7    //���ӷ�����ʧ��
#define NET_DVR_NETWORK_SEND_ERROR            8    //�����������ʧ��
#define NET_DVR_NETWORK_RECV_ERROR            9    //�ӷ�������������ʧ��
#define NET_DVR_NETWORK_RECV_TIMEOUT        10    //�ӷ������������ݳ�ʱ
#define NET_DVR_NETWORK_ERRORDATA            11    //���͵���������
#define NET_DVR_ORDER_ERROR                    12    //���ô������
#define NET_DVR_OPERNOPERMIT                13    //�޴�Ȩ��
#define NET_DVR_COMMANDTIMEOUT                14    //DVR����ִ�г�ʱ
#define NET_DVR_ERRORSERIALPORT                15    //���ںŴ���
#define NET_DVR_ERRORALARMPORT                16    //�����˿ڴ���
#define NET_DVR_PARAMETER_ERROR             17  //��������
#define NET_DVR_CHAN_EXCEPTION                18    //������ͨ�����ڴ���״̬
#define NET_DVR_NODISK                        19    //û��Ӳ��
#define NET_DVR_ERRORDISKNUM                20    //Ӳ�̺Ŵ���
#define NET_DVR_DISK_FULL                    21    //������Ӳ����
#define NET_DVR_DISK_ERROR                    22    //������Ӳ�̳���
#define NET_DVR_NOSUPPORT                    23    //��������֧��
#define NET_DVR_BUSY                        24    //������æ
#define NET_DVR_MODIFY_FAIL                    25    //�������޸Ĳ��ɹ�
#define NET_DVR_PASSWORD_FORMAT_ERROR        26    //���������ʽ����ȷ
#define NET_DVR_DISK_FORMATING                27    //Ӳ�����ڸ�ʽ����������������
#define NET_DVR_DVRNORESOURCE                28    //DVR��Դ����
#define    NET_DVR_DVROPRATEFAILED                29  //DVR����ʧ��
#define NET_DVR_OPENHOSTSOUND_FAIL             30  //��PC����ʧ��
#define NET_DVR_DVRVOICEOPENED                 31  //�����������Խ���ռ��
#define    NET_DVR_TIMEINPUTERROR                32  //ʱ�����벻��ȷ
#define    NET_DVR_NOSPECFILE                    33  //�ط�ʱ������û��ָ�����ļ�
#define NET_DVR_CREATEFILE_ERROR            34    //�����ļ�����
#define    NET_DVR_FILEOPENFAIL                35  //���ļ�����
#define    NET_DVR_OPERNOTFINISH                36  //�ϴεĲ�����û�����
#define    NET_DVR_GETPLAYTIMEFAIL                37  //��ȡ��ǰ���ŵ�ʱ�����
#define    NET_DVR_PLAYFAIL                    38  //���ų���
#define NET_DVR_FILEFORMAT_ERROR            39  //�ļ���ʽ����ȷ
#define NET_DVR_DIR_ERROR                    40    //·������
#define NET_DVR_ALLOC_RESOURCE_ERROR        41  //��Դ�������
#define NET_DVR_AUDIO_MODE_ERROR            42    //����ģʽ����
#define NET_DVR_NOENOUGH_BUF                43    //������̫С
#define NET_DVR_CREATESOCKET_ERROR             44    //����SOCKET����
#define NET_DVR_SETSOCKET_ERROR                45    //����SOCKET����
#define NET_DVR_MAX_NUM                        46    //�����ﵽ���
#define NET_DVR_USERNOTEXIST                47    //�û�������
#define NET_DVR_WRITEFLASHERROR                48  //дFLASH����
#define NET_DVR_UPGRADEFAIL                    49  //DVR����ʧ��
#define NET_DVR_CARDHAVEINIT                50  //���뿨�Ѿ���ʼ����
#define NET_DVR_PLAYERFAILED                51    //���ò��ſ���ĳ������ʧ��
#define NET_DVR_MAX_USERNUM                    52  //�豸���û����ﵽ���
#define NET_DVR_GETLOCALIPANDMACFAIL        53  //��ÿͻ��˵�IP��ַ�������ַʧ��
#define NET_DVR_NOENCODEING                    54    //��ͨ��û�б���
#define NET_DVR_IPMISMATCH                    55    //IP��ַ��ƥ��
#define NET_DVR_MACMISMATCH                    56    //MAC��ַ��ƥ��
#define NET_DVR_UPGRADELANGMISMATCH            57    //�����ļ����Բ�ƥ��
#define NET_DVR_MAX_PLAYERPORT                58    //������·���ﵽ���
#define NET_DVR_NOSPACEBACKUP                59    //�����豸��û���㹻�ռ���б���
#define NET_DVR_NODEVICEBACKUP                60    //û���ҵ�ָ���ı����豸
#define NET_DVR_PICTURE_BITS_ERROR            61    //ͼ����λ����������24ɫ
#define NET_DVR_PICTURE_DIMENSION_ERROR        62    //ͼƬ��*���ޣ� ��128*256
#define NET_DVR_PICTURE_SIZ_ERROR            63    //ͼƬ��С���ޣ���100K
#define NET_DVR_LOADPLAYERSDKFAILED            64    //���뵱ǰĿ¼��Player Sdk����
#define NET_DVR_LOADPLAYERSDKPROC_ERROR        65    //�Ҳ���Player Sdk��ĳ���������
#define NET_DVR_LOADDSSDKFAILED                66    //���뵱ǰĿ¼��DSsdk����
#define NET_DVR_LOADDSSDKPROC_ERROR            67    //�Ҳ���DsSdk��ĳ���������
#define NET_DVR_DSSDK_ERROR                    68    //����Ӳ�����DsSdk��ĳ������ʧ��
#define NET_DVR_VOICEMONOPOLIZE                69    //��������ռ
#define NET_DVR_JOINMULTICASTFAILED            70    //����ಥ��ʧ��
#define NET_DVR_CREATEDIR_ERROR                71    //������־�ļ�Ŀ¼ʧ��
#define NET_DVR_BINDSOCKET_ERROR            72    //���׽���ʧ��
#define NET_DVR_SOCKETCLOSE_ERROR            73    //socket�����жϣ��˴���ͨ�������������жϻ�Ŀ�ĵز��ɴ�
#define NET_DVR_USERID_ISUSING                74    //ע��ʱ�û�ID���ڽ���ĳ����
#define NET_DVR_SOCKETLISTEN_ERROR            75    //����ʧ��
#define NET_DVR_PROGRAM_EXCEPTION            76    //�����쳣
#define NET_DVR_WRITEFILE_FAILED            77    //д�ļ�ʧ��
#define NET_DVR_FORMAT_READONLY                78  //��ֹ��ʽ��ֻ��Ӳ��
#define NET_DVR_WITHSAMEUSERNAME            79  //�û����ýṹ�д�����ͬ���û���
#define NET_DVR_DEVICETYPE_ERROR            80  /*�������ʱ�豸�ͺŲ�ƥ��*/
#define NET_DVR_LANGUAGE_ERROR              81  /*�������ʱ���Բ�ƥ��*/
#define NET_DVR_PARAVERSION_ERROR           82  /*�������ʱ����汾��ƥ��*/
#define NET_DVR_IPCHAN_NOTALIVE             83  /*Ԥ��ʱ���IPͨ��������*/
#define NET_DVR_RTSP_SDK_ERROR                84    /*���ظ���IPCͨѶ��StreamTransClient.dllʧ��*/
#define NET_DVR_CONVERT_SDK_ERROR            85    /*����ת���ʧ��*/
#define NET_DVR_IPC_COUNT_OVERFLOW            86  /*��������ip����ͨ����*/
#define NET_DVR_MAX_ADD_NUM                 87  /*��ӱ�ǩ(һ���ļ�Ƭ��64)�ȸ����ﵽ���*/
#define NET_DVR_PARAMMODE_ERROR             88 //ͼ����ǿ�ǣ�����ģʽ��������Ӳ������ʱ���ͻ��˽����������ʱ����ֵ��
#define NET_DVR_CODESPITTER_OFFLINE            89 //��Ƶ�ۺ�ƽ̨�������������
#define NET_DVR_BACKUP_COPYING                90  //�豸���ڱ���
#define NET_DVR_CHAN_NOTSUPPORT             91  // ͨ����֧�ָò���
#define NET_DVR_CALLINEINVALID              92  // �߶���λ��̫���л򳤶��߲�����б
#define NET_DVR_CALCANCELCONFLICT           93  // ȡ���궨��ͻ����������˹���ȫ�ֵ�ʵ�ʴ�С�ߴ����
#define NET_DVR_CALPOINTOUTRANGE            94     // �궨�㳬����Χ
#define NET_DVR_FILTERRECTINVALID           95  // �ߴ������������Ҫ��
#define NET_DVR_DDNS_DEVOFFLINE             96  //�豸û��ע�ᵽddns��
#define NET_DVR_DDNS_INTER_ERROR            97  //DDNS �������ڲ�����
#define NET_DVR_FUNCTION_NOT_SUPPORT_OS     98  //�˹��ܲ�֧�ָò���ϵͳ
#define NET_DVR_DEC_CHAN_REBIND             99  //����ͨ������ʾ�����������
#define NET_DVR_INTERCOM_SDK_ERROR          100 //���ص�ǰĿ¼�µ������Խ���ʧ��
#define NET_DVR_NO_CURRENT_UPDATEFILE       101 //û����ȷ��������
#define NET_DVR_USER_NOT_SUCC_LOGIN         102  //�û���û��½�ɹ�
#define NET_DVR_USE_LOG_SWITCH_FILE            103  //����ʹ����־�����ļ�
#define NET_DVR_POOL_PORT_EXHAUST            104  //�˿ڳ������ڰ󶨵Ķ˿��Ѻľ�
#define    NET_DVR_PACKET_TYPE_NOT_SUPPORT        105    //������װ��ʽ����
#define NET_DVR_IPPARA_IPID_ERROR           106  //IP��������ʱIPID����

#define NET_DVR_LOAD_HCPREVIEW_SDK_ERROR           107         //Ԥ���������ʧ��
#define NET_DVR_LOAD_HCVOICETALK_SDK_ERROR         108         //�����������ʧ��
#define NET_DVR_LOAD_HCALARM_SDK_ERROR             109         //�����������ʧ��
#define NET_DVR_LOAD_HCPLAYBACK_SDK_ERROR          110         //�ط��������ʧ��
#define NET_DVR_LOAD_HCDISPLAY_SDK_ERROR           111         //��ʾ�������ʧ��
#define NET_DVR_LOAD_HCINDUSTRY_SDK_ERROR          112         //��ҵӦ���������ʧ��
#define NET_DVR_LOAD_HCGENERALCFGMGR_SDK_ERROR     113         //ͨ�����ù����������ʧ��
#define NET_DVR_LOAD_HCCOREDEVCFG_SDK_ERROR        114         //�豸���ú����������ʧ��

#define NET_DVR_CORE_VER_MISMATCH                  121    //�����������ʱ�������core�汾��ƥ��
#define NET_DVR_CORE_VER_MISMATCH_HCPREVIEW        122    //Ԥ�������core�汾��ƥ��
#define NET_DVR_CORE_VER_MISMATCH_HCVOICETALK      123    //���������core�汾��ƥ��
#define NET_DVR_CORE_VER_MISMATCH_HCALARM          124    //���������core�汾��ƥ��
#define NET_DVR_CORE_VER_MISMATCH_HCPLAYBACK       125    //�ط������core�汾��ƥ��
#define NET_DVR_CORE_VER_MISMATCH_HCDISPLAY        126    //��ʾ�����core�汾��ƥ��
#define NET_DVR_CORE_VER_MISMATCH_HCINDUSTRY       127    //��ҵӦ�������core�汾��ƥ��
#define NET_DVR_CORE_VER_MISMATCH_HCGENERALCFGMGR  128    //ͨ�����ù��������core�汾��ƥ��

#define NET_DVR_COM_VER_MISMATCH_HCPREVIEW         136    //Ԥ�������HCNetSDK�汾��ƥ��
#define NET_DVR_COM_VER_MISMATCH_HCVOICETALK       137    //���������HCNetSDK�汾��ƥ��
#define NET_DVR_COM_VER_MISMATCH_HCALARM           138    //���������HCNetSDK�汾��ƥ��
#define NET_DVR_COM_VER_MISMATCH_HCPLAYBACK        139    //�ط������HCNetSDK�汾��ƥ��
#define NET_DVR_COM_VER_MISMATCH_HCDISPLAY         140    //��ʾ�����HCNetSDK�汾��ƥ��
#define NET_DVR_COM_VER_MISMATCH_HCINDUSTRY        141    //��ҵӦ�������HCNetSDK�汾��ƥ��
#define NET_DVR_COM_VER_MISMATCH_HCGENERALCFGMGR   142    //ͨ�����ù��������HCNetSDK�汾��ƥ��

#define NET_DVR_ALIAS_DUPLICATE                150    //�����ظ�  //2011-08-31 ͨ�������������к��������豸���°汾ddns������
#define    NET_DVR_INVALID_COMMUNICATION        151    //��Чͨ��
#define    NET_DVR_USERNAME_NOT_EXIST            152    //�û��������ڣ��û��������ڣ�IPC5.1.7�з�����ȥ�ˣ�����ɾ�����������Ĳ�Ʒ����������ò��ϣ�
#define    NET_DVR_USER_LOCKED                    153 //�û�������
#define NET_DVR_INVALID_USERID              154 //��Ч�û�ID
#define NET_DVR_LOW_LOGIN_VERSION           155 //��¼�汾��
#define NET_DVR_LOAD_LIBEAY32_DLL_ERROR     156 //����libeay32.dll��ʧ��
#define NET_DVR_LOAD_SSLEAY32_DLL_ERROR     157 //����ssleay32.dll��ʧ��
#define NET_ERR_LOAD_LIBICONV           158 //����libiconv��ʧ��

#define NET_DVR_SERVER_NOT_EXIST         164 //��Ӧ�ķ������Ҳ���,����ʱ����Ĺ��ұ�Ż��߷��������ʹ���
#define NET_DVR_TEST_SERVER_FAIL_CONNECT            165    //���Ӳ��Է�����ʧ��
#define NET_DVR_NAS_SERVER_INVALID_DIR                166    //NAS����������Ŀ¼ʧ�ܣ�Ŀ¼��Ч
#define NET_DVR_NAS_SERVER_NOENOUGH_PRI                167    //NAS����������Ŀ¼ʧ�ܣ�û��Ȩ��
#define NET_DVR_EMAIL_SERVER_NOT_CONFIG_DNS            168    //������ʹ������������û������DNS���������������Ч��
#define    NET_DVR_EMAIL_SERVER_NOT_CONFIG_GATEWAY        169    //û���������أ�������ɷ����ʼ�ʧ�ܡ�
#define    NET_DVR_TEST_SERVER_PASSWORD_ERROR            170    //�û������벻��ȷ�����Է��������û������������
#define    NET_DVR_EMAIL_SERVER_CONNECT_EXCEPTION_WITH_SMTP    171    //�豸��smtp�����������쳣
#define    NET_DVR_FTP_SERVER_FAIL_CREATE_DIR            172    //FTP����������Ŀ¼ʧ��
#define    NET_DVR_FTP_SERVER_NO_WRITE_PIR                173    //FTP������û��д��Ȩ��
#define    NET_DVR_IP_CONFLICT                            174    //IP��ͻ
#define NET_DVR_INSUFFICIENT_STORAGEPOOL_SPACE      175  //�洢�ؿռ�����
#define NET_DVR_STORAGEPOOL_INVALID      176  //�Ʒ������洢����Ч,û�����ô洢�ػ��ߴ洢��ID����
#define NET_DVR_EFFECTIVENESS_REBOOT     177  //��Ч��Ҫ����
#define NET_ERR_ANR_ARMING_EXIST         178  //�����������������Ѿ�����(�ô���������HIK˽�в������ӽ���������£��ظ������Ķ�����������ʱ�����ء�)
#define NET_ERR_UPLOADLINK_EXIST         179  //���������ϴ������Ѿ�����(EHOMEЭ���HIK SDKЭ���ǲ���ͬʱ֧�ֶ��������ģ���һ��Э����ڵ�ʱ������һ�����ӽ�������������������롣)
#define NET_ERR_INCORRECT_FILE_FORMAT    180  //�����ļ���ʽ����ȷ
#define NET_ERR_INCORRECT_FILE_CONTENT   181  //�����ļ����ݲ���ȷ
#define NET_ERR_MAX_HRUDP_LINK           182 //HRUDP ������ �����豸����
// 2010-5-28
// ���д�����
#define RAID_ERROR_INDEX                    200
#define NET_DVR_NAME_NOT_ONLY               (RAID_ERROR_INDEX + 0)  // �����Ѵ���
#define NET_DVR_OVER_MAX_ARRAY              (RAID_ERROR_INDEX + 1 ) // ���дﵽ����
#define NET_DVR_OVER_MAX_VD                 (RAID_ERROR_INDEX + 2 ) // ������̴ﵽ����
#define NET_DVR_VD_SLOT_EXCEED              (RAID_ERROR_INDEX + 3 ) // ������̲�λ����
#define NET_DVR_PD_STATUS_INVALID           (RAID_ERROR_INDEX + 4 ) // �ؽ����������������״̬����
#define NET_DVR_PD_BE_DEDICATE_SPARE        (RAID_ERROR_INDEX + 5 ) // �ؽ����������������Ϊָ���ȱ�
#define NET_DVR_PD_NOT_FREE                 (RAID_ERROR_INDEX + 6 ) // �ؽ���������������̷ǿ���
#define NET_DVR_CANNOT_MIG2NEWMODE          (RAID_ERROR_INDEX + 7 ) // ���ܴӵ�ǰ����������Ǩ�Ƶ��µ���������
#define NET_DVR_MIG_PAUSE                   (RAID_ERROR_INDEX + 8 ) // Ǩ�Ʋ�������ͣ
#define NET_DVR_MIG_CANCEL                  (RAID_ERROR_INDEX + 9 ) // ����ִ�е�Ǩ�Ʋ�����ȡ��
#define NET_DVR_EXIST_VD                    (RAID_ERROR_INDEX + 10) // �����������ϴ���������̣��޷�ɾ������
#define NET_DVR_TARGET_IN_LD_FUNCTIONAL     (RAID_ERROR_INDEX + 11) // �����������Ϊ���������ɲ����ҹ�������
#define NET_DVR_HD_IS_ASSIGNED_ALREADY      (RAID_ERROR_INDEX + 12) // ָ����������̱�����Ϊ�������
#define NET_DVR_INVALID_HD_COUNT            (RAID_ERROR_INDEX + 13) // �������������ָ����RAID�ȼ���ƥ��
#define NET_DVR_LD_IS_FUNCTIONAL            (RAID_ERROR_INDEX + 14) // �����������޷��ؽ�
#define NET_DVR_BGA_RUNNING                 (RAID_ERROR_INDEX + 15) // ��������ִ�еĺ�̨����
#define NET_DVR_LD_NO_ATAPI                 (RAID_ERROR_INDEX + 16) // �޷���ATAPI�̴����������
#define NET_DVR_MIGRATION_NOT_NEED          (RAID_ERROR_INDEX + 17) // ��������Ǩ��
#define NET_DVR_HD_TYPE_MISMATCH            (RAID_ERROR_INDEX + 18) // ������̲�����ͬ������
#define NET_DVR_NO_LD_IN_DG                 (RAID_ERROR_INDEX + 19) // ��������̣��޷����д������
#define NET_DVR_NO_ROOM_FOR_SPARE           (RAID_ERROR_INDEX + 20) // ���̿ռ��С���޷���ָ��Ϊ�ȱ���
#define NET_DVR_SPARE_IS_IN_MULTI_DG        (RAID_ERROR_INDEX + 21) // �����ѱ�����Ϊĳ�����ȱ���
#define NET_DVR_DG_HAS_MISSING_PD           (RAID_ERROR_INDEX + 22) // ����ȱ����

// x86 64bit nvr���� 2012-02-04
#define NET_DVR_NAME_EMPTY                    (RAID_ERROR_INDEX + 23) /*����Ϊ��*/
#define NET_DVR_INPUT_PARAM                    (RAID_ERROR_INDEX + 24) /*�����������*/
#define NET_DVR_PD_NOT_AVAILABLE            (RAID_ERROR_INDEX + 25) /*������̲�����*/
#define NET_DVR_ARRAY_NOT_AVAILABLE            (RAID_ERROR_INDEX + 26) /*���в�����*/
#define NET_DVR_PD_COUNT                    (RAID_ERROR_INDEX + 27) /*�������������ȷ*/
#define NET_DVR_VD_SMALL                    (RAID_ERROR_INDEX + 28) /*�������̫С*/
#define NET_DVR_NO_EXIST                    (RAID_ERROR_INDEX + 29) /*������*/
#define NET_DVR_NOT_SUPPORT                    (RAID_ERROR_INDEX + 30) /*��֧�ָò���*/
#define NET_DVR_NOT_FUNCTIONAL                 (RAID_ERROR_INDEX + 31) /*����״̬��������״̬*/
#define NET_DVR_DEV_NODE_NOT_FOUND            (RAID_ERROR_INDEX + 32) /*��������豸�ڵ㲻����*/
#define NET_DVR_SLOT_EXCEED                    (RAID_ERROR_INDEX + 33) /*��λ�ﵽ����*/
#define NET_DVR_NO_VD_IN_ARRAY                (RAID_ERROR_INDEX + 34) /*�����ϲ������������*/
#define NET_DVR_VD_SLOT_INVALID                (RAID_ERROR_INDEX + 35) /*������̲�λ��Ч*/
#define NET_DVR_PD_NO_ENOUGH_SPACE            (RAID_ERROR_INDEX + 36) /*����������̿ռ䲻��*/
#define NET_DVR_ARRAY_NONFUNCTION            (RAID_ERROR_INDEX + 37) /*ֻ�д�������״̬�����в��ܽ���Ǩ��*/
#define NET_DVR_ARRAY_NO_ENOUGH_SPACE        (RAID_ERROR_INDEX + 38) /*���пռ䲻��*/
#define NET_DVR_STOPPING_SCANNING_ARRAY        (RAID_ERROR_INDEX + 39) /*����ִ�а�ȫ���̻�����ɨ��*/
#define NET_DVR_NOT_SUPPORT_16T             (RAID_ERROR_INDEX + 40) /*��֧�ִ�������16T������*/
#define NET_DVR_ARRAY_FORMATING             (RAID_ERROR_INDEX + 41) /*����ִ�и�ʽ���������޷�ɾ��*/
#define NET_DVR_QUICK_SETUP_PD_COUNT        (RAID_ERROR_INDEX + 42) /*һ������������Ҫ���������*/

//�豸δ����ʱ����¼ʧ�ܣ����ش�����
#define    NET_DVR_ERROR_DEVICE_NOT_ACTIVATED    250//�豸δ����
//��SDK�����豸�������û�������߼����ʱ��Ϊ��������ʱ��������
#define  NET_DVR_ERROR_RISK_PASSWORD          251 //�з��յ�����
//�Ѽ�����豸���ٴμ���ʱ���ش�����
#define    NET_DVR_ERROR_DEVICE_HAS_ACTIVATED    252//�豸�Ѽ���


// ���ܴ�����
#define VCA_ERROR_INDEX                     300 // ���ܴ���������
#define NET_DVR_ID_ERROR                    (VCA_ERROR_INDEX + 0)   // ����ID������
#define NET_DVR_POLYGON_ERROR               (VCA_ERROR_INDEX + 1)   // ����β�����Ҫ��
#define NET_DVR_RULE_PARAM_ERROR            (VCA_ERROR_INDEX + 2)   // �������������
#define NET_DVR_RULE_CFG_CONFLICT           (VCA_ERROR_INDEX + 3)   // ������Ϣ��ͻ
#define NET_DVR_CALIBRATE_NOT_READY         (VCA_ERROR_INDEX + 4)   // ��ǰû�б궨��Ϣ
#define NET_DVR_CAMERA_DATA_ERROR           (VCA_ERROR_INDEX + 5)   // ���������������
#define NET_DVR_CALIBRATE_DATA_UNFIT        (VCA_ERROR_INDEX + 6)    // ���Ȳ�����б�������ڱ궨
#define NET_DVR_CALIBRATE_DATA_CONFLICT     (VCA_ERROR_INDEX + 7)    // �궨������Ϊ���е㹲�߻���λ��̫����
#define NET_DVR_CALIBRATE_CALC_FAIL         (VCA_ERROR_INDEX + 8)    // ������궨����ֵ����ʧ��
#define    NET_DVR_CALIBRATE_LINE_OUT_RECT        (VCA_ERROR_INDEX + 9)    // ����������궨�߳�����������Ӿ��ο�
#define NET_DVR_ENTER_RULE_NOT_READY        (VCA_ERROR_INDEX + 10)    // û�����ý�������
#define NET_DVR_AID_RULE_NO_INCLUDE_LANE    (VCA_ERROR_INDEX + 11)    // ��ͨ�¼�������û�а�����������ֵӵ�º����У�
#define NET_DVR_LANE_NOT_READY                (VCA_ERROR_INDEX + 12)    // ��ǰû�����ó���
#define NET_DVR_RULE_INCLUDE_TWO_WAY        (VCA_ERROR_INDEX + 13)    // �¼������а���2�ֲ�ͬ����
#define NET_DVR_LANE_TPS_RULE_CONFLICT      (VCA_ERROR_INDEX + 14)  // ���������ݹ����ͻ
#define NET_DVR_NOT_SUPPORT_EVENT_TYPE      (VCA_ERROR_INDEX + 15)  // ��֧�ֵ��¼�����
#define NET_DVR_LANE_NO_WAY                 (VCA_ERROR_INDEX + 16)  // ����û�з���
#define NET_DVR_SIZE_FILTER_ERROR           (VCA_ERROR_INDEX + 17)  // �ߴ���˿򲻺���
#define NET_DVR_LIB_FFL_NO_FACE             (VCA_ERROR_INDEX + 18) // �����㶨λʱ�����ͼ��û������
#define NET_DVR_LIB_FFL_IMG_TOO_SMALL       (VCA_ERROR_INDEX + 19) // �����㶨λʱ�����ͼ��̫С
#define NET_DVR_LIB_FD_IMG_NO_FACE          (VCA_ERROR_INDEX + 20) // ����ͼ���������ʱ�����ͼ��û������
#define NET_DVR_LIB_FACE_TOO_SMALL          (VCA_ERROR_INDEX + 21) // ��ģʱ����̫С
#define NET_DVR_LIB_FACE_QUALITY_TOO_BAD    (VCA_ERROR_INDEX + 22) // ��ģʱ����ͼ������̫��
#define NET_DVR_KEY_PARAM_ERR               (VCA_ERROR_INDEX + 23) //�߼��������ô���
#define NET_DVR_CALIBRATE_DATA_ERR          (VCA_ERROR_INDEX + 24) //�궨������Ŀ���󣬻�����ֵ���󣬻������㳬����ƽ��
#define NET_DVR_CALIBRATE_DISABLE_FAIL      (VCA_ERROR_INDEX + 25) //�����ù�������ȡ���궨
#define NET_DVR_VCA_LIB_FD_SCALE_OUTRANGE   (VCA_ERROR_INDEX + 26) //�����˿�Ŀ����Сֵ������С���˿�Ŀ�����ֵ��������
#define NET_DVR_LIB_FD_REGION_TOO_LARGE     (VCA_ERROR_INDEX + 27) //��ǰ�������Χ���󡣼�������Ϊͼ���2/3
#define NET_DVR_TRIAL_OVERDUE               (VCA_ERROR_INDEX + 28) //���ð��������ѽ���
#define NET_DVR_CONFIG_FILE_CONFLICT        (VCA_ERROR_INDEX + 29) //�豸�����������ļ���ͻ�����ܹ����������з��������ò�����������ʾ��
//�㷨����ش�����
#define NET_DVR_FR_FPL_FAIL                 (VCA_ERROR_INDEX + 30)   // ���������㶨λʧ��
#define NET_DVR_FR_IQA_FAIL                 (VCA_ERROR_INDEX + 31)   // ��������ʧ��
#define NET_DVR_FR_FEM_FAIL                 (VCA_ERROR_INDEX + 32)   // ����������ȡʧ��
#define NET_DVR_FPL_DT_CONF_TOO_LOW         (VCA_ERROR_INDEX + 33)   // �����㶨λʱ����������Ŷȹ���
#define NET_DVR_FPL_CONF_TOO_LOW            (VCA_ERROR_INDEX + 34)   // �����㶨λ���Ŷȹ���
#define NET_DVR_E_DATA_SIZE                 (VCA_ERROR_INDEX + 35)  // ���ݳ��Ȳ�ƥ��
#define NET_DVR_FR_MODEL_VERSION_ERR        (VCA_ERROR_INDEX + 36)  // ����ģ�������е�ģ�Ͱ汾����
#define NET_DVR_FR_FD_FAIL                  (VCA_ERROR_INDEX + 37)  // ʶ������������ʧ��
#define NET_DVR_FA_NORMALIZE_ERR            (VCA_ERROR_INDEX + 38)  // ������һ������
//����������
#define NET_DVR_DOG_PUSTREAM_NOT_MATCH      (VCA_ERROR_INDEX + 39)  // ���ܹ���ǰ��ȡ���豸���Ͳ�ƥ��
#define NET_DVR_DEV_PUSTREAM_NOT_MATCH      (VCA_ERROR_INDEX + 40)  // ǰ��ȡ���豸�汾��ƥ��
#define NET_DVR_PUSTREAM_ALREADY_EXISTS     (VCA_ERROR_INDEX + 41)  // �豸������ͨ���Ѿ���ӹ���ǰ���豸
#define NET_DVR_SEARCH_CONNECT_FAILED       (VCA_ERROR_INDEX + 42)  // ���Ӽ���������ʧ��
#define NET_DVR_INSUFFICIENT_DISK_SPACE     (VCA_ERROR_INDEX + 43)  // �ɴ洢��Ӳ�̿ռ䲻��
#define NET_DVR_DATABASE_CONNECTION_FAILED  (VCA_ERROR_INDEX + 44)  // ���ݿ�����ʧ��
#define NET_DVR_DATABASE_ADM_PW_ERROR       (VCA_ERROR_INDEX + 45)  // ���ݿ��û������������
#define NET_DVR_DECODE_YUV                  (VCA_ERROR_INDEX + 46)  // ����ʧ��
#define NET_DVR_IMAGE_RESOLUTION_ERROR      (VCA_ERROR_INDEX + 47)  //
#define NET_DVR_CHAN_WORKMODE_ERROR         (VCA_ERROR_INDEX + 48)  //

#define NET_DVR_RTSP_ERROR_NOENOUGHPRI          401  //��Ȩ�ޣ�����������401ʱ��ת�����������
#define NET_DVR_RTSP_ERROR_ALLOC_RESOURCE       402  //������Դʧ��
#define NET_DVR_RTSP_ERROR_PARAMETER            403  //��������
#define NET_DVR_RTSP_ERROR_NO_URL               404  //ָ����URL��ַ�����ڣ�����������404ʱ��ת�����������
#define NET_DVR_RTSP_ERROR_FORCE_STOP           406  //�û���;ǿ���˳�

#define NET_DVR_RTSP_GETPORTFAILED                407  //rtsp �õ��˿ڴ���
#define NET_DVR_RTSP_DESCRIBERROR                410  //rtsp decribe ��������
#define NET_DVR_RTSP_DESCRIBESENDTIMEOUT        411  //rtsp decribe ���ͳ�ʱ
#define NET_DVR_RTSP_DESCRIBESENDERROR            412  //rtsp decribe ����ʧ��
#define NET_DVR_RTSP_DESCRIBERECVTIMEOUT        413  //rtsp decribe ���ճ�ʱ
#define NET_DVR_RTSP_DESCRIBERECVDATALOST        414  //rtsp decribe �������ݴ���
#define NET_DVR_RTSP_DESCRIBERECVERROR            415  //rtsp decribe ����ʧ��
#define NET_DVR_RTSP_DESCRIBESERVERERR            416  //rtsp decribe ���������ش���״̬

#define NET_DVR_RTSP_SETUPERROR                    420  //rtsp setup ��������
#define NET_DVR_RTSP_SETUPSENDTIMEOUT            421  //rtsp setup ���ͳ�ʱ
#define NET_DVR_RTSP_SETUPSENDERROR                422  //rtsp setup ���ʹ���
#define NET_DVR_RTSP_SETUPRECVTIMEOUT            423  //rtsp setup ���ճ�ʱ
#define NET_DVR_RTSP_SETUPRECVDATALOST            424  //rtsp setup �������ݴ���
#define NET_DVR_RTSP_SETUPRECVERROR                425  //rtsp setup ����ʧ��
#define NET_DVR_RTSP_OVER_MAX_CHAN                426  //������������������������߷�������Դ���㣬����������453ʱ��ת����������롣
#define NET_DVR_RTSP_SETUPSERVERERR                427  //rtsp setup ���������ش���״̬

#define NET_DVR_RTSP_PLAYERROR                    430  //rtsp play ��������
#define NET_DVR_RTSP_PLAYSENDTIMEOUT            431  //rtsp play ���ͳ�ʱ
#define NET_DVR_RTSP_PLAYSENDERROR                432  //rtsp play ���ʹ���
#define NET_DVR_RTSP_PLAYRECVTIMEOUT            433  //rtsp play ���ճ�ʱ
#define NET_DVR_RTSP_PLAYRECVDATALOST            434  //rtsp play �������ݴ���
#define NET_DVR_RTSP_PLAYRECVERROR                435  //rtsp play ����ʧ��
#define NET_DVR_RTSP_PLAYSERVERERR                436  //rtsp play ���������ش���״̬

#define NET_DVR_RTSP_TEARDOWNERROR                440  //rtsp teardown ��������
#define NET_DVR_RTSP_TEARDOWNSENDTIMEOUT        441  //rtsp teardown ���ͳ�ʱ
#define NET_DVR_RTSP_TEARDOWNSENDERROR            442  //rtsp teardown ���ʹ���
#define NET_DVR_RTSP_TEARDOWNRECVTIMEOUT        443  //rtsp teardown ���ճ�ʱ
#define NET_DVR_RTSP_TEARDOWNRECVDATALOST        444  //rtsp teardown �������ݴ���
#define NET_DVR_RTSP_TEARDOWNRECVERROR            445  //rtsp teardown ����ʧ��
#define NET_DVR_RTSP_TEARDOWNSERVERERR            446  //rtsp teardown ���������ش���״̬

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

//ת��װ�������
#define  NET_CONVERT_ERROR_NOT_SUPPORT          581  //convert not support

//�����Խ��������
#define  NET_AUDIOINTERCOM_OK                   600  //�޴���
#define  NET_AUDIOINTECOM_ERR_NOTSUPORT         601 //��֧��
#define  NET_AUDIOINTECOM_ERR_ALLOC_MEMERY      602 //�ڴ��������
#define  NET_AUDIOINTECOM_ERR_PARAMETER            603 //��������
#define  NET_AUDIOINTECOM_ERR_CALL_ORDER        604 //���ô������
#define  NET_AUDIOINTECOM_ERR_FIND_DEVICE       605 //δ�����豸
#define  NET_AUDIOINTECOM_ERR_OPEN_DEVICE       606 //���ܴ��豸��
#define  NET_AUDIOINTECOM_ERR_NO_CONTEXT        607 //�豸�����ĳ���
#define  NET_AUDIOINTECOM_ERR_NO_WAVFILE        608 //WAV�ļ�����
#define  NET_AUDIOINTECOM_ERR_INVALID_TYPE      609 //��Ч��WAV��������
#define  NET_AUDIOINTECOM_ERR_ENCODE_FAIL       610 //����ʧ��
#define  NET_AUDIOINTECOM_ERR_DECODE_FAIL       611 //����ʧ��
#define  NET_AUDIOINTECOM_ERR_NO_PLAYBACK       612 //����ʧ��
#define  NET_AUDIOINTECOM_ERR_DENOISE_FAIL      613 //����ʧ��
#define  NET_AUDIOINTECOM_ERR_UNKOWN            619 //δ֪����

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

#define NET_ERROR_TRUNK_LINE                        711 //��ϵͳ�ѱ���ɸ���
#define NET_ERROR_MIXED_JOINT                        712 //���ܽ��л��ƴ��
#define NET_ERROR_DISPLAY_SWITCH                    713 //���ܽ�����ʾͨ���л�
#define NET_ERROR_USED_BY_BIG_SCREEN                714 //������Դ������ռ��
#define NET_ERROR_USE_OTHER_DEC_RESOURCE            715 //����ʹ������������ϵͳ��Դ
#define NET_ERROR_DISP_MODE_SWITCH                  716 //��ʾͨ����ʾ״̬�л���
#define NET_ERROR_SCENE_USING                        717    //��������ʹ��
#define NET_ERR_NO_ENOUGH_DEC_RESOURCE              718 //������Դ����
#define NET_ERR_NO_ENOUGH_FREE_SHOW_RESOURCE        719 //������Դ����
#define NET_ERR_NO_ENOUGH_VIDEO_MEMORY              720 //�Դ���Դ����
#define NET_ERR_MAX_VIDEO_NUM                       721 //һ�϶���Դ����
#define NET_ERR_WIN_COVER_FREE_SHOW_AND_NORMAL      722 //���ڿ�Խ�˳�������ںͷǳ��������
#define NET_ERR_FREE_SHOW_WIN_SPLIT                 723 //���Դ��ڲ�֧�ַ���
#define NET_ERR_INAPPROPRIATE_WIN_FREE_SHOW         724 //����������������Ĵ��ڲ�֧�ֿ�������
#define NET_DVR_TRANSPARENT_WIN_NOT_SUPPORT_SPLIT   725 //����͸���ȵĴ��ڲ�֧�ַ���
#define NET_DVR_SPLIT_WIN_NOT_SUPPORT_TRANSPARENT   726 //����������Ĵ��ڲ�֧��͸��������
#define NET_ERR_MAX_LOGO_NUM                        727 //logo���ﵽ����
#define NET_ERR_MAX_WIN_LOOP_NUM                    728 //��Ѳ�������ﵽ����
#define NET_ERR_VIRTUAL_LED_VERTICAL_CROSS          729 //����LED�����������
#define NET_ERR_MAX_VIRTUAL_LED_HEIGHT              730 //����LED�߶ȳ���
#define NET_ERR_VIRTUAL_LED_ILLEGAL_CHARACTER       731 //����LED���ݰ����Ƿ��ַ�
#define NET_ERR_BASEMAP_NOT_EXIST                   732 //��ͼͼƬ������
#define NET_ERR_LED_NOT_SUPPORT_VIRTUAL_LED         733 //LED��Ļ��֧������LED
#define NET_ERR_LED_RESOLUTION_NOT_SUPPORT          734 //LED�ֱ��ʲ�֧��
#define NET_ERR_PLAN_OVERDUE                        735    //Ԥ�����ڣ������ٵ���
#define NET_ERR_PROCESSER_MAX_SCREEN_BLK            736 //����������������źſ�Խ����Ļ��������

#define NET_SDK_CANCEL_WND_TOPKEEP_ATTR_FIRST       751 //��ȡ���ö����ִ��ڵ��ö��������Բ��ܽ����õײ���
#define NET_SDK_ERR_LED_SCREEN_CHECKING             752 //����У��LED��Ļ
#define NET_SDK_ERR_NOT_SUPPORT_SINGLE_RESOLUTION   753 //LCD/LED����ڰ�֮��֧�ֵ�������ڵķֱ�������
#define NET_SDK_ERR_LED_RESOLUTION_MISMATCHED       754 //������ڵ�LED�ֱ��ʺ���������ڵ�LED�ֱ��ʲ�ƥ��

#define NET_ERR_TERMINAL_BUSY                        780    //�ն�æ���ն˴��ڻ�����

#define NET_ERR_DATA_RETURNED_ILLEGAL               790 //�豸���ص����ݲ��Ϸ�
#define NET_DVR_FUNCTION_RESOURCE_USAGE_ERROR       791 //�豸��������ռ����Դ�����¸ù����޷�����


#define NET_DVR_DEV_NET_OVERFLOW                    800    //�������������豸��������
#define NET_DVR_STATUS_RECORDFILE_WRITING_NOT_LOCK  801 //¼���ļ���¼���޷�������
#define NET_DVR_STATUS_CANT_FORMAT_LITTLE_DISK      802 //����Ӳ��̫С�޷���ʽ��

//N+1������
#define NET_SDK_ERR_REMOTE_DISCONNECT                803 //Զ���޷�����
#define NET_SDK_ERR_RD_ADD_RD                        804 //����������ӱ���
#define NET_SDK_ERR_BACKUP_DISK_EXCEPT                805 //�������쳣
#define NET_SDK_ERR_RD_LIMIT                        806 //�������Ѵ�����
#define NET_SDK_ERR_ADDED_RD_IS_WD                    807 //��ӵı����ǹ�����
#define NET_SDK_ERR_ADD_ORDER_WRONG                    808 //���˳���������û�б����������Ϊ����������ӹ�����
#define NET_SDK_ERR_WD_ADD_WD                        809 //������������ӹ�����
#define NET_SDK_ERR_WD_SERVICE_EXCETP                810 //������CVR�����쳣
#define NET_SDK_ERR_RD_SERVICE_EXCETP                811 //����CVR�����쳣
#define NET_SDK_ERR_ADDED_WD_IS_RD                    812 //��ӵĹ������Ǳ���
#define NET_SDK_ERR_PERFORMANCE_LIMIT                813 //���ܴﵽ����
#define NET_SDK_ERR_ADDED_DEVICE_EXIST                814 //��ӵ��豸�Ѿ�����

//��Ѷ��������
#define NET_SDK_ERR_INQUEST_RESUMING                815 //��Ѷ�ָ���
#define NET_SDK_ERR_RECORD_BACKUPING                816 //��Ѷ������
#define NET_SDK_ERR_DISK_PLAYING                    817 //���̻ط���
#define NET_SDK_ERR_INQUEST_STARTED                    818 //��Ѷ�ѿ���
#define NET_SDK_ERR_LOCAL_OPERATING                    819 //���ز���������
#define NET_SDK_ERR_INQUEST_NOT_START                820 //��Ѷδ����
//Netra3.1.0������
#define NET_SDK_ERR_CHAN_AUDIO_BIND                 821  //ͨ��δ�󶨻�������Խ�ʧ��
//�ƴ洢������
#define NET_DVR_N_PLUS_ONE_MODE                     822 //�豸��ǰ����N+1ģʽ
#define NET_DVR_CLOUD_STORAGE_OPENED                823 //�ƴ洢ģʽ�ѿ���

#define NET_DVR_ERR_OPER_NOT_ALLOWED                824   //�豸����N+0���ӹ�״̬��������ò���
#define NET_DVR_ERR_NEED_RELOCATE                    825   //�豸����N+0���ӹ�״̬����Ҫ��ȡ�ض�����Ϣ�������²���

//ͥ������������
#define NET_SDK_ERR_IR_PORT_ERROR                   830 //��������ڴ���
#define NET_SDK_ERR_IR_CMD_ERROR                    831 //��������ڵ�����Ŵ���
#define NET_SDK_ERR_NOT_INQUESTING                  832 //�豸���ڷ���Ѷ״̬
#define NET_SDK_ERR_INQUEST_NOT_PAUSED              833 //�豸���ڷ���ͣ״̬
#define NET_DVR_CHECK_PASSWORD_MISTAKE_ERROR        834 //У���������
#define NET_DVR_CHECK_PASSWORD_NULL_ERROR           835 //У�����벻��Ϊ��
#define NET_DVR_UNABLE_CALIB_ERROR                  836  // ��ǰ�޷��궨
#define NET_DVR_PLEASE_CALIB_ERROR                  837  //������ɱ궨
#define NET_DVR_ERR_PANORAMIC_CAL_EMPTY             838 //Flash��ȫ���궨Ϊ��
#define NET_DVR_ERR_CALIB_FAIL_PLEASEAGAIN          839 //�궨ʧ�ܣ������±궨(Calibration failed. Please calibrate again.)
#define NET_DVR_ERR_DETECTION_LINE                  840 //���������ô������������ù����ߣ�ȷ��������λ�ں�ɫ������(Please set detection line again. The detection line should be within the red count area.)
#define NET_DVR_ERR_TURN_OFF_IMAGE_PARA             841 //���ȹر�ͼ������л�����(Please turn off the image parameters switch first.)
#define NET_DVR_EXCEED_FACE_IMAGES_ERROR            843  //��������ͼƬ�������
#define NET_DVR_ANALYSIS_FACE_IMAGES_ERROR          844  //ͼƬ����ʶ��ʧ��
#define NET_ERR_ALARM_INPUT_OCCUPIED                845  //A<-1�����������ڴ�������ץ��Alarm Input No. A<-1 is used to trigger vehicle capture.
#define NET_DVR_FACELIB_DATABASE_ERROR              846  //�����������ݿ�汾��ƥ��
#define NET_DVR_FACELIB_DATA_ERROR                  847  //���������ݴ���
#define NET_DVR_FACE_DATA_ID_ERROR                  848  //��������PID��Ч
#define NET_DVR_FACELIB_ID_ERROR                    849  //������ID��Ч
#define NET_DVR_EXCEED_FACE_LIBARY_ERROR            850  //����������������
#define NET_DVR_PIC_ANALYSIS_NO_TARGET_ERROR           851  //ͼƬδʶ��Ŀ��
#define NET_DVR_SUBPIC_ANALYSIS_MODELING_ERROR         852  //��ͼ��ģʧ��
#define NET_DVR_PIC_ANALYSIS_NO_RESOURCE_ERROR         853  //�޶�Ӧ���ܷ�������֧��ͼƬ����ʶ��
#define NET_DVR_ANALYSIS_ENGINES_NO_RESOURCE_ERROR                 854//�޷���������Դ
#define NET_DVR_ANALYSIS_ENGINES_USAGE_EXCEED_ERROR                855//����ʹ���ʳ����ɣ��Ѵ�100%
#define NET_DVR_EXCEED_HUMANMISINFO_FILTER_ENABLED_ERROR           856  //������������ȥ�����ͨ������
#define NET_DVR_NAME_ERROR                                         857  //���ƴ���
#define NET_DVR_NAME_EXIST_ERROR                                   858  //�����Ѵ���
#define NET_DVR_FACELIB_PIC_IMPORTING_ERROR                        859  //�����⵼��ͼƬ��
#define NET_DVR_ERR_CALIB_POSITION                  860 //�궨λ�ó���������˶���Χ
#define NET_DVR_ERR_DELETE                          861 //�޷�ɾ��
#define NET_DVR_ERR_SCENE_ID                        862 //����ID��Ч
#define NET_DVR_ERR_CALIBING                        863 //�궨��
#define NET_DVR_PIC_FORMAT_ERROR                                   864  //ͼƬ��ʽ����
#define NET_DVR_PIC_RESOLUTION_INVALID_ERROR                       865  //ͼƬ�ֱ�����Ч����
#define NET_DVR_PIC_SIZE_EXCEED_ERROR                              866  //ͼƬ����
#define NET_DVR_PIC_ANALYSIS_TARGRT_NUM_EXCEED_ERROR               867  //ͼƬĿ�������������
#define NET_DVR_ANALYSIS_ENGINES_LOADING_ERROR                     868//���������ʼ����
#define NET_DVR_ANALYSIS_ENGINES_ABNORMA_ERROR                     869//���������쳣
#define NET_DVR_ANALYSIS_ENGINES_FACELIB_IMPORTING                 870//�����������ڵ���������
#define NET_DVR_NO_DATA_FOR_MODELING_ERROR         871  //�޴���ģ����
#define NET_DVR_FACE_DATA_MODELING_ERROR           872 //�豸���ڽ���ͼƬ��ģ��������֧�ֲ�������
#define NET_ERR_FACELIBDATA_OVERLIMIT              873  //�����豸��֧�ֵ������������������ƣ�����������������ݣ�
#define NET_DVR_ANALYSIS_ENGINES_ASSOCIATED_CHANNEL  874//���������ѹ���ͨ��
#define NET_DVR_ERR_CUSTOMID_LEN                     875 //�ϲ��Զ���ID�ĳ�����С32�ַ�����
#define NET_DVR_ERR_CUSTOMFACELIBID_REPEAT           876 //�ϲ��·��ظ����Զ���������ID
#define NET_DVR_ERR_CUSTOMHUMANID_REPEAT             877 //�ϲ��·��ظ����Զ�����ԱID
#define NET_DVR_ERR_URL_DOWNLOAD_FAIL                878 //url����ʧ��
#define NET_DVR_ERR_URL_DOWNLOAD_NOTSTART            879 //urlδ��ʼ����

#define NET_DVR_CFG_FILE_SECRETKEY_ERROR         880  //�����ļ���ȫУ����Կ����
#define NET_DVR_WDR_NOTDISABLE_ERROR             881  //���ȹر�����ͨ����ǰ��ҹ����ת��ģʽ�µĿ�̬
#define NET_DVR_HLC_NOTDISABLE_ERROR             882  //���ȹر�����ͨ����ǰ��ҹ����ת��ģʽ�µ�ǿ������

#define NET_DVR_THERMOMETRY_REGION_OVERSTEP_ERROR         883  //��������Խ��

//2011-10-25���������������루900-950��
#define  NET_ERR_CUT_INPUTSTREAM_OVERLIMIT           900 //�ź�Դ�ü���ֵ����
#define  NET_ERR_WINCHAN_IDX                        901    // ����ͨ���Ŵ���
#define  NET_ERR_WIN_LAYER                            902    // ���ڲ������󣬵�����Ļ����า�ǵĴ��ڲ���
#define  NET_ERR_WIN_BLK_NUM                        903    // ���ڵĿ������󣬵������ڿɸ��ǵ���Ļ����
#define  NET_ERR_OUTPUT_RESOLUTION                    904    // ����ֱ��ʴ���
#define  NET_ERR_LAYOUT                                905    // ���ֺŴ���
#define  NET_ERR_INPUT_RESOLUTION                    906 // ����ֱ��ʲ�֧��
#define  NET_ERR_SUBDEVICE_OFFLINE                  907 // ���豸������
#define  NET_ERR_NO_DECODE_CHAN                     908 // û�п��н���ͨ��
#define  NET_ERR_MAX_WINDOW_ABILITY                 909 // ������������, �ֲ�ʽ�����������н������豸�������޻�����ʾ�������������޵���
#define  NET_ERR_ORDER_ERROR                        910 // ����˳������
#define  NET_ERR_PLAYING_PLAN                        911 // ����ִ��Ԥ��
#define  NET_ERR_DECODER_USED                        912 // ���������ʹ��
#define     NET_ERR_OUTPUT_BOARD_DATA_OVERFLOW            913    // ���������������
#define     NET_ERR_SAME_USER_NAME                        914    // �û�����ͬ
#define     NET_ERR_INVALID_USER_NAME                    915    // ��Ч�û���
#define     NET_ERR_MATRIX_USING                        916    // �����������ʹ��
#define     NET_ERR_DIFFERENT_CHAN_TYPE                917    // ͨ�����Ͳ�ͬ���������ͨ���Ϳ�����������Ϊ��ͬ�����ͣ�
#define     NET_ERR_INPUT_CHAN_BINDED                    918    // ����ͨ���Ѿ������������
#define     NET_ERR_BINDED_OUTPUT_CHAN_OVERFLOW        919    // ����ʹ�õľ������ͨ����������������������󶨵�ͨ������
#define     NET_ERR_MAX_SIGNAL_NUM                        920    // �����ź�Դ�����ﵽ����
#define  NET_ERR_INPUT_CHAN_USING                    921    // ����ͨ������ʹ��
#define  NET_ERR_MANAGER_LOGON                         922    // ����Ա�Ѿ���½������ʧ��
#define  NET_ERR_USERALREADY_LOGON                     923    // ���û��Ѿ���½������ʧ��
#define  NET_ERR_LAYOUT_INIT                         924    // �������ڳ�ʼ��������ʧ��
#define     NET_ERR_BASEMAP_SIZE_NOT_MATCH                925    // ��ͼ��С����
#define  NET_ERR_WINDOW_OPERATING                    926    // ��������ִ���������������β���ʧ��
#define  NET_ERR_SIGNAL_UPLIMIT                        927 // �ź�Դ���������ﵽ����
#define  NET_ERR_SIGNAL_MAX_ENLARGE_TIMES           928 // �ź�Դ�Ŵ�������
#define  NET_ERR_ONE_SIGNAL_MULTI_CROSS             929 // �����ź�Դ���ܶ�ο���
#define  NET_ERR_ULTRA_HD_SIGNAL_MULTI_WIN          930 // �������ź�Դ�����ظ�����
#define  NET_ERR_MAX_VIRTUAL_LED_WIDTH              931 //����LED��ȴ�������ֵ
#define  NET_ERR_MAX_VIRTUAL_LED_WORD_LEN           932 //����LED�ַ�����������ֵ
#define     NET_ERR_SINGLE_OUTPUTPARAM_CONFIG            933//��֧�ֵ�����ʾ�����������
#define  NET_ERR_MULTI_WIN_BE_COVER                 934//��������ڱ�����
#define  NET_ERR_WIN_NOT_EXIST                        935 //���ڲ�����
#define  NET_ERR_WIN_MAX_SIGNALSOURCE                936//�����ź�Դ����������ֵ
#define  NET_ERR_MULTI_WIN_MOVE                        937//�Զ���������ƶ�
#define  NET_ERR_MULTI_WIN_YPBPR_SDI                938 // YPBPR ��SDI�ź�Դ��֧��9/16����
#define  NET_ERR_DIFF_TYPE_OUTPUT_MIXUSE            939  //��ͬ�����������
#define  NET_ERR_SPLIT_WIN_CROSS                    940//�Կ������ڷ���
#define  NET_ERR_SPLIT_WIN_NOT_FULL_SCREEN            941  //��δ�������ڷ���
#define  NET_ERR_SPLIT_WIN_MANY_WIN                    942  //�Ե�����������ж�����ڵĴ��ڷ���
#define  NET_ERR_WINDOW_SIZE_OVERLIMIT              943   //���ڴ�С����
#define  NET_ERR_INPUTSTREAM_ALREADY_JOINT           944    //�ź�Դ�Ѽ���ƴ��
#define  NET_ERR_JOINT_INPUTSTREAM_OVERLIMIT          945    //ƴ���ź�Դ��������

#define  NET_ERR_LED_RESOLUTION                        946  //LED �ֱ��ʴ�������ֱ���
#define  NET_ERR_JOINT_SCALE_OVERLIMIT              947  //ƴ���ź�Դ�Ĺ�ģ����
#define  NET_ERR_INPUTSTREAM_ALREADY_DECODE            948  //�ź�Դ����ǽ
#define  NET_ERR_INPUTSTREAM_NOTSUPPORT_CAPTURE     949  //�ź�Դ��֧��ץͼ
#define  NET_ERR_JOINT_NOTSUPPORT_SPLITWIN            950  //ƴ���ź�Դ��֧�ַ���

//�����������루951-999��
#define NET_ERR_MAX_WIN_OVERLAP                        951 //�ﵽ��󴰿��ص���
#define NET_ERR_STREAMID_CHAN_BOTH_VALID            952 //stream ID��ͨ����ͬʱ��Ч
#define NET_ERR_NO_ZERO_CHAN                        953 //�豸����ͨ��
#define NEED_RECONNECT                                955 //��Ҫ�ض���ת����ϵͳʹ�ã�
#define NET_ERR_NO_STREAM_ID                        956 //��ID������
#define NET_DVR_TRANS_NOT_START                        957 //ת��δ����
#define NET_ERR_MAXNUM_STREAM_ID                    958 //��ID���ﵽ����
#define NET_ERR_WORKMODE_MISMATCH                    959 //����ģʽ��ƥ��
#define NET_ERR_MODE_IS_USING                        960 //�ѹ����ڵ�ǰģʽ
#define NET_ERR_DEV_PROGRESSING                        961 //�豸���ڴ�����
#define NET_ERR_PASSIVE_TRANSCODING                    962 //���ڱ���ת��

#define NET_ERR_RING_NOT_CONFIGURE                   964 //����δ����

#define NET_ERR_CLOSE_WINDOW_FIRST                    971  //�л�ȫ֡�ʳ���ʱ�����ȹرն�Ӧ������ǽ�Ĵ���
#define NET_ERR_SPLIT_WINDOW_NUM_NOT_SUPPORT        972  //VGA/DVI/DP/HDMI/HDBase_T����Դ��ȫ֡�ʳ����²�֧��9/16����
#define NET_ERR_REACH_ONE_SIGNAL_PREVIEW_MAX_LINK   973  //���ź�Դ����������������
#define NET_ERR_ONLY_SPLITWND_SUPPORT_AMPLIFICATION  974  //ֻ�з�������֧���Ӵ��ڷŴ�
#define NET_DVR_ERR_WINDOW_SIZE_PLACE  975  //����λ�ô���
#define NET_DVR_ERR_RGIONAL_RESTRICTIONS  976  //��Ļ���볬��
#define NET_ERR_WNDZOOM_NOT_SUPPORT  977  //�����ڲ�֧���Ӵ���ȫ������
#define NET_ERR_LED_SCREEN_SIZE  978  //LED����߲���ȷ
#define NET_ERR_OPEN_WIN_IN_ERROR_AREA  979  //�ڷǷ����򿪴�(������LCD/LED��)
#define NET_ERR_TITLE_WIN_NOT_SUPPORT_MOVE  980  //ƽ��ģʽ��֧������
#define NET_ERR_TITLE_WIN_NOT_SUPPORT_COVER  981  //ƽ��ģʽ��֧��ͼ�㸲��
#define NET_ERR_TITLE_WIN_NOT_SUPPORT_SPLIT  982  //ƽ��ģʽ��֧�ַ���
#define NET_DVR_LED_WINDOWS_ALREADY_CLOSED  983  //LED����������ڵķֱ��ʷ����仯���豸�ѹرո������ڵ�����LED����
#define NET_DVR_ERR_CLOSE_WINDOWS  984  //����ʧ�ܣ����ȹرմ���
#define NET_DVR_ERR_MATRIX_LOOP_ABILITY            985 //������Ѳ������������
#define NET_DVR_ERR_MATRIX_LOOP_TIME           986 //��Ѳ����ʱ�䲻֧��
#define NET_DVR_ERR_LINKED_OUT_ABILITY           987 //����ͨ������������
#define NET_ERR_REACH_SCENE_MAX_NUM         988 //���������ﵽ����
#define NET_ERR_SCENE_MEM_NOT_ENOUGH        989 //�ڴ治�㣬�޷��½�����
#define NET_ERR_RESOLUTION_NOT_SUPPORT_ODD_VOUT     990     //��ڲ�֧�ָ÷ֱ���
#define NET_ERR_RESOLUTION_NOT_SUPPORT_EVEN_VOUT    991     //ż�ڲ�֧�ָ÷ֱ���

#define NET_DVR_CANCEL_WND_OPENKEEP_ATTR_FIRST    992     //����������Ҫ��ȡ���������Բ��ܱ��ر�
#define NET_SDK_LED_MODE_NOT_SUPPORT_SPLIT        993     //LEDģʽ�²�֧�ִ��ڷ���

//�����������������
#define XML_ABILITY_NOTSUPPORT                      1000  //��֧�������ڵ��ȡ
#define    XML_ANALYZE_NOENOUGH_BUF                    1001        //����ڴ治��
#define    XML_ANALYZE_FIND_LOCALXML_ERROR                1002        //�޷��ҵ���Ӧ�ı���xml
#define    XML_ANALYZE_LOAD_LOCALXML_ERROR                1003        //���ر���xml����
#define    XML_NANLYZE_DVR_DATA_FORMAT_ERROR            1004        //�豸�������ݸ�ʽ����
#define    XML_ANALYZE_TYPE_ERROR                        1005        //���������ʹ���
#define    XML_ANALYZE_XML_NODE_ERROR                    1006        //XML�����ڵ��ʽ����
#define XML_INPUT_PARAM_ERROR                       1007  //���������XML�ڵ�ֵ����

#define NET_DVR_ERR_RETURNED_XML_DATA  1008  //�豸���ص�XML��������

//���Դ�����
#define NET_ERR_LEDAREA_EXIST_WINDOW        1051 //LED�����д��ڴ���(���LED�������Ѿ��д��ڴ��ڣ��������޸�LED����
#define NET_ERR_AUDIO_EXIST                 1052 //������ϴ�����Ƶ���������������
#define NET_ERR_MATERIAL_NAME_EXIST                1053 //�ز������Ѵ���
#define NET_ERR_MATERIAL_APPROVE_STATE             1054 //�ز����״̬����
#define NET_ERR_DATAHD_SIGNAL_FORMAT               1055 //��ʹ�õ�Ӳ�̲���������ʽ��


//���ô����루1100��1200��
#define NET_ERR_PLT_USERID                          1100 //��֤ƽ̨userid����
#define NET_ERR_TRANS_CHAN_START                    1101 //͸��ͨ���Ѵ򿪣���ǰ�����޷����
#define NET_ERR_DEV_UPGRADING                        1102 //�豸��������
#define NET_ERR_MISMATCH_UPGRADE_PACK_TYPE          1103 //���������Ͳ�ƥ��
#define NET_ERR_DEV_FORMATTING                      1104 //�豸���ڸ�ʽ��
#define NET_ERR_MISMATCH_UPGRADE_PACK_VERSION       1105 //�������汾��ƥ��
#define NET_ERR_PT_LOCKED                           1106 //PT��������

#define NET_DVR_LOGO_OVERLAY_WITHOUT_UPLOAD_PIC     1110 //logo����ʧ�ܣ�û���ϴ�logoͼƬ
#define NET_DVR_ERR_ILLEGAL_VERIFICATION_CODE        1111 //���Ϸ���֤��
#define NET_DVR_ERR_LACK_VERIFICATION_CODE            1112 //ȱ����֤��
#define NET_DVR_ERR_FORBIDDEN_IP                    1113 //��IP��ַ�ѱ���ֹ������������(�豸֧�ֵ�IP��ַ���˹���)

//2012-10-16 �����豸�����루1200~1300��
#define NET_ERR_SEARCHING_MODULE                    1201 // �����������ģ��
#define NET_ERR_REGISTERING_MODULE                  1202 // ����ע�����ģ��
#define NET_ERR_GETTING_ZONES                        1203 // ���ڻ�ȡ��������
#define NET_ERR_GETTING_TRIGGERS                    1204 // ���ڻ�ȡ������
#define NET_ERR_ARMED_STATUS                        1205 // ϵͳ���ڲ���״̬
#define    NET_ERR_PROGRAM_MODE_STATUS                    1206 // ϵͳ���ڱ��ģʽ
#define    NET_ERR_WALK_TEST_MODE_STATUS                1207 // ϵͳ���ڲ���ģʽ
#define    NET_ERR_BYPASS_STATUS                        1208 // ��·״̬
#define NET_ERR_DISABLED_MODULE_STATUS                1209 // ����δʹ��
#define    NET_ERR_NOT_SUPPORT_OPERATE_ZONE            1210 // ������֧�ָò���
#define NET_ERR_NOT_SUPPORT_MOD_MODULE_ADDR            1211 // ģ���ַ���ܱ��޸�
#define NET_ERR_UNREGISTERED_MODULE                    1212 // ģ��δע��
#define NET_ERR_PUBLIC_SUBSYSTEM_ASSOCIATE_SELF        1213 // ������ϵͳ��������
#define NET_ERR_EXCEEDS_ASSOCIATE_SUBSYSTEM_NUM        1214 // ����������ϵͳ����������
#define NET_ERR_BE_ASSOCIATED_BY_PUBLIC_SUBSYSTEM    1215 // ��ϵͳ������������ϵͳ����
#define    NET_ERR_ZONE_FAULT_STATUS                    1216 // �������ڹ���״̬
#define NET_ERR_SAME_EVENT_TYPE                    1217 // �¼�������������������¼�������������ر�������ͬ�¼�����
#define NET_ERR_ZONE_ALARM_STATUS                    1218 // �������ڱ���״̬
#define NET_ERR_EXPANSION_BUS_SHORT_CIRCUIT            1219 //��չ���߶�·
#define NET_ERR_PWD_CONFLICT                        1220  //�����ͻ
#define NET_ERR_DETECTOR_GISTERED_BY_OTHER_ZONE     1221    //̽�����ѱ���������ע��
#define NET_ERR_DETECTOR_GISTERED_BY_OTHER_PU       1222    //̽�����ѱ���������ע��
#define NET_ERR_DETECTOR_DISCONNECT                 1223    //̽����������
#define NET_ERR_CALL_BUSY                           1224    //�豸����ͨ����
//��Ϣ��������
#define NET_ERR_GET_ALL_RETURN_OVER                    1300  //��ȡ���з�����Ŀ����
#define NET_ERR_RESOURCE_USING                      1301  //��Ϣ������Դ����ʹ�ã������޸�
#define NET_ERR_FILE_SIZE_OVERLIMIT                    1302  //�ļ���С����

//��Ϣ����������������
#define NET_ERR_MATERIAL_NAME                       1303  //�ز����ƷǷ�
#define NET_ERR_MATERIAL_NAME_LEN                   1304  //�ز����Ƴ��ȷǷ�
#define NET_ERR_MATERIAL_REMARK                     1305  //�ز������Ƿ�
#define NET_ERR_MATERIAL_REMARK_LEN                 1306  //�ز��������ȷǷ�
#define NET_ERR_MATERIAL_SHARE_PROPERTY             1307  //�زĹ������ԷǷ�
#define NET_ERR_UNSUPPORT_MATERIAL_TYPE             1308  //�ز����Ͳ�֧��
#define NET_ERR_MATERIAL_NOT_EXIST                  1309  //�زĲ�����
#define NET_ERR_READ_FROM_DISK                      1310  //��Ӳ�̶�ȡ�ز��ļ�ʧ��
#define NET_ERR_WRITE_TO_DISK                       1311  //��Ӳ��д�ز��ļ�ʧ��
#define NET_ERR_WRITE_DATA_BASE                     1312  //�ز�д���ݿ�ʧ��

//��������������
#define    NET_ERR_MAX_SCREEN_CTRL_NUM                    1351    //��Ļ�����������ﵽ����
#define    NET_ERR_FILE_NOT_EXIST                        1352    //�ļ�������
#define NET_ERR_THUMBNAIL_NOT_EXIST                    1353    //����ͼ������
#define NET_ERR_DEV_OPEN_FILE_FAIL                    1354    //�豸�˴��ļ�ʧ��
#define NET_ERR_SERVER_READ_FILE_FAIL                1355    //�豸�˶�ȡ�ļ�ʧ��
#define NET_ERR_FILE_SIZE                            1356    //�ļ���С����
#define    NET_ERR_FILE_NAME                            1357    //�ļ����ƴ���Ϊ�ջ򲻺Ϸ�

//�ֶδ����루1351-1400��
#define NET_ERR_BROADCAST_BUSY                     1358     //�豸���ڹ㲥��

//2012-12-20ץ�Ļ������루1400-1499��
#define NET_DVR_ERR_LANENUM_EXCEED                  1400  //��������������
#define NET_DVR_ERR_PRAREA_EXCEED                   1401  //��ʶ�������
#define NET_DVR_ERR_LIGHT_PARAM                     1402  //�źŵƽ����������
#define NET_DVR_ERR_LANE_LINE_INVALID               1403  //���������ô���
#define NET_DVR_ERR_STOP_LINE_INVALID               1404  //ֹͣ�����ô���
#define NET_DVR_ERR_LEFTORRIGHT_LINE_INVALID        1405  //��/��ת�ֽ������ô���
#define NET_DVR_ERR_LANE_NO_REPEAT                  1406  //���ӳ������ظ�
#define NET_DVR_ERR_PRAREA_INVALID                  1407  //��ʶ����β�����Ҫ��
#define NET_DVR_ERR_LIGHT_NUM_EXCEED                1408  //��Ƶ��⽻ͨ���źŵ���Ŀ�������ֵ
#define NET_DVR_ERR_SUBLIGHT_NUM_INVALID            1409  //��Ƶ��⽻ͨ���źŵ��ӵ���Ŀ���Ϸ�
#define NET_DVR_ERR_LIGHT_AREASIZE_INVALID          1410  //��Ƶ��⽻ͨ�������źŵƿ��С���Ϸ�
#define NET_DVR_ERR_LIGHT_COLOR_INVALID             1411  //��Ƶ��⽻ͨ�������źŵ���ɫ���Ϸ�
#define NET_DVR_ERR_LIGHT_DIRECTION_INVALID         1412  //��Ƶ��⽻ͨ������Ʒ������Բ��Ϸ�
#define NET_DVR_ERR_LACK_IOABLITY                    1413  //IO��ʵ��֧�ֵ���������

#define NET_DVR_ERR_FTP_PORT                        1414  //FTP�˿ںŷǷ����˿ں��ظ������쳣��
#define NET_DVR_ERR_FTP_CATALOGUE                   1415  //FTPĿ¼���Ƿ������ö༶Ŀ¼���༶Ŀ¼��ֵΪ�գ�
#define NET_DVR_ERR_FTP_UPLOAD_TYPE                 1416  //FTP�ϴ����ͷǷ�����ftpֻ֧��ȫ��/˫ftpֻ֧�ֿ��ں�Υ�£�
#define NET_DVR_ERR_FLASH_PARAM_WRITE               1417  //���ò���ʱдFLASHʧ��
#define NET_DVR_ERR_FLASH_PARAM_READ                1418  //���ò���ʱ��FLASHʧ��
#define NET_DVR_ERR_PICNAME_DELIMITER               1419  //FTPͼƬ�����ָ����Ƿ�
#define NET_DVR_ERR_PICNAME_ITEM                    1420  //FTPͼƬ������Ƿ������� �ָ�����
#define NET_DVR_ERR_PLATE_RECOGNIZE_TYPE            1421  //��ʶ�������ͷǷ� �����κͶ������Ч��У�飩
#define NET_DVR_ERR_CAPTURE_TIMES                   1422  //ץ�Ĵ����Ƿ� ����Чֵ��0��5��
#define NET_DVR_ERR_LOOP_DISTANCE                   1423  //��Ȧ����Ƿ� ����Чֵ��0��2000ms��
#define NET_DVR_ERR_LOOP_INPUT_STATUS               1424  //��Ȧ����״̬�Ƿ� ����Чֵ��
#define NET_DVR_ERR_RELATE_IO_CONFLICT              1425  //������IO������ͻ
#define NET_DVR_ERR_INTERVAL_TIME                   1426  //���ļ��ʱ��Ƿ� ��0��6000ms��
#define NET_DVR_ERR_SIGN_SPEED                      1427  //��־����ֵ�Ƿ����󳵱�־���ٲ��ܴ���С����־���� ��
#define NET_DVR_ERR_PIC_FLIP                        1428  //ͼ�����÷�ת �����ý���Ӱ�죩
#define NET_DVR_ERR_RELATE_LANE_NUMBER              1429  //�������������� (�ظ� ��ЧֵУ��1��99)
#define NET_DVR_ERR_TRIGGER_MODE                    1430  //����ץ�Ļ�����ģʽ�Ƿ�
#define NET_DVR_ERR_DELAY_TIME                      1431  //������ʱʱ�����(2000ms)
#define NET_DVR_ERR_EXCEED_RS485_COUNT              1432  //�������485��������
#define NET_DVR_ERR_RADAR_TYPE                      1433  //�״����ʹ���
#define NET_DVR_ERR_RADAR_ANGLE                     1434  //�״�Ƕȴ���
#define NET_DVR_ERR_RADAR_SPEED_VALID_TIME          1435  //�״���Чʱ�����
#define NET_DVR_ERR_RADAR_LINE_CORRECT              1436  //�״����Խ�����������
#define NET_DVR_ERR_RADAR_CONST_CORRECT             1437  //�״ﳣ��������������
#define NET_DVR_ERR_RECORD_PARAM                    1438  //¼�������Ч��Ԥ¼ʱ�䲻����10s��
#define NET_DVR_ERR_LIGHT_WITHOUT_COLOR_AND_DIRECTION 1439   //��Ƶ����źŵ������źŵƸ���������û�й�ѡ�źŵƷ������ɫ��
#define NET_DVR_ERR_LIGHT_WITHOUT_DETECTION_REGION   1440   //��Ƶ����źŵ������źŵƸ���������û�л��������
#define NET_DVR_ERR_RECOGNIZE_PROVINCE_PARAM         1441   //��ʶ����ʡ�ݲ����ĺϷ���

#define NET_DVR_ERR_SPEED_TIMEOUT                 1442    //IO���ٳ�ʱʱ��Ƿ�����Чֵ����0��
#define NET_DVR_ERR_NTP_TIMEZONE                  1443    //ntpʱ����������
#define NET_DVR_ERR_NTP_INTERVAL_TIME             1444    //ntpУʱ�������
#define NET_DVR_ERR_NETWORK_CARD_NUM              1445    //������������Ŀ����
#define NET_DVR_ERR_DEFAULT_ROUTE                 1446    //Ĭ��·�ɴ���
#define NET_DVR_ERR_BONDING_WORK_MODE             1447    //bonding��������ģʽ����
#define NET_DVR_ERR_SLAVE_CARD                    1448    //slave��������
#define NET_DVR_ERR_PRIMARY_CARD                  1449    //Primary��������
#define NET_DVR_ERR_DHCP_PPOE_WORK                1450    //dhcp��pppoE����ͬʱ����
#define NET_DVR_ERR_NET_INTERFACE                 1451    //����ӿڴ���
#define NET_DVR_ERR_MTU                           1452    //MTU����
#define NET_DVR_ERR_NETMASK                       1453    //�����������
#define NET_DVR_ERR_IP_INVALID                    1454    //IP��ַ���Ϸ�
#define NET_DVR_ERR_MULTICAST_IP_INVALID          1455    //�ಥ��ַ���Ϸ�
#define NET_DVR_ERR_GATEWAY_INVALID               1456    //���ز��Ϸ�
#define NET_DVR_ERR_DNS_INVALID                   1457    //DNS���Ϸ�
#define NET_DVR_ERR_ALARMHOST_IP_INVALID          1458    //�澯������ַ���Ϸ�
#define NET_DVR_ERR_IP_CONFLICT                   1459    //IP��ͻ
#define NET_DVR_ERR_NETWORK_SEGMENT               1460    //IP��֧��ͬ����
#define NET_DVR_ERR_NETPORT                       1461    //�˿ڴ���

#define NET_DVR_ERR_PPPOE_NOSUPPORT               1462  //PPPOE��֧��
#define NET_DVR_ERR_DOMAINNAME_NOSUPPORT          1463  //������֧��
#define NET_DVR_ERR_NO_SPEED                      1464  //δ���ò��ٹ���
#define NET_DVR_ERR_IOSTATUS_INVALID              1465  //IO״̬����
#define NET_DVR_ERR_BURST_INTERVAL_INVALID        1466  //���ļ���Ƿ�
#define NET_DVR_ERR_RESERVE_MODE                  1467  //����ģʽ����

#define NET_DVR_ERR_LANE_NO                       1468  //���ӳ����Ŵ���
#define NET_DVR_ERR_COIL_AREA_TYPE                1469  //��Ȧ�������ʹ���
#define NET_DVR_ERR_TRIGGER_AREA_PARAM            1470  //���������������
#define NET_DVR_ERR_SPEED_LIMIT_PARAM             1471  //Υ�����ٲ�������
#define NET_DVR_ERR_LANE_PROTOCOL_TYPE            1472  //��������Э�����ʹ���

#define NET_DVR_ERR_INTERVAL_TYPE                 1473  //���ļ�����ͷǷ�
#define NET_DVR_ERR_INTERVAL_DISTANCE             1474  //���ļ������Ƿ�
#define NET_DVR_ERR_RS485_ASSOCIATE_DEVTYPE       1475  //RS485�������ͷǷ�
#define NET_DVR_ERR_RS485_ASSOCIATE_LANENO        1476  //RS485���������ŷǷ�
#define NET_DVR_ERR_LANENO_ASSOCIATE_MULTIRS485   1477  //�����Ź������RS485��
#define NET_DVR_ERR_LIGHT_DETECTION_REGION        1478  //��Ƶ����źŵ������źŵƸ��������Ǽ���������Ϊ0

#define NET_DVR_ERR_DN2D_NOSUPPORT            1479  //��֧��ץ��֡2D����
#define NET_DVR_ERR_IRISMODE_NOSUPPORT        1480  //��֧�ֵľ�ͷ����
#define NET_DVR_ERR_WB_NOSUPPORT              1481  //��֧�ֵİ�ƽ��ģʽ
#define NET_DVR_ERR_IO_EFFECTIVENESS          1482  //IO�ڵ���Ч��
#define NET_DVR_ERR_LIGHTNO_MAX               1483  //�źŵƼ���������/�ƵƳ���(16)
#define NET_DVR_ERR_LIGHTNO_CONFLICT          1484  //�źŵƼ���������/�ƵƳ�ͻ

#define NET_DVR_ERR_CANCEL_LINE                1485  //ֱ�д�����
#define NET_DVR_ERR_STOP_LINE               1486  //������ֹͣ��
#define NET_DVR_ERR_RUSH_REDLIGHT_LINE      1487  //����ƴ�����
#define NET_DVR_ERR_IOOUTNO_MAX             1488  //IO����ڱ��Խ��

#define NET_DVR_ERR_IOOUTNO_AHEADTIME_MAX    1489  //IO�������ǰʱ�䳬��
#define NET_DVR_ERR_IOOUTNO_IOWORKTIME      1490  //IO�������Ч����ʱ�䳬��
#define NET_DVR_ERR_IOOUTNO_FREQMULTI       1491  //IO���������ģʽ�±�Ƶ����
#define NET_DVR_ERR_IOOUTNO_DUTYRATE        1492  //IO���������ģʽ��ռ�ձȳ���
#define NET_DVR_ERR_VIDEO_WITH_EXPOSURE     1493  //��������Ч��������ʽ��֧����Ƶ
#define NET_DVR_ERR_PLATE_BRIGHTNESS_WITHOUT_FLASHDET   1494  //���������Զ�ʹ������ƽ��ڳ������Ȳ���ģʽ����Ч

#define NET_DVR_ERR_RECOGNIZE_TYPE_PARAM            1495 //ʶ�����ͷǷ� ����ʶ���������󳵡�С�����������򡢳���ʶ��ȣ�
#define NET_DVR_ERR_PALTE_RECOGNIZE_AREA_PARAM      1496 //��ʶ�����Ƿ� ��ʶ��������ʱ�жϳ���
#define NET_DVR_ERR_PORT_CONFLICT                   1497 //�˿��г�ͻ
#define NET_DVR_ERR_LOOP_IP                         1498 //IP��������Ϊ�ػ���ַ
#define NET_DVR_ERR_DRIVELINE_SENSITIVE             1499 //ѹ�������ȳ���(��Ƶ�羯ģʽ��)


//2013-3-6VQD�����루1500��1550��
#define NET_ERR_VQD_TIME_CONFLICT                    1500 //VQD���ʱ��γ�ͻ
#define NET_ERR_VQD_PLAN_NO_EXIST                    1501 //VQD��ϼƻ�������
#define NET_ERR_VQD_CHAN_NO_EXIST                    1502 //VQD��ص㲻����
#define NET_ERR_VQD_CHAN_MAX                        1503 //VQD�ƻ����Ѵ�����
#define NET_ERR_VQD_TASK_MAX                        1504 //VQD�������Ѵ�����

#define NET_SDK_GET_INPUTSTREAMCFG                  1551  //��ȡ�ź�Դ
#define NET_SDK_AUDIO_SWITCH_CONTROL                1552 //�Ӵ�����Ƶ���ؿ���
#define NET_SDK_GET_VIDEOWALLDISPLAYNO              1553  //��ȡ�豸��ʾ�����
#define NET_SDK_GET_ALLSUBSYSTEM_BASIC_INFO         1554//��ȡ������ϵͳ������Ϣ
#define NET_SDK_SET_ALLSUBSYSTEM_BASIC_INFO         1555 //����������ϵͳ������Ϣ
#define NET_SDK_GET_AUDIO_INFO                      1556//��ȡ������Ƶ��Ϣ
#define NET_SDK_GET_MATRIX_STATUS_V50               1557 // ��ȡ��Ƶ�ۺ�ƽ̨״̬_V50
#define NET_SDK_DELETE_MONITOR_INFO                 1558//ɾ��Monitor��Ϣ
#define NET_SDK_DELETE_CAMERA_INFO                  1559//ɾ��Camaera��Ϣ


//ץ�Ļ�������������չ(1600~1900)
#define NET_DVR_ERR_EXCEED_MAX_CAPTURE_TIMES        1600 //ץ��ģʽΪƵ��ʱ���ץ������Ϊ2��(IVTģʽ��)
#define NET_DVR_ERR_REDAR_TYPE_CONFLICT             1601 //��ͬ485�ڹ����״����ͳ�ͻ
#define NET_DVR_ERR_LICENSE_PLATE_NULL              1602 //���ƺ�Ϊ��
#define NET_DVR_ERR_WRITE_DATABASE                  1603 //д�����ݿ�ʧ��
#define NET_DVR_ERR_LICENSE_EFFECTIVE_TIME          1604 //������Чʱ�����
//��Ƶ�羯
#define NET_DVR_ERR_PRERECORDED_STARTTIME_LONG      1605 //Ԥ¼��ʼʱ�����Υ��ץ������
//��Ͽ���
#define NET_DVR_ERR_TRIGGER_RULE_LINE               1606 //���������ߴ���
#define NET_DVR_ERR_LEFTRIGHT_TRIGGERLINE_NOTVERTICAL 1607 //��/�Ҵ����߲���ֱ
#define NET_DVR_ERR_FLASH_LAMP_MODE                 1608 //�������˸ģʽ����
#define NET_DVR_ERR_ILLEGAL_SNAPSHOT_NUM            1609 //Υ��ץ����������
#define NET_DVR_ERR_ILLEGAL_DETECTION_TYPE          1610 //Υ�¼�����ʹ���
#define NET_DVR_ERR_POSITIVEBACK_TRIGGERLINE_HIGH   1611 //�����򴥷��߸߶ȴ���
#define NET_DVR_ERR_MIXEDMODE_CAPTYPE_ALLTARGETS    1612 //���ģʽ��ֻ֧�ֻ�����ץ������

#define NET_DVR_ERR_CARSIGNSPEED_GREATERTHAN_LIMITSPEED  1613//С����־���ٴ�������ֵ
#define NET_DVR_ERR_BIGCARSIGNSPEED_GREATERTHAN_LIMITSPEED  1614//�󳵱�־���ٴ�������ֵ
#define NET_DVR_ERR_BIGCARSIGNSPEED_GREATERTHAN_CARSIGNSPEED  1615//�󳵱�־���ٴ���С����־����ֵ
#define NET_DVR_ERR_BIGCARLIMITSPEED_GREATERTHAN_CARLIMITSPEED  1616//������ֵ����С������ֵ
#define NET_DVR_ERR_BIGCARLOWSPEEDLIMIT_GREATERTHAN_CARLOWSPEEDLIMIT  1617//�󳵵�������ֵ����С����������ֵ
#define NET_DVR_ERR_CARLIMITSPEED_GREATERTHAN_EXCEPHIGHSPEED  1618//С�����ٴ����쳣����ֵ
#define NET_DVR_ERR_BIGCARLIMITSPEED_GREATERTHAN_EXCEPHIGHSPEED  1619//�����ٴ����쳣����ֵ
#define NET_DVR_ERR_STOPLINE_MORETHAN_TRIGGERLINE  1620//ֹͣ�߳���ֱ�д�����

//�Ž�����������
#define NET_ERR_TIME_OVERLAP                        1900 //ʱ����ص�
#define NET_ERR_HOLIDAY_PLAN_OVERLAP                1901 //���ռƻ��ص�
#define NET_ERR_CARDNO_NOT_SORT                     1902 //����δ����
#define NET_ERR_CARDNO_NOT_EXIST                    1903 //���Ų�����
#define NET_ERR_ILLEGAL_CARDNO                      1904 //���Ŵ���
#define NET_ERR_ZONE_ALARM                          1905 //�������ڲ���״̬(�����޸Ĳ�����)
#define NET_ERR_ZONE_OPERATION_NOT_SUPPORT          1906 //������֧�ָò���
#define NET_ERR_INTERLOCK_ANTI_CONFLICT             1907 //���Ż����ͷ�Ǳ��ͬʱ���ô���
#define NET_ERR_DEVICE_CARD_FULL                    1908 //�����������ﵽ10W�󷵻أ�
#define NET_ERR_HOLIDAY_GROUP_DOWNLOAD              1909 //����������ʧ��
#define NET_ERR_LOCAL_CONTROL_OFF                    1910 //�͵ؿ���������
#define NET_ERR_LOCAL_CONTROL_DISADD                1911 //�͵ؿ�����δ���
#define NET_ERR_LOCAL_CONTROL_HASADD                1912 //�͵ؿ����������
#define NET_ERR_LOCAL_CONTROL_DOORNO_CONFLICT        1913 //������ӵľ͵ؿ������ű�ų�ͻ
#define NET_ERR_LOCAL_CONTROL_COMMUNICATION_FAIL    1914 //�͵ؿ�����ͨ��ʧ��
#define NET_ERR_OPERAND_INEXISTENCE                  1915 //�������󲻴��ڣ����š��������������������ز�����������δ���ʱ���أ�
#define NET_ERR_LOCAL_CONTROL_OVER_LIMIT              1916 //�͵ؿ����������豸������������ضԾ͵����������ƣ�
#define NET_ERR_DOOR_OVER_LIMIT                         1917 //�ų����豸�������
#define NET_ERR_ALARM_OVER_LIMIT                         1918 //����������������豸�������
#define NET_ERR_LOCAL_CONTROL_ADDRESS_INCONFORMITY_TYPE      1919 //�͵ؿ�������ַ�����Ͳ���
#define NET_ERR_NOT_SUPPORT_ONE_MORE_CARD           1920 //��֧��һ�˶࿨
#define NET_ERR_DELETE_NO_EXISTENCE_FACE            1921 //ɾ��������������
#define NET_ERR_DOOR_SPECIAL_PASSWORD_REPEAT        1922 //���豸�����������ظ�
#define NET_ERR_AUTH_CODE_REPEAT                    1923 //���豸��֤���ظ�
#define NET_ERR_DEPLOY_EXCEED_MAX                   1924 //�����������������

//���ӶԽ�������
#define NET_DVR_ERR_OUTDOOR_COMMUNICATION            1950 //���ſڻ�ͨ���쳣
#define NET_DVR_ERR_ROOMNO_UNDEFINED                1951 //δ���÷����
#define NET_DVR_ERR_NO_CALLING                        1952 //�޺���
#define NET_DVR_ERR_RINGING                            1953 //����
#define NET_DVR_ERR_IS_CALLING_NOW                    1954 //����ͨ��
#define NET_DVR_ERR_LOCK_PASSWORD_WRONG             1955//�������������
#define NET_DVR_ERR_CONTROL_LOCK_FAILURE            1956//������ʧ��
#define NET_DVR_ERR_CONTROL_LOCK_OVERTIME           1957//��������ʱ
#define NET_DVR_ERR_LOCK_DEVICE_BUSY                1958//�������豸��æ
#define NET_DVR_ERR_UNOPEN_REMOTE_LOCK_FUNCTION     1959//Զ�̿�������δ��


//��˴����� ��2100 - 3000��
#define NET_DVR_ERR_FILE_NOT_COMPLETE               2100    //���ص��ļ�������
#define NET_DVR_ERR_IPC_EXIST                       2101    //��IPC�Ѿ�����
#define NET_DVR_ERR_ADD_IPC                         2102    //��ͨ�������IPC
#define NET_DVR_ERR_OUT_OF_RES                      2103    //���������������
#define NET_DVR_ERR_CONFLICT_TO_LOCALIP             2104    //IPC��ip��ַ��DVR��ip��ַ��ͻ
#define NET_DVR_ERR_IP_SET                          2105    //�Ƿ�ip��ַ
#define NET_DVR_ERR_PORT_SET                        2106    //�Ƿ��Ķ˿ں�

#define NET_ERR_WAN_NOTSUPPORT                      2107     //����ͬһ�����������޷����ð�ȫ����򵼳�GUID�ļ�
#define NET_ERR_MUTEX_FUNCTION                      2108     //���ܻ���
#define NET_ERR_QUESTION_CONFIGNUM                  2109     //��ȫ����������������
#define NET_ERR_FACECHAN_NORESOURCE                 2110     //��������ͨ����Դ������
#define NET_ERR_DATA_CALLBACK                       2111     //�������ݻ�Ǩ
#define NET_ERR_ATM_VCA_CHAN_IS_RELATED             2112     //ATM����ͨ���ѱ�����
#define NET_ERR_ATM_VCA_CHAN_IS_OVERLAPED           2113     //ATM����ͨ���ѱ�����
#define NET_ERR_FACE_CHAN_UNOVERLAP_EACH_OTHER      2114     //����ͨ�����ܻ������
#define NET_ERR_ACHIEVE_MAX_CHANNLE_LIMIT           2115     //�ﵽ���·������

//�ȳ��������ش����루3001 - 3500��
#define NET_DVR_ERR_NOTSUPPORT_DEICING    3001    //�豸��ǰ״̬��֧�ֳ������ܣ�ֻ��POE+��AC24V��DC12V������֧�ֳ������ܣ�
#define NET_DVR_ERR_THERMENABLE_CLOSE     3002    //���¹�����ʹ��δ������(��NET_DVR_THERMOMETRY_BASICPARAMʹ��δ����)
#define NET_DVR_ERR_NOTMEET_DEICING       3003    //��ǰ��ǻ�¶Ȳ������ֶ������������������ǻ�¶�С��30�Ȳſɿ�����
#define NET_DVR_ERR_PANORAMIC_LIMIT_OPERATED   3004    //ȫ����ͼ����λ����ͬʱ����
#define NET_DVR_ERR_SMARTH264_ROI_OPERATED   3005    //SmartH264��ROI����ͬʱ����
#define NET_DVR_ERR_RULENUM_LIMIT   3006    //����������
#define NET_DVR_ERR_LASER_DEICING_OPERATED   3007    //�����Լ��������ܲ���ͬʱ����
#define NET_DVR_ERR_OFFDIGITALZOOM_OR_MINZOOMLIMIT   3008    //���ȹر����ݱ䱶���ܻ�䱶��������Ϊ��Сֵ����ִ���̻��⡢��Ϊ��������ֻ��⡢������������¡��̻����ι���ʱ����û�йر����ݱ䱶���߱䱶����û������Ϊ��Сֵʱ��������ʾ�ô����롣
#define NET_DVR_ERR_FIREWAITING 3009 //�豸��̨���ڻ��ȴ���
/*******************ȫ�ִ����� end**********************/

/*************************************************
NET_DVR_IsSupport()����ֵ
1��9λ�ֱ��ʾ������Ϣ��λ����TRUE)��ʾ֧�֣�
**************************************************/
#define NET_DVR_SUPPORT_DDRAW            0x01//֧��DIRECTDRAW�������֧�֣��򲥷������ܹ�����
#define NET_DVR_SUPPORT_BLT                0x02//�Կ�֧��BLT�����������֧�֣��򲥷������ܹ�����
#define NET_DVR_SUPPORT_BLTFOURCC        0x04//�Կ�BLT֧����ɫת���������֧�֣��������������������RGBת����
#define NET_DVR_SUPPORT_BLTSHRINKX        0x08//�Կ�BLT֧��X����С�������֧�֣�ϵͳ�����������ת����
#define NET_DVR_SUPPORT_BLTSHRINKY        0x10//�Կ�BLT֧��Y����С�������֧�֣�ϵͳ�����������ת����
#define NET_DVR_SUPPORT_BLTSTRETCHX        0x20//�Կ�BLT֧��X��Ŵ������֧�֣�ϵͳ�����������ת����
#define NET_DVR_SUPPORT_BLTSTRETCHY        0x40//�Կ�BLT֧��Y��Ŵ������֧�֣�ϵͳ�����������ת����
#define NET_DVR_SUPPORT_SSE                0x80//CPU֧��SSEָ�Intel Pentium3����֧��SSEָ�
#define NET_DVR_SUPPORT_MMX                0x100//CPU֧��MMXָ���Intel Pentium3����֧��SSEָ�

/**********************��̨�������� begin*************************/
#define LIGHT_PWRON        2    /* ��ͨ�ƹ��Դ */
#define WIPER_PWRON        3    /* ��ͨ��ˢ���� */
#define FAN_PWRON        4    /* ��ͨ���ȿ��� */
#define HEATER_PWRON    5    /* ��ͨ���������� */
#define AUX_PWRON1        6    /* ��ͨ�����豸���� */
#define AUX_PWRON2        7    /* ��ͨ�����豸���� */
#define SET_PRESET        8    /* ����Ԥ�õ� */
#define CLE_PRESET        9    /* ���Ԥ�õ� */

#define ZOOM_IN            11    /* �������ٶ�SS���(���ʱ��) */
#define ZOOM_OUT        12    /* �������ٶ�SS��С(���ʱ�С) */
#define FOCUS_NEAR      13  /* �������ٶ�SSǰ�� */
#define FOCUS_FAR       14  /* �������ٶ�SS��� */
#define IRIS_OPEN       15  /* ��Ȧ���ٶ�SS���� */
#define IRIS_CLOSE      16  /* ��Ȧ���ٶ�SS��С */

#define TILT_UP            21    /* ��̨��SS���ٶ����� */
#define TILT_DOWN        22    /* ��̨��SS���ٶ��¸� */
#define PAN_LEFT        23    /* ��̨��SS���ٶ���ת */
#define PAN_RIGHT        24    /* ��̨��SS���ٶ���ת */
#define UP_LEFT            25    /* ��̨��SS���ٶ���������ת */
#define UP_RIGHT        26    /* ��̨��SS���ٶ���������ת */
#define DOWN_LEFT        27    /* ��̨��SS���ٶ��¸�����ת */
#define DOWN_RIGHT        28    /* ��̨��SS���ٶ��¸�����ת */
#define PAN_AUTO        29    /* ��̨��SS���ٶ������Զ�ɨ�� */

#define FILL_PRE_SEQ    30    /* ��Ԥ�õ����Ѳ������ */
#define SET_SEQ_DWELL    31    /* ����Ѳ����ͣ��ʱ�� */
#define SET_SEQ_SPEED    32    /* ����Ѳ���ٶ� */
#define CLE_PRE_SEQ        33    /* ��Ԥ�õ��Ѳ��������ɾ�� */
#define STA_MEM_CRUISE    34    /* ��ʼ��¼�켣 */
#define STO_MEM_CRUISE    35    /* ֹͣ��¼�켣 */
#define RUN_CRUISE        36    /* ��ʼ�켣 */
#define RUN_SEQ            37    /* ��ʼѲ�� */
#define STOP_SEQ        38    /* ֹͣѲ�� */
#define GOTO_PRESET        39    /* ����ת��Ԥ�õ� */

#define DEL_SEQ         43  /* ɾ��Ѳ��·�� */
#define STOP_CRUISE        44    /* ֹͣ�켣 */
#define DELETE_CRUISE    45    /* ɾ�������켣 */
#define DELETE_ALL_CRUISE 46/* ɾ�����й켣 */

#define PAN_CIRCLE      50   /* ��̨��SS���ٶ��Զ�Բ��ɨ�� */
#define DRAG_PTZ        51   /* �϶�PTZ */
#define LINEAR_SCAN     52   /* ����ɨ�� */ //2014-03-15
#define CLE_ALL_PRESET  53   /* Ԥ�õ�ȫ����� */
#define CLE_ALL_SEQ     54   /* Ѳ��ȫ����� */
#define CLE_ALL_CRUISE  55   /* �켣ȫ����� */

#define POPUP_MENU      56   /* ��ʾ�����˵� */

#define TILT_DOWN_ZOOM_IN    58    /* ��̨��SS���ٶ��¸�&&�������ٶ�SS���(���ʱ��) */
#define TILT_DOWN_ZOOM_OUT  59  /* ��̨��SS���ٶ��¸�&&�������ٶ�SS��С(���ʱ�С) */
#define PAN_LEFT_ZOOM_IN    60  /* ��̨��SS���ٶ���ת&&�������ٶ�SS���(���ʱ��)*/
#define PAN_LEFT_ZOOM_OUT   61  /* ��̨��SS���ٶ���ת&&�������ٶ�SS��С(���ʱ�С)*/
#define PAN_RIGHT_ZOOM_IN    62  /* ��̨��SS���ٶ���ת&&�������ٶ�SS���(���ʱ��) */
#define PAN_RIGHT_ZOOM_OUT  63  /* ��̨��SS���ٶ���ת&&�������ٶ�SS��С(���ʱ�С) */
#define UP_LEFT_ZOOM_IN     64  /* ��̨��SS���ٶ���������ת&&�������ٶ�SS���(���ʱ��)*/
#define UP_LEFT_ZOOM_OUT    65  /* ��̨��SS���ٶ���������ת&&�������ٶ�SS��С(���ʱ�С)*/
#define UP_RIGHT_ZOOM_IN    66  /* ��̨��SS���ٶ���������ת&&�������ٶ�SS���(���ʱ��)*/
#define UP_RIGHT_ZOOM_OUT   67  /* ��̨��SS���ٶ���������ת&&�������ٶ�SS��С(���ʱ�С)*/
#define DOWN_LEFT_ZOOM_IN   68  /* ��̨��SS���ٶ��¸�����ת&&�������ٶ�SS���(���ʱ��) */
#define DOWN_LEFT_ZOOM_OUT  69  /* ��̨��SS���ٶ��¸�����ת&&�������ٶ�SS��С(���ʱ�С) */
#define DOWN_RIGHT_ZOOM_IN    70  /* ��̨��SS���ٶ��¸�����ת&&�������ٶ�SS���(���ʱ��) */
#define DOWN_RIGHT_ZOOM_OUT    71  /* ��̨��SS���ٶ��¸�����ת&&�������ٶ�SS��С(���ʱ�С) */
#define TILT_UP_ZOOM_IN        72    /* ��̨��SS���ٶ�����&&�������ٶ�SS���(���ʱ��) */
#define TILT_UP_ZOOM_OUT    73    /* ��̨��SS���ٶ�����&&�������ٶ�SS��С(���ʱ�С) */
/**********************��̨�������� end*************************/

#define DVR_VEHICLE_CONTROL_LIST   0x1 //�����ڰ�������������(���͵���������)2013-11-04


/*************************************************
�ط�ʱ���ſ�������궨��
NET_DVR_PlayBackControl
NET_DVR_PlayControlLocDisplay
NET_DVR_DecPlayBackCtrl�ĺ궨��
����֧�ֲ鿴����˵���ʹ���
**************************************************/
#define NET_DVR_PLAYSTART        1//��ʼ����
#define NET_DVR_PLAYSTOP        2//ֹͣ����
#define NET_DVR_PLAYPAUSE        3//��ͣ����
#define NET_DVR_PLAYRESTART        4//�ָ�����
#define NET_DVR_PLAYFAST        5//���
#define NET_DVR_PLAYSLOW        6//����
#define NET_DVR_PLAYNORMAL        7//�����ٶ�
#define NET_DVR_PLAYFRAME        8//��֡��
#define NET_DVR_PLAYSTARTAUDIO    9//������
#define NET_DVR_PLAYSTOPAUDIO    10//�ر�����
#define NET_DVR_PLAYAUDIOVOLUME    11//��������
#define NET_DVR_PLAYSETPOS        12//�ı��ļ��طŵĽ���
#define NET_DVR_PLAYGETPOS        13//��ȡ�ļ��طŵĽ���
#define NET_DVR_PLAYGETTIME        14//��ȡ��ǰ�Ѿ����ŵ�ʱ��(���ļ��طŵ�ʱ����Ч)
#define NET_DVR_PLAYGETFRAME    15//��ȡ��ǰ�Ѿ����ŵ�֡��(���ļ��طŵ�ʱ����Ч)
#define NET_DVR_GETTOTALFRAMES  16//��ȡ��ǰ�����ļ��ܵ�֡��(���ļ��طŵ�ʱ����Ч)
#define NET_DVR_GETTOTALTIME    17//��ȡ��ǰ�����ļ��ܵ�ʱ��(���ļ��طŵ�ʱ����Ч)
#define NET_DVR_THROWBFRAME        20//��B֡
#define NET_DVR_SETSPEED        24//���������ٶ�
#define NET_DVR_KEEPALIVE        25//�������豸������(����ص�����������2�뷢��һ��)
#define NET_DVR_PLAYSETTIME        26//������ʱ�䶨λ
#define NET_DVR_PLAYGETTOTALLEN    27//��ȡ��ʱ��طŶ�Ӧʱ����ڵ������ļ����ܳ���
#define NET_DVR_PLAY_FORWARD    29 //�����л�Ϊ����
#define NET_DVR_PLAY_REVERSE    30 //�����л�Ϊ����
#define NET_DVR_SET_DECODEFFRAMETYPE 31
#define NET_DVR_SET_TRANS_TYPE    32 //����ת���ʽ
#define NET_DVR_PLAY_CONVERT    33 //�ط�ת��
#define NET_DVR_START_DRAWFRAME 34 //��ʼ��֡�ط�
#define NET_DVR_STOP_DRAWFRAME  35 //ֹͣ��֡�ط�
#define NET_DVR_CHANGEWNDRESOLUTION   36    //���ڴ�С�ı䣬֪ͨ���ſ�



#define PLAYM4_DECODE_NORMAIL              0   //��������
#define PLAYM4_DECODE_KEY_FRAME            1   //ֻ��I֡
#define PLAYM4_DECODE_NONE                 2   //ȫ����
#define PLAYM4_DECODE_TEMPORAL_LAYER_0     3   //��1/2
#define PLAYM4_DECODE_TEMPORAL_LAYER_1     4   //��1/4


//Զ�̰����������£�
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

#define KEY_PTZ_AP1_START       KEY_CODE_EDIT /*��Ȧ+*/
#define KEY_PTZ_AP1_STOP        36

#define KEY_PTZ_AP2_START       KEY_CODE_PAN /*��Ȧ-*/
#define KEY_PTZ_AP2_STOP        37

#define KEY_PTZ_FOCUS1_START    KEY_CODE_A /*�۽�+*/
#define KEY_PTZ_FOCUS1_STOP     38

#define KEY_PTZ_FOCUS2_START    KEY_CODE_M /*�۽�-*/
#define KEY_PTZ_FOCUS2_STOP     39

#define KEY_PTZ_B1_START        40 /*�䱶+*/
#define KEY_PTZ_B1_STOP         41

#define KEY_PTZ_B2_START        42 /*�䱶-*/
#define KEY_PTZ_B2_STOP         43

//9000����
#define KEY_CODE_11             44
#define KEY_CODE_12             45
#define KEY_CODE_13             46
#define KEY_CODE_14             47
#define KEY_CODE_15             48
#define KEY_CODE_16             49



/*************************������������ begin*******************************/
//����NET_DVR_SetDVRConfig��NET_DVR_GetDVRConfig,ע�����Ӧ�����ýṹ

#define NET_DVR_GET_DEVICECFG        100        //��ȡ�豸����
#define NET_DVR_SET_DEVICECFG        101        //�����豸����
#define NET_DVR_GET_NETCFG            102        //��ȡ�������
#define NET_DVR_SET_NETCFG            103        //�����������
#define NET_DVR_GET_PICCFG            104        //��ȡͼ�����
#define NET_DVR_SET_PICCFG            105        //����ͼ�����
#define NET_DVR_GET_COMPRESSCFG        106        //��ȡѹ������
#define NET_DVR_SET_COMPRESSCFG        107        //����ѹ������
#define NET_DVR_GET_RECORDCFG        108        //��ȡ¼��ʱ�����
#define NET_DVR_SET_RECORDCFG        109        //����¼��ʱ�����
#define NET_DVR_GET_DECODERCFG        110        //��ȡ����������
#define NET_DVR_SET_DECODERCFG        111        //���ý���������
#define NET_DVR_GET_RS232CFG         112        //��ȡ232���ڲ���
#define NET_DVR_SET_RS232CFG        113        //����232���ڲ���
#define NET_DVR_GET_ALARMINCFG         114        //��ȡ�����������
#define NET_DVR_SET_ALARMINCFG        115        //���ñ����������
#define NET_DVR_GET_ALARMOUTCFG     116        //��ȡ�����������
#define NET_DVR_SET_ALARMOUTCFG        117        //���ñ����������
#define NET_DVR_GET_TIMECFG         118        //��ȡDVRʱ��
#define NET_DVR_SET_TIMECFG            119        //����DVRʱ��
#define NET_DVR_GET_PREVIEWCFG         120        //��ȡԤ������
#define NET_DVR_SET_PREVIEWCFG        121        //����Ԥ������
#define NET_DVR_GET_VIDEOOUTCFG     122        //��ȡ��Ƶ�������
#define NET_DVR_SET_VIDEOOUTCFG        123        //������Ƶ�������
#define NET_DVR_GET_USERCFG         124        //��ȡ�û�����
#define NET_DVR_SET_USERCFG            125        //�����û�����
#define NET_DVR_GET_EXCEPTIONCFG     126        //��ȡ�쳣����
#define NET_DVR_SET_EXCEPTIONCFG    127        //�����쳣����
#define NET_DVR_GET_ZONEANDDST        128        //��ȡʱ������ʱ�Ʋ���
#define NET_DVR_SET_ZONEANDDST        129        //����ʱ������ʱ�Ʋ���

//ע��������ֻ֧��4��OSD�����ͣ�ͨ������V30���µ��豸�汾��
#define NET_DVR_GET_SHOWSTRING        130        //��ȡ�����ַ�����
#define NET_DVR_SET_SHOWSTRING        131        //���õ����ַ�����

#define NET_DVR_GET_EVENTCOMPCFG    132        //��ȡ�¼�����¼�����
#define NET_DVR_SET_EVENTCOMPCFG    133        //�����¼�����¼�����
#define NET_DVR_GET_FTPCFG            134        //��ȡץͼ��FTP����(����)
#define NET_DVR_SET_FTPCFG            135        //����ץͼ��FTP����(����)
#define NET_DVR_GET_AUXOUTCFG        140        //��ȡ�������������������(HS�豸�������2006-02-28)
#define NET_DVR_SET_AUXOUTCFG        141        //���ñ������������������(HS�豸�������2006-02-28)
#define NET_DVR_GET_PREVIEWCFG_AUX     142        //��ȡ-sϵ��˫���Ԥ������(-sϵ��˫���2006-04-13)
#define NET_DVR_SET_PREVIEWCFG_AUX    143        //����-sϵ��˫���Ԥ������(-sϵ��˫���2006-04-13)

#define NET_DVR_GET_PASSWORD_MANAGE_CFG 144        //��ȡ�����������
#define NET_DVR_SET_PASSWORD_MANAGE_CFG    145        //���������������
#define NET_DVR_UNLOCK_USER             146        //�û�����
#define NET_DVR_GET_SECURITY_CFG         147        //��ȡ��ȫ��֤����
#define NET_DVR_SET_SECURITY_CFG         148        //���ð�ȫ��֤����
#define    NET_DVR_GET_LOCKED_INFO_LIST    149        //��ȡ���б�������Ϣ


/*********************************���ܲ��ֽӿ� begin***************************************/
//��Ϊ��Ӧ��NET_VCA_RULECFG��
#define NET_DVR_SET_RULECFG            152    //������Ϊ��������
#define NET_DVR_GET_RULECFG            153    //��ȡ��Ϊ��������
//����궨������NET_DVR_TRACK_CFG ��
#define NET_DVR_SET_TRACK_CFG       160//������������ò���
#define NET_DVR_GET_TRACK_CFG       161//��ȡ��������ò���

//���ܷ�����ȡ�����ýṹ
#define NET_DVR_SET_IVMS_STREAMCFG    162        //�������ܷ�����ȡ������
#define NET_DVR_GET_IVMS_STREAMCFG    163        //��ȡ���ܷ�����ȡ������
//���ܿ��Ʋ����ṹ
#define NET_DVR_SET_VCA_CTRLCFG        164     //�������ܿ��Ʋ���
#define NET_DVR_GET_VCA_CTRLCFG        165     //��ȡ���ܿ��Ʋ���
//��������NET_VCA_MASK_REGION_LIST
#define NET_DVR_SET_VCA_MASK_REGION    166     //���������������
#define NET_DVR_GET_VCA_MASK_REGION    167     //��ȡ�����������

//ATM�������� NET_VCA_ENTER_REGION
#define NET_DVR_SET_VCA_ENTER_REGION 168     //���ý����������
#define NET_DVR_GET_VCA_ENTER_REGION 169     //��ȡ�����������

//�궨������NET_VCA_LINE_SEGMENT_LIST
#define NET_DVR_SET_VCA_LINE_SEGMENT 170     //���ñ궨��
#define NET_DVR_GET_VCA_LINE_SEGMENT 171     //��ȡ�궨��

// ivms��������NET_IVMS_MASK_REGION_LIST
#define NET_DVR_SET_IVMS_MASK_REGION 172     //����IVMS�����������
#define NET_DVR_GET_IVMS_MASK_REGION 173     //��ȡIVMS�����������
// ivms����������NET_IVMS_ENTER_REGION
#define NET_DVR_SET_IVMS_ENTER_REGION 174     //����IVMS�����������
#define NET_DVR_GET_IVMS_ENTER_REGION 175     //��ȡIVMS�����������

#define NET_DVR_SET_IVMS_BEHAVIORCFG  176    //�������ܷ�������Ϊ�������
#define NET_DVR_GET_IVMS_BEHAVIORCFG  177    //��ȡ���ܷ�������Ϊ�������

// IVMS �طż���
#define NET_DVR_IVMS_SET_SEARCHCFG        178    //����IVMS�طż�������
#define NET_DVR_IVMS_GET_SEARCHCFG        179    //��ȡIVMS�طż�������

#define NET_DVR_SET_POSITION_TRACK      180     // ���ó�������������Ϣ
#define NET_DVR_GET_POSITION_TRACK      181     // ��ȡ��������������Ϣ

#define NET_DVR_SET_CALIBRATION         182    // ���ñ궨��Ϣ
#define NET_DVR_GET_CALIBRATION         183    // ��ȡ�궨��Ϣ

#define NET_DVR_SET_PDC_RULECFG         184    // ����������ͳ�ƹ���
#define NET_DVR_GET_PDC_RULECFG         185    // ��ȡ������ͳ�ƹ���

#define NET_DVR_SET_PU_STREAMCFG        186     // ����ǰ��ȡ���豸��Ϣ
#define NET_DVR_GET_PU_STREAMCFG        187     // ��ȡǰ��ȡ���豸��Ϣ

#define NET_VCA_SET_IVMS_BEHAVIOR_CFG        192  // ����IVMS��Ϊ�������� ����ʱ���
#define NET_VCA_GET_IVMS_BEHAVIOR_CFG        193  // ��ȡIVMS��Ϊ�������� ����ʱ���

#define NET_VCA_SET_SIZE_FILTER         194     // ����ȫ�ֳߴ������
#define NET_VCA_GET_SIZE_FILTER         195     // ��ȡȫ�ֳߴ������

#define NET_DVR_SET_TRACK_PARAMCFG      196     // ����������ز˵�����
#define NET_DVR_GET_TRACK_PARAMCFG      197     // ��ȡ������ز˵�����

#define NET_DVR_SET_DOME_MOVEMENT_PARAM 198     // ���������о����
#define NET_DVR_GET_DOME_MOVEMENT_PARAM 199     // ��ȡ�����о����

#define NET_DVR_GET_PICCFG_EX        200        //��ȡͼ�����(SDK_V14��չ����)
#define NET_DVR_SET_PICCFG_EX        201        //����ͼ�����(SDK_V14��չ����)
#define NET_DVR_GET_USERCFG_EX         202        //��ȡ�û�����(SDK_V15��չ����)
#define NET_DVR_SET_USERCFG_EX        203        //�����û�����(SDK_V15��չ����)
#define NET_DVR_GET_COMPRESSCFG_EX    204        //��ȡѹ������(SDK_V15��չ����2006-05-15)
#define NET_DVR_SET_COMPRESSCFG_EX    205        //����ѹ������(SDK_V15��չ����2006-05-15)


#define NET_DVR_GET_NETAPPCFG        222        //��ȡ����Ӧ�ò��� NTP/DDNS/EMAIL
#define NET_DVR_SET_NETAPPCFG        223        //��������Ӧ�ò��� NTP/DDNS/EMAIL
#define NET_DVR_GET_NTPCFG            224        //��ȡ����Ӧ�ò��� NTP
#define NET_DVR_SET_NTPCFG            225        //��������Ӧ�ò��� NTP
#define NET_DVR_GET_DDNSCFG            226        //��ȡ����Ӧ�ò��� DDNS
#define NET_DVR_SET_DDNSCFG            227        //��������Ӧ�ò��� DDNS
//��ӦNET_DVR_EMAILPARA
#define NET_DVR_GET_EMAILCFG        228        //��ȡ����Ӧ�ò��� EMAIL
#define NET_DVR_SET_EMAILCFG        229        //��������Ӧ�ò��� EMAIL

#define NET_DVR_GET_NFSCFG            230        /* NFS disk config */
#define NET_DVR_SET_NFSCFG            231        /* NFS disk config */

/*ע��������Ϊ���ƣ�ֻ֧��8��OSD�����ͣ��������V30�豸�汾֮ǰ��
NET_DVR_GET_SHOWSTRING ��NET_DVR_SET_SHOWSTRING �����������ʹ�ã�*/
#define NET_DVR_GET_SHOWSTRING_EX    238        //��ȡ�����ַ�������չ(֧��8���ַ�)
#define NET_DVR_SET_SHOWSTRING_EX    239        //���õ����ַ�������չ(֧��8���ַ�)
#define NET_DVR_GET_NETCFG_OTHER    244        //��ȡ�������
#define NET_DVR_SET_NETCFG_OTHER    245        //�����������

//��ӦNET_DVR_EMAILCFG�ṹ
#define NET_DVR_GET_EMAILPARACFG    250        //Get EMAIL parameters
#define NET_DVR_SET_EMAILPARACFG    251        //Setup EMAIL parameters


#define NET_DVR_GET_DDNSCFG_EX        274    //��ȡ��չDDNS����
#define NET_DVR_SET_DDNSCFG_EX        275    //������չDDNS����

#define    NET_DVR_SET_PTZPOS            292        //��̨����PTZλ��
#define    NET_DVR_GET_PTZPOS            293        //��̨��ȡPTZλ��
#define    NET_DVR_GET_PTZSCOPE        294        //��̨��ȡPTZ��Χ

#define NET_DVR_GET_AP_INFO_LIST    305//��ȡ����������Դ����
#define NET_DVR_SET_WIFI_CFG        306    //����IP����豸���߲���
#define NET_DVR_GET_WIFI_CFG        307    //��ȡIP����豸���߲���
#define NET_DVR_SET_WIFI_WORKMODE    308    //����IP����豸���ڹ���ģʽ����
#define NET_DVR_GET_WIFI_WORKMODE    309    //��ȡIP����豸���ڹ���ģʽ����
#define    NET_DVR_GET_WIFI_STATUS        310    //��ȡ�豸��ǰwifi����״̬
/*********************************���ܽ�ͨ�¼�begin***************************************/
#define NET_DVR_GET_REFERENCE_REGION            400      //��ȡ�ο�����
#define NET_DVR_SET_REFERENCE_REGION            401      //���òο�����

#define NET_DVR_GET_TRAFFIC_MASK_REGION         402     //��ȡ��ͨ�¼���������
#define NET_DVR_SET_TRAFFIC_MASK_REGION         403     //���ý�ͨ�¼���������
#define NET_DVR_SET_AID_RULECFG                 404     //���ý�ͨ�¼��������
#define NET_DVR_GET_AID_RULECFG                 405     //��ȡ��ͨ�¼��������

#define NET_DVR_SET_TPS_RULECFG                 406     //���ý�ͨͳ�ƹ������
#define NET_DVR_GET_TPS_RULECFG                 407     //��ȡ��ͨͳ�ƹ������

#define NET_DVR_SET_LANECFG                        408        //���ó�������
#define    NET_DVR_GET_LANECFG                        409        //��ȡ��������
#define NET_DVR_GET_VCA_RULE_COLOR_CFG          410     //��ȡ���ܹ����������ɫ����
#define NET_DVR_SET_VCA_RULE_COLOR_CFG          411     //�������ܹ����������ɫ����
#define NET_DVR_GET_SWITCH_LAMP_CFG             412     //��ȡ���صƼ��������ò���
#define NET_DVR_SET_SWITCH_LAMP_CFG             413     //���ÿ��صƼ��������ò���


/*********************************���ܽ�ͨ�¼�end***************************************/
#define NET_DVR_SET_FACEDETECT_RULECFG          420         // ��������������
#define NET_DVR_GET_FACEDETECT_RULECFG          421         // ��ȡ����������

#define NET_DVR_SET_VEHICLE_RECOG_TASK          422      //��������ʶ�������ύ
#define NET_DVR_GET_VEHICLE_RECOG_TASK          423      //��������ʶ�������ȡ

#define NET_DVR_SET_TIMECORRECT                    432      //Уʱ���ã�ֻ��Уʱ����������¼Уʱ���� eg.NET_DVR_SET_TIMECFG ���޸��豸��Уʱ���ã�NTPУʱ���ᱻ�޸�Ϊ�ֶ�Уʱ����
#define    NET_DVR_GET_CONNECT_LIST                433         //��ȡ�����豸�б���Ϣ

/***************************DS9000��������(_V30) begin *****************************/
//����(NET_DVR_NETCFG_V30�ṹ)
#define NET_DVR_GET_NETCFG_V30                    1000        //��ȡ�������
#define NET_DVR_SET_NETCFG_V30                    1001        //�����������

//ͼ��(NET_DVR_PICCFG_V30�ṹ)
#define NET_DVR_GET_PICCFG_V30                    1002        //��ȡͼ�����
#define NET_DVR_SET_PICCFG_V30                    1003        //����ͼ�����

//¼��ʱ��(NET_DVR_RECORD_V30�ṹ)
#define NET_DVR_GET_RECORDCFG_V30                1004        //��ȡ¼�����
#define NET_DVR_SET_RECORDCFG_V30                1005        //����¼�����

//�û�(NET_DVR_USER_V30�ṹ)
#define NET_DVR_GET_USERCFG_V30                 1006        //��ȡ�û�����
#define NET_DVR_SET_USERCFG_V30                    1007        //�����û�����

//¼��ʱ��(NET_DVR_RECORD_V40�ṹ)
#define NET_DVR_GET_RECORDCFG_V40                1008        //��ȡ¼�����(��չ)
#define NET_DVR_SET_RECORDCFG_V40                1009        //����¼�����(��չ)

//9000DDNS��������(NET_DVR_DDNSPARA_V30�ṹ)
#define     NET_DVR_GET_DDNSCFG_V30                1010        //��ȡDDNS(9000��չ)
#define     NET_DVR_SET_DDNSCFG_V30                1011        //����DDNS(9000��չ)

//EMAIL����(NET_DVR_EMAILCFG_V30�ṹ)
#define NET_DVR_GET_EMAILCFG_V30                1012     //��ȡEMAIL����
#define NET_DVR_SET_EMAILCFG_V30                1013     //����EMAIL����

#define NET_DVR_GET_NETCFG_V50     1015    //��ȡ�����������(V50)
#define NET_DVR_SET_NETCFG_V50     1016    //���������������(V50)

#define NET_GET_CRUISEPOINT_V40                    1018     //��ȡѲ��·������

//Ѳ������ (NET_DVR_CRUISE_PARA�ṹ)
#define     NET_DVR_GET_CRUISE                    1020
#define     NET_DVR_SET_CRUISE                    1021


//��������ṹ���� (NET_DVR_ALARMINCFG_V30�ṹ)
#define     NET_DVR_GET_ALARMINCFG_V30            1024
#define     NET_DVR_SET_ALARMINCFG_V30            1025

//��������ṹ���� (NET_DVR_ALARMOUTCFG_V30�ṹ)
#define     NET_DVR_GET_ALARMOUTCFG_V30            1026
#define     NET_DVR_SET_ALARMOUTCFG_V30            1027

//��Ƶ����ṹ���� (NET_DVR_VIDEOOUT_V30�ṹ)
#define     NET_DVR_GET_VIDEOOUTCFG_V30            1028
#define     NET_DVR_SET_VIDEOOUTCFG_V30            1029


/*������֧��8��OSD�����ͣ����豸�汾ΪV30����ʱ��������ͨ���豸�汾��ƥ�䣬
ͬʱ����֮ǰ��NET_DVR_GET_SHOWSTRING ��NET_DVR_SET_SHOWSTRING ���������ʹ�ã�*/
//�����ַ��ṹ���� (NET_DVR_SHOWSTRING_V30�ṹ)
#define     NET_DVR_GET_SHOWSTRING_V30            1030
#define     NET_DVR_SET_SHOWSTRING_V30            1031

//�쳣�ṹ���� (NET_DVR_EXCEPTION_V30�ṹ)
#define     NET_DVR_GET_EXCEPTIONCFG_V30        1034
#define     NET_DVR_SET_EXCEPTIONCFG_V30        1035

//����232�ṹ���� (NET_DVR_RS232CFG_V30�ṹ)
#define     NET_DVR_GET_RS232CFG_V30            1036
#define     NET_DVR_SET_RS232CFG_V30            1037

//����Ӳ�̽���ṹ���� (NET_DVR_NET_DISKCFG�ṹ)
#define        NET_DVR_GET_NET_DISKCFG                1038        //����Ӳ�̽����ȡ
#define        NET_DVR_SET_NET_DISKCFG                1039        //����Ӳ�̽�������
//ѹ������ (NET_DVR_COMPRESSIONCFG_V30�ṹ)
#define     NET_DVR_GET_COMPRESSCFG_V30            1040
#define     NET_DVR_SET_COMPRESSCFG_V30            1041

//��ȡ485���������� (NET_DVR_DECODERCFG_V30�ṹ)
#define     NET_DVR_GET_DECODERCFG_V30            1042        //��ȡ����������
#define     NET_DVR_SET_DECODERCFG_V30            1043        //���ý���������

//��ȡԤ������ (NET_DVR_PREVIEWCFG_V30�ṹ)
#define     NET_DVR_GET_PREVIEWCFG_V30            1044        //��ȡԤ������
#define     NET_DVR_SET_PREVIEWCFG_V30            1045        //����Ԥ������

//����Ԥ������ (NET_DVR_PREVIEWCFG_AUX_V30�ṹ)
#define     NET_DVR_GET_PREVIEWCFG_AUX_V30        1046        //��ȡ����Ԥ������
#define     NET_DVR_SET_PREVIEWCFG_AUX_V30        1047        //���ø���Ԥ������

//IP�������ò��� ��NET_DVR_IPPARACFG�ṹ��
#define     NET_DVR_GET_IPPARACFG               1048        //��ȡIP����������Ϣ
#define     NET_DVR_SET_IPPARACFG               1049        //����IP����������Ϣ

//IP��������������ò��� ��NET_DVR_IPALARMINCFG�ṹ��
#define     NET_DVR_GET_IPALARMINCFG            1050        //��ȡIP�����������������Ϣ
#define     NET_DVR_SET_IPALARMINCFG            1051        //����IP�����������������Ϣ

//IP��������������ò��� ��NET_DVR_IPALARMOUTCFG�ṹ��
#define     NET_DVR_GET_IPALARMOUTCFG           1052        //��ȡIP�����������������Ϣ
#define     NET_DVR_SET_IPALARMOUTCFG           1053        //����IP�����������������Ϣ

//Ӳ�̹���Ĳ�����ȡ (NET_DVR_HDCFG�ṹ)
#define     NET_DVR_GET_HDCFG                    1054        //��ȡӲ�̹������ò���
#define     NET_DVR_SET_HDCFG                    1055        //����Ӳ�̹������ò���
//�������Ĳ�����ȡ (NET_DVR_HDGROUP_CFG�ṹ)
#define     NET_DVR_GET_HDGROUP_CFG                1056        //��ȡ����������ò���
#define     NET_DVR_SET_HDGROUP_CFG                1057        //��������������ò���

//�豸������������(NET_DVR_COMPRESSION_AUDIO�ṹ)
#define     NET_DVR_GET_COMPRESSCFG_AUD         1058        //��ȡ�豸�����Խ��������
#define     NET_DVR_SET_COMPRESSCFG_AUD         1059        //�����豸�����Խ��������

//IP�������ò��� ��NET_DVR_IPPARACFG_V31�ṹ��
#define     NET_DVR_GET_IPPARACFG_V31           1060        //��ȡIP����������Ϣ
#define     NET_DVR_SET_IPPARACFG_V31           1061        //����IP����������Ϣ

// ͨ����Դ���� (NET_DVR_IPPARACFG_V40�ṹ)
#define NET_DVR_GET_IPPARACFG_V40               1062        // ��ȡIP��������
#define NET_DVR_SET_IPPARACFG_V40               1063        // ����IP��������

#define NET_DVR_GET_CCDPARAMCFG                 1067       //IPC��ȡCCD��������
#define NET_DVR_SET_CCDPARAMCFG                 1068       //IPC����CCD��������

#define NET_DVR_GET_IOINCFG                        1070    //��ȡץ�Ļ�IO�������
#define NET_DVR_SET_IOINCFG                        1071     //����ץ�Ļ�IO�������

#define NET_DVR_GET_IOOUTCFG                    1072    //��ȡץ�Ļ�IO�������
#define NET_DVR_SET_IOOUTCFG                    1073     //����ץ�Ļ�IO�������

#define NET_DVR_GET_FLASHCFG                    1074    //��ȡIO������������
#define NET_DVR_SET_FLASHCFG                    1075     //����IO������������

#define NET_DVR_GET_LIGHTSNAPCFG                1076    //��ȡץ�Ļ����̵Ʋ���
#define NET_DVR_SET_LIGHTSNAPCFG                1077     //����ץ�Ļ����̵Ʋ���

#define NET_DVR_GET_MEASURESPEEDCFG                1078    //��ȡץ�Ļ����ٲ���
#define NET_DVR_SET_MEASURESPEEDCFG                1079     //����ץ�Ļ����ٲ���

#define NET_DVR_GET_IMAGEOVERLAYCFG                1080//��ȡץ�Ļ�ͼ�������Ϣ����
#define NET_DVR_SET_IMAGEOVERLAYCFG                1081//����ץ�Ļ�ͼ�������Ϣ����

#define NET_DVR_GET_SNAPCFG                        1082//��ȡ��IO����ץ�Ĺ�������
#define NET_DVR_SET_SNAPCFG                        1083//���õ�IO����ץ�Ĺ�������

#define NET_DVR_GET_VTPPARAM                    1084//��ȡ������Ȧ����
#define NET_DVR_SET_VTPPARAM                    1085//����������Ȧ����

#define NET_DVR_GET_SNAPENABLECFG                1086//��ȡץ�Ļ�ʹ�ܲ���
#define NET_DVR_SET_SNAPENABLECFG                1087//����ץ�Ļ�ʹ�ܲ���

#define NET_DVR_GET_POSTEPOLICECFG              1088//��ȡ���ڵ羯����
#define NET_DVR_SET_POSTEPOLICECFG              1089//���ÿ��ڵ羯����

#define NET_DVR_GET_JPEGCFG_V30                    1090//��ȡץͼ��JPEG����(����)
#define NET_DVR_SET_JPEGCFG_V30                    1091//����ץͼ��JPEG����(����)

#define NET_DVR_GET_SPRCFG                        1092//��ȡ����ʶ�����
#define NET_DVR_SET_SPRCFG                        1093//���ó���ʶ�����
#define NET_DVR_GET_PLCCFG                      1094//��ȡ�������Ȳ�������
#define NET_DVR_SET_PLCCFG                      1095//���ó������Ȳ�������

#define NET_DVR_GET_DEVICESTATECFG              1096//��ȡ�豸��ǰ״̬����
#define NET_DVR_SET_CALIBRATE_TIME              1097//������չʱ��Уʱ
#define NET_DVR_GET_CALIBRATE_TIME              1098//��ȡ��չʱ��Уʱ

#define NET_DVR_GET_DEVICECFG_V40                1100//��ȡ��չ�豸����
#define NET_DVR_SET_DEVICECFG_V40                1101//������չ�豸����

#define NET_DVR_GET_ZEROCHANCFG                   1102    //��ȡ��ͨ��ѹ������
#define NET_DVR_SET_ZEROCHANCFG                  1103    //������ͨ��ѹ������

#define NET_DVR_GET_ZERO_PREVIEWCFG_V30         1104    // ��ȡ��ͨ��Ԥ����������
#define NET_DVR_SET_ZERO_PREVIEWCFG_V30         1105    // ������ͨ��Ԥ����������

#define NET_DVR_SET_ZERO_ZOOM                    1106     //������ͨ������������
#define NET_DVR_GET_ZERO_ZOOM                    1107     //��ȡ��ͨ������������

#define    NET_DVR_NATASSOCIATECFG_GET                1110    //��ȡNAT���������Ϣ
#define    NET_DVR_NATASSOCIATECFG_SET                1111     //����NAT���������Ϣ

#define NET_DVR_GET_SNMPCFG                       1112    //��ȡSNMP����
#define NET_DVR_SET_SNMPCFG                      1113    //����SNMP����

#define NET_DVR_GET_SNMPCFG_V30                   1114        //��ȡSNMPv30����
#define NET_DVR_SET_SNMPCFG_V30                  1115        //����SNMPv30����

#define    NET_DVR_VIDEOPLATFORMALARMCFG_GET        1130  //��ȡ��Ƶ�ۺ�ƽ̨��������
#define    NET_DVR_VIDEOPLATFORMALARMCFG_SET        1131  //������Ƶ�ۺ�ƽ̨��������

#define NET_DVR_GET_RAID_ADAPTER_INFO           1134    // ��ȡ��������Ϣ
#define NET_DVR_SET_RAID_ADAPTER_INFO           1135    // ������������Ϣ

#define    NET_DVR_MATRIX_BIGSCREENCFG_GET            1140//��ȡ����ƴ�Ӳ���
#define    NET_DVR_MATRIX_BIGSCREENCFG_SET            1141//���ô���ƴ�Ӳ���

#define NET_DVR_GET_MB_PLATFORMPARA                1145 //��ȡƽ̨��¼����
#define NET_DVR_SET_MB_PLATFORMPARA                1146 //����ƽ̨��¼����
#define NET_DVR_GET_MB_DEVSTATUS                1147 //��ȡ�ƶ��豸״̬

#define  NET_DVR_GET_DECODER_JOINT_CHAN            1151//��ȡ�������ͨ��
#define  NET_DVR_SET_DECODER_JOINT_CHAN            1152//���ý������ͨ��

//����������
#define NET_DVR_GET_NETCFG_MULTI                1161        //��ȡ����������
#define NET_DVR_SET_NETCFG_MULTI                1162        //���ö���������
#define NET_DVR_GET_NETCFG_MULTI_V50            1163        //��ȡ����������(����)
#define NET_DVR_SET_NETCFG_MULTI_V50            1164        //���ö���������(����)

#define NET_DVR_GET_CMSPARA                        1170//��ȡƽ̨����
#define NET_DVR_SET_CMSPARA                        1171//����ƽ̨����
#define NET_DVR_GET_DIALSTATUS                    1172//��ȡ����״̬����
#define NET_DVR_GET_SMSRELATIVEPARA                1173//��ȡ������ز���
#define NET_DVR_SET_SMSRELATIVEPARA                1174//���ö�����ز���
#define NET_DVR_GET_PINSTATUS                    1175//��ȡPin״̬
#define NET_DVR_SET_PINCMD                        1176//����PIN����
#define NET_DVR_SET_SENSOR_CFG                    1180//����ģ��������
#define NET_DVR_GET_SENSOR_CFG                    1181//��ȡģ��������
#define NET_DVR_SET_ALARMIN_PARAM                1182//���ñ����������
#define NET_DVR_GET_ALARMIN_PARAM                1183//��ȡ�����������
#define NET_DVR_SET_ALARMOUT_PARAM                1184//���ñ����������
#define NET_DVR_GET_ALARMOUT_PARAM                1185//��ȡ�����������
#define NET_DVR_SET_SIREN_PARAM                    1186//���þ��Ų���
#define NET_DVR_GET_SIREN_PARAM                    1187//��ȡ���Ų���
#define NET_DVR_SET_ALARM_RS485CFG                1188//���ñ�������485����
#define NET_DVR_GET_ALARM_RS485CFG                1189//��ȡ��������485����
#define NET_DVR_GET_ALARMHOST_MAIN_STATUS        1190//��ȡ����������Ҫ״̬
#define NET_DVR_GET_ALARMHOST_OTHER_STATUS        1191//��ȡ������������״̬
#define NET_DVR_SET_ALARMHOST_ENABLECFG            1192//��ȡ��������ʹ��״̬
#define NET_DVR_GET_ALARMHOST_ENABLECFG            1193//���ñ�������ʹ��״̬
#define NET_DVR_SET_ALARM_CAMCFG                1194//������Ƶ�ۺ�ƽ̨��������CAM��������
#define NET_DVR_GET_ALARM_CAMCFG                1195//������Ƶ�ۺ�ƽ̨��������CAM��������
#define NET_DVR_GET_GATEWAY_CFG                 1196//��ȡ�Ž���������
#define NET_DVR_SET_GATEWAY_CFG                 1197//�����Ž���������

#define NET_DVR_GET_ALARMDIALMODECFG            1198//��ȡ�����������Ų���
#define NET_DVR_SET_ALARMDIALMODECFG            1199//���ñ����������Ų���
#define NET_DVR_SET_ALARMIN_PARAM_V50            1200        // ���÷�������V50
#define NET_DVR_GET_ALARMIN_PARAM_V50            1201            // ��ȡ��������V50
#define    NET_DVR_SET_WINCFG                        1202//���ڲ�������
#define NET_DVR_GET_ALARMHOSTDIALSETUPMODE        1204//��ȡ���������������÷�ʽ
#define NET_DVR_SET_ALARMHOSTDIALSETUPMODE        1205//���ñ��������������÷�ʽ

//��Ƶ�����������������(��Ƶ�������� V1.3)
#define NET_DVR_SET_SUBSYSTEM_ALARM                1210    //������ϵͳ��/����
#define NET_DVR_GET_SUBSYSTEM_ALARM                1211    //��ȡ��ϵͳ��/����
#define NET_DVR_GET_WHITELIST_ALARM                1215    //��ȡ����������
#define NET_DVR_SET_WHITELIST_ALARM                1216    //���ð���������
#define    NET_DVR_GET_ALARMHOST_MODULE_LIST        1222    //��ȡ����ģ��
#define NET_DVR_SET_PRIOR_ALARM                    1223    //������ϵͳ��/����
#define NET_DVR_GET_PRIOR_ALARM                    1224    //��ȡ��ϵͳ��/����
#define NET_DVR_SET_TAMPER_ALARMIN_PARAM        1225    // ���÷����������
#define NET_DVR_GET_TAMPER_ALARMIN_PARAM        1226    // ��ȡ�����������

#define NET_DVR_GET_HOLIDAY_PARAM_CFG           1240// ��ȡ�ڼ��ղ���
#define NET_DVR_SET_HOLIDAY_PARAM_CFG           1241// ���ýڼ��ղ���

#define NET_DVR_GET_MOTION_HOLIDAY_HANDLE       1242// ��ȡ�ƶ������ձ�������ʽ
#define NET_DVR_SET_MOTION_HOLIDAY_HANDLE       1243// ��ȡ�ƶ������ձ�������ʽ

#define NET_DVR_GET_VILOST_HOLIDAY_HANDLE       1244// ��ȡ��Ƶ�źŶ�ʧ���ձ�������ʽ
#define NET_DVR_SET_VILOST_HOLIDAY_HANDLE       1245// ��ȡ��Ƶ�źŶ�ʧ���ձ�������ʽ

#define NET_DVR_GET_HIDE_HOLIDAY_HANDLE         1246// ��ȡ�ڸǼ��ձ�������ʽ
#define NET_DVR_SET_HIDE_HOLIDAY_HANDLE         1247// �����ڸǼ��ձ�������ʽ

#define NET_DVR_GET_ALARMIN_HOLIDAY_HANDLE      1248// ��ȡ����������ձ�������ʽ
#define NET_DVR_SET_ALARMIN_HOLIDAY_HANDLE      1249// ���ñ���������ձ�������ʽ
#define NET_DVR_GET_ALARMOUT_HOLIDAY_HANDLE     1250// ��ȡ����������ձ�������ʽ
#define NET_DVR_SET_ALARMOUT_HOLIDAY_HANDLE     1251// ���ñ���������ձ�������ʽ
#define NET_DVR_GET_HOLIDAY_RECORD              1252// ��ȡ����¼�����
#define NET_DVR_SET_HOLIDAY_RECORD              1253// ���ü���¼�����
#define NET_DVR_GET_NETWORK_BONDING             1254// ��ȡBONDING�������
#define NET_DVR_SET_NETWORK_BONDING             1255// ����BONDING�������
#define NET_DVR_GET_LINK_STATUS                 1256// ��ȡͨ��IP����״̬
#define NET_DVR_GET_DISK_QUOTA_CFG              1278// ��ȡ���������Ϣ
#define NET_DVR_SET_DISK_QUOTA_CFG              1279// ���ô��������Ϣ
#define NET_DVR_GET_JPEG_CAPTURE_CFG            1280// ��ȡDVRץͼ����
#define NET_DVR_SET_JPEG_CAPTURE_CFG            1281// ����DVRץͼ����
#define NET_DVR_GET_SCHED_CAPTURECFG            1282// ��ȡץͼ�ƻ�
#define NET_DVR_SET_SCHED_CAPTURECFG            1283// ����ץͼ�ƻ�
#define NET_DVR_GET_VGA_PREVIEWCFG              1284// ��ȡVGAԤ������
#define NET_DVR_SET_VGA_PREVIEWCFG              1285// ����VGAԤ������
#define NET_DVR_GET_VIDEO_INPUT_EFFECT          1286// ��ȡͨ����Ƶ����ͼ�����
#define NET_DVR_SET_VIDEO_INPUT_EFFECT          1287// ����ͨ����Ƶ����ͼ�����

#define NET_DVR_GET_STORAGE_SERVER_SWITCH        1290//��ȡ�洢����������״̬
#define NET_DVR_SET_STORAGE_SERVER_SWITCH        1291//���ô洢����������״̬


#define NET_DVR_GET_OPTICAL_CHANNEL                1300//��ȡ�����ϵͳͨ��������Ϣ
#define NET_DVR_SET_OPTICAL_CHANNEL                1301//���ù����ϵͳͨ��������Ϣ
#define NET_DVR_GET_FIBER_CASCADE                1302//��ȡ���˼���ģʽ
#define NET_DVR_SET_FIBER_CASCADE                1303//���ù��˼���ģʽ
#define NET_DVR_GET_SPARTAN_STATUS                1304//��ȡ����״̬
#define NET_DVR_SET_SPARTAN_STATUS                1305//���ó���״̬
#define NET_DVR_GET_ETHERNET_CHANNEL            1306//��ȡ�˿ھۺϲ���
#define NET_DVR_SET_ETHERMET_CHANNEL            1307//���ö˿ھۺϲ���
#define NET_DVR_OPTICAL_REBOOT                    1320//��˻�����
#define NET_DVR_SET_AUDIOCHAN_CFG                1321//������Ƶ�л�����
#define NET_DVR_GET_AUDIOCHAN_CFG                1322//��ȡ��Ƶ�л�����
//SDI����1.0
#define NET_DVR_SET_MATRIX_BASE_CFG             1332 //���þ����������
#define NET_DVR_GET_MATRIX_BASE_CFG             1333 //��ȡ�����������
#define NET_DVR_SWITCH_MATRIX_IO                1334 //������������л�
#define NET_DVR_GET_MATRIX_IO_RELATION          1335 //��ȡ�����������������ϵ

#define    NET_DVR_V6PSUBSYSTEMARAM_GET            1501//��ȡV6��ϵͳ����
#define    NET_DVR_V6PSUBSYSTEMARAM_SET            1502//����V6��ϵͳ����
#define    NET_DVR_GET_ALLWINCFG                    1503 //���ڲ�����ȡ

#define    NET_DVR_BIGSCREENASSOCIATECFG_GET        1511 //��ȡ������������
#define    NET_DVR_BIGSCREENASSOCIATECFG_SET        1512 //���ô�����������

//1200��
#define    NET_DVR_GETSCREENINFO                    1601 //��ȡ������Ϣ����
#define    NET_DVR_SETSCREENINFO                    1602 //���ô�����Ϣ����
#define    NET_DVR_GET_SCREEN_WINCFG                1603//�������ڲ�����ȡ
#define    NET_DVR_LAYOUTLIST_GET                     1605//��ȡ�����б�
#define    NET_DVR_SET_LAYOUTCFG                    1606 //��������
#define    NET_DVR_LAYOUTCTRL                        1607//���ֿ��ƣ�1-open��2-close
#define    NET_DVR_INPUTLIST_GET                    1608 //��ȡ�����ź�Դ�б�
#define    NET_DVR_SET_INPUTSTREAMCFG                1609 //�����ź�Դ����
#define    NET_DVR_OUTPUT_SET                        1610 //�����������
#define    NET_DVR_OUTPUT_GET                        1611 //���������ȡ
#define    NET_DVR_SET_OSDCFG                        1612 //OSD��������
#define    NET_DVR_GET_OSDCFG                        1613 //OSD������ȡ
#define    NET_DVR_BIGSCREEN_GETSERIAL             1614//��ȡ����������Ϣ
#define    NET_DVR_GET_PLANLIST                    1615//��ȡԤ���б�
#define    NET_DVR_SET_PLAN                        1616//����Ԥ��
#define    NET_DVR_CTRL_PLAN                        1617//����Ԥ��
#define    NET_DVR_GET_DEVICE_RUN_STATUS           1618//��ȡ�豸����״̬
#define NET_DVR_GET_EXTERNAL_MATRIX_CFG            1619//��ȡ������Ϣ
#define    NET_DVR_SET_EXTERNAL_MATRIX_CFG            1620//���þ�����Ϣ
#define    NET_DVR_GET_OUTPUT_SCREEN_RELATION        1621//��ȡ�������Ļ�İ󶨹�ϵ
#define    NET_DVR_SET_OUTPUT_SCREEN_RELATION        1622//�����������Ļ�İ󶨹�ϵ
#define NET_DVR_GET_VCS_USER_CFG                1623//��ȡ�û���Ϣ����
#define    NET_DVR_SET_VCS_USER_CFG                1624//�����û���Ϣ����
#define    NET_DVR_CONTROL_SCREEN                    1625//��Ļ����
#define    NET_DVR_GET_EXTERNAL_MATRIX_CFG_V50        1626    //��ȡ������Ϣ
#define    NET_DVR_SET_EXTERNAL_MATRIX_CFG_V50        1627    //���þ�����Ϣ

#define NET_DVR_GET_DEV_BASEINFO                1650//��ȡ�����豸��Ϣ
#define NET_DVR_SET_DEV_BASEINFO                1651//���õ����豸��Ϣ
#define NET_DVR_GET_DEV_NETINFO                    1652//��ȡ�豸��������Ϣ
#define NET_DVR_SET_DEV_NETINFO                    1653//�����豸��������Ϣ
#define NET_DVR_GET_SIGNAL_SOURCE_INFO            1654//��ȡ�ź�Դ��Ϣ
#define NET_DVR_SET_SIGNAL_SOURCE_INFO            1655//�����ź�Դ��Ϣ
#define NET_DVR_ADJUST_PIC_V40                    1656//ͼ��΢��
#define NET_DVR_RESTORE_V40                        1657//�ָ�Ĭ�ϲ���
#define    NET_DVR_SET_NET_SIGNAL                    1658//���������ź�Դ
#define NET_DVR_REBOOT_V40                        1659//����
#define NET_DVR_CONTROL_PICTURE_V41                1660//ͼƬ����V41

#define NET_DVR_GET_AUTO_REBOOT_CFG             1710//��ȡ�Զ���������
#define NET_DVR_SET_AUTO_REBOOT_CFG             1711//�����Զ���������
#define NET_DVR_GET_TRUNK_USE_STATE             1713//��ȡָ������ʹ��״̬
#define NET_DVR_SET_PTZ_CTRL_INFO                 1714//����PTZ���Ʋ���
#define NET_DVR_GET_PTZ_CTRL_INFO                 1715//��ȡPTZ���Ʋ���
#define NET_DVR_GET_PTZ_STATUS                     1716//��ȡPTZ״̬
#define    NET_DVR_GET_DISP_ROUTE_LIST                1717//��ȡ��ʾ·���б�

#define NET_DVR_GET_DEC_RESOURCE_LIST            1720//��ȡ���ý�����Դ�б�
#define NET_DVR_SET_DEC_RESOURCE_LIST            1721//Ԥ���������Դ
#define NET_DVR_GET_DEC_YUV                        1722//��ȡ����ͨ������YUV�������
#define NET_DVR_SET_DEC_YUV                        1723//���ý���ͨ������YUV�������
#define NET_DVR_GET_DEC_RESOUCE                    1724//����Ƶ�ۺ�ƽ̨���������Դ
#define NET_DVR_FREE_DEC_RESOURCE                1725//�ͷŽ�����Դ

#define NET_DVR_SET_VIDEOWALLDISPLAYMODE        1730//���õ���ǽƴ��ģʽ
#define NET_DVR_GET_VIDEOWALLDISPLAYMODE        1731//��ȡ����ǽƴ��ģʽ
#define NET_DVR_GET_VIDEOWALLDISPLAYNO          1732//��ȡ�豸��ʾ�����
#define    NET_DVR_SET_VIDEOWALLDISPLAYPOSITION    1733//������ʾ���λ�ò���
#define    NET_DVR_GET_VIDEOWALLDISPLAYPOSITION    1734//��ȡ��ʾ���λ�ò���
#define NET_DVR_GET_VIDEOWALLWINDOWPOSITION     1735//��ȡ����ǽ���ڲ���
#define NET_DVR_SET_VIDEOWALLWINDOWPOSITION     1736//���õ���ǽ���ڲ���
#define    NET_DVR_VIDEOWALLWINDOW_CLOSEALL        1737//����ǽ�ر����д���
#define    NET_DVR_SET_VIRTUALLED                    1738//����LED����
#define    NET_DVR_GET_VIRTUALLED                    1739//����LED��ȡ
#define NET_DVR_GET_IMAGE_CUT_MODE              1740//��ȡͼ���и�ģʽ
#define NET_DVR_SET_IMAGE_CUT_MODE              1741//����ͼ���и�ģʽ
#define NET_DVR_GET_USING_SERIALPORT            1742//��ȡ��ǰʹ�ô���
#define NET_DVR_SET_USING_SERIALPORT            1743//���õ�ǰʹ�ô���
#define NET_DVR_SCENE_CONTROL                   1744//��������
#define NET_DVR_GET_CURRENT_SCENE               1745//��ȡ��ǰ������
#define NET_DVR_GET_VW_SCENE_PARAM              1746//��ȡ����ǽ����ģʽ����
#define NET_DVR_SET_VW_SCENE_PARAM              1747//���õ���ǽ����ģʽ����
#define NET_DVR_DISPLAY_CHANNO_CONTROL          1748//����ǽ��ʾ��ſ���
#define NET_DVR_GET_WIN_DEC_INFO                1749//��ȡ���ڽ�����Ϣ��������
#define NET_DVR_RESET_VIDEOWALLDISPLAYPOSITION  1750  //�������ǽ����ӿڰ�
#define NET_DVR_SET_VW_AUDIO_CFG                1752    //������Ƶ�л�����
#define    NET_DVR_GET_VW_AUDIO_CFG                1753    //��ȡ��Ƶ�л�����
#define NET_DVR_GET_GBT28181_DECCHANINFO_CFG    1754    //��ȡGBT28181Э������豸�Ľ���ͨ����Ϣ
#define NET_DVR_SET_GBT28181_DECCHANINFO_CFG    1755    //����GBT28181Э������豸�Ľ���ͨ����Ϣ
#define    NET_DVR_SET_MAINBOARD_SERIAL            1756  //�������ذ崮�ڲ���
#define    NET_DVR_GET_MAINBOARD_SERIAL            1757  //��ȡ���ذ崮�ڲ���
#define NET_DVR_GET_SUBBOARD_INFO               1758  //��ȡ�Ӱ���Ϣ
#define NET_DVR_GET_SUBBOARD_EXCEPTION          1759  //��ȡ�쳣�Ӱ��쳣��Ϣ

#define NET_DVR_GET_CAMERACHAN_SERIALCFG    1760   //��ȡCameraͨ���󶨴�������
#define NET_DVR_SET_CAMERACHAN_SERIALCFG    1761   //����Cameraͨ���󶨴�������
#define NET_DVR_GET_MATRIX_STATUS            1762   //��ȡ��Ƶ�ۺ�ƽ̨״̬
#define    NET_SET_MULTIFUNCTION_SERIALCFG     1763  //���ö๦�ܴ�������
#define    NET_GET_MULTIFUNCTION_SERIALCFG        1764  //��ȡ�๦�ܴ�������
#define NET_DVR_PTZ_3D_SPEED                1765  // 3ά���ٶȵ���̨����

#define  NET_DVR_GET_SIGNAL_JOINT            1766   //��ȡ�ź�Դ������
#define  NET_DVR_SET_SIGNAL_JOINT            1767   //�����ź�Դ������
#define  NET_DVR_SIGNAL_CUT                    1768   //�ź�Դ�ü�
#define  NET_DVR_DYNAMIC_DECODE_BATCH        1769     //������̬����
#define  NET_DVR_DECSWITCH_SET_BATCH        1770    //�������ý���ͨ������
#define  NET_DVR_DECSWITCH_GET_BATCH        1771    //������ȡ����ͨ������
#define  NET_DVR_GET_ALL_SIGNAL_JOINT        1772   //��ȡ�����ź�Դ������
#define     NET_DVR_GET_PLAYING_PLAN            1773    //��ȡ����ִ��Ԥ��
#define  NET_DVR_WALL_RELATION_GET            1774   //��ȡ�豸ǽ������ǽ�Ĺ���
#define  NET_DVR_WALL_RELATION_SET            1775   //�����豸ǽ������ǽ�Ĺ���
#define     NET_DVR_SET_INPUTSTREAMCFG_V40        1776   //�����ź�Դ����
#define  NET_DVR_PTZCFG_INPUTSTREAM_GET        1777  //��ȡ����Դ������̨��������
#define  NET_DVR_PTZCFG_INPUTSTREAM_SET        1778  //��������Դ������̨��������
#define  NET_DVR_SIGNAL_CUTPARAM_GET        1779  //��ȡ�ź�Դ�ü�����

#define NET_DVR_GET_SUBSYSTEM_NETCFG            1780    //��ȡ��ϵͳ��������
#define NET_DVR_SET_SUBSYSTEM_NETCFG              1781    //������ϵͳ��������
#define    NET_DVR_DEL_SIGNAL_JOINT                1782    //ɾ��ƴ���ź�Դ

#define NET_DVR_GET_PICTURE_INFO                1783     //��ȡͼƬ��Ϣ
#define NET_DVR_SET_PICTURE_INFO                1784     //����ͼƬ��Ϣ
#define NET_DVR_GET_VIDEO_INFO                    1785     //��ȡ��Ƶ��Ϣ
#define NET_DVR_SET_VIDEO_INFO                    1786     //������Ƶ��Ϣ
#define NET_DVR_SET_PLAYLIST                    1787     //���ò����б�
#define NET_DVR_GET_PLAYLIST                    1788     //��ȡ�����б�
#define NET_DVR_GET_ALL_PLAYLIST                1789     //��ȡ���в����б�
#define NET_DVR_PLAYITEM_CONTROL                1790     //���������
#define NET_DVR_SET_PLAYPLAN_TEMPLATE            1791     //���ò��żƻ�ģ��
#define NET_DVR_GET_PLAYPLAN_TEMPLATE            1792     //��ȡ���żƻ�
#define NET_DVR_GET_ALL_PLAYPLAN_TEMPLATE        1793     //��ȡ���в��żƻ�
#define NET_DVR_SET_WINDOW_PLAYPLAN                1794     //���ô��ڲ��żƻ�
#define NET_DVR_GET_WINDOW_PLAYPLAN                1795     //��ȡ���ڲ��żƻ�
#define NET_DVR_TOPLAY_ITEM                        1796     //ָ������
#define NET_DVR_DEVICE_PLAY_CONTROL                1797     //�豸���ſ���
#define NET_DVR_GET_PLAY_INFO                    1798     //��ȡ��ǰ������Ϣ
#define NET_DVR_GET_ALL_PICTURE_INFO            1799     //��ȡͼƬ��Ϣ
#define NET_DVR_GET_ALL_VIDEO_INFO                1800     //��ȡ��Ƶ��Ϣ
#define NET_DVR_DELETE_VIDEO_FILE                1801     //ɾ����Ƶ


#define NET_DVR_GET_ALARMHOSTSUBSYSTEM_CFG        2001//����������ȡ��ϵͳ����
#define NET_DVR_SET_ALARMHOSTSUBSYSTEM_CFG        2002//��������������ϵͳ����
#define NET_DVR_GETEXTENDALARMININFO            2003//��ȡ���������Ϣ
#define NET_DVR_MODIFYALARMINNO                 2004//�޸ķ��������Ϣ
#define NET_DVR_GET_ALARMHOST_WIRELESS_NETWORK_CFG    2005//��ȡ���������������
#define    NET_DVR_SET_ALARMHOST_WIRELESS_NETWORK_CFG    2006//�������������������
#define    NET_DVR_GET_ALARMHOST_NETCFG            2007//��ȡ�����������
#define    NET_DVR_SET_ALARMHOST_NETCFG            2008//���������������
#define NET_DVR_GET_LED_SCREEN_CFG                2009// ��ȡLED��Ļ����
#define NET_DVR_SET_LED_SCREEN_CFG                2010// ����LED��Ļ����
#define NET_DVR_GET_LED_CONTENT_CFG                2011// ��ȡLED��������
#define    NET_DVR_SET_LED_CONTENT_CFG                2012// ����LED��������
#define NET_DVR_TURNON_LED                        2013// ��LED��
#define NET_DVR_TURNOFF_LED                        2014// �ر�LED��
#define NET_DVR_GET_LED_TIMER_SWITCH            2015// ��ȡLED����ʱ���ز���
#define NET_DVR_SET_LED_TIMER_SWITCH            2016// ����LED����ʱ���ز���
#define NET_DVR_SET_LED_BRIGHTNESS                2017// �ֶ�����LED������
#define NET_DVR_GET_LED_TIMER_BRIGHTNESS            2018//���÷�ʱLED������
#define NET_DVR_SET_LED_TIMER_BRIGHTNESS            2019//��ȡ��ʱLED������
#define NET_DVR_LED_CHECKTIME                        2020//LEDУʱ
#define NET_DVR_GET_ALARMHOST_AUDIO_ASSOCIATE_ALARM    2021//��ȡ��Ƶ���汨���¼�
#define NET_DVR_SET_ALARMHOST_AUDIO_ASSOCIATE_ALARM    2022//������Ƶ���汨���¼�
#define    NET_DVR_GET_LED_STATUS                        2023//��ȡLED��״̬
#define NET_DVR_CLOSE_SUBSYSTEM_FAULT_ALARM         2027//�ر���ϵͳ������ʾ��
#define NET_DVR_SET_SUBSYSTEM_BYPASS                2028//��ϵͳ��·
#define NET_DVR_CANCEL_SUBSYSTEM_BYPASS                2029//��ϵͳ��·�ָ�

#define NET_DVR_GET_ALARMHOST_SUBSYSTEM_CFG_EX        2030//��ȡ��ϵͳ��չ����
#define    NET_DVR_SET_ALARMHOST_SUBSYSTEM_CFG_EX        2031//������ϵͳ��չ����
#define NET_DVR_GET_ALARMHOST_PRINTER_CFG            2032//��ȡ��ӡ����ӡʹ��
#define    NET_DVR_SET_ALARMHOST_PRINTER_CFG            2033//���ô�ӡ����ӡʹ��
#define    NET_DVR_GET_ALARMHOST_ZONE_LIST_IN_SUBSYSTEM 2034//��ȡָ����ϵͳ�ڵ����з���
#define    NET_DVR_GET_ALARMHOST_TRIGGER_LIST            2035//��ȡ���д�����
#define    NET_DVR_ARM_ALARMHOST_SUBSYSTEM                2036//���������Ͷ���ϵͳ����
#define    NET_DVR_GET_ALARMHOST_EVENT_TRIG_ALARMOUT_CFG 2037// ��ȡ�¼����������������
#define NET_DVR_SET_ALARMHOST_EVENT_TRIG_ALARMOUT_CFG 2038// �����¼����������������
#define    NET_DVR_GET_ALARMHOST_FAULT_CFG                2039// ��ȡ���ϴ�������
#define NET_DVR_SET_ALARMHOST_FAULT_CFG                2040// ���ù��ϴ�������
#define NET_DVR_SEARCH_ARMHOST_EXTERNAL_MODULE         2041//�Զ�����
#define    NET_DVR_REGISTER_ALARMHOST_EXTERNAL_MODULE    2042//�Զ�ע��
#define NET_DVR_CLOSE_ALARMHOST_OVERALL_FAULT_ALARM 2043//�ر�ȫ�ֹ�����ʾ��

#define NET_DVR_GET_SAFETYCABIN_WORK_MODE            2044 //��ȡ�����չ���ģʽ����
#define NET_DVR_SET_SAFETYCABIN_WORK_MODE            2045 //���÷����չ���ģʽ����
#define NET_DVR_GET_SAFETYCABIN_PERSON_SIGNAL_CFG   2046 //��ȡ���������ź�̽�����
#define NET_DVR_SET_SAFETYCABIN_PERSON_SIGNAL_CFG   2047 //���÷��������ź�̽�����

#define  NET_DVR_GET_ALARMHOST_MODULE_CFG            2048//��ȡģ����Ϣ
//#define  NET_DVR_SET_ALARMHOST_MODULE_CFG            2049//����ģ����Ϣ(Ԥ��)

#define     NET_DVR_GET_ALARMHOST_EXTERNAL_DEVICE_STATE        2050//��ȡ485����豸״̬
#define  NET_DVR_SET_ALARMHOST_EXTERNAL_DEVICE_LIMIT_VALUE  2051//��������豸������ֵ
#define  NET_DVR_GET_ALARMHOST_EXTERNAL_DEVICE_LIMIT_VALUE  2052//��ȡ����豸������ֵ
#define  NET_DVR_GET_ALARMHOST_SENSOR_JOINT_CFG                2053// ��ȡģ������������
#define  NET_DVR_SET_ALARMHOST_SENSOR_JOINT_CFG                2054// ����ģ������������
#define     NET_DVR_SET_ALARMHOST_RS485_SLOT_CFG                2055// ���ñ�������485��λ����
#define  NET_DVR_GET_ALARMHOST_RS485_SLOT_CFG                2056// ��ȡ��������485��λ����

#define NET_DVR_GET_ALL_VARIABLE_INFO      2057   // ��ȡ���б���Ԫ����Ϣ
#define NET_DVR_GET_ALARM_POINT_CFG       2058   // ��ȡ�����Ϣ
#define NET_DVR_SET_ALARM_POINT_CFG       2059   // ���õ����Ϣ
#define NET_DVR_GET_HISTORY_VALUE          2060   // ��ȡ��ʷ����
#define NET_DVR_GET_ALARMHOST_ALARM_MODE  2061   // ��ȡ�����ϴ���ʽ
#define NET_DVR_SET_ALARMHOST_ALARM_MODE  2062   // ���������ϴ���ʽ
#define NET_DVR_GET_ALARMHOST_SENSOR_VALUE 2063   // ��ȡģ����ʵʱ����

#define NET_DVR_GET_ALARMHOST_REPORT_CENTER_V40    2064   // ��ȡ�����ϴ���ʽ
#define NET_DVR_SET_ALARMHOST_REPORT_CENTER_V40    2065   // ���������ϴ���ʽ
#define NET_DVR_GET_OUTPUT_SCHEDULE_RULECFG        2068   // ��ȡʱ���������
#define NET_DVR_SET_OUTPUT_SCHEDULE_RULECFG     2069   // ����ʱ���������
#define NET_DVR_GET_CMS_CFG                     2070
#define    NET_DVR_SET_CMS_CFG                        2071

#define NET_DVR_GET_PASSTHROUGH_CAP  2073  //��ȡ�豸͸��������

#define NET_DVR_GET_ALARMHOST_MAIN_STATUS_V40    2072   // ��ȡ��Ҫ״̬V40

/*************************************��Ƶ��������1.3 begin*************************************/
#define NET_DVR_GET_ALARM_CAPTRUE_CFG                 2074    //��ȡ����ץͼ��������
#define    NET_DVR_SET_ALARM_CAPTRUE_CFG                2075    //���ñ���ץͼ��������
#define NET_DVR_GET_ONE_OUTPUT_SCH_RULECFG_V40        2078   // ��ȡ����ʱ���������V40
#define NET_DVR_SET_ONE_OUTPUT_SCH_RULECFG_V40        2079   // ���õ���ʱ���������V40
#define NET_DVR_GET_OUTPUT_SCHEDULE_RULECFG_V40        2080   // ��ȡʱ���������V40
#define NET_DVR_SET_OUTPUT_SCHEDULE_RULECFG_V40     2081   // ����ʱ���������V40
#define  NET_DVR_ALARMHOST_CLOSE_SUBSYSTEM  2082  //����ϵͳ��������
/*************************************��Ƶ��������1.3 end**************************************/


#define NET_DVR_GET_WEEK_PLAN_CFG               2100    //��ȡ��״̬�ܼƻ�����
#define NET_DVR_SET_WEEK_PLAN_CFG               2101    //������״̬�ܼƻ�����
#define NET_DVR_GET_DOOR_STATUS_HOLIDAY_PLAN    2102    //��ȡ��״̬���ռƻ�����
#define NET_DVR_SET_DOOR_STATUS_HOLIDAY_PLAN    2103    //������״̬���ռƻ�����
#define NET_DVR_GET_DOOR_STATUS_HOLIDAY_GROUP   2104    //��ȡ��״̬���������
#define NET_DVR_SET_DOOR_STATUS_HOLIDAY_GROUP   2105    //������״̬���������
#define NET_DVR_GET_DOOR_STATUS_PLAN_TEMPLATE   2106    //��ȡ��״̬�ƻ�ģ�����
#define NET_DVR_SET_DOOR_STATUS_PLAN_TEMPLATE   2107    //������״̬�ƻ�ģ�����
#define NET_DVR_GET_DOOR_CFG                    2108    //��ȡ�Ų���
#define NET_DVR_SET_DOOR_CFG                    2109    //�����Ų���
#define NET_DVR_GET_DOOR_STATUS_PLAN            2110    //��ȡ��״̬�ƻ�����
#define NET_DVR_SET_DOOR_STATUS_PLAN            2111    //������״̬�ƻ�����
#define NET_DVR_GET_GROUP_CFG                   2112    //��ȡȺ�����
#define NET_DVR_SET_GROUP_CFG                   2113    //����Ⱥ�����
#define NET_DVR_GET_MULTI_CARD_CFG              2114    //��ȡ���ؿ�����
#define NET_DVR_SET_MULTI_CARD_CFG              2115    //���ö��ؿ�����
#define NET_DVR_GET_CARD_CFG                    2116    //��ȡ������
#define NET_DVR_SET_CARD_CFG                    2117    //���ÿ�����
#define NET_DVR_CLEAR_ACS_PARAM                    2118    //����Ž���������
#define NET_DVR_GET_SNEAK_CFG                    2119    //��ȡ��Ǳ�ز���
#define NET_DVR_SET_SNEAK_CFG                   2120    //���÷�Ǳ�ز���
#define NET_DVR_GET_MULTI_DOOR_INTERLOCK_CFG    2121    //��ȡ���Ż�������
#define NET_DVR_SET_MULTI_DOOR_INTERLOCK_CFG    2122    //���ö��Ż�������
#define NET_DVR_GET_ACS_WORK_STATUS                2123    //��ȡ�Ž���������״̬
#define NET_DVR_GET_VERIFY_WEEK_PLAN            2124    //��ȡ��������֤��ʽ�ܼƻ�����
#define NET_DVR_SET_VERIFY_WEEK_PLAN            2125    //���ö�������֤��ʽ�ܼƻ�����
#define NET_DVR_GET_CARD_RIGHT_WEEK_PLAN        2126    //��ȡ��Ȩ���ܼƻ�����
#define NET_DVR_SET_CARD_RIGHT_WEEK_PLAN        2127    //���ÿ�Ȩ���ܼƻ�����
#define NET_DVR_GET_VERIFY_HOLIDAY_PLAN         2128    //��ȡ��������֤��ʽ���ռƻ�����
#define NET_DVR_SET_VERIFY_HOLIDAY_PLAN         2129    //���ö�������֤��ʽ���ռƻ�����
#define NET_DVR_GET_CARD_RIGHT_HOLIDAY_PLAN     2130    //��ȡ��Ȩ�޼��ռƻ�����
#define NET_DVR_SET_CARD_RIGHT_HOLIDAY_PLAN     2131    //���ÿ�Ȩ�޼��ռƻ�����
#define NET_DVR_GET_VERIFY_HOLIDAY_GROUP        2132    //��ȡ��������֤��ʽ���������
#define NET_DVR_SET_VERIFY_HOLIDAY_GROUP        2133    //���ö�������֤��ʽ���������
#define NET_DVR_GET_CARD_RIGHT_HOLIDAY_GROUP    2134    //��ȡ��Ȩ�޼��������
#define NET_DVR_SET_CARD_RIGHT_HOLIDAY_GROUP    2135    //���ÿ�Ȩ�޼��������
#define NET_DVR_GET_VERIFY_PLAN_TEMPLATE        2136    //��ȡ��������֤��ʽ�ƻ�ģ�����
#define NET_DVR_SET_VERIFY_PLAN_TEMPLATE        2137    //���ö�������֤��ʽ�ƻ�ģ�����
#define NET_DVR_GET_CARD_RIGHT_PLAN_TEMPLATE    2138    //��ȡ��Ȩ�޼ƻ�ģ�����
#define NET_DVR_SET_CARD_RIGHT_PLAN_TEMPLATE    2139    //���ÿ�Ȩ�޼ƻ�ģ�����
#define NET_DVR_GET_CARD_READER_CFG                2140    //��ȡ����������
#define NET_DVR_SET_CARD_READER_CFG             2141    //���ö���������
#define NET_DVR_GET_CARD_READER_PLAN            2142    //��ȡ��������֤�ƻ�����
#define NET_DVR_SET_CARD_READER_PLAN            2143    //���ö�������֤�ƻ�����
#define NET_DVR_GET_CASE_SENSOR_CFG                2144    //��ȡ�¼�����������
#define NET_DVR_SET_CASE_SENSOR_CFG             2145    //�����¼�����������
#define NET_DVR_GET_CARD_READER_ANTI_SNEAK_CFG  2146    //��ȡ��������Ǳ�ز���
#define NET_DVR_SET_CARD_READER_ANTI_SNEAK_CFG  2147    //���ö�������Ǳ�ز���
#define NET_DVR_GET_PHONE_DOOR_RIGHT_CFG        2148    //��ȡ�ֻ�������Ȩ�޲���
#define NET_DVR_SET_PHONE_DOOR_RIGHT_CFG        2149    //��ȡ�ֻ�������Ȩ�޲���
#define NET_DVR_GET_FINGERPRINT_CFG             2150    //��ȡָ�Ʋ���
#define NET_DVR_SET_FINGERPRINT_CFG             2151    //����ָ�Ʋ���
#define NET_DVR_DEL_FINGERPRINT_CFG             2152    //ɾ��ָ�Ʋ���
#define NET_DVR_GET_EVENT_CARD_LINKAGE_CFG      2153    //��ȡ�¼������������ò���
#define NET_DVR_SET_EVENT_CARD_LINKAGE_CFG      2154    //�����¼������������ò���
#define NET_DVR_GET_ANTI_SNEAK_HOST_CFG            2155    //��ȡ�����鷴Ǳ�ز���
#define NET_DVR_SET_ANTI_SNEAK_HOST_CFG         2156    //���������鷴Ǳ�ز���
#define NET_DVR_GET_READER_ANTI_SNEAK_HOST_CFG  2157    //��ȡ�������������Ǳ�ز���
#define NET_DVR_SET_READER_ANTI_SNEAK_HOST_CFG  2158    //�����������������Ǳ�ز���
#define NET_DVR_GET_ACS_CFG                     2159    //��ȡ�Ž���������
#define NET_DVR_SET_ACS_CFG                     2160    //�����Ž���������
#define NET_DVR_GET_CARD_PASSWD_CFG                2161    //��ȡ�����뿪��ʹ������
#define NET_DVR_SET_CARD_PASSWD_CFG             2162    //���ÿ����뿪��ʹ������
#define NET_DVR_GET_CARD_USERINFO_CFG           2163    //��ȡ���Ź����û���Ϣ����
#define NET_DVR_SET_CARD_USERINFO_CFG           2164    //���ÿ��Ź����û���Ϣ����

#define NET_DVR_GET_ACS_EXTERNAL_DEV_CFG        2165    //��ȡ�Ž����������������
#define NET_DVR_SET_ACS_EXTERNAL_DEV_CFG        2166    //�����Ž����������������
#define NET_DVR_GET_PERSONNEL_CHANNEL_CFG       2167    //��ȡ��Աͨ������
#define NET_DVR_SET_PERSONNEL_CHANNEL_CFG       2168    //������Աͨ������
#define NET_DVR_SET_PLATFORM_VERIFY_CFG         2169    //�·�ƽ̨��֤���
#define NET_DVR_GET_PERSON_STATISTICS_CFG        2170   //��ȡ����ͳ�Ʋ���
#define NET_DVR_SET_PERSON_STATISTICS_CFG        2171   //��������ͳ�Ʋ���
#define NET_DVR_GET_ACS_SCREEN_DISPLAY_CFG        2172   //��ȡ��Ļ�ַ�����ʾ����
#define NET_DVR_SET_ACS_SCREEN_DISPLAY_CFG        2173   //������Ļ�ַ�����ʾ����
#define NET_DVR_GET_GATE_TIME_CFG               2174  //��ȡ��Աͨ��բ��ʱ�����
#define NET_DVR_SET_GATE_TIME_CFG               2175  //������Աͨ��բ��ʱ�����
#define NET_DVR_GET_LOCAL_CONTROLLER_STATUS     2176    //��ȡ�͵ؿ�����״̬
#define NET_DVR_GET_ONLINE_LOCAL_CONTROLLER     2177    //�������߾͵ؿ�����
#define NET_DVR_GET_CARD_CFG_V50                2178    //��ȡ�¿�����(V50)
#define NET_DVR_SET_CARD_CFG_V50                2179    //�����¿�����(V50)
#define NET_DVR_GET_ACS_WORK_STATUS_V50         2180    //��ȡ�Ž���������״̬(V50)
#define NET_DVR_GET_EVENT_CARD_LINKAGE_CFG_V50  2181    //��ȡ�¼������������ò���(V50)
#define NET_DVR_SET_EVENT_CARD_LINKAGE_CFG_V50  2182    //�����¼������������ò���(V50)

#define NET_DVR_GET_SAFETYCABIN_STATE            2197    //��ȡ������״̬
#define NET_DVR_GET_RS485_CASCADE_CFG            2198   //��ȡRs485�����豸����
#define NET_DVR_SET_RS485_CASCADE_CFG            2199   //����Rs485�����豸����

/*************************************��Ƶ��������2.0 begin*************************************/
#define NET_DVR_GET_REMOTECONTROLLER_PERMISION_CFG        2200    //��ȡң����Ȩ�޲���
#define NET_DVR_SET_REMOTECONTROLLER_PERMISION_CFG        2201    //����ң����Ȩ�޲���
#define NET_DVR_GET_KEYBOARD_CFG                        2202    //��ȡ���̲�������
#define NET_DVR_SET_KEYBOARD_CFG                        2203    //���ü��̲�������
#define    NET_DVR_GET_ALARMHOST_WIRELESS_BUSINNESS_INFO    2204    //����ҵ���ѯ
#define    NET_DVR_GET_ALL_REMOTECONTROLLER_LIST            2205    //��ȡ����ң����
#define    NET_DVR_GET_PREVIEW_DELAY_CFG                    2206    //��ȡ�ӳ�Ԥ����������
#define    NET_DVR_SET_PREVIEW_DELAY_CFG                    2207    //�����ӳ�Ԥ����������
#define NET_DVR_GET_ZONE_CHANNEL_LINKAGE_CFG            2208    //��ȡ����������Ƶͨ������
#define NET_DVR_SET_ZONE_CHANNEL_LINKAGE_CFG            2209    //���÷���������Ƶͨ������
#define NET_DVR_GET_CENTER_SERVER_CFG                    2210    //��ȡ�������ķ�����
#define NET_DVR_SET_CENTER_SERVER_CFG                    2211    //���ñ������ķ�����
/*************************************��Ƶ��������2.0 end**************************************/

/********************************һ��ʽ����������ƷV1.0.0 begin********************************/
#define NET_DVR_GET_EMERGENCE_ALARM_PRODUCT_CAP            2212    //��ȡһ��ʽ����������Ʒ����
#define NET_DVR_GET_CALL_WAITTING_CFG_CAP                2213    //��ȡ���еȴ�������������
#define NET_DVR_GET_CALL_WAITTING_CFG                    2214    //��ȡ���еȴ���������
#define NET_DVR_SET_CALL_WAITTING_CFG                    2215    //���ú��еȴ���������
#define NET_DVR_GET_ALARM_LAMP_CFG_CAP                    2216    //��ȡ���Ʋ�����������
#define NET_DVR_GET_ALARM_LAMP_CFG                        2217    //��ȡ���Ʋ�������
#define NET_DVR_SET_ALARM_LAMP_CFG                        2218    //���þ��Ʋ�������
#define NET_DVR_GET_VOICE_PROMPTION_CFG_CAP                2219    //��ȡ������ʾ��������
#define NET_DVR_GET_VOICE_PROMPTION_CFG                    2220    //��ȡ������ʾ����
#define NET_DVR_SET_VOICE_PROMPTION_CFG                    2221    //����������ʾ����
#define NET_DVR_GET_EMERGENCE_ALARM_RESPONSE_CAP        2222    //��ȡ����������������
#define NET_DVR_EMERGENCE_ALARM_RESPONSE_CTRL            2223    //���������������
/********************************һ��ʽ����������ƷV1.0.0 end**********************************/

//���籨������ V2.2
#define NET_DVR_GET_ALARMHOST_NETCFG_V50                2224    //��ȡ�������������������V50
#define NET_DVR_SET_ALARMHOST_NETCFG_V50                2225    //���ñ������������������V50
#define    NET_DVR_REGISTER_ALARM_RS485                    2226    //RS485����ע��
/**********************************������������V3.0****************************************/

#define NET_DVR_GET_ALARMIN_PARAM_LIST                    2227    //��ȡ���������б�
//���߱�������1.0.0
#define NET_DVR_GET_ALARMHOST_OTHER_STATUS_V50            2228    //��ȡ������������״̬v50
#define NET_DVR_GET_ALARMIN_ASSOCIATED_CHAN_LIST        2229    //��ȡ��������������Ƶͨ�������б�
#define NET_DVR_GET_ALARMIN_TRIGGER                     2230    //��ȡ��������������������
#define NET_DVR_SET_ALARMIN_TRIGGER                     2231    //���ñ�������������������
#define NET_DVR_GET_EMERGENCY_CALL_HELP_TRIGGER         2232    //��ȡ������������������������
#define NET_DVR_SET_EMERGENCY_CALL_HELP_TRIGGER         2233    //���ñ�����������������������
#define NET_DVR_GET_CONSULT_TRIGGER                     2234    //��ȡ��������ҵ����ѯ��������
#define NET_DVR_SET_CONSULT_TRIGGER                     2235    //���ñ�������ҵ����ѯ��������

#define NET_DVR_GET_CARD_RIGHT_WEEK_PLAN_V50    2304  //��ȡ��Ȩ���ܼƻ�����V50
#define NET_DVR_SET_CARD_RIGHT_WEEK_PLAN_V50    2305  //���ÿ�Ȩ���ܼƻ�����V50

#define NET_DVR_GET_CARD_RIGHT_HOLIDAY_PLAN_V50    2310  //��ȡ��Ȩ�޼��ռƻ�����V50
#define NET_DVR_SET_CARD_RIGHT_HOLIDAY_PLAN_V50    2311  //���ÿ�Ȩ�޼��ռƻ�����V50

#define NET_DVR_GET_CARD_RIGHT_HOLIDAY_GROUP_V50      2316 //��Ȩ�޼��������V50
#define NET_DVR_SET_CARD_RIGHT_HOLIDAY_GROUP_V50      2317 //���ÿ�Ȩ�޼��������V50

#define NET_DVR_GET_CARD_RIGHT_PLAN_TEMPLATE_V50     2322 //��ȡ��Ȩ�޼ƻ�ģ�����V50
#define NET_DVR_SET_CARD_RIGHT_PLAN_TEMPLATE_V50     2323//���ÿ�Ȩ�޼ƻ�ģ�����V50

/**********************************������ָ���Ž���ƷV1.0****************************************/
#define NET_DVR_GET_SCHEDULE_INFO                       2500    //��ȡ�Ű���Ϣ
#define NET_DVR_GET_ATTENDANCE_SUMMARY_INFO             2501    //��ȡ���ڻ�����Ϣ
#define NET_DVR_GET_ATTENDANCE_RECORD_INFO              2502    //��ȡ���ڼ�¼��Ϣ
#define NET_DVR_GET_ABNORMAL_INFO                       2503    //��ȡ�쳣ͳ����Ϣ
/**********************************������ָ���Ž���ƷV1.0****************************************/

/*************************************��Ƶ�Ž�һ���1.0 begin**************************************/
#define NET_DVR_CAPTURE_FINGERPRINT_INFO                2504    //�ɼ�ָ����Ϣ
/*************************************��Ƶ�Ž�һ���1.0 end**************************************/

/*************************************����ʶ���Ž�һ���1.0 begin**************************************/
#define NET_DVR_GET_CARD_READER_CFG_V50                    2505    //��ȡ����������(V50)
#define NET_DVR_SET_CARD_READER_CFG_V50                 2506    //���ö���������(V50)
#define NET_DVR_GET_FACE_PARAM_CFG                      2507    //��ȡ��������
#define NET_DVR_SET_FACE_PARAM_CFG                      2508    //������������
#define NET_DVR_DEL_FACE_PARAM_CFG                      2509    //ɾ����������
#define    NET_DVR_CAPTURE_FACE_INFO                        2510    //�ɼ�������Ϣ
/*************************************����ʶ���Ž�һ���1.0 end**************************************/
#define NET_DVR_GET_REGISTER_INFO                       2511    //�Ǽ���Ϣ��ȡ

#define NET_DVR_GET_SMSRELATIVEPARA_V50                    2512    //��ȡ������ز���
#define NET_DVR_SET_SMSRELATIVEPARA_V50                    2513    //���ö�����ز���
#define NET_DVR_GET_ACS_EVENT                           2514    //�豸�¼���ȡ
#define NET_DVR_GET_MULTI_CARD_CFG_V50                  2515    //��ȡ���ؿ�����V50
#define NET_DVR_SET_MULTI_CARD_CFG_V50                  2516    //���ö��ؿ�����V50
#define NET_DVR_DEL_FINGERPRINT_CFG_V50                 2517    //ɾ��ָ�Ʋ���V50
#define NET_DVR_GET_EVENT_CARD_LINKAGE_CFG_V51          2518    //��ȡ�¼������������ò���(V51)
#define NET_DVR_SET_EVENT_CARD_LINKAGE_CFG_V51          2519    //�����¼������������ò���(V51)

#define NET_DVR_SET_EXAM_INFO                           2530    //������Ϣ�·�
#define NET_DVR_SET_EXAMINEE_INFO                       2531    //������Ϣ�·�
#define NET_DVR_SEARCH_EXAM_COMPARE_RESULT              2532    //���ԱȶԽ����ѯ

#define NET_DVR_GET_ALL_ALARM_RS485CFG            2705    // ��ȡ485����
#define NET_DVR_GET_ALL_ALARMHOST_RS485_SLOT_CFG        2706        // ��ȡ���б�������485��λ����
#define NET_DVR_GET_DEVICE_SELF_CHECK_STATE        2707    //��ȡ�豸�Լ칦��
#define NET_DVR_GET_ALL_ALARM_POINT_CFG            2708    // ��ȡ���е�Ų���
#define NET_DVR_GET_ALL_ALARM_SENSOR_CFG        2709    // ��ȡ����ģ��������
#define NET_DVR_GET_ALL_ALARM_SENSOR_JOINT        2710    //��ȡ����ģ������������
#define NET_DVR_GET_AIR_CONDITION_PARAM            2711    //��ȡ�յ�����
#define NET_DVR_GET_OUT_SCALE_CFG                2712        //��ȡ�������������
#define NET_DVR_SET_OUT_SCALE_CFG                2713        //�����������������
#define NET_DVR_GET_ALARM_CHAN_ABLITITY            2714        //��ȡ�������ͨ����
/**********************************������������V3.0****************************************/

//������������D2000 V1.0
#define NET_DVR_GET_ALARMCENTER_NETCFG            2715        //��ȡ�������������������
#define NET_DVR_SET_ALARMCENTER_NETCFG            2716        //��ȡ�������������������


#define NET_ITC_GET_TRIGGERCFG                  3003  //��ȡ��������
#define NET_ITC_SET_TRIGGERCFG                  3004  //���ô�������
#define NET_ITC_GET_IOOUT_PARAM_CFG                3005  //��ȡIO���������3.1��֮��汾��
#define NET_ITC_SET_IOOUT_PARAM_CFG                3006  //����IO���������3.1��֮��汾��

#define NET_DVR_GET_CAMERA_SETUPCFG                3007  //��ȡ����������
#define NET_DVR_SET_CAMERA_SETUPCFG                3008  //��������������

#define NET_ITC_GET_TRIGGER_DEFAULTCFG          3013  //��ȡ����ģʽ�Ƽ�����
#define NET_DVR_GET_STATUS_DETECTCFG            3015  //��ȡ״̬���ʹ�ܲ���
#define NET_DVR_SET_STATUS_DETECTCFG            3016  //����״̬���ʹ�ܲ���
#define NET_ITC_GET_VIDEO_TRIGGERCFG            3017  //��ȡ��Ƶ�羯��������
#define NET_ITC_SET_VIDEO_TRIGGERCFG            3018  //������Ƶ�羯��������
#define NET_DVR_GET_TPS_ALARMCFG                3019  //��ȡ��ͨͳ�Ʊ�������
#define NET_DVR_SET_TPS_ALARMCFG                3020  //���ý�ͨͳ�Ʊ�������


#define NET_DVR_GET_REDAREACFG                  3100   //��ȡ���̵��������
#define NET_DVR_SET_REDAREACFG                  3101   //���ú��̵��������
#define    NET_DVR_GET_TEST_SPOT                    3102   //��ȡSPOT�ڲ����ܲ����͵�ǰ�ڼ���
#define    NET_DVR_SET_TEST_SPOT                    3103   //����SPOT�ڲ����ܲ����͵�ǰ�ڼ���
#define NET_DVR_GET_CABINETCFG                    3104   //����������û�ȡ
#define NET_DVR_SET_CABINETCFG                    3105   //���������������
#define NET_DVR_VEHICLE_CHECK_START                3106   //�������������ݻش�
#define NET_DVR_SET_CAPTUREPIC_CFG                3107   //����ץͼ������������
#define NET_DVR_GET_CAPTUREPIC_CFG                3108   //����ץͼ���û�ȡ����
#define NET_DVR_SET_MOBILEPLATE_RECOG_CFG        3109   //���س���ʶ��������������
#define NET_DVR_GET_MOBILEPLATE_RECOG_CFG        3110   //���س���ʶ�����û�ȡ����
#define NET_DVR_SET_MOBILE_RADAR_CFG            3111   //�����״�������������
#define NET_DVR_GET_MOBILE_RADAR_CFG            3112   //�����״����û�ȡ����
#define NET_DVR_SET_MOBILE_LOCALPLATECHK_CFG    3113   //���غ��������ضԱ�������������
#define NET_DVR_GET_MOBILE_LOCALPLATECHK_CFG    3114   //���غ��������ضԱ����û�ȡ����

#define  NET_ITC_GET_ICRCFG                        3115   //��ȡICR�����л�
#define  NET_ITC_SET_ICRCFG                        3116   //����ICR�����л�
#define  NET_ITC_GET_RS485_ACCESSINFO            3117   //��ȡRs485���������豸����Ϣ
#define  NET_ITC_SET_RS485_ACCESSINFO            3118   //����Rs485���������豸����Ϣ
#define  NET_ITC_GET_EXCEPTIONCFG                 3119   //��ȡ�쳣����
#define  NET_ITC_SET_EXCEPTIONCFG                3120   //�����쳣����
#define  NET_ITC_GET_FTPCFG                        3121   //��ȡITC  FTP���ò���
#define  NET_ITC_SET_FTPCFG                        3122   //����ITC FTP���ò���

#define  NET_DVR_VEHICLE_CONTROL_LIST_START     3123   //���ó����ڰ�������Ϣ
#define  NET_DVR_GET_ALL_VEHICLE_CONTROL_LIST   3124   //��ȡ���г����ڰ�������Ϣ
#define  NET_DVR_VEHICLE_DELINFO_CTRL           3125   //ɾ���豸�ں��������ݿ���Ϣ
#define  NET_DVR_GET_ENTRANCE_PARAMCFG            3126   //��ȡ����ڿ��Ʋ���
#define  NET_DVR_SET_ENTRANCE_PARAMCFG            3127   //���ó���ڿ��Ʋ���
#define  NET_DVR_BARRIERGATE_CTRL               3128   //Զ�̿��Ƶ�բ
#define  NET_DVR_GATELAMP_CTRL                  3129   //�����ƹ���
#define  NET_DVR_GET_CURTRIGGERMODE             3130   //��ȡ�豸��ǰ����ģʽ
#define  NET_DVR_GET_GPSDATACFG                    3131   //��ȡGPS����
#define  NET_DVR_SET_GPSDATACFG                    3132   //����GPS����
#define  NET_DVR_VEHICLELIST_CTRL_START            3133   //���ó����ڰ�������Ϣ

#define  NET_DVR_GET_GUARDCFG                   3134   //��ȡ����ʶ����ƻ�
#define  NET_DVR_SET_GUARDCFG                   3135   //���ó���ʶ����ƻ�
#define  NET_DVR_GET_SNAPINFO_CFG               3136   //��ȡץ��ͼƬ����
#define  NET_DVR_SET_SNAPINFO_CFG               3137   //����ץ��ͼƬ����
#define  NET_DVR_GET_SNAPINFO_CFG_V40           3138   //��ȡץ��ͼƬ������չ
#define  NET_DVR_SET_SNAPINFO_CFG_V40           3139   //����ץ��ͼƬ������չ
#define  NET_DVR_SET_CURTRIGGERMODE                3140   //�����豸��ǰ����ģʽ(��IPC/D֧��)
#define     NET_DVR_GET_TRAFFIC_DATA                3141   //�����ӻ�ȡ��ͨ����
#define     NET_DVR_GET_TRAFFIC_FLOW                3142   //�����ӻ�ȡ��ͨ����
#define  NET_DVR_PARKING_VEHICLE_SEND           3143   //ͣ��������Ϣ�·�
#define  NET_DVR_PARKING_CARD_SEND              3144   //ͣ�����·�
#define     NET_DVR_PARKING_CARD_CTRL                3145   //ͣ����ͣ�������ƽӿ�

#define    NET_DVR_GET_ALARMCTRL_CAPABILITIES        3146   //��ȡ������������
#define    NET_DVR_SET_ALARMCTRL_CFG                3147   //���ñ�������
#define    NET_DVR_GET_ALARMCTRL_CFG                3148   //��ȡ��������

#define NET_DVR_GET_AUDIO_INPUT                 3201   //��ȡ��Ƶ�������
#define NET_DVR_SET_AUDIO_INPUT                 3202  //������Ƶ�������
#define NET_DVR_GET_CAMERA_DEHAZE_CFG           3203   //��ȡ͸���������
#define NET_DVR_SET_CAMERA_DEHAZE_CFG           3204  //����͸���������
#define NET_DVR_REMOTECONTROL_ALARM             3205  //Զ�̿���ң��������
#define NET_DVR_REMOTECONTROL_DISALARM          3206  //Զ�̿���ң��������
#define NET_DVR_REMOTECONTROL_STUDY             3207  //Զ�̿���ң����ѧϰ
#define NET_DVR_WIRELESS_ALARM_STUDY            3208  //Զ�̿������߱���ѧϰ
#define NET_IPC_GET_AUX_ALARMCFG                3209   //��ȡ����������������
#define NET_IPC_SET_AUX_ALARMCFG                3210  //���ø���������������
#define NET_DVR_GET_PREVIEW_DISPLAYCFG            3211  //��ȡԤ����ʾ����
#define NET_DVR_SET_PREVIEW_DISPLAYCFG             3212  //����Ԥ����ʾ����
#define NET_DVR_REMOTECONTROL_PTZ                3213  //Զ�̿���PTZ
#define NET_DVR_REMOTECONTROL_PRESETPOINT       3214   //Զ�̿���Ԥ�õ�
#define NET_DVR_REMOTECONTROL_CRUISE             3215   //Զ�̿���Ѳ��

#define NET_DVR_GET_MULTI_STREAM_COMPRESSIONCFG  3216 //Զ�̻�ȡ������ѹ������
#define NET_DVR_SET_MULTI_STREAM_COMPRESSIONCFG  3217 //Զ�����ö�����ѹ������

#define NET_DVR_GET_WPSCFG                        3218  //��ȡWPS����
#define NET_DVR_SET_WPSCFG                        3219  //����WPS����
#define NET_DVR_WPS_CONNECT                     3220  //Զ������WPS����
#define NET_DVR_GET_DEVICE_PIN                  3221  //��ȡ�豸PIN��
#define NET_DVR_UPDATE_PIN                      3223  //�����豸PIN��
#define NET_DVR_GET_PRESETCFG                   3224  //��ȡԤ�õ����
#define NET_DVR_GET_PTZCRUISECFG                3225  //��ȡѲ��·������
#define NET_DVR_GET_PRESET_NUM                    3226  //��ȡԤ�õ����
#define NET_DVR_GET_PTZCRUISE_NUM                3227  //��ȡѲ��·������

#define NET_DVR_GET_MOTION_TRACK_CFG            3228  //��ȡ���ٲ���
#define NET_DVR_SET_MOTION_TRACK_CFG            3229  //���ø��ٲ���
#define NET_DVR_CLEAR_IPC_PARAM                    3230  //���ǰ�˲���
#define NET_DVR_GET_IPADDR_FILTERCFG            3232  //��ȡIP��ַ���˲���
#define NET_DVR_SET_IPADDR_FILTERCFG            3233  //����IP��ַ���˲���

#define NET_DVR_GET_LOGO_OVERLAYCFG                3234  //��ȡLOGOͼƬ���Ӳ���
#define NET_DVR_SET_LOGO_OVERLAYCFG                3235  //����LOGOͼƬ���Ӳ���

#define NET_DVR_GET_IPV6_LIST                   3236  //��ȡ������ȫ��IPV6��ַ��Ϣ
#define NET_DVR_GET_AUDIOOUT_VOLUME             3237  //��ȡ�����Ƶ��С
#define NET_DVR_SET_AUDIOOUT_VOLUME             3238  //���������Ƶ��С
#define NET_DVR_GET_FUZZY_UPGRADE               3239  //��ȡģ������ƥ����Ϣ

#define NET_DVR_GET_BV_CORRECT_PARAM            3240  //��ȡ���У������
#define NET_DVR_SET_BV_CORRECT_PARAM            3241  //�������У������
#define NET_DVR_GET_OUTPUT_VIDEO_TYPE           3242  //��ȡ�����Ƶ����
#define NET_DVR_SET_OUTPUT_VIDEO_TYPE           3243  //���������Ƶ����

#define NET_DVR_FISHEYE_CFG                     3244  //���۳���������
#define NET_DVR_GET_PTZ_POINT                   3245  //��ȡPTZ������
#define NET_DVR_SET_PTZ_POINT                   3246  //����PTZ������
#define NET_DVR_REMOTECONTROL_DEV_PARAM         3247  //�����豸��¼�ͻ��˲���
#define NET_DVR_GET_FISHEYE_STREAM_STATUS       3248  //��ȡ��������״̬

#define NET_DVR_GET_GBT28181_ACCESS_CFG            3249  //��ȡGBT28181Э���������
#define NET_DVR_SET_GBT28181_ACCESS_CFG            3250  //����GBT28181Э���������
#define NET_DVR_GET_GBT28181_CHANINFO_CFG        3251  //��ȡGBT28181Э������豸��ͨ����Ϣ
#define NET_DVR_SET_GBT28181_CHANINFO_CFG        3252  //����GBT28181Э������豸��ͨ����Ϣ
#define NET_DVR_GET_GBT28181_ALARMINCFG            3253  //��ȡGBT28181Э������豸�ı�����Ϣ
#define NET_DVR_SET_GBT28181_ALARMINCFG            3254  //����GBT28181Э������豸�ı�����Ϣ
#define NET_DVR_GET_ISP_CAMERAPARAMCFG            3255  //��ȡISPǰ�˲�������
#define NET_DVR_SET_ISP_CAMERAPARAMCFG            3256  //����ISPǰ�˲�������
#define NET_DVR_GET_DEVSERVER_CFG                3257  //��ȡģ���������
#define NET_DVR_SET_DEVSERVER_CFG                3258  //����ģ���������

//2013-11-25
#define    NET_DVR_GET_WIPERINFO_CFG                3259     //��ˢ���û�ȡ
#define    NET_DVR_SET_WIPERINFO_CFG                3260     //��ˢ��������
#define NET_DVR_GET_TRACK_DEV_PARAM             3261   //��ȡ�����豸����
#define NET_DVR_SET_TRACK_DEV_PARAM             3262   //���ø����豸����
#define NET_DVR_GET_PTZ_TRACK_PARAM             3263   //��ȡPTZ���ٲ���
#define NET_DVR_SET_PTZ_TRACK_PARAM             3264   //����PTZ���ٲ���
#define NET_DVR_GET_CENTER_POINT_CFG            3265   //��ȡ���ĵ����
#define NET_DVR_SET_CENTER_POINT_CFG            3266   //�������ĵ����
#define NET_DVR_GET_CENTER_POINT_CFG_CAPABILITIES        3267    //��ȡ���ĵ��������
#define NET_DVR_GET_FISHEYE_CAPABILITIES        3268        //��ȡ��������

#define NET_DVR_GET_BASICPARAMCFG                3270 //��ȡPTZ���û���������Ϣ
#define NET_DVR_SET_BASICPARAMCFG                3271 //����PTZ���û���������Ϣ
#define NET_DVR_GET_PTZOSDCFG                    3272 //��ȡPTZ OSD���ò�����Ϣ
#define NET_DVR_SET_PTZOSDCFG                    3273 //����PTZ OSD���ò�����Ϣ
#define NET_DVR_GET_POWEROFFMEMCFG                3274 //��ȡ�������ģʽ������Ϣ
#define NET_DVR_SET_POWEROFFMEMCFG                3275 //���õ������ģʽ������Ϣ
#define NET_DVR_GET_LIMITCFG                    3276 //��ȡ��λ����������Ϣ
#define NET_DVR_SET_LIMITCFG                    3277 //������λ����������Ϣ
#define NET_DVR_PTZLIMIT_CTRL                    3278 //�����λ��������

#define NET_DVR_PTZ_CLEARCTRL                    3279 //���������Ϣ���ƽӿ�
#define NET_DVR_GET_PRIORITIZECFG                3281 //��ȡ��̨����������Ϣ
#define NET_DVR_SET_PRIORITIZECFG                3282 //������̨����������Ϣ
#define NET_DVR_PTZ_INITIALPOSITIONCTRL            3283 //�㷽λ�ǿ���
#define NET_DVR_GET_PRIVACY_MASKSCFG            3285 //��ȡ��˽�ڱβ���
#define NET_DVR_SET_PRIVACY_MASKSCFG            3286 //������˽�ڱβ���
#define NET_DVR_GET_PTZLOCKCFG                    3287 //��ȡ��̨������Ϣ
#define NET_DVR_SET_PTZLOCKCFG                    3288 //������̨������Ϣ
#define NET_DVR_PTZ_ZOOMRATIOCTRL                3289 //���ø��ٱ���
#define NET_DVR_GET_PTZLOCKINFO                    3290 //��ȡ��̨����ʣ������
#define NET_DVR_GET_PRIVACY_MASKS_ENABLECFG        3291 //��ȡȫ��ʹ��
#define NET_DVR_SET_PRIVACY_MASKS_ENABLECFG        3292 //����ȫ��ʹ��
#define NET_DVR_GET_SMARTTRACKCFG                3293 //��ȡ�����˶�����������Ϣ
#define NET_DVR_SET_SMARTTRACKCFG                3294 //���������˶�����������Ϣ
#define NET_DVR_GET_EPTZ_CFG                    3295 //��ȡEPTZ����
#define NET_DVR_SET_EPTZ_CFG                    3296 //����EPTZ����
#define NET_DVR_GET_EPTZ_CFG_CAPABILITIES        3297 //��ȡEPTZ��������

#define NET_DVR_GET_LOW_LIGHTCFG                3303//��ȡ������ն�������Ϣ
#define NET_DVR_SET_LOW_LIGHTCFG                3304//���ÿ�����ն�������Ϣ
#define NET_DVR_GET_FOCUSMODECFG                3305//��ȡ����۽�ģʽ��Ϣ
#define NET_DVR_SET_FOCUSMODECFG                3306//���ÿ���۽�ģʽ��Ϣ
#define NET_DVR_GET_INFRARECFG                  3307//��ȡ�������������Ϣ
#define NET_DVR_SET_INFRARECFG                  3308//���ÿ������������Ϣ
#define NET_DVR_GET_AEMODECFG                   3309//��ȡ��������������Ϣ
#define NET_DVR_SET_AEMODECFG                   3310//���ÿ�������������Ϣ
#define NET_DVR_CONTROL_RESTORE_SUPPORT         3311 //�ָ�ǰ��Ĭ�ϲ���(�����������е�ǰ�˲���������صĶ��ָ�)
#define NET_DVR_CONTROL_RESTART_SUPPORT         3312 //�����о����
#define NET_DVR_CONTROL_PTZ_PATTERN             3313//��̨����ɨ��
#define NET_DVR_GET_PTZ_PARKACTION_CFG          3314//��ȡ��̨��������
#define NET_DVR_SET_PTZ_PARKACTION_CFG          3315//������̨��������
#define NET_DVR_CONTROL_PTZ_MANUALTRACE         3316//�ֶ����ٶ�λ
#define NET_DVR_GET_ROI_DETECT_NUM                3349 //��ȡROI�����������Ŀ
#define NET_DVR_GET_ROI_DETECT                    3350 //��ȡROI�����������
#define NET_DVR_SET_ROI_DETECT                    3351 //����ROI�����������
#define NET_DVR_GET_FACE_DETECT                    3352 //��ȡ�����������
#define NET_DVR_SET_FACE_DETECT                    3353 //���������������
#define NET_DVR_GET_CORRIDOR_MODE                3354 //��ȡ����ģʽ��������
#define NET_DVR_SET_CORRIDOR_MODE                3355 //��������ģʽ��������
#define NET_DVR_GET_SCENECHANGE_DETECTIONCFG    3356 //��ȡ���������������
#define NET_DVR_SET_SCENECHANGE_DETECTIONCFG    3357 //���ó��������������
#define NET_DVR_GET_TRAVERSE_PLANE_DETECTION    3360
#define NET_DVR_SET_TRAVERSE_PLANE_DETECTION    3361
#define NET_DVR_GET_FIELD_DETECTION                3362 //��ȡ�����������
#define NET_DVR_SET_FIELD_DETECTION                3363 //���������������
#define NET_DVR_GET_DEFOCUSPARAM                3364 //��ȡ�齹����������
#define NET_DVR_SET_DEFOCUSPARAM                3365 //�����齹����������
#define NET_DVR_GET_AUDIOEXCEPTIONPARAM            3366 //��ȡ��Ƶ�쳣����
#define NET_DVR_SET_AUDIOEXCEPTIONPARAM            3367 //������Ƶ�쳣����
#define NET_DVR_GET_CCDPARAMCFG_EX              3368 //��ȡCCD��������
#define NET_DVR_SET_CCDPARAMCFG_EX              3369 //����CCD��������
#define NET_DVR_START_GET_INPUTVOLUME            3370//��ʼ��ȡ����
#define NET_DVR_SET_SCH_TASK                    3380 //���������ʱ����
#define NET_DVR_GET_SCH_TASK                    3381  //��ȡ�����ʱ����
#define NET_DVR_SET_PRESET_NAME                    3382 //����Ԥ�õ�����
#define NET_DVR_GET_PRESET_NAME                    3383 //��ȡԤ�õ�����
#define NET_DVR_SET_AUDIO_NAME                    3384 //������������
#define NET_DVR_GET_AUDIO_NAME                    3385  //��ȡ��������
#define NET_DVR_RESUME_INITRACKPOS              3386  //�ָ����ٳ�ʼλ
#define NET_DVR_NTP_SERVER_TEST                    3387    //NTP����������
#define    NET_DVR_NAS_SERVER_TEST                    3388    //NAS����������
#define    NET_DVR_EMAIL_SERVER_TEST                3389    //Email����������
#define    NET_DVR_FTP_SERVER_TEST                    3390    //FTP����������
#define    NET_DVR_IP_TEST                            3391    //IP����
#define NET_DVR_GET_NET_DISKCFG_V40             3392 //����Ӳ�̽����ȡv40
#define NET_DVR_SET_NET_DISKCFG_V40                3393 //����Ӳ�̽�������v40
#define    NET_DVR_GET_IOOUT_CFG                    3394//��ȡ����Ʋ���
#define    NET_DVR_SET_IOOUT_CFG                    3395//���ò���Ʋ���
#define    NET_DVR_GET_SIGNAL_SYNC                    3396//��ȡ�źŵ�ͬ�����ò���
#define    NET_DVR_SET_SIGNAL_SYNC                    3397//�����źŵ�ͬ�����ò���

#define    NET_DVR_GET_EZVIZ_ACCESS_CFG            3398//��ȡEZVIZ�������
#define    NET_DVR_SET_EZVIZ_ACCESS_CFG            3399//����EZVIZ�������
#define    NET_DVR_GET_SCHEDULE_AUTO_TRACK_CFG        3400//��ȡ��ʱ���ܸ��ٲ���
#define    NET_DVR_SET_SCHEDULE_AUTO_TRACK_CFG        3401//���ö�ʱ���ܸ��ٲ���
#define    NET_DVR_MAKE_I_FRAME                    3402//ǿ��I֡
#define NET_DVR_GET_ALARM_RELATE                3403//��ȡ��������ͨ�����ܲ���
#define NET_DVR_SET_ALARM_RELATE                3404//���ñ�������ͨ�����ܲ���
#define NET_DVR_GET_PDC_RULECFG_V42             3405  //����������ͳ�ƹ���(��չ)
#define NET_DVR_SET_PDC_RULECFG_V42             3406  //��ȡ������ͳ�ƹ���(��չ)
#define NET_DVR_GET_HEATMAP_CFG                 3407  //�����ȶ�ͼ��������
#define NET_DVR_SET_HEATMAP_CFG                 3408  //��ȡ�ȶ�ͼ��������
#define NET_DVR_REMOTECONTROL_LINEARSCAN        3409   //�������ұ߽���� 2014-03-15
#define NET_DVR_DPC_CTRL                        3410//����У������
#define NET_DVR_FFC_MANUAL_CTRL                 3411//�Ǿ�����У��(FFC)�ֶ�ģʽ
#define NET_DVR_FFC_BACKCOMP_CTRL               3412//�Ǿ�����У��(FFC)��������
#define NET_DVR_GET_FOCUSING_POSITION_STATE     3413//��ȡ�۽���λ״̬����
#define NET_DVR_GET_PRIVATE_PROTOCOL_CFG        3414   //��ȡ ˽�йؼ���Ϣ�ϴ����ýӿ�����
#define NET_DVR_SET_PRIVATE_PROTOCOL_CFG        3415   //���� ˽�йؼ���Ϣ�ϴ����ýӿ�����
#define NET_DVR_COMPLETE_RESTORE_CTRL           3420    //������ȫ�ָ�����ֵ

#define NET_DVR_CLOUDSTORAGE_SERVER_TEST        3421  //�ƴ洢����������
#define NET_DVR_PHONE_NUM_TEST                  3422  //�绰�������
#define NET_DVR_GET_REMOTECONTROL_STATUS        3423  //��ȡ���߲���״̬
#define NET_DVR_GET_MONITOR_LOCATION_INFO        3424  //��ȡ������Ϣ
#define NET_DVR_SET_MONITOR_LOCATION_INFO        3425  //���ü�����Ϣ


#define    NET_DVR_GET_SMART_CAPABILITIES                3500    //��ȡSmart����
#define    NET_DVR_GET_EVENT_TRIGGERS_CAPABILITIES        3501    //��ȡ�¼���������
#define    NET_DVR_GET_REGION_ENTRANCE_CAPABILITIES    3502    //��ȡ���������������
#define    NET_DVR_GET_REGION_ENTR_DETECTION            3503    //��ȡ������������
#define    NET_DVR_SET_REGION_ENTR_DETECTION            3504    //���ý�����������
#define    NET_DVR_GET_REGION_ENTR_REGION                3505    //��ȡ��������ĵ�����������
#define    NET_DVR_SET_REGION_ENTR_REGION                3506    //���ý�������ĵ�����������
#define    NET_DVR_GET_REGION_ENTR_TRIGGER                3507    //��ȡ����������������
#define    NET_DVR_SET_REGION_ENTR_TRIGGER                3508    //���ý���������������
#define    NET_DVR_GET_REGION_ENTR_SCHEDULE            3509    //��ȡ�������򲼷�ʱ������
#define    NET_DVR_SET_REGION_ENTR_SCHEDULE            3510    //���ý������򲼷�ʱ������
#define    NET_DVR_GET_REGION_EXITINT_CAPABILITIES        3511    //��ȡ�뿪�����������
#define    NET_DVR_GET_REGION_EXITING_DETECTION        3512    //��ȡ�뿪��������
#define    NET_DVR_SET_REGION_EXITING_DETECTION        3513    //�����뿪��������
#define    NET_DVR_GET_REGION_EXITING_REGION            3514    //��ȡ�뿪����ĵ�����������
#define    NET_DVR_SET_REGION_EXITING_REGION            3515    //�����뿪����ĵ�����������
#define    NET_DVR_GET_REGION_EXIT_TRIGGER                3516    //��ȡ�뿪������������
#define    NET_DVR_SET_REGION_EXIT_TRIGGER                3517    //�����뿪������������
#define    NET_DVR_GET_REGION_EXIT_SCHEDULE            3518    //��ȡ�뿪���򲼷�ʱ������
#define    NET_DVR_SET_REGION_EXIT_SCHEDULE            3519    //�����뿪���򲼷�ʱ������
#define    NET_DVR_GET_LOITERING_CAPABILITIES            3520    //��ȡ�ǻ��������
#define    NET_DVR_GET_LOITERING_DETECTION                3521    //��ȡ�ǻ��������
#define    NET_DVR_SET_LOITERING_DETECTION                3522    //�����ǻ��������
#define    NET_DVR_GET_LOITERING_REGION                3523    //��ȡ�ǻ��ĵ�����������
#define    NET_DVR_SET_LOITERING_REGION                3524    //�����ǻ��ĵ�����������
#define    NET_DVR_GET_LOITERING_TRIGGER                3525    //��ȡ�ǻ���������
#define    NET_DVR_SET_LOITERING_TRIGGER                3526    //�����ǻ���������
#define    NET_DVR_GET_LOITERING_SCHEDULE                3527    //��ȡ�ǻ�����ʱ������
#define    NET_DVR_SET_LOITERING_SCHEDULE                3528    //�����ǻ�����ʱ������
#define    NET_DVR_GET_GROUPDETECTION_CAPABILITIES        3529    //��ȡ��Ա�ۼ��������
#define    NET_DVR_GET_GROUP_DETECTION                    3530    //��ȡ��Ա�ۼ��������
#define    NET_DVR_SET_GROUP_DETECTION                    3531    //������Ա�ۼ��������
#define    NET_DVR_GET_GROUPDETECTION_REGION            3532    //��ȡ��Ա�ۼ��ĵ�����������
#define    NET_DVR_SET_GROUPDETECTION_REGION            3533    //������Ա�ۼ��ĵ�����������
#define    NET_DVR_GET_GROUPDETECTION_TRIGGER            3534    //��ȡ��Ա�ۼ���������
#define    NET_DVR_SET_GROUPDETECTION_TRIGGER            3535    //������Ա�ۼ���������
#define    NET_DVR_GET_GROUPDETECTION_SCHEDULE            3536    //��ȡ��Ա�ۼ�����ʱ������
#define    NET_DVR_SET_GROUPDETECTION_SCHEDULE            3537    //������Ա�ۼ�����ʱ������
#define    NET_DVR_GET_RAPIDMOVE_CAPABILITIES            3538    //��ȡ�����˶��������
#define    NET_DVR_GET_RAPIDMOVE_DETECTION                3539    //��ȡ�����˶��������
#define    NET_DVR_SET_RAPIDMOVE_DETECTION                3540    //���ÿ����˶��������
#define    NET_DVR_GET_RAPIDMOVE_REGION                3541    //��ȡ�����˶��ĵ�����������
#define    NET_DVR_SET_RAPIDMOVE_REGION                3542    //���ÿ����˶��ĵ�����������
#define    NET_DVR_GET_RAPIDMOVE_TRIGGER                3543    //��ȡ�����˶���������
#define    NET_DVR_SET_RAPIDMOVE_TRIGGER                3544    //���ÿ����˶���������
#define    NET_DVR_GET_RAPIDMOVE_SCHEDULE                3545    //��ȡ�����˶��Ĳ���ʱ������
#define    NET_DVR_SET_RAPIDMOVE_SCHEDULE                3546    //���ÿ����˶��Ĳ���ʱ������
#define    NET_DVR_GET_PATKING_CAPABILITIES            3547    //��ȡͣ���������
#define    NET_DVR_GET_PARKING_DETECTION               3548    //��ȡͣ���������
#define    NET_DVR_SET_PARKING_DETECTION                3549    //����ͣ���������
#define    NET_DVR_GET_PARKING_REGION                    3550    //��ȡͣ�����ĵ�����������
#define    NET_DVR_SET_PARKING_REGION                    3551    //����ͣ�����ĵ�����������
#define    NET_DVR_GET_PARKING_TRIGGER                    3552    //��ȡͣ�������������
#define    NET_DVR_SET_PARKING_TRIGGER                    3553    //����ͣ�������������
#define    NET_DVR_GET_PARKING_SCHEDULE                3554    //��ȡͣ�����Ĳ���ʱ������
#define    NET_DVR_SET_PARKING_SCHEDULE                3555    //����ͣ�����Ĳ���ʱ������
#define    NET_DVR_GET_UNATTENDED_BAGGAGE_CAPABILITIES    3556    //��ȡ��Ʒ�����������
#define    NET_DVR_GET_UNATTENDED_BAGGAGE_DETECTION    3557    //��ȡ��Ʒ�����������
#define    NET_DVR_SET_UNATTENDED_BAGGAGE_DETECTION    3558    //������Ʒ�����������
#define    NET_DVR_GET_UNATTENDED_BAGGAGE_REGION        3559    //��ȡ��Ʒ�������ĵ�����������
#define    NET_DVR_SET_UNATTENDED_BAGGAGE_REGION        3560    //������Ʒ�������ĵ�����������
#define    NET_DVR_GET_UNATTENDED_BAGGAGE_TRIGGER        3561    //��ȡ��Ʒ���������������
#define    NET_DVR_SET_UNATTENDED_BAGGAGE_TRIGGER        3562    //������Ʒ���������������
#define    NET_DVR_GET_UNATTENDED_BAGGAGE_SCHEDULE        3563    //��ȡ��Ʒ�������Ĳ���ʱ������
#define    NET_DVR_SET_UNATTENDED_BAGGAGE_SCHEDULE        3564    //������Ʒ�������Ĳ���ʱ������
#define    NET_DVR_GET_ATTENDEDBAGGAGE_CAPABILITIES    3565    //��ȡ��Ʒ��ȡ�������
#define    NET_DVR_GET_ATTENDEDBAGGAGE_DETECTION        3566    //��ȡ��Ʒ��ȡ�������
#define    NET_DVR_SET_ATTENDEDBAGGAGE_DETECTION        3567    //������Ʒ��ȡ�������
#define    NET_DVR_GET_ATTENDEDBAGGAGE_REGION            3568    //��ȡ��Ʒ��ȡ���ĵ�����������
#define    NET_DVR_SET_ATTENDEDBAGGAGE_REGION            3569    //������Ʒ��ȡ���ĵ�����������
#define    NET_DVR_GET_ATTENDEDBAGGAGE_TRIGGER            3570    //��ȡ��Ʒ��ȡ�����������
#define    NET_DVR_SET_ATTENDEDBAGGAGE_TRIGGER            3571    //������Ʒ��ȡ�����������
#define    NET_DVR_GET_ATTENDEDBAGGAGE_SCHEDULE        3572    //��ȡ��Ʒ�������Ĳ���ʱ������
#define    NET_DVR_SET_ATTENDEDBAGGAGE_SCHEDULE        3573    //������Ʒ��ȡ���Ĳ���ʱ������
#define    NET_DVR_GET_REGIONCLIP_CAPABILITIES            3574    //��ȡ����ü�����
#define    NET_DVR_GET_REGION_CLIP                     3575    //��ȡ����ü�����
#define    NET_DVR_SET_REGION_CLIP                     3576    //��������ü�����
#define    NET_DVR_GET_NETWORK_CAPABILITIES            3577    //��ȡ��������
#define    NET_DVR_GET_WIRELESS_DIAL                     3578    //��ȡ���߲�������
#define    NET_DVR_SET_WIRELESS_DIAL                     3579    //�������߲�������
#define    NET_DVR_GET_WIRELESSDIAL_CAPABILITIES        3580    //��ȡ���߲��Ų�������
#define    NET_DVR_GET_WIRELESSDIAL_SCHEDULE            3581    //��ȡ���żƻ�����
#define    NET_DVR_SET_WIRELESSDIAL_SCHEDULE            3582    //���ò��żƻ�����
#define    NET_DVR_GET_WIRELESSDIAL_STATUS             3583    //��ȡ����״̬
#define    NET_DVR_GET_REGION_ENTRANCE_SCHEDULE_CAPABILITIES    3584    //��ȡ����������Ⲽ��ʱ������
#define    NET_DVR_GET_REGION_EXITING_SCHEDULE_CAPABILITIES    3585    //��ȡ�뿪������Ⲽ��ʱ������
#define    NET_DVR_GET_LOITERING_SCHEDULE_CAPABILITIES    3586    //��ȡ�ǻ���Ⲽ��ʱ������
#define    NET_DVR_GET_GROUP_SCHEDULE_CAPABILITIES    3587    //��ȡ��Ա�ۼ���Ⲽ��ʱ������
#define    NET_DVR_GET_RAPIDMOVE_SCHEDULE_CAPABILITIES    3588    //��ȡ�����˶���Ⲽ��ʱ������
#define    NET_DVR_GET_PARKING_SCHEDULE_CAPABILITIES    3589    //��ȡͣ����Ⲽ��ʱ������
#define    NET_DVR_GET_UNATTENDEDBAGGAGE_SCHEDULE_CAPABILITIES    3590    //��ȡ��Ʒ������Ⲽ��ʱ������
#define    NET_DVR_GET_ATTENDEDBAGGAGE_SCHEDULE_CAPABILITIES    3591    //��ȡ��Ʒ��ȡ��Ⲽ��ʱ������
#define    NET_DVR_GET_WIRELESSDIAL_SCHEDULE_CAPABILITIES    3592    //��ȡ���żƻ�����
#define    NET_DVR_WIRELESSDIAL_CONNECT    3593    //��������������������

#define    NET_DVR_GET_LITESTORAGE                    3594    //��ȡ��洢����
#define    NET_DVR_SET_LITESTORAGE                    3595    //������洢����
#define    NET_DVR_GET_LITESTORAGE_CAPABILITIES    3596    //��ȡ��洢����

#define    NET_DVR_GET_VEHICLE_CAPABILITIES    3597    //��ȡ�������궨����
#define    NET_DVR_GET_VEHICLE_CALIBRATION     3598    //��ȡ�������궨

#define    NET_DVR_GET_SLAVECAMERA_CAPABILITIES    3599    //��ȡ�������IP��Ϣ��������
#define    NET_DVR_GET_SLAVECAMERA                    3600    //��ȡ�������IP��Ϣ����
#define    NET_DVR_SET_SLAVECAMERA                    3601    //���ô������IP��Ϣ����
#define    NET_DVR_GET_SLAVECAMERA_STATUS            3602    //��ȡ�����������״̬
#define    NET_DVR_GET_SLAVECAMERA_CALIB_CAPABILITIES    3603  //��ȡ�����������&&�궨����
#define    NET_DVR_GET_SLAVECAMERA_CALIB            3604    //��ȡ��������궨����
#define    NET_DVR_SET_SLAVECAMERA_CALIB            3605    //���ô�������궨����
#define NET_DVR_GET_PHY_RATIO                    3606    //��ȡ������������Ϣ
#define NET_DVR_SET_PHY_RATIO                    3607    //����������������Ϣ
#define NET_DVR_GET_MASTERSLAVETRACKING_CAPABILITIES   3608  //��ȡ���Ӹ�������
#define    NET_DVR_SET_TRACKINGRATIO                3610    //���ô���������ٱ���
#define    NET_DVR_GET_TRACKING                    3611    //��ȡ���Ӹ��ٹ��������������
#define    NET_DVR_SET_TRACKING                    3612    //�������Ӹ��ٹ��������������
#define    NET_DVR_GET_TRACKING_CAPABILITIES        3613    //��ȡ���Ӹ��ٹ������������������

#define    NET_DVR_GET_SLAVECAMERA_CALIB_V50        3614    //��ȡ��������궨����V50
#define    NET_DVR_SET_SLAVECAMERA_CALIB_V50        3615    //���ô�������궨����V50
#define    NET_DVR_SET_TRACKINGRATIO_MANUAL        3616    //���ô�������ֶ����ٱ���
#define    NET_DVR_GET_TRACKINGRATIO_MANUAL        3617    //��ȡ��������ֶ����ٱ���
#define    NET_DVR_SET_TRACK_INITPOSTION            3618    //���ô��������ʼ����λ��
#define    NET_DVR_GET_PTZ_CAPABILITIES            3619    //��ȡptz�����������

#define    NET_DVR_GET_THERMOMETRY_BASICPARAM_CAPABILITIES    3620 //��ȡ������������
#define    NET_DVR_GET_THERMOMETRY_BASICPARAM      3621    //��ȡ�������ò���
#define    NET_DVR_SET_THERMOMETRY_BASICPARAM        3622    //���ò������ò���
#define    NET_DVR_GET_THERMOMETRY_SCENE_CAPABILITIES    3623 //��ȡ����Ԥ�õ������������
#define    NET_DVR_GET_THERMOMETRY_PRESETINFO      3624    //��ȡ����Ԥ�õ�������ò���
#define    NET_DVR_SET_THERMOMETRY_PRESETINFO        3625    //���ò���Ԥ�õ�������ò���
#define    NET_DVR_GET_THERMOMETRY_ALARMRULE_CAPABILITIES    3626//��ȡ���±�����ʽ��������
#define    NET_DVR_GET_THERMOMETRY_ALARMRULE       3627    //��ȡ����Ԥ�õ㱨���������ò���
#define    NET_DVR_SET_THERMOMETRY_ALARMRULE        3628    //���ò���Ԥ�õ㱨���������ò���
#define    NET_DVR_GET_REALTIME_THERMOMETRY        3629    //ʵʱ�¶ȼ��
#define    NET_DVR_GET_THERMOMETRY_DIFFCOMPARISON  3630    //��ȡ����Ԥ�õ��²�������ò���
#define    NET_DVR_SET_THERMOMETRY_DIFFCOMPARISON    3631    //���ò���Ԥ�õ��²�������ò���
#define    NET_DVR_GET_THERMOMETRY_TRIGGER            3632    //��ȡ������������
#define    NET_DVR_SET_THERMOMETRY_TRIGGER            3633    //���ò�����������

#define    NET_DVR_GET_THERMAL_CAPABILITIES        3634    //��ȡ�ȳ���Thermal������
#define    NET_DVR_GET_FIREDETECTION_CAPABILITIES    3635    //��ȡ�������������
#define    NET_DVR_GET_FIREDETECTION               3636    //��ȡ��������
#define    NET_DVR_SET_FIREDETECTION               3637    //���û�������
#define    NET_DVR_GET_FIREDETECTION_TRIGGER       3638    //��ȡ�������������
#define    NET_DVR_SET_FIREDETECTION_TRIGGER        3639    //���û������������

#define NET_DVR_GET_OIS_CAPABILITIES            3640    //��ȡ��ѧ����������������
#define NET_DVR_GET_OIS_CFG                     3641    //��ȡ��ѧ��������
#define NET_DVR_SET_OIS_CFG                     3642    //���ù�ѧ��������
#define NET_DVR_GET_MACFILTER_CAPABILITIES      3643    //��ȡMAC��ַ������������
#define NET_DVR_GET_MACFILTER_CFG               3644    //��ȡMAC��ַ��������
#define NET_DVR_SET_MACFILTER_CFG               3645    //����MAC��ַ��������
#define NET_DVR_GET_EAGLEFOCUS_CALCFG_CAPABILITIES   3646    //ӥ�Ӿ۽��궨��������
#define NET_DVR_GET_EAGLEFOCUSING_CALCFG        3647    //��ȡӥ�Ӿ۽��궨����
#define NET_DVR_SET_EAGLEFOCUSING_CALCFG        3648    //����ӥ�Ӿ۽��궨����
#define NET_DVR_GET_EAGLEFOCUSING_CFG_CAPABILITIES   3649   //��ȡӥ�Ӿ۽���������
#define NET_DVR_GET_EAGLEFOCUSING_CTRL          3650    //��ȡӥ�Ӿ۽�����
#define NET_DVR_SET_EAGLEFOCUSING_CTRL          3651    //����ӥ�Ӿ۽�����

#define    NET_DVR_GET_PXOFFLINE_CAPABILITIES      3652    //��ȡͣ����Ʊ���ѻ��²������� ����
#define    NET_DVR_SET_PXOFFLINE_CFG                3653    //����ͣ����Ʊ���ѻ��²���������Ϣ
#define    NET_DVR_GET_PXOFFLINE_CFG                3654    //��ȡͣ����Ʊ���ѻ��²���������Ϣ
#define    NET_DVR_GET_PAPERCHARGEINFO_CAPABILITIES  3655  //��ȡͣ���������ֽƱ��Ϣ�·� ����
#define    NET_DVR_SET_PAPERCHARGEINFO                3656    //����ͣ���������ֽƱ��Ϣ�·�
#define    NET_DVR_GET_PARKINGSAPCE_CAPABILITIES    3657    //��ȡͣ���������ͣ��λ��Ϣ�·� ����
#define    NET_DVR_SET_PARKINGSAPCE_INFO            3658    //����ͣ���������ͣ��λ��Ϣ�·�
#define    NET_DVR_GET_PXMULTICTRL_CAPABILITIES    3659    //��ȡͣ����Ʊ������豸��ǶȲ������� ����
#define    NET_DVR_GET_CHARGEACCOUNT_CAPABILITIES    3661    //��ȡͣ����Ʊ�������������
#define    NET_DVR_SET_CHARGE_ACCOUNTINFO          3662    //���ýɷѽ����Ϣ
#define    NET_DVR_SET_PXMULTICTRL_CFG                3663    //����ͣ����Ʊ������豸��ǶȲ���������Ϣ
#define    NET_DVR_GET_PXMULTICTRL_CFG                3664    //��ȡͣ����Ʊ������豸��ǶȲ���������Ϣ
#define    NET_DVR_GET_TME_CHARGERULE              3665    //��ȡͣ��������ڳ����շѹ������
#define    NET_DVR_SET_TME_CHARGERULE                3666    //����ͣ��������ڳ����շѹ������
#define    NET_DVR_GET_TME_CHARGERULE_CAPABILITIES 3667    //��ȡͣ��������� �����շ���Ϣ��������
#define    NET_DVR_GET_ILLEGALCARDFILTERING_CAPABILITIES  3668    //��ȡͣ����Ʊ�������������
#define    NET_DVR_GET_ILLEGALCARDFILTERING_CFG    3669    //��ȡͣ����Ʊ���������
#define    NET_DVR_SET_ILLEGALCARDFILTERING_CFG    3670    //����ͣ����Ʊ���������
#define    NET_DVR_GET_LEDDISPLAY_CAPABILITIES        3671    //��ȡLED��Ļ��ʾ�������ò�������
#define    NET_DVR_SET_LEDDISPLAY_CFG              3672    //����LED��Ļ��ʾ����
#define    NET_DVR_GET_LEDDISPLAY_CFG              3673    //��ȡLED��Ļ��ʾ����
#define    NET_DVR_GET_VOICEBROADCAST_CAPABILITIES    3674    //��ȡ�����������Ʋ������ò�������
#define    NET_DVR_SET_VOICEBROADCAST_CFG          3675    //���������������Ʋ���
#define    NET_DVR_GET_PAPERPRINTFORMAT_CAPABILITIES    3676//��ȡֽƱ��ӡ��ʽ��������
#define    NET_DVR_GET_PAPERPRINTFORMAT_CFG        3677    //��ȡֽƱ��ӡ��ʽ��������
#define    NET_DVR_SET_PAPERPRINTFORMAT_CFG        3678    //����ֽƱ��ӡ��ʽ��������
#define    NET_DVR_GET_LOCkGATE_CAPABILITIES       3679    //��ȡ������բ��������
#define    NET_DVR_GET_LOCKGATE_CFG                3680    //��ȡ������բ��������
#define    NET_DVR_SET_LOCKGATE_CFG                3681    //����������բ��������
#define NET_DVR_GET_PARKING_DATASTATE            3682    //��ȡ����ͬ��״̬
#define NET_DVR_SET_PARKING_DATASTATE           3683    //��������ͬ��״̬
#define    NET_DVR_GET_TME_CAPABILITIES            3684    //��ȡͣ����������豸 ����

#define    NET_DVR_GET_TMEVOICE_CAPABILITIES       3686    //��ȡ����������Ϣ����
#define    NET_DVR_SET_TMEVOICE_CFG                3687    //����������������
#define    NET_DVR_GET_TMEVOICE_CFG                3688    //��ȡ������������
#define    NET_DVR_DEL_TMEVOICE_CFG                3689    //ɾ��������������
#define    NET_DVR_GET_POSITION                    3698    // ��ȡ��λ�������ò���
#define    NET_DVR_SET_POSITION                    3699    // ���÷�λ�������ò���
#define    NET_DVR_GET_CENTRALIZEDCTRL_CAPABILITIES    3700//��ȡ���в�������
#define    NET_DVR_GET_CENTRALIZEDCTRL                3701//��ȡ���в��ز�������
#define    NET_DVR_SET_CENTRALIZEDCTRL              3702//���ü��в��ز�������
#define    NET_DVR_GET_COMPASS_CAPABILITIES        3703//��ȡ������������
#define    NET_DVR_GET_VANDALPROOFALARM              3704//��ȡ���ƻ�������������
#define    NET_DVR_SET_VANDALPROOFALARM            3705//���÷��ƻ�������������
#define    NET_DVR_COMPASS_CALIBRATE_CTRL            3706//�������̽������ƽӿ�
#define    NET_DVR_COMPASS_NORTH_CTRL                3707//��������ָ���������ƽӿ�
#define    NET_DVR_GET_AZIMUTHINFO                    3708//��ȡ��λ�ǶȲ�������


#define    NET_DVR_GET_SATELLITETIME                3709//��ȡ���Ƕ�λ��������
#define    NET_DVR_SET_SATELLITETIME                3710//�������Ƕ�λ��������
#define    NET_DVR_GET_GISINFO                     3711//��ȡ��ǰ�����GIS��Ϣ����
#define    NET_DVR_GET_STREAMING_CAPABILITIES        3712//��ȡ��Ƶ��������
#define    NET_DVR_GET_REFRESHFRAME_CAPABILITIES    3713//��ȡˢ��֡������
#define    NET_DVR_STREAMING_REFRESH_FRAME            3714//ȡ��Ԥ����ǿ��ˢ��֡
#define    NET_DVR_FACECAPTURE_STATISTICS            3715//��������Աͳ��
#define    NET_DVR_GET_WIRELESSSERVER_CAPABILITIES    3716    //��ȡ�ȵ㹦������Э�������
#define    NET_DVR_GET_WIRELESSSERVER                3717    //��ȡ�ȵ㹦������Э��
#define    NET_DVR_SET_WIRELESSSERVER                3718    //�����ȵ㹦������Э��
#define    NET_DVR_GET_CONNECT_LIST_CAPABILITIES    3719    //��ȡ�����豸�б���Ϣ������
#define    NET_DVR_GET_THSCREEN_CAPABILITIES        3720 //��ȡ��ʪ������Э�������
#define    NET_DVR_GET_THSCREEN                    3721 //��ȡ��ʪ������Э��
#define    NET_DVR_GET_EXTERNALDEVICE_CAPABILITIES    3722//��ȡ��������Э�������
#define    NET_DVR_GET_EXTERNALDEVICE              3723//��ȡ��������Э��
#define    NET_DVR_SET_EXTERNALDEVICE                3724//������������Э��
#define    NET_DVR_GET_LEDDISPLAYINFO_CAPABILITIES     3725   //��ȡLED��ʾ��Ϣ������
#define    NET_DVR_SET_LEDDISPLAYINFO                 3726   //����LED��ʾ��Ϣ
#define    NET_DVR_GET_SUPPLEMENTLIGHT_CAPABILITIES 3727   //��ȡ���ò��������Э������� (���֧�֣����ʵ�֣��������������豸�ڲ���)
#define    NET_DVR_GET_SUPPLEMENTLIGHT                 3728    //��ȡ���ò��������Э��
#define    NET_DVR_SET_SUPPLEMENTLIGHT                 3729    //�������ò��������Э��
#define    NET_DVR_SET_THSCREEN                     3730 //������ʪ������Э��
#define    NET_DVR_GET_LOWPOWER_CAPABILITIES        3731   //��ȡ�͹�������Э�������
#define    NET_DVR_GET_LOWPOWER                     3732    //��ȡ�͹�������Э��
#define    NET_DVR_SET_LOWPOWER                     3733    //���õ͹�������Э��
#define    NET_DVR_GET_ZOOMLINKAGE_CAPABILITIES     3734   //��ȡ�䱶��������Э�������
#define    NET_DVR_GET_ZOOMLINKAGE                     3735    //��ȡ�䱶��������Э��
#define    NET_DVR_SET_ZOOMLINKAGE                     3736    //���ñ䱶��������Э��
#define    NET_DVR_THSCREEN_TIMING                     3737    //��ʪ��
#define NET_DVR_GET_OSD_BATTERY_POWER_CFG        3741        //��ȡOSD��ص�����ʾ����
#define NET_DVR_SET_OSD_BATTERY_POWER_CFG        3742        //����OSD��ص�����ʾ����
#define    NET_DVR_GET_OSD_BATTERY_POWER_CFG_CAPABILITIES    3743//OSD��ص�����ʾ����������
#define    NET_DVR_GET_VANDALPROOFALARM_TRIGGER    3744    //��ȡ���ƻ�������������
#define    NET_DVR_SET_VANDALPROOFALARM_TRIGGER    3745    //���÷��ƻ�������������
#define    NET_DVR_GET_PANORAMAIMAGE_CAPABILITIES    3746    //��ȡȫ��ͼ�������
#define    NET_DVR_GET_PANORAMAIMAGE                3747    //��ȡȫ��ͼ�������Э��
#define    NET_DVR_SET_PANORAMAIMAGE                3748    //����ȫ��ͼ�������Э��
#define    NET_DVR_GET_STREAMENCRYPTION            3749    //��ȡ������������
#define    NET_DVR_SET_STREAMENCRYPTION            3750    //����������������
#define    NET_DVR_GET_STREAMENCRYPTION_CAPABILITIES 3751  //��ȡ������������
#define    NET_DVR_GET_REVISE_GPS_CAPABILITIES     3752    //��ȡУ׼GPS��γ������
#define    NET_DVR_GET_REVISE_GPS                  3753    //��ȡУ׼GPS��γ������
#define    NET_DVR_SET_REVISE_GPS                  3754    //����У׼GPS��γ������
#define NET_DVR_GET_PDC_RECOMMEND                3755    //��ȡ����ͳ�Ʊ�ʾ�Ƽ�ֵ
#define NET_DVR_REMOVE_FLASHSTORAGE                3756    //���������������
#define    NET_DVR_GET_COUNTING_CAPABILITIES        3757    //��ȡ������ͳ������
#define    NET_DVR_SET_SENSOR_ADJUSTMENT            3758    //����Sensor ���ڲ�����Э��
#define    NET_DVR_GET_SENSOR_ADJUSTMENT_CAPABILITIES        3759    //��ȡSensor ���ڲ�����Э�������
#define    NET_DVR_GET_WIRELESSSERVER_FULLVERSION_CFG         3760    //��ȡwifi�ȵ��������(������)
#define    NET_DVR_SET_WIRELESSSERVER_FULLVERSION_CFG         3761    //����wifi�ȵ��������(������)
#define    NET_DVR_GET_ONLINEUSER_INFO                3762    //�����ӻ�ȡ�û�������Ϣ
#define    NET_DVR_GET_SENSOR_ADJUSTMENT_INFO        3763    //��ȡָ��sensor���ڲ���
#define NET_DVR_SENSOR_RESET_CTRL               3764    //Sensor ���ڸ�λ

#define    NET_DVR_GET_POSTRADAR_CAPABILITIES        3765    //��ȡ�״������������
#define    NET_DVR_GET_POSTRADARSPEED_CFG          3766    //��ȡ�״��������
#define    NET_DVR_SET_POSTRADARSPEED_CFG          3767    //�����״��������
#define    NET_DVR_GET_POSTRADARSPEED_RECOM_CFG    3768    //��ȡ�״�����Ƽ�ֵ
#define    NET_DVR_GET_POSTRADARPARAM_CFG          3769    //��ȡ�״��������
#define    NET_DVR_SET_POSTRADARPARAM_CFG          3770    //�����״��������
#define    NET_DVR_GET_POSTRADARPARAM_RECOM_CFG    3771    //��ȡ�״�����Ƽ�ֵ

#define NET_DVR_GET_ENCRYPT_DEVICE_INFO        3772   //��ȡ�����豸��Ϣ
#define NET_DVR_GET_ANR_ARMING_HOST            3773  //��ȡ����������������Ϣ
#define NET_DVR_GET_FIRMWARE_VERSION    3776    //GET firmware version
/********************************IPC����FF����****************************/
#define    NET_DVR_GET_FTP_CAPABILITIES            3782    //��ȡftp����
#define    NET_DVR_GET_FTPUPLOAD_CFG                3783    //��ȡftp�ϴ���Ϣ��������
#define    NET_DVR_SET_FTPUPLOAD_CFG                3784    //����ftp�ϴ���Ϣ��������
#define NET_DVR_GET_VEHICLE_INFORMATION             3785 //��ȡ������Ϣ
#define    NET_DVR_GET_DDNS_COUNTRY_ABILITY        3800//��ȡ�豸֧�ֵ�DDNS���������б�
#define NET_DVR_GET_DEVICECFG_V50    3801    //��ȡ�豸����
#define NET_DVR_SET_DEVICECFG_V50    3802    //�����豸����
#define  NET_DVR_SET_VEHICLE_RECOG_TASK_V50    3851  //��������ʶ�������ύV50��չ
#define NET_DVR_GET_SMARTCALIBRATION_CAPABILITIES    3900// Smart��Ϊ�궨���˳ߴ繦������
#define NET_DVR_GET_TEMPERATURE_TRIGGER              3903    //��ȡ���²���������
#define NET_DVR_SET_TEMPERATURE_TRIGGER              3904    //���ò��²���������

#define    NET_DVR_GET_SMARTCALIBRATION_CFG             3910 //��ȡSmart��Ϊ�궨���˳ߴ繦��
#define    NET_DVR_SET_SMARTCALIBRATION_CFG             3911  //����Smart��Ϊ�궨���˳ߴ繦��
#define NET_DVR_POST_SETUP_CALIB                     3912  //����궨
#define NET_DVR_SET_POS_INFO_OVERLAY                 3913//����Pos��Ϣ�������ӿ���
#define NET_DVR_GET_POS_INFO_OVERLAY                 3914//��ȡPos��Ϣ�������ӿ���
#define NET_DVR_GET_CAMERA_WORK_MODE                 3915  //�����������ģʽ����
#define NET_DVR_SET_CAMERA_WORK_MODE                 3916  //��ȡ�������ģʽ����
#define NET_DVR_GET_RESOLUTION_SWITCH_CAPABILITIES   3917  //��ȡ�ֱ���ģʽ�л�����
#define NET_DVR_GET_RESOLUTION_SWITCH                3918    //��ȡ�ֱ���ģʽ�л�����
#define NET_DVR_SET_RESOLUTION_SWITCH                3919     //���÷ֱ���ģʽ�л�����
#define NET_DVR_GET_CONFIRM_MECHANISM_CAPABILITIES   3920    //�����ϴ�ȷ�ϻ��ƿ�������
#define NET_DVR_CONFIRM_MECHANISM_CTRL               3921    //�����ϴ�ȷ�ϻ��ƿ���
#define NET_DVR_GET_VEHICLLE_RESULT_CAPABILITIES     3951   //��ȡ��ȡ������Ϣ�������
#define NET_DVR_GET_CALIB_CAPABILITIES               3952//��ȡ����궨����
#define NET_DVR_GET_POSINFO_OVERLAY_CAPABILITIES     3953//��ȡ��ȡPos��������
#define NET_DVR_SET_POSINFO_OVERLAY                  3960//����Pos����
#define NET_DVR_GET_POSINFO_OVERLAY                  3961//��ȡPos����
#define NET_DVR_GET_FACELIB_TRIGGER                  3962   //��ȡ�����ȶԿ����������
#define NET_DVR_SET_FACELIB_TRIGGER                  3963   //���������ȶԿ����������
#define NET_DVR_GET_FACECONTRAST_TRIGGER             3965//��ȡ�����ȶ���������
#define NET_DVR_SET_FACECONTRAST_TRIGGER             3966//���������ȶ���������
#define NET_DVR_GET_FACECONTRAST_SCHEDULE_CAPABILITIES 3967 //��ȡ�����ȶԲ���ʱ������
#define NET_DVR_GET_FACECONTRAST_SCHEDULE            3968//��ȡ�����ȶԲ���ʱ������
#define NET_DVR_SET_FACECONTRAST_SCHEDULE            3969//���������ȶԲ���ʱ������
#define NET_DVR_GET_FACELIB_SCHEDULE_CAPABILITIES    3970 //��ȡ�����ȶԿ�Ĳ���ʱ������
#define NET_DVR_GET_VCA_VERSION_LIST                 3973//��ȡ�㷨��汾
#define NET_DVR_GET_SETUP_CALIB                      3974//��ȡ����궨
#define NET_DVR_GET_PANORAMA_LINKAGE                 3975//��ȡ����ץͼ�ϴ�ʹ������
#define NET_DVR_SET_PANORAMA_LINKAGE                 3976//��������ץͼ�ϴ�ʹ������
#define NET_DVR_GET_FACELIB_SCHEDULE                 3977 //��ȡ�����ȶԿ�Ĳ���ʱ������
#define NET_DVR_SET_FACELIB_SCHEDULE                 3978 //���������ȶԿ�Ĳ���ʱ������
#define NET_DVR_GET_SOFTWARE_SERVICE_CAPABILITIES    3980//��ȡ�����������
#define NET_DVR_GET_SOFTWARE_SERVICE                 3981//��ȡ�����������
#define NET_DVR_SET_SOFTWARE_SERVICE                 3982//���������������
#define NET_DVR_GET_PREVIEW_MODE_CAPABILITIES        3983//��ȡԤ��ģʽ��������
#define NET_DVR_SET_EAGLE_FOCUS_GOTOSCENE            3984//ӥʽ�۽����������ת��ָ���ĳ���ID
#define NET_DVR_EAGLE_FOCUS_SCENE_DEL                3985//ɾ��ӥʽ�۽��궨�ĳ���
#define NET_DVR_ONE_KEY_CONFIG_SAN_V50               4152  //һ������SAN(V50)
#define NET_DVR_GET_HDCFG_V50                        4153  //��ȡӲ����Ϣ����V50
#define NET_DVR_SET_HDCFG_V50                        4154  //����Ӳ����Ϣ����V50
#define NET_DVR_GET_HDVOLUME_CFG                     4155  //��ȡӲ�̾���Ϣ
#define NET_DVR_SET_HDVOLUME_CFG                     4156  //����Ӳ�̾���Ϣ
#define NET_DVR_GET_POWER_SUPPLY_CABINET_TRIGGER     4157  //��ȡ���񹩵������������
#define NET_DVR_SET_POWER_SUPPLY_CABINET_TRIGGER     4158  //���û��񹩵������������
#define NET_DVR_GET_SENSOR_TRIGGER                   4159  //��ȡ������������������
#define NET_DVR_SET_SENSOR_TRIGGER                   4160  //���ô�����������������
#define	NET_DVR_GET_FACESNAP_TRIGGER                 4161  //��ȡ����ץ����������
#define	NET_DVR_SET_FACESNAP_TRIGGER	             4162  //��������ץ����������
#define NET_DVR_GET_FACESNAP_SCHEDULE_CAPABILITIES   4163  //��ȡ����ץ�Ĳ���ʱ������
#define NET_DVR_GET_FACESNAP_SCHEDULE                4164  //��ȡ����ץ�Ĳ���ʱ������
#define NET_DVR_SET_FACESNAP_SCHEDULE                4165  //��������ץ�Ĳ���ʱ������

/********************************NVR_��˲�Ʒ��****************************/
#define NET_DVR_GET_MUTEX_FUNCTION              4353  //��ȡ���ܻ�����Ϣ

#define NET_DVR_GET_SINGLE_CHANNELINFO          4360  //��ȡ����ͨ����������
#define NET_DVR_GET_CHANNELINFO                 4361  //��ȡͨ����������
#define NET_DVR_CHECK_LOGIN_PASSWORDCFG                 4362  //�û���¼����У��
#define NET_DVR_GET_SINGLE_SECURITY_QUESTION_CFG        4363    //��ȡ�����豸��ȫ����
#define NET_DVR_SET_SINGLE_SECURITY_QUESTION_CFG        4364    //���õ����豸��ȫ����
#define NET_DVR_GET_SECURITY_QUESTION_CFG       4365    //��ȡ�豸��ȫ����
#define NET_DVR_SET_SECURITY_QUESTION_CFG       4366    //�����豸��ȫ����
#define NET_DVR_GET_ONLINEUSERLIST_SC           4367  //Զ�̻�ȡ��½�û���Ϣ�������ӣ�

#define NET_DVR_GET_BLACKLIST_FACECONTRAST_TRIGGER   4368   //��ȡ�����������ȶ���������
#define NET_DVR_SET_BLACKLIST_FACECONTRAST_TRIGGER   4369   //���ú����������ȶ���������
#define NET_DVR_GET_WHITELIST_FACECONTRAST_TRIGGER   4370   //��ȡ�����������ȶ���������
#define NET_DVR_SET_WHITELIST_FACECONTRAST_TRIGGER   4371   //���ð����������ȶ���������
#define NET_DVR_GET_BLACKLIST_FACECONTRAST_SCHEDULE_CAPABILITIES 4372 //��ȡ�����������ȶԲ���ʱ������
#define NET_DVR_GET_BLACKLIST_FACECONTRAST_SCHEDULE  4373   //��ȡ�����������ȶԲ���ʱ������
#define NET_DVR_SET_BLACKLIST_FACECONTRAST_SCHEDULE  4374   //���ú����������ȶԲ���ʱ������
#define NET_DVR_GET_WHITELIST_FACECONTRAST_SCHEDULE_CAPABILITIES 4375 //��ȡ�����������ȶԲ���ʱ������
#define NET_DVR_GET_WHITELIST_FACECONTRAST_SCHEDULE  4376 //��ȡ�����������ȶԲ���ʱ������
#define NET_DVR_SET_WHITELIST_FACECONTRAST_SCHEDULE  4377 //���ð����������ȶԲ���ʱ������

#define NET_DVR_GET_HUMAN_RECOGNITION_SCHEDULE_CAPABILITIES 4378 //��ȡ����ʶ�𲼷�ʱ������
#define NET_DVR_GET_HUMAN_RECOGNITION_SCHEDULE 4379 //��ȡ����ʶ�𲼷�ʱ������
#define NET_DVR_SET_HUMAN_RECOGNITION_SCHEDULE 4380 //��������ʶ�𲼷�ʱ������
#define NET_DVR_GET_HUMAN_RECOGNITION_TRIGGER               4381 //��ȡ����ʶ����������
#define NET_DVR_SET_HUMAN_RECOGNITION_TRIGGER               4382 //��������ʶ����������
#define NET_DVR_GET_GBT28181_AUDIO_OUTPUT_CFG               4383 //��ȡGBT28181Э������豸�������Խ���Ϣ
#define NET_DVR_SET_GBT28181_AUDIO_OUTPUT_CFG               4384 //����GBT28181Э������豸�������Խ���Ϣ

#define NET_DVR_GET_STUDENTS_STOODUP_TRIGGER         4386   //��ȡѧ�����������������
#define NET_DVR_SET_STUDENTS_STOODUP_TRIGGER         4387   //����ѧ�����������������
#define NET_DVR_GET_FRAMES_PEOPLE_COUNTING_SCHEDULE_CAPABILITIES    4388 //��ȡ��������ͳ�Ʋ���ʱ������
#define NET_DVR_GET_FRAMES_PEOPLE_COUNTING_SCHEDULE  4389    //��ȡ��������ͳ�Ʋ���ʱ������
#define NET_DVR_SET_FRAMES_PEOPLE_COUNTING_SCHEDULE  4390    //������������ͳ�Ʋ���ʱ������
#define NET_DVR_GET_FRAMES_PEOPLE_COUNTING_TRIGGER   4391   //��ȡ��������ͳ����������
#define NET_DVR_SET_FRAMES_PEOPLE_COUNTING_TRIGGER   4392   //������������ͳ����������

#define NET_DVR_GET_PERSONDENSITY_TRIGGER   4393   //��ȡ��Ա�ܶȼ�����������
#define NET_DVR_SET_PERSONDENSITY_TRIGGER   4394   //������Ա�ܶȼ�����������
#define NET_DVR_GET_PERSONDENSITY_SCHEDULE_CAPABILITIES 4395 //��ȡ��Ա�ܶȼ��Ĳ���ʱ������
#define NET_DVR_GET_PERSONDENSITY_SCHEDULE 4396 //��ȡ��Ա�ܶȼ��Ĳ���ʱ������
#define NET_DVR_SET_PERSONDENSITY_SCHEDULE 4397 //������Ա�ܶȼ��Ĳ���ʱ������

#define NET_DVR_GET_STUDENTS_STOODUP_SCHEDULE_CAPABILITIES  4398 //��ȡѧ��������Ⲽ��ʱ������
#define NET_DVR_GET_STUDENTS_STOODUP_SCHEDULE        4399    //��ȡѧ��������Ⲽ��ʱ������
#define NET_DVR_SET_STUDENTS_STOODUP_SCHEDULE        4400    //����ѧ��������Ⲽ��ʱ������

#define NET_DVR_SET_FACE_THERMOMETRY_TRIGGER         4401 //��������������������
#define NET_DVR_GET_FACE_THERMOMETRY_SCHEDULE_CAPABILITIES 4402 //��ȡ�������²���ʱ������
#define NET_DVR_GET_FACE_THERMOMETRY_SCHEDULE        4403 //��ȡ�������²���ʱ������
#define NET_DVR_SET_FACE_THERMOMETRY_SCHEDULE        4404 //�����������²���ʱ������
#define NET_DVR_GET_FACE_THERMOMETRY_TRIGGER         4405 //��ȡ����������������

/********************************��������ʶ��****************************/
#define NET_DVR_GET_FACESNAPCFG                 5001  //��ȡ����ץ�Ĳ���
#define NET_DVR_SET_FACESNAPCFG                 5002  //��������ץ�Ĳ���
#define NET_DVR_GET_DEVACCESS_CFG               5005  //��ȡ�����豸����
#define NET_DVR_SET_DEVACCESS_CFG               5006  //���ý����豸����
#define NET_DVR_GET_SAVE_PATH_CFG               5007  //��ȡ�洢��Ϣ����
#define NET_DVR_SET_SAVE_PATH_CFG               5008  //���ô洢��Ϣ����
#define NET_VCA_GET_RULECFG_V41                    5011  //��ȡ��Ϊ��������(��չ)
#define NET_VCA_SET_RULECFG_V41                    5012  //������Ϊ��������(��չ)
#define NET_DVR_GET_AID_RULECFG_V41             5013  //��ȡ��ͨ�¼��������
#define NET_DVR_SET_AID_RULECFG_V41             5014  //���ý�ͨ�¼��������
#define NET_DVR_GET_TPS_RULECFG_V41             5015  //��ȡ��ͨͳ�ƹ������(��չ)
#define NET_DVR_SET_TPS_RULECFG_V41             5016  //���ý�ͨͳ�ƹ������(��չ)
#define NET_VCA_GET_FACEDETECT_RULECFG_V41      5017  //��ȡATM����������(��չ)
#define NET_VCA_SET_FACEDETECT_RULECFG_V41      5018  //����ATM����������(��չ)
#define NET_DVR_GET_PDC_RULECFG_V41             5019  //����������ͳ�ƹ���(��չ)
#define NET_DVR_SET_PDC_RULECFG_V41             5020  //��ȡ������ͳ�ƹ���(��չ)
#define NET_DVR_GET_TRIAL_VERSION_CFG           5021  //��ȡ���ð���Ϣ
#define NET_DVR_GET_VCA_CTRLINFO_CFG            5022  //������ȡ���ܿ��Ʋ���
#define NET_DVR_SET_VCA_CTRLINFO_CFG            5023  //�����������ܿ��Ʋ���
#define NET_DVR_SYN_CHANNEL_NAME                5024  //ͬ��ͨ����
#define NET_DVR_GET_RESET_COUNTER               5025  //��ȡͳ�������������������������ͨͳ�ƣ�
#define NET_DVR_SET_RESET_COUNTER               5026  //����ͳ�������������������������ͨͳ�ƣ�
#define NET_DVR_GET_OBJECT_COLOR                5027  //��ȡ������ɫ����
#define NET_DVR_SET_OBJECT_COLOR                5028  //����������ɫ����
#define NET_DVR_GET_AUX_AREA                    5029  //��ȡ��������
#define NET_DVR_SET_AUX_AREA                    5030  //���ø�������
#define NET_DVR_GET_CHAN_WORKMODE               5031  //��ȡͨ������ģʽ
#define NET_DVR_SET_CHAN_WORKMODE               5032  //����ͨ������ģʽ
#define NET_DVR_GET_SLAVE_CHANNEL               5033  //��ȡ��ͨ������
#define NET_DVR_SET_SLAVE_CHANNEL               5034  //���ô�ͨ������
#define NET_DVR_GET_VQD_EVENT_RULE              5035  //��ȡ��Ƶ��������¼�����
#define NET_DVR_SET_VQD_EVENT_RULE              5036  //������Ƶ��������¼�����
#define NET_DVR_GET_BASELINE_SCENE              5037  //��ȡ��׼��������
#define NET_DVR_SET_BASELINE_SCENE              5038  //���û�׼��������
#define NET_DVR_CONTROL_BASELINE_SCENE          5039  //��׼��������
#define NET_DVR_SET_VCA_DETION_CFG                5040  //���������ƶ���������
#define NET_DVR_GET_VCA_DETION_CFG                5041  //��ȡ�����ƶ���������
#define NET_DVR_GET_STREAM_ATTACHINFO_CFG       5042  //��ȡ����������Ϣ����
#define NET_DVR_SET_STREAM_ATTACHINFO_CFG       5043  //��������������Ϣ����

#define NET_DVR_GET_BV_CALIB_TYPE               5044  //��ȡ˫Ŀ�궨����
#define NET_DVR_CONTROL_BV_SAMPLE_CALIB         5045  //˫Ŀ�����궨
#define NET_DVR_GET_BV_SAMPLE_CALIB_CFG         5046  //��ȡ˫Ŀ�궨����
#define NET_DVR_GET_RULECFG_V42                    5049  //��ȡ��Ϊ��������(֧��16��������չ)
#define NET_DVR_SET_RULECFG_V42                    5050  //������Ϊ��������(֧��16��������չ)
#define NET_DVR_SET_VCA_DETION_CFG_V40            5051  //���������ƶ���������
#define NET_DVR_GET_VCA_DETION_CFG_V40          5052  //��ȡ�����ƶ���������
#define NET_DVR_SET_FLASH_CFG                   5110  //д�����ݵ�Flash ����ʹ��
/********************************��������ʶ�� end****************************/

//2014-12-03
#define    NET_DVR_GET_T1TEST_CFG   5053     //���߲������ýӿڣ���ȡ��
#define    NET_DVR_SET_T1TEST_CFG   5054     ////���߲������ýӿڣ����ã�

/********************************ITS****************************/
#define NET_ITS_GET_OVERLAP_CFG_V50                5055  //��ȡ�ַ����Ӳ���������չ
#define NET_ITS_SET_OVERLAP_CFG_V50                5056  //�����ַ����Ӳ���������չ

#define NET_DVR_GET_PARKLAMP_STATE                5057  //��ȡͣ�����źŵ�״̬��Ϣ
#define NET_DVR_GET_CLOUDSTORAGE_CFG            5058  //��ȡ�ƴ洢���ò���
#define NET_DVR_SET_CLOUDSTORAGE_CFG            5059  //�����ƴ洢���ò���

#define NET_ITS_GET_BASE_INFO                    5060  //��ȡ�ն˻�����Ϣ
#define NET_DVR_GET_SENSOR_INFO                 5061  //��������Ϣ��ѯ
#define    NET_DVR_SET_SENSOR_SWITCH                5062  //������Զ�̿���
#define NET_ITS_GET_IMGMERGE_CFG                5063  //��ȡͼƬ�ϳ����ò���
#define NET_ITS_SET_IMGMERGE_CFG                5064  //����ͼƬ�ϳ����ò���
#define NET_ITS_GET_UPLOAD_CFG                    5065  //��ȡ�����ϴ�����
#define NET_ITS_SET_UPLOAD_CFG                    5066  //���������ϴ�����
#define    NET_DVR_GET_SENSOR_PORT_CAPABILITIES    5067  //��ȡ����������
#define NET_ITS_GET_WORKSTATE                    5069  //��ȡ�ն˹���״̬
#define NET_ITS_GET_IPC_CHAN_CFG                5070  //��ȡͨ��IPC��Ϣ
#define NET_ITS_SET_IPC_CHAN_CFG                5071  //����ͨ��IPC��Ϣ
#define NET_ITS_GET_OVERLAP_CFG                    5072  //��ȡ�ַ����Ӳ�������
#define NET_ITS_SET_OVERLAP_CFG                    5073  //�����ַ����Ӳ�������
#define NET_DVR_GET_TRIGGEREX_CFG               5074  //��ȡITC��չ����
#define NET_DVR_SET_TRIGGEREX_CFG               5075  //����ITC��չ����
#define NET_ITS_GET_ROAD_INFO                    5076  //��ȡ·����Ϣ

#define NET_ITS_REMOTE_DEVICE_CONTROL            5077//����Զ���豸����
#define NET_ITS_GET_GATEIPC_CHAN_CFG            5078//��ȡ����ڲ���
#define NET_ITS_SET_GATEIPC_CHAN_CFG            5079//���ó���ڲ���
#define NET_ITS_TRANSCHAN_START                    5080//ͬ�����ݷ�������������
#define NET_ITS_GET_ECTWORKSTATE                5081//��ȡ������ն˹���״̬
#define NET_ITS_GET_ECT_CHAN_INFO                5082//��ȡ������ն�ͨ��״̬
#define NET_DVR_GET_HEATMAP_RESULT              5083//�ȶ�ͼ���ݲ���
#define NET_DVR_SET_ITS_EXDEVCFG                5084 //����ITS����豸��Ϣ
#define NET_DVR_GET_ITS_EXDEVCFG                5085 //��ȡITS����豸��Ϣ
#define NET_DVR_GET_ITS_EXDEVSTATUS                5086 //��ȡITS��������豸��Ϣ
#define NET_DVR_SET_ITS_ENDEVCMD                5087 //����ITS�ն˳���ڿ�������
#define NET_DVR_SET_ENISSUED_DATADEL            5088 //����ITS�ն˳���ڿ������
#define NET_DVR_GET_PDC_RESULT                  5089//���������ݲ�ѯ 2014-03-21
#define NET_ITS_GET_LAMP_CTRLCFG                5090  //��ȡ�����õƲ���
#define NET_ITS_SET_LAMP_CTRLCFG                5091  //���������õƲ���
#define NET_ITS_GET_PARKSPACE_ATTRIBUTE_CFG     5092  //��ȡ���⳵λ����
#define NET_ITS_SET_PARKSPACE_ATTRIBUTE_CFG     5093  //�������⳵λ����
#define NET_ITS_SET_LAMP_EXTERNAL_CFG            5095  //����������ò���
#define NET_ITS_SET_COMPEL_CAPTURE                5096  //���ó�λǿ��ץͼ
#define NET_DVR_SET_TIMESIGN_CFG                5097  //������չУʱ�Զ�����
#define NET_DVR_GET_TIMESIGN_CFG                5098  //��ȡ��չУʱ�Զ�����
#define NET_DVR_GET_SIGNALLAMP_STATUS           5099  //�źŵƼ��
/********************************ITS end****************************/

#define NET_DVR_GET_MONITOR_PLAN_VQD            5100  //�����ӻ�ȡ��Ϸ������ƻ�
#define NET_DVR_GET_MONITORID_VQD               5101  //�����ӻ�ȡ��Ӧ�ƻ��ڵļ�ص���Ϣ
#define NET_DVR_SET_MONITOR_INFO                5102  //�������üƻ��ڵļ�ص���Ϣ
#define NET_DVR_DEL_MONITOR_PLAN_VQD            5103  //ɾ���ƻ�
#define NET_DVR_GET_MONITOR_VQD_STATUS          5104  //ƽ̨��ѯ��Ϸ�������״̬
#define NET_DVR_GET_RECORD_INFO                 5105  //��ȡ��ԴͼƬ��ѯ
#define NET_DVR_GET_MONITOR_VQDCFG              5106  //��ȡ�������ļ�ص���Ϣ
#define NET_DVR_SET_MONITOR_VQDCFG              5107  //���÷������ļ�ص���Ϣ
#define NET_DVR_SET_MONITOR_PLAN_VQDCFG         5108  //���ù���ƻ�(�����ļƻ�)

#define NET_DVR_SCENE_CHANGE_UPDATE                5109   //����������ݸ���

#define NET_DVR_GET_CALIBRATE_POINT             5153  //��һ������ת����ǹ�������豸 �ⲿ���������� ���ߴ��벻ʵ�֣���ֹ��ͻ���ύ���ߣ�/*************************���ܶೡ��********************************/
#define NET_DVR_GET_SCENE_CFG                   5201  //��ȡ������Ϣ
#define NET_DVR_SET_SCENE_CFG                   5202  //���ó�����Ϣ
#define NET_DVR_GET_SCENE_REFERENCE_REGION      5203  //��ȡ�ο�����
#define NET_DVR_SET_SCENE_REFERENCE_REGION      5204  //���òο�����
#define NET_DVR_GET_SCENE_CALIBRATION           5205  //��ȡ�궨��Ϣ
#define NET_DVR_SET_SCENE_CALIBRATION           5206  //���ñ궨��Ϣ
#define NET_DVR_GET_SCENE_MASK_REGION           5207  //��ȡ��������
#define NET_DVR_SET_SCENE_MASK_REGION           5208  //������������
#define    NET_DVR_GET_SCENE_LANECFG                5209  //��ȡ��������
#define NET_DVR_SET_SCENE_LANECFG                5210  //���ó�������
#define NET_DVR_GET_SCENE_AID_RULECFG           5211  //��ȡ��ͨ�¼��������
#define NET_DVR_SET_SCENE_AID_RULECFG           5212  //���ý�ͨ�¼��������
#define NET_DVR_GET_SCENE_TPS_RULECFG           5213  //��ȡ��ͨͳ�ƹ������
#define NET_DVR_SET_SCENE_TPS_RULECFG           5214  //���ý�ͨͳ�ƹ������
#define NET_DVR_GET_SCENE_TIME_CFG              5215  //��ȡͨ���ĳ���ʱ�������
#define NET_DVR_SET_SCENE_TIME_CFG              5216  //����ͨ���ĳ���ʱ�������
#define NET_DVR_GET_FORENSICS_MODE              5217  //��ȡȡ֤��ʽ����
#define NET_DVR_SET_FORENSICS_MODE              5218  //����ȡ֤��ʽ����
#define NET_DVR_FORCESTOP_FORENSICS_CTRL        5219  //ǿ��ֹͣȡ֤
#define NET_DVR_GET_ALARM_PROCESS_CFG           5220   //��ȡ�����������
#define NET_DVR_SET_ALARM_PROCESS_CFG           5221   //���ñ����������
#define NET_DVR_GET_BLACKLIST_ALARM_INFO        5222   //��ȡ�ڰ����������켣
#define NET_DVR_GET_STORAGE_RESOURCE_CFG        5225   //��ȡ�洢��Դ����
#define NET_DVR_SET_STORAGE_RESOURCE_CFG        5226   //���ô洢��Դ����
#define NET_DVR_DEL_BLACKLIST_ALARM_RECORD        5227   //Զ��ɾ������������¼
#define NET_DVR_SET_BLACKLIST_GROUP_INFO        5229   //Զ�̷����б��������
#define NET_DVR_DEL_BLACKLIST_GROUP_INFO        5230   //Զ��ɾ�������б�
#define NET_DVR_GET_BLACKLIST_GROUP_INFO        5231   //Զ�̻�ȡȫ�������б�
#define NET_DVR_SET_BLACKLIST_GROUP_RECORD_CFG    5232   //�����¼��������
#define NET_DVR_GET_BLACKLIST_GROUP_RECORD_CFG    5234   //Զ�̻�ȡ�����¼����
#define NET_DVR_DEL_BLACKLIST_GROUP_RECORD_CFG    5235   //Զ��ɾ�������¼����
#define    NET_DVR_GET_AREA_MONITOR_CFG            5236   //��ȡ�����ص����
#define    NET_DVR_SET_AREA_MONITOR_CFG            5237   //���������ص����
#define    NET_DVR_DEL_AREA_MONITOR_CFG            5238   //ɾ�������ص�
#define NET_DVR_RETRIEVAL_SNAP_RECORD            5240   //ץ�Ŀ����
#define NET_DVR_GET_ALARMLIST                    5241   //��ȡ���������б�
#define NET_DVR_DETECT_IMAGE                    5242   //����ͼƬ���
#define NET_DVR_GET_SNAP_RECORD                 5243   //��ȡץ�ļ�¼
#define NET_DVR_DEL_SNAP_RECORD                 5244   //ɾ��ץ�ļ�¼
#define NET_DVR_GET_FACE_RECORD                 5245   //Զ�̻�ȡ������¼�б�
#define NET_DVR_SET_FACE_RECORD                    5246   //���������¼
#define NET_DVR_DEL_FACE_RECORD                    5247   //ɾ��������¼
#define NET_DVR_GET_FACE_DATABASE                5248   //��ȡ���������ò���
#define NET_DVR_SET_FACE_DATABASE                5249   //�������������ò���
#define NET_DVR_DEL_FACE_DATABASE                5250   //ɾ��������
#define NET_DVR_RETRIEVAL_FACE_DATABASE            5251   //���������
#define NET_DVR_SET_BLACKLIST_REL_DEV_CFG        5252   //�豸���������������
#define NET_DVR_DEL_BLACKLIST_REL_DEV            5253   //ɾ�� �豸��������������Ϣ
/*************************���ܶೡ��end*****************************/

#define NET_DVR_GET_DISK_RAID_INFO              6001  //��ȡ����Raid��Ϣ
#define NET_DVR_SET_DISK_RAID_INFO              6002  //���ô���Raid��Ϣ

#define NET_DVR_GET_DVR_SYNCHRONOUS_IPC         6005  //��ȡ���Ƿ�Ϊǰ��IPCͬ���豸����
#define NET_DVR_SET_DVR_SYNCHRONOUS_IPC         6006  //���ã��Ƿ�Ϊǰ��IPCͬ���豸����

#define NET_DVR_SET_DVR_IPC_PASSWD              6008  //���ã�IPC�û�������
#define NET_DVR_GET_DEVICE_NET_USING_INFO       6009  //��ȡ����ǰ�豸������Դʹ�����

#define NET_DVR_SET_DVR_IPC_NET                 6012  //���ã�����ǰ��IPC�������ַ

#define NET_DVR_GET_RECORD_CHANNEL_INFO         6013  //��ȡ��¼��ͨ����Ϣ
#define NET_DVR_SET_RECORD_CHANNEL_INFO         6014  //���ã�¼��ͨ����Ϣ


#define NET_DVR_MOUNT_DISK                        6015     // ���ش���
#define NET_DVR_UNMOUNT_DISK                    6016     // ж�ش���

// CVR
#define NET_DVR_GET_STREAM_SRC_INFO                6017  //��ȡ������Դ��Ϣ
#define NET_DVR_SET_STREAM_SRC_INFO                6018  //���ã�����Դ��Ϣ
#define NET_DVR_GET_STREAM_RECORD_INFO            6019  //��ȡ����¼����Ϣ
#define NET_DVR_SET_STREAM_RECORD_INFO            6020  //���ã���¼����Ϣ
#define NET_DVR_GET_STREAM_RECORD_STATUS        6021  //��ȡ����¼��״̬
#define NET_DVR_SET_STREAM_RECORD_STATUS        6022  //���ã���¼��״̬
#define NET_DVR_GET_STREAM_INFO                    6023  //��ȡ����ӵ���ID��Ϣ
#define NET_DVR_GET_STREAM_SRC_INFO_V40            6024  //��ȡ������Դ��Ϣ
#define NET_DVR_SET_STREAM_SRC_INFO_V40          6025  //���ã�����Դ��Ϣ
#define NET_DVR_GET_RELOCATE_INFO               6026  //��ȡN+0ģʽ���ض�����Ϣ
#define NET_DVR_START_GOP_INFO_PASSBACK         6032  //������Ϣ����
#define NET_DVR_GET_CHANS_RECORD_STATUS_CFG     6035    //��ȡͨ��¼��״̬��Ϣ
#define NET_DVR_SET_CHANS_RECORD_STATUS_CFG     6036    //����ͨ��¼��״̬��Ϣ
//NVR��96xx
#define NET_DVR_GET_IP_ALARM_GROUP_NUM          6100  //��ȡ��IPͨ�����������������
#define NET_DVR_GET_IP_ALARM_IN                 6101  //��ȡ��IPͨ������������Ϣ
#define NET_DVR_GET_IP_ALARM_OUT                6102  //��ȡ��IPͨ�����������Ϣ

//9000 v2.2
#define NET_DVR_GET_FTPCFG_SECOND                6103      //��ȡͼƬ�ϴ�FTP����
#define NET_DVR_SET_FTPCFG_SECOND                6104      //����ͼƬ�ϴ�FTP����

#define NET_DVR_GET_DEFAULT_VIDEO_EFFECT        6105       // ��ȡ��Ƶ����Ч������Ĭ��ֵ
#define NET_DVR_SET_VIDEO_EFFECT                6106       // ����ͨ����Ƶ����ͼ�����
#define NET_DVR_DEL_INVALID_DISK                6107       // ɾ����Ч����

#define NET_DVR_GET_DRAWFRAME_DISK_QUOTA_CFG    6109    //��ȡ��֡ͨ���������
#define NET_DVR_SET_DRAWFRAME_DISK_QUOTA_CFG    6110    //���ó�֡ͨ���������

#define NET_DVR_GET_NAT_CFG                     6111     //��ȡNATӳ�����
#define NET_DVR_SET_NAT_CFG                     6112     //����NATӳ�����
#define NET_DVR_GET_AES_KEY                     6113     //��ȡ�豸AES������Կ
#define NET_DVR_GET_POE_CFG                     6114     //��ȡPOE����
#define NET_DVR_SET_POE_CFG                     6115     //����POE����
#define NET_DVR_GET_CUSTOM_PRO_CFG              6116     //��ȡ�Զ���Э�����
#define NET_DVR_SET_CUSTOM_PRO_CFG              6117     //�����Զ���Э�����
#define NET_DVR_GET_STREAM_CABAC                6118     //��ȡ����ѹ������ѡ��
#define NET_DVR_SET_STREAM_CABAC                6119     //��������ѹ������ѡ��
#define NET_DVR_GET_ESATA_MINISAS_USAGE_CFG        6120  //��ȡeSATA��miniSAS��;
#define NET_DVR_SET_ESATA_MINISAS_USAGE_CFG        6121  //����eSATA��miniSAS��;

#define NET_DVR_GET_HDCFG_V40                    6122  //��ȡӲ����Ϣ����
#define NET_DVR_SET_HDCFG_V40                    6123  //����Ӳ����Ϣ����
#define NET_DVR_GET_POE_CHANNEL_ADD_MODE        6124     //��ȡPOEͨ����ӷ�ʽ
#define NET_DVR_SET_POE_CHANNEL_ADD_MODE        6125     //����POEͨ����ӷ�ʽ
#define NET_DVR_GET_DIGITAL_CHANNEL_STATE       6126     //��ȡ�豸����ͨ��״̬
#define   NET_DVR_GET_BONJOUR_CFG               6127 // ��ȡBonjour��Ϣ
#define   NET_DVR_SET_BONJOUR_CFG               6128 // ����Bonjour��Ϣ


#define NET_DVR_GET_SOCKS_CFG                    6130//��ȡSOCKS��Ϣ
#define NET_DVR_SET_SOCKS_CFG                      6131//����SOCKS��Ϣ

#define    NET_DVR_GET_QOS_CFG                        6132//��ȡQoS��Ϣ
#define NET_DVR_SET_QOS_CFG                        6133//����QoS��Ϣ

#define NET_DVR_GET_HTTPS_CFG                    6134//��ȡHTTPS��Ϣ
#define NET_DVR_SET_HTTPS_CFG                    6135//����HTTPS��Ϣ

#define NET_DVR_GET_WD1_CFG                     6136//Զ�̻�ȡWD1ʹ�ܿ���
#define NET_DVR_SET_WD1_CFG                     6137//Զ������WD1ʹ�ܿ���

#define NET_DVR_CREATE_CERT                     6138//����֤��
#define NET_DVR_DELETE_CERT                     6139//ɾ��֤��


#define NET_DVR_GET_RECORD_LOCK_PERCENTAGE        6140  //��ȡ¼�����������
#define NET_DVR_SET_RECORD_LOCK_PERCENTAGE      6141  //����¼�����������

#define NET_DVR_CMD_TRIGGER_PERIOD_RECORD        6144 //�ⲿ�����ָ��ʱ��¼��
#define NET_DVR_UPLOAD_CERT                     6145    //�ϴ�֤��
#define NET_DVR_DOWNLOAD_CERT                   6146     //����֤��
#define NET_DVR_GET_CERT                        6147     //��ȡ֤��

#define NET_DVR_GET_POS_FILTER_CFG                6148    //��ȡPOS���˹���
#define NET_DVR_SET_POS_FILTER_CFG                6149    //����POS���˹���
#define NET_DVR_GET_CONNECT_POS_CFG                6150    //��ȡDVR��POS���ӷ�ʽ
#define NET_DVR_SET_CONNECT_POS_CFG                6151    //����DVR��POS���ӷ�ʽ
#define NET_DVR_GET_CHAN_FILTER_CFG                6152    //��ȡ������ͨ��������Ϣ
#define NET_DVR_SET_CHAN_FILTER_CFG                6153    //���ù�����ͨ��������Ϣ


#define NET_DVR_GET_FTPCFG_V40                    6162    //��ȡFTP��Ϣ
#define NET_DVR_SET_FTPCFG_V40                    6163    //����FTP��Ϣ

#define NET_DVR_GET_MONTHLY_RECORD_DISTRIBUTION 6164   //��ȡ����¼��ֲ�
#define NET_DVR_GET_ACCESS_DEVICE_CHANNEL_INFO  6165   //��ȡ�������豸ͨ����Ϣ
#define NET_DVR_GET_PREVIEW_SWITCH_CFG            6166   //��ȡ�豸����Ԥ���л�����
#define NET_DVR_SET_PREVIEW_SWITCH_CFG            6167   //�����豸����Ԥ���л�����

//Netra3.0.0
#define NET_DVR_GET_N_PLUS_ONE_WORK_MODE            6168    //��ȡN+1����ģʽ
#define NET_DVR_SET_N_PLUS_ONE_WORK_MODE            6169    //����N+1����ģʽ

#define NET_DVR_GET_HD_STATUS                         6170    //��ȡӲ��״̬
#define NET_DVR_SET_HD_STATUS                         6171    //����Ӳ��״̬

#define NET_DVR_IMPORT_IPC_CFG_FILE                    6172    //����IPC�����ļ�
#define NET_DVR_EXPORT_IPC_CFG_FILE                    6173    //����IPC�����ļ�
#define NET_DVR_UPGRADE_IPC                            6174    //����IPͨ��

#define NET_DVR_GET_RAID_BACKGROUND_TASK_SPEED        6175    //��ȡRAID��̨�����ٶ�
#define NET_DVR_SET_RAID_BACKGROUND_TASK_SPEED        6176    //����RAID��̨�����ٶ�

//marvell 256·NVR
#define NET_DVR_GET_EXCEPTIONCFG_V40                6177    //��ȡ�쳣��������
#define NET_DVR_SET_EXCEPTIONCFG_V40                6178    //�����쳣��������
#define NET_DVR_GET_PICCFG_V40                      6179    //��ȡͼ����� ֧�ֱ䳤    NetSDK_
#define NET_DVR_SET_PICCFG_V40                      6180    //����ͼ������� ֧�ֱ䳤
#define NET_DVR_GET_ALARMINCFG_V40                  6181    //��ȡ�������������֧�ֱ䳤
#define NET_DVR_SET_ALARMINCFG_V40                  6182    //��ȡ�������������֧�ֱ䳤
#define NET_DVR_GET_IPALARMINCFG_V40                6183    //��ȡIP�����������������Ϣ
#define NET_DVR_GET_IPALARMOUTCFG_V40               6185    //��ȡIP�����������������Ϣ
#define NET_DVR_GET_USERCFG_V40                     6187    //��ȡ�û�����
#define NET_DVR_SET_USERCFG_V40                     6188    //�����û�����
#define NET_DVR_GET_WORK_STATUS                     6189    //��ȡ�豸����״̬
#define NET_DVR_GET_JPEG_CAPTURE_CFG_V40            6190    //��ȡDVRץͼ����
#define NET_DVR_SET_JPEG_CAPTURE_CFG_V40            6191    //����DVRץͼ����
#define NET_DVR_GET_HDGROUP_CFG_V40                 6192    //��ȡ����������ò���
#define NET_DVR_SET_HDGROUP_CFG_V40                 6193    //��������������ò���
#define NET_DVR_GET_SMD_HOLIDAY_HANDLE              6194    //��ȡ�������ܼ��ռƻ�
#define NET_DVR_SET_SMD_HOLIDAY_HANDLE              6195    //���ü������ܼ��ռƻ�
#define NET_DVR_GET_PIC_MODEL_CFG                   6196    //��ȡͼƬ��ģ���ò���
#define NET_DVR_SET_PIC_MODEL_CFG                   6197    //����ͼƬ��ģ���ò���
#define NET_DVR_START_LOCAL_MOUSE_EVENT             6198    //�����豸��������¼���¼
#define NET_DVR_START_SIMULARE_MOUSE_EVENT          6199    //Զ��ģ������¼�

//91ϵ��HD-SDI����DVR
#define NET_DVR_GET_ACCESS_CAMERA_INFO          6201 // ��ȡǰ�������Ϣ
#define NET_DVR_SET_ACCESS_CAMERA_INFO          6202 // ����ǰ�������Ϣ
#define NET_DVR_PULL_DISK                        6203 // ��ȫ����
#define NET_DVR_SCAN_RAID                        6204 // ɨ������
// CVR 2.0.X
#define NET_DVR_GET_USER_RIGHT_CFG                6210        // ��ȡ�û�Ȩ��
#define NET_DVR_SET_USER_RIGHT_CFG                6211        // �����û�Ȩ��

#define NET_DVR_ONE_KEY_CONFIG                    6212        // һ������CVR
#define NET_DVR_RESTART_SERVICE                    6213        // ����CVR����

#define NET_DVR_GET_MAX_MACHINE_NUM_CFG            6214        // ��ȡ����������
#define NET_DVR_SET_MAX_MACHINE_NUM_CFG            6215        // ���ñ���������

#define NET_DVR_ADD_DEVICE                        6216        //N+1ģʽ����豸
#define NET_DVR_DEL_DEVICE                        6217        //N+1ģʽɾ���豸

#define NET_DVR_GET_DATA_CALLBACK_CFG            6218        // ��ȡ���ݻ�Ǩ״̬
#define NET_DVR_SET_DATA_CALLBACK_CFG            6219        // �������ݻ�Ǩ״̬

#define NET_DVR_CLONE_LUN                        6220    //��¡LUN��
#define NET_DVR_EXPAND_LUN                        6221    //��չ��������LUN��

#define NET_DVR_GET_N_PLUS_ONE_DEVICE_INFO        6222    //��ȡN+1�豸��Ϣ
#define NET_DVR_MODIFY_DVR_NET_DISK                6223    //�޸�DVR����
//#define NET_DVR_DEL_DVR_NET_DISK                6224    //ɾ��DVR����

#define NET_DVR_CREATE_NAS                        6225    //����NAS
#define NET_DVR_DELETE_NAS                        6226    //ɾ��NAS

#define NET_DVR_OPEN_ISCSI                         6227    //����iSCSI
#define NET_DVR_CLOSE_ISCSI                        6228    //�ر�iSCSI

#define NET_DVR_GET_FC                            6229    //��ȡ������Ϣ
#define NET_DVR_OPEN_FC                             6230    //����FC
#define NET_DVR_CLOSE_FC                         6231    //�ر�FC
#define NET_DVR_ONE_KEY_CONFIG_SAN                6232   // һ������SAN, ��һ������CVR�߼�һ��

//CVR2.3.2
#define NET_DVR_RECORD_CHECK                        6233  //¼�������Լ��
#define NET_DVR_ADD_RECORD_PASSBACK_TASK_MANUAL        6234  //�ֶ����¼��ش�����
#define NET_DVR_GET_ALL_RECORD_PASSBACK_TASK_MANUAL    6235  //��ȡ�����ֶ����¼��ش�����
#define NET_DVR_RECORD_PASSBACK_TASK_MANUAL_CTRL    6236  //�����ֶ�¼��ش�����
#define NET_DVR_DEL_RECORD_PASSBACK_TASK_MANUAL        6237  //ɾ���ֶ�¼��ش�����
#define NET_DVR_GET_RECORD_PASSBACK_PLAN_CFG        6238  //��ȡ¼��ش��ƻ�����
#define NET_DVR_SET_RECORD_PASSBACK_PLAN_CFG        6239  //����¼��ش��ƻ�����
#define NET_DVR_GET_DEV_STORAGE_CFG                    6240  //��ȡ�豸�洢��Ϣ
#define NET_DVR_GET_ONLINE_USER_CFG                    6241  //��ȡ�����û�����
#define NET_DVR_GET_RECORD_SEGMENT_CFG                6242  //��ȡ¼�������

#define NET_DVR_GET_REC_PASSBACK_TASK_EXECUTABLE    6243    //��ѯ�ֶ�¼��ش������ִ����
#define NET_DVR_GET_STREAM_MEDIA_CFG                6244    //��ȡ��ý��ش�¼��������ã���ID��ʽ��
#define NET_DVR_SET_STREAM_MEDIA_CFG                6245    //������ý��ش�¼��������ã���ID��ʽ��
#define NET_DVR_GET_USERCFG_V50                     6246  //��ȡ�û�����V50
#define NET_DVR_SET_USERCFG_V50                     6247  //�����û�����V50

#define NET_DVR_GET_RECORD_PASSBACK_BASIC_CFG_CAP    6248  //��ȡCVR�ش����ܻ�����������
#define NET_DVR_GET_RECORD_PASSBACK_BASIC_CFG        6249  //��ȡCVR�ش����ܻ�������
#define NET_DVR_SET_RECORD_PASSBACK_BASIC_CFG        6250  //����CVR�ش����ܻ�������
#define NET_DVR_ONE_KEY_CONFIG_V50                    6251  // һ������CVR(V50)
#define NET_DVR_GET_RACM_CAP                        6252  //��ȡ�洢��������RACM������
#define NET_DVR_GET_THUMBNAILS                        6253  //��ȡ����ͼ��Ĭ����¼�������ͼ��(֧����ID)
#define NET_DVR_ADD_RECORD_PASSBACK_TASK_MANUAL_V50        6254  //�ֶ����¼��ش�����V50����������ID��
#define NET_DVR_GET_RECORD_PASSBACK_HISTORY_PLAN_CFG_CAP    6255  //��ȡCVR�ش���ʷ¼��ƻ�����
#define NET_DVR_GET_RECORD_PASSBACK_HISTORY_PLAN_CFG        6256  //��ȡCVR�ش���ʷ¼��ƻ�����
#define NET_DVR_SET_RECORD_PASSBACK_HISTORY_PLAN_CFG        6257  //����CVR�ش���ʷ¼��ƻ�����


#define NET_DVR_GET_RECORD_PACK                    6301    //��ȡ¼��������
#define NET_DVR_SET_RECORD_PACK                    6302    //����¼��������

#define NET_DVR_GET_CLOUD_STORAGE_CFG           6303     //��ȡ�豸��ǰ����ģʽ
#define NET_DVR_SET_CLOUD_STORAGE_CFG           6304    //�����豸��ǰ����ģʽ
#define NET_DVR_GET_GOP_INFO                    6305    //��ȡGOP��Ϣ
#define NET_DVR_GET_PHY_DISK_INFO               6306     //��ȡ���������Ϣ
//¼�������ⲿ����
#define NET_DVR_GET_RECORDING_AUTO_TRACK_CFG    6307    //��ȡSDI�Զ�����������Ϣ
#define NET_DVR_SET_RECORDING_AUTO_TRACK_CFG    6308    //����SDI�Զ�����������Ϣ

#define NET_DVR_GET_RECORDING_PUBLISH_CFG        6309  //��ȡһ��������Ϣ
#define NET_DVR_SET_RECORDING_PUBLISH_CFG        6310  //����һ��������Ϣ


#define NET_DVR_RECORDING_ONEKEY_CONTROL        6311  //¼����������

#define NET_DVR_GET_RECORDING_END_TIME    6312  //��ȡ¼��ʣ��ʱ��

#define NET_DVR_RECORDING_PUBLISH                6313  //һ������¼��

#define NET_DVR_GET_CURRICULUM_CFG            6314    //��ȡ�α�������Ϣ
#define NET_DVR_SET_CURRICULUM_CFG            6315  //���ÿα�������Ϣ

#define NET_DVR_GET_COURSE_INDEX_CFG        6316    //��ȡ�γ���Ϣ����
#define NET_DVR_SET_COURSE_INDEX_CFG        6317  //���ÿγ���Ϣ����

#define    NET_DVR_GET_PPT_CHANNEL                6318    //��ȡPPT֧��ͨ����
#define    NET_DVR_GET_PPT_DETECT_CFG            6319    //��ȡPPT������
#define    NET_DVR_SET_PPT_DETECT_CFG            6320    //����PPT������

#define NET_DVR_GET_RECORDINGHOST_CFG            6321    //��ȡ¼������������Ϣ
#define NET_DVR_SET_RECORDINGHOST_CFG            6322    //����¼������������Ϣ
#define NET_DVR_GET_BACKUP_RECORD_CFG           6323    //��ȡһ������������Ϣ
#define NET_DVR_SET_BACKUP_RECORD_CFG           6324    //����һ������������Ϣ

//ͥ������
#define NET_DVR_GET_AUDIO_ACTIVATION_CFG        6326    //��ȡ�����������ò���
#define NET_DVR_SET_AUDIO_ACTIVATION_CFG        6327    //���������������ò���
#define NET_DVR_GET_DECODERCFG_V40              6328    //��ȡ������������Ϣ
#define NET_DVR_SET_DECODERCFG_V40                6329    //���ý�����������Ϣ

#define NET_DVR_INFRARED_OUTPUT_CONTROL         6330   //�����������
#define NET_DVR_GET_INFRARED_CMD_NAME_CFG       6331   //��ȡ�����������Ʋ�������
#define NET_DVR_SET_INFRARED_CMD_NAME_CFG       6332   //���ú����������Ʋ�������
#define NET_DVR_START_INFRARED_LEARN            6333   //Զ�̺���ѧ��

#define NET_DVR_GET_TRIAL_SYSTEM_CFG            6334   //��ȡͥ������ϵͳ��Ϣ
#define NET_DVR_SET_CASE_INFO                    6335    //������Ϣ¼��
#define NET_DVR_GET_TRIAL_MICROPHONE_STATUS        6336  //��ȡ��˷�״̬��Ϣ
#define NET_DVR_SET_TRIAL_MICROPHONE_STATUS        6337  //��ȡ��˷�״̬��Ϣ
#define NET_DVR_GET_TRIAL_HOST_STATUS            6338  //��ȡͥ������״̬��Ϣ
#define NET_DVR_GET_LAMP_OUT                    6339  //��ȡLAMP�������Ϣ
#define NET_DVR_SET_LAMP_OUT                    6340  //����LAMP�������Ϣ
#define NET_DVR_LAMP_REMOTE_CONTROL                6341  // LAMP����
#define NET_DVR_REMOTE_CONTROL_PLAY                6342  //Զ�̿��Ʊ��ػط�
#define NET_DVR_GET_LOCAL_INPUT_CFG                6343  //��ȡͥ������״̬��Ϣͥ����������������Ϣ
#define NET_DVR_SET_LOCAL_INPUT_CFG                6344  //����ͥ����������������Ϣ
#define NET_DVR_GET_CASE_INFO                    6345  //��ȡ��ǰ������Ϣ

//��Ѷ���ⲿ����
#define NET_DVR_INQUEST_GET_CDW_STATUS             6350  //��ȡ��Ѷ����¼״̬-������
#define NET_DVR_GET_MIX_AUDIOIN_CFG             6351  //��ȡ��������ڲ�������
#define NET_DVR_SET_MIX_AUDIOIN_CFG             6352  //���û�������ڲ�������
#define NET_DVR_GET_MIX_AUDIOOUT_CFG            6353  //��ȡ��������ڲ�������
#define NET_DVR_SET_MIX_AUDIOOUT_CFG            6354  //���û�������ڲ�������
#define NET_DVR_GET_AUDIOIN_VOLUME_CFG          6355  //��ȡ��Ƶ������������ڲ�������
#define NET_DVR_SET_AUDIOIN_VOLUME_CFG          6356  //������Ƶ������������ڲ�������
#define NET_DVR_GET_AREA_MASK_CFG               6357  //��ȡ��������������
#define NET_DVR_SET_AREA_MASK_CFG               6358  //������������������
#define NET_DVR_GET_AUDIO_DIACRITICAL_CFG       6359  //��ȡ��Ƶ��������
#define NET_DVR_SET_AUDIO_DIACRITICAL_CFG       6360  //������Ƶ��������
#define NET_DVR_GET_WIFI_DHCP_ADDR_CFG          6361  //��WIFI DHCP ��ַ��Χ��������
#define NET_DVR_SET_WIFI_DHCP_ADDR_CFG          6362  //��WIFI DHCP ��ַ��Χ��������
#define NET_DVR_GET_WIFI_CLIENT_LIST_INFO       6363  //��ȡwifi�ȵ������ӵ��豸��Ϣ
#define NET_DVR_REMOTECONTROL_POWER_ON            6364  //Զ�̿���
#define NET_DVR_GET_MULTISTREAM_RELATION_CHAN_CFG      6365  //��ȡ����������ͨ����������
#define NET_DVR_SET_MULTISTREAM_RELATION_CHAN_CFG     6366  //���ö���������ͨ����������
#define NET_DVR_GET_VIDEOOUT_RESOLUTION_CFG        6367  //��ȡ�豸������Ƶ����ڷֱ���
#define NET_DVR_SET_VIDEOOUT_RESOLUTION_CFG        6368  //�����豸������Ƶ����ڷֱ���
#define NET_DVR_GET_AUDIOOUT_VOLUME_CFG         6369  //��ȡ��Ƶ������������ڲ�������
#define NET_DVR_SET_AUDIOOUT_VOLUME_CFG         6370  //������Ƶ������������ڲ�������
#define NET_DVR_INQUEST_PAUSE_CDW               6371  //��ͣ��¼
#define NET_DVR_INQUEST_RESUME_CDW              6372  //�ָ���¼
#define NET_DVR_GET_INPUT_CHAN_CFG              6373  //��ȡ����ͨ������
#define NET_DVR_SET_INPUT_CHAN_CFG              6374  //��������ͨ������
#define  NET_DVR_GET_INQUEST_MIX_AUDIOIN_CFG    6375    //��ȡ��Ѷ����Ƶ�����������
#define  NET_DVR_SET_INQUEST_MIX_AUDIOIN_CFG    6376    //������Ѷ����Ƶ�����������
#define     NET_DVR_CASE_INFO_CTRL                    6377    //������Ϣ��ʾ����
#define  NET_DVR_GET_INQUEST_USER_RIGHT            6378    //��ȡ��Ѷ���û�Ȩ��
#define  NET_DVR_SET_INQUEST_USER_RIGHT            6379    //������Ѷ���û�Ȩ��
#define NET_DVR_GET_INQUEST_CASE_INFO            6380    //��ȡ��Ѷ������Ϣ����
#define NET_DVR_SET_INQUEST_CASE_INFO            6381    //������Ѷ������Ϣ����

#define    NET_DVR_GET_FILM_MODE_CFG               6387    //��ȡ��Ӱģʽ
#define    NET_DVR_SET_FILM_MODE_CFG               6388    //���õ�Ӱģʽ
#define    NET_DVR_GET_FILM_MODE_CFG_CAP            6389    //��ȡ��Ӱģʽ��������

#define    NET_DVR_GET_DIRECTED_STRATEGY_CFG       6390    //��ȡ������������
#define    NET_DVR_SET_DIRECTED_STRATEGY_CFG        6391    //���õ�����������
#define    NET_DVR_GET_DIRECTED_STRATEGY_CFG_CAP    6392    //��ȡ��Ӱģʽ��������
#define    NET_DVR_GET_FRAME_CFG                    6393    //��ȡ����߿�
#define    NET_DVR_SET_FRAME_CFG                    6394    //���û���߿�
#define    NET_DVR_GET_FRAME_CFG_CAP                6395    //��ȡ����߿���������
#define    NET_DVR_GET_AUDIO_EFFECTIVE_CFG            6396    //��ȡ��Ƶ�Ż�����
#define    NET_DVR_SET_AUDIO_EFFECTIVE_CFG            6397    //������ƵЧ������
#define    NET_DVR_GET_AUDIO_EFFECTIVE_CFG_CAP        6398    //��ȡ��ƵЧ���Ż���������
#define    NET_DVR_GET_RECORD_VIDEO_CFG              6399    //��ȡ¼����Ƶ����
#define    NET_DVR_SET_RECORD_VIDEO_CFG            6400    //����¼����Ƶ����


#define NET_DVR_GET_OUTPUT_CFG                  6401        //��ȡ��ʾ�������
#define NET_DVR_SET_OUTPUT_CFG                  6402        //������ʾ�������
#define NET_DVR_CODER_DISPLAY_START             6403        //��ʼ���
#define NET_DVR_CODER_DISPLAY_STOP              6404        //ֹͣ���
#define NET_DVR_GET_WINDOW_STATUS               6405        //��ȡ��ʾ����״̬

//VQD���ܽӿ�
#define NET_DVR_GET_VQD_LOOP_DIAGNOSE_CFG       6406        //��ȡVQDѭ��������ò���
#define NET_DVR_SET_VQD_LOOP_DIAGNOSE_CFG       6407        //����VQDѭ��������ò���
#define NET_DVR_GET_VQD_DIAGNOSE_INFO           6408        //�ֶ���ȡVQD�����Ϣ

#define    NET_DVR_RECORDING_PUBLISH_FILE            6421        //�ļ�����
#define    NET_DVR_GET_RECORDING_PUBLISH_FILE_CAP    6422        //��ȡ�ļ���������
#define    NET_DVR_GET_PUBLISH_PROGRESS            6423           //��ȡ��������
#define    NET_DVR_GET_RECORD_VIDEO_CFG_CAP        6424        //��ȡ¼����Ƶ��������
#define    NET_DVR_GET_RTMP_CFG                    6425        //��ȡRTMP����
#define    NET_DVR_SET_RTMP_CFG                    6426        //����RTMP����
#define    NET_DVR_GET_RTMP_CFG_CAP                  6427        //��ȡRTMP��������
#define    NET_DVR_DEL_BACKGROUND_PIC                6428        //ɾ������ͼƬ�ļ�
#define    NET_DVR_GET_BACKGROUND_PIC_CFG            6429        //��ѯ����ͼƬ�ļ�
#define    NET_DVR_GET_BACKGROUND_PIC_INFO            6430        //��ȡ����ͼƬ��Ϊ����ͼƬ
#define    NET_DVR_SET_BACKGROUND_PIC_INFO            6431        //��������ͼƬ��Ϊ����ͼƬ
#define    NET_DVR_GET_BACKGROUND_PIC_INFO_CAP      6432           //��ȡ����ͼƬ��Ϊ����ͼƬ��������
#define    NET_DVR_GET_RECORD_HOST_CAP                6433        //��ȡ¼������������
#define NET_DVR_GET_COURSE_LIST                 6434    //��ȡ�γ��б�
#define    NET_DVR_GET_RECORD_STATUS                6435 //��ѯ¼��������ǰ״̬
#define    NET_DVR_MANUAL_CURRICULUM_CONTROL        6436    //�ֶ��α����
#define    NET_DVR_GET_IMAGE_DIFF_DETECTION_CFG        6437    //��ȡͼ���ּ�����
#define    NET_DVR_SET_IMAGE_DIFF_DETECTION_CFG        6438    //����ͼ���ּ�����
#define    NET_DVR_GET_IMAGE_DIFF_DETECTION_CFG_CAP    6439    //��ȡͼ���ּ����������
#define    NET_DVR_GET_RECORDING_PUBLISH_FILE_INFO    6440    //��ȡ�����ļ���Ϣ����
#define    NET_DVR_SET_RECORDING_PUBLISH_FILE_INFO    6441    //���÷����ļ���Ϣ����
#define    NET_DVR_GET_RECORDING_PUBLISH_FILE_INFO_CAP        6442    //��ȡ�����ļ���Ϣ��������
#define    NET_DVR_MANUAL_CURRICULUM_CONTROL_CAP        6443    //��ȡ�ֶ��γ�¼�������
#define NET_DVR_GET_STATISTIC_DATA_LIST             6444    //��ȡͳ�������б�

#define    NET_DVR_GET_DEVICE_LAN_ENCODE            6501        //��ȡ�豸�����Ա���
#define NET_DVR_GET_GBT28181_SERVICE_CFG        6503        //��ȡGB28181����������
#define NET_DVR_SET_GBT28181_SERVICE_CFG        6504        //����GB28181����������
#define NET_DVR_GET_GBT28181_SERVICE_CAPABILITIES 6505      //��ȡGB28181����������

#define NET_DVR_GET_CLOUD_URL               6506    //��ȡ�ƴ洢URL
#define NET_DVR_GET_CLOUD_URL_CAP           6507    //��ȡ�ƴ洢URL-������
#define NET_DVR_GET_CLOUD_CFG               6508    //��ȡ�ƴ洢���ò���
#define NET_DVR_SET_CLOUD_CFG               6509    //�����ƴ洢���ò���
#define NET_DVR_GET_CLOUD_CFG_CAP           6510    //��ȡ�ƴ洢����-������
#define NET_DVR_GET_CLOUD_UPLOADSTRATEGY    6511    //��ȡ�ƴ洢�ϴ�����
#define NET_DVR_SET_CLOUD_UPLOADSTRATEGY    6512    //�����ƴ洢�ϴ�����
#define NET_DVR_GET_CLOUDSTORAGE_UPLOADSTRATEGY_CAP     6513    //�ƴ洢�ϴ���������-������

#define    NET_DVR_GET_VIDEO_IMAGE_DB_CFG        6601        //��ȡ��ͼ����Ϣ
#define    NET_DVR_SET_VIDEO_IMAGE_DB_CFG        6602        //������ͼ����Ϣ
#define    NET_DVR_GET_VIDEO_IMAGE_DB_CFG_CAP    6603        //��ȡ��ͼ���������
#define    NET_DVR_GET_FILE_INFO_BY_ID            6604        //�����ļ�ID��ȡ��ͼ�����ļ���Ϣ
#define    NET_DVR_QUERY_FILE_INFO_CAP            6605        //�����ļ�����ѯ�ļ���Ϣ����
#define    NET_DVR_DEL_FILE_FROM_DB            6606        //����ͼ����ɾ���ļ�
#define    NET_DVR_GET_VIDEO_IMAGE_DB_CAP        6607        //��ȡ��ͼ��������

#define NET_DVR_GET_FIGURE                    6610       //��ȡ����ͼ

#define    NET_DVR_SYNC_IPC_PASSWD                  6621        //ͬ��IPC������NVRһ��
#define    NET_DVR_GET_VEHICLE_BLACKLST_SCHEDULE 6622    //��ȡ����������ʱ������
#define    NET_DVR_SET_VEHICLE_BLACKLST_SCHEDULE 6623    //���ú���������ʱ������

#define    NET_DVR_GET_VEHICLE_WHITELST_SCHEDULE 6624    //��ȡ����������ʱ������
#define    NET_DVR_SET_VEHICLE_WHITELST_SCHEDULE 6625    //���ð���������ʱ������

#define    NET_DVR_GET_VEHICLE_BLACKLIST_EVENT_TRIGGER     6626    //��ȡ������������������
#define    NET_DVR_SET_VEHICLE_BLACKLIST_EVENT_TRIGGER     6627    //���ú�����������������

#define    NET_DVR_GET_VEHICLE_WHITELIST_EVENT_TRIGGER     6628    //��ȡ������������������
#define    NET_DVR_SET_VEHICLE_WHITELIST_EVENT_TRIGGER     6629    //���ð�����������������

#define    NET_DVR_GET_TRAFFIC_CAP    6630    //��ȡץ�����������
#define    NET_DVR_GET_VEHICLE_ALLLIST_EVENT_TRIGGER     6631    //��ȡȫ��������Ⲽ����������
#define    NET_DVR_SET_VEHICLE_ALLLIST_EVENT_TRIGGER     6632    //����ȫ��������Ⲽ����������
#define    NET_DVR_GET_VEHICLE_OTHERLIST_EVENT_TRIGGER     6633    //��ȡ������������������
#define    NET_DVR_SET_VEHICLE_OTHERLIST_EVENT_TRIGGER     6634    //����������������������

#define    NET_DVR_GET_STORAGEDETECTION_EVENT_TRIGGER     6635    //��ȡ�洢���������������
#define    NET_DVR_SET_STORAGEDETECTION_EVENT_TRIGGER     6636    //���ô洢���������������
#define    NET_DVR_GET_STORAGEDETECTION_SCHEDULE_CAPABILITIES    6637    //��ȡ�洢������Ⲽ��ʱ������
#define    NET_DVR_GET_STORAGEDETECTION_SCHEDULE         6638    //��ȡ�洢��������ʱ������
#define    NET_DVR_SET_STORAGEDETECTION_SCHEDULE         6639    //���ô洢��������ʱ������
#define    NET_DVR_GET_STORAGEDETECTION_STATE             6640    //��ȡ�洢����״̬


#define    NET_DVR_GET_FACECAPTURE_EVENT_TRIGGER         6641    //��ȡ����ץ����������
#define    NET_DVR_SET_FACECAPTURE_EVENT_TRIGGER         6642    //��������ץ����������
#define    NET_DVR_GET_FACECAPTURE_SCHEDULE_CAPABILITIES 6643    //��ȡ����ץ�Ĳ���ʱ������
#define    NET_DVR_GET_FACECAPTURE_SCHEDULE             6644    //��ȡ����ץ�Ĳ���ʱ������
#define    NET_DVR_SET_FACECAPTURE_SCHEDULE             6645    //��������ץ�Ĳ���ʱ������
#define    NET_DVR_GET_STORAGEDETECTION_RWLOCK             6646    //��ȡ�洢���Ķ�д������
#define    NET_DVR_GET_STORAGEDETECTION_RWLOCK_CAPABILITIES    6647    //��ȡ�洢���Ķ�д����������
#define    NET_DVR_SET_STORAGEDETECTION_RWLOCK             6648    //���ô洢���Ķ�д������
#define    NET_DVR_GET_PTZTRACKSTATUS                     6649    //��ȡ�����������״̬

#define    NET_DVR_SET_STORAGEDETECTION_UNLOCK             6653    //���ô洢���Ľ�������
#define    NET_DVR_GET_STORAGEDETECTION_UNLOCK_CAPABILITIES    6654    //��ȡ�洢���Ľ�����������

#define    NET_DVR_SET_SHIPSDETECTION_CFG                 6655    //���ô�ֻ����������
#define    NET_DVR_GET_SHIPSDETECTION_CFG                 6656    //��ȡ��ֻ����������
#define    NET_DVR_GET_SHIPSDETECTION_CAPABILITIES         6657    //��ȡ��ֻ��������������
#define    NET_DVR_GET_SHIPSDETECTION_COUNT               6658    //��ȡ��ֻ������Ϣ
#define    NET_DVR_SHIPSCOUNT_DELETE_CTRL                  6659   //��մ�ֻ������Ϣ

#define    NET_DVR_GET_BAREDATAOVERLAY_CAPABILITIES     6660   //��ȡ�����ݵ�������
#define    NET_DVR_SET_BAREDATAOVERLAY_CFG                 6661    //���������ݵ���
#define    NET_DVR_GET_BAREDATAOVERLAY_CFG                 6662    //��ȡ�����ݵ���
#define    NET_DVR_GET_SHIPSDETECTION_SCHEDULE             6663    //��ȡ��ֻ��Ⲽ��ʱ������
#define    NET_DVR_SET_SHIPSDETECTION_SCHEDULE             6664    //���ô�ֻ��Ⲽ��ʱ������
#define    NET_DVR_GET_SHIPSDETECTION_EVENT_TRIGGER     6665    //��ȡ��ֻ�����������
#define    NET_DVR_SET_SHIPSDETECTION_EVENT_TRIGGER     6666    //���ô�ֻ�����������
#define    NET_DVR_GET_SHIPSDETECTION_SCHEDULE_CAPABILITIES    6667    //��ȡ��ֻ��Ⲽ��ʱ������

#define    NET_DVR_FIRE_FOCUSZOOM_CTRL         6670        //���ɼ��⾵ͷ�۽��䱶

#define    NET_DVR_GET_FIREDETECTION_SCHEDULE_CAPABILITIES    6671 //��ȡ����Ⲽ��ʱ������
#define    NET_DVR_GET_FIREDETECTION_SCHEDULE    6672    //��ȡ����Ⲽ��ʱ������
#define    NET_DVR_SET_FIREDETECTION_SCHEDULE    6673    //���û���Ⲽ��ʱ������
#define    NET_DVR_GET_MANUALRANGING_CAPABILITIES    6675    //��ȡ�ֶ������������
#define    NET_DVR_SET_MANUALRANGING           6677        //�����ֶ�������
#define    NET_DVR_GET_MANUALDEICING_CAPABILITIES    6678//��ȡ�ֶ�������������
#define    NET_DVR_SET_MANUALDEICING           6679        //�����ֶ�����
#define    NET_DVR_GET_MANUALDEICING           6680        //��ȡ�ֶ�����


#define    NET_DVR_GET_PTZABSOLUTEEX_CAPABILITIES  6695    //��ȡ�߾���PTZ����λ��������չ����
#define    NET_DVR_GET_PTZABSOLUTEEX               6696    //��ȡ�߾���PTZ����λ��������չ
#define    NET_DVR_SET_PTZABSOLUTEEX               6697    //���ø߾���PTZ����λ��������չ

#define    NET_DVR_GET_CRUISE_CAPABILITIES              6698    //��ȡ�豸Ѳ��ģʽ��������
#define    NET_DVR_GET_CRUISE_INFO                      6699    //��ȡ�豸Ѳ��ģʽ
#define    NET_DVR_GET_TEMP_HUMI_CAPABILITIES           6700    //��ʪ��ʵʱ������ȡ
#define NET_DVR_GET_TEMP_HUMI_INFO                   6701   //��ʪ��ʵʱ��ȡ

#define    NET_DVR_GET_MANUALTHERM_INFO                 6706   //�ֶ�����ʵʱ��ȡ
#define    NET_DVR_GET_MANUALTHERM_CAPABILITIES         6707   //��ȡ�ֶ�����ʵʱ��������
#define    NET_DVR_SET_MANUALTHERM                      6708     //�����ֶ�������������

//DVR96000
#define    NET_DVR_GET_ACCESSORY_CARD_INFO_CAPABILITIES    6709 //��ȡ�������Ϣ����
#define    NET_DVR_GET_ACCESSORY_CARD_INFO                    6710 //��ȡ�������Ϣ

#define    NET_DVR_GET_THERMINTELL_CAPABILITIES    6711         //��ȡ�ȳ������ܻ�������
#define    NET_DVR_GET_THERMINTELL                 6712         //��ȡ�ȳ������ܻ������ò���
#define    NET_DVR_SET_THERMINTELL                 6713         //�����ȳ������ܻ������ò���
#define NET_GET_CRUISEPOINT_V50                      6714 //��ȡѲ��·��������չ
#define    NET_DVR_GET_MANUALTHERM_BASIC_CAPABILITIES     6715   //��ȡ�ֶ����»���������������
#define    NET_DVR_SET_MANUALTHERM_BASICPARAM           6716     //�����ֶ����»�������
#define    NET_DVR_GET_MANUALTHERM_BASICPARAM           6717     //��ȡ�ֶ����»�������

#define    NET_DVR_GET_FIRESHIELDMASK_CAPABILITIES            6718   //��ȡ���������������

#define NET_DVR_GET_HIDDEN_INFORMATION_CAPABILITIES    6720 //������Ϣ��������
#define NET_DVR_GET_HIDDEN_INFORMATION                 6721 //��ȡ������Ϣ����
#define NET_DVR_SET_HIDDEN_INFORMATION                 6722 //����������Ϣ����

#define    NET_DVR_SET_FIRESHIELDMASK_CFG                  6723    //���û���������β���
#define    NET_DVR_GET_FIRESHIELDMASK_CFG                  6724     //��ȡ����������β���

#define    NET_DVR_GET_SMOKESHIELDMASK_CAPABILITIES            6725   //��ȡ����������������
#define    NET_DVR_SET_SMOKESHIELDMASK_CFG                     6726     //���������������β���
#define    NET_DVR_GET_SMOKESHIELDMASK_CFG                     6727        //��ȡ�����������β���

#define    NET_DVR_GET_AREASCAN_CAPABILITIES                  6728   //��ȡ����ɨ������
#define    NET_DVR_GET_AREASCAN_CFG                          6730        //��ȡ����ɨ�����

#define    NET_DVR_DEL_AREASCAN_CFG                          6731        //ɨ������ɾ��
#define    NET_DVR_AREASCAN_INIT_CTRL                        6732        //��������ɨ������
#define    NET_DVR_AREASCAN_CONFIRM_CTRL                     6733        //��������ɨ������
#define    NET_DVR_AREASCAN_STOP_CTRL                        6734        //ֹͣ����ɨ������
#define    NET_DVR_SAVE_SCANZOOM_CTRL                        6735        //����ɨ�豶�ʣ����浱ǰ��ѧ����Ϊɨ�豶��
#define    NET_DVR_GET_SCANZOOM_CTRL                         6736        //��ȡɨ�豶�ʣ���Ԥ�������еĹ�ѧ���ʷ��ص���ǰɨ�豶�ʡ�
#define    NET_DVR_DEL_FIRESHIELDMASK_CTRL                   6737        //ɾ�������������
#define    NET_DVR_DEL_SMOKESHIELDMASK_CTRL                  6738        //ɾ��������������

#define    NET_DVR_GET_DENSEFOG_EVENT_TRIGGER                6740     //��ȡ��������������
#define    NET_DVR_SET_DENSEFOG_EVENT_TRIGGER                6741     //���ô�������������
#define    NET_DVR_SET_DENSEFOGDETECTION_CFG                 6742     //���ô������������
#define    NET_DVR_GET_DENSEFOGDETECTION_CFG                 6743     //��ȡ�������������
#define    NET_DVR_GET_DENSEFOGDETECTION_CAPABILITIES        6744     //��ȡ�����������������

#define    NET_DVR_GET_THERMOMETRY_SCHEDULE_CAPABILITIES     6750     //��ȡ���¼�Ⲽ��ʱ������
#define    NET_DVR_GET_THERMOMETRY_SCHEDULE                  6751     //��ȡ���¼�Ⲽ��ʱ������
#define    NET_DVR_SET_THERMOMETRY_SCHEDULE                  6752     //���ò��¼�Ⲽ��ʱ������
#define    NET_DVR_GET_TEMPERTURE_SCHEDULE_CAPABILITIES      6753     //��ȡ�²��ʱ������
#define    NET_DVR_GET_TEMPERTURE_SCHEDULE                   6754     //��ȡ�²��ʱ������
#define    NET_DVR_SET_TEMPERTURE_SCHEDULE                   6755     //�����²��ʱ������
#define NET_DVR_GET_SEARCH_LOG_CAPABILITIES               6756     //��־����֧������
#define    NET_DVR_GET_VEHICLEFLOW                           6758     //��ȡ����������
#define NET_DVR_GET_IPADDR_FILTERCFG_V50                  6759     //��ȡIP��ַ���˲�����չ
#define NET_DVR_SET_IPADDR_FILTERCFG_V50                  6760     //����IP��ַ���˲�����չ
#define    NET_DVR_GET_TEMPHUMSENSOR_CAPABILITIES            6761     //��ȡ��ʪ�ȴ�����������
#define    NET_DVR_GET_TEMPHUMSENSOR                         6762     //��ȡ��ʪ�ȴ���������Э��
#define    NET_DVR_SET_TEMPHUMSENSOR                         6763     //������ʪ�ȴ���������Э��

#define    NET_DVR_GET_THERMOMETRY_MODE_CAPABILITIES  6764  //��ȡ����ģʽ����
#define    NET_DVR_GET_THERMOMETRY_MODE               6765  //��ȡ����ģʽ����
#define    NET_DVR_SET_THERMOMETRY_MODE               6766  //���ò���ģʽ����

#define    NET_DVR_GET_THERMAL_PIP_CAPABILITIES    6767    //��ȡ�ȳ����л���������
#define    NET_DVR_GET_THERMAL_PIP   6768    //��ȡ�ȳ����л����ò���
#define    NET_DVR_SET_THERMAL_PIP   6769    //�����ȳ����л����ò���
#define    NET_DVR_GET_THERMAL_INTELRULEDISPLAY_CAPABILITIES    6770    //��ȡ�ȳ������ܹ�����ʾ����
#define    NET_DVR_GET_THERMAL_INTELRULE_DISPLAY   6771    //��ȡ�ȳ������ܹ�����ʾ����
#define    NET_DVR_SET_THERMAL_INTELRULE_DISPLAY   6772    //�����ȳ������ܹ�����ʾ����
#define    NET_DVR_GET_THERMAL_ALGVERSION   6773   //��ȡ�ȳ�������㷨��汾
#define    NET_DVR_GET_CURRENT_LOCK_CAPABILITIES    6774    //��ȡ����������������
#define    NET_DVR_GET_CURRENT_LOCK   6775    //��ȡ�����������ò���
#define    NET_DVR_SET_CURRENT_LOCK   6776    //���õ����������ò���

#define    NET_DVR_DEL_MANUALTHERM_RULE                      6778     //ɾ���ֶ����¹���

#define NET_DVR_GET_UPGRADE_INFO    6779    //��ȡ������Ϣ

#define    NET_DVR_SWITCH_TRANSFER  7000

#define NET_DVR_GET_MB_POWERCTRLPARA            8000//��ȡ�������Ʋ���
#define    NET_DVR_SET_MB_POWERCTRLPARA            8001 //�����������Ʋ���
#define NET_DVR_GET_AUTOBACKUPPARA                8002//��ȡ�Զ����ݲ���
#define NET_DVR_SET_AUTOBACKUPPARA                8003 //�����Զ����ݲ���
#define NET_DVR_GET_MB_GPSPARA                    8004//��ȡGPS����
#define NET_DVR_SET_MB_GPSPARA                    8005 //����GPS����
#define NET_DVR_GET_MB_SENSORINPARA                8006//��ȡSENSOR����
#define NET_DVR_SET_MB_SENSORINPARA                8007 //����SENSOR����
#define NET_DVR_GET_GSENSORPARA                    8008//��ȡGSENSOR����
#define NET_DVR_SET_GSENSORPARA                    8009 //����GSENSOR����
#define NET_DVR_GET_MB_DOWNLOADSVRPARA            8010//��ȡ���ط���������
#define NET_DVR_SET_MB_DOWNLOADSVRPARA            8011//�������ط���������
#define NET_DVR_GET_PLATERECOG_PARA                8012//��ȡ����ʶ�����
#define NET_DVR_SET_PLATERECOG_PARA                8013//���ó���ʶ�����
#define NET_DVR_GET_ENFORCESYS_PARA                8014//��ȡ�����������
#define NET_DVR_SET_ENFORCESYS_PARA                8015//���ó����������
#define NET_DVR_GET_GPS_DATA                    8016 //��ȡGPS����
#define NET_DVR_GET_ANALOG_ALARMINCFG            8017//��ȡģ�ⱨ���������
#define NET_DVR_SET_ANALOG_ALARMINCFG            8018//����ģ�ⱨ���������

#define NET_DVR_GET_SYSTEM_CAPABILITIES         8100 //��ȡ�豸��ϵͳ����
#define NET_DVR_GET_EAGLEEYE_CAPABILITIES       8101 //��ȡ�豸ӥ������
#define NET_DVR_GET_SLAVECAMERA_CALIB_V51       8102    //��ȡ��������궨����V51
#define NET_DVR_SET_SLAVECAMERA_CALIB_V51       8103    //���ô�������궨����V51
#define NET_DVR_SET_GOTOSCENE                   8105  //�����������ת��ָ���ĳ���ID

//I��K��Eϵ��NVR��Ʒ����
#define NET_DVR_GET_PTZ_NOTIFICATION        8201//��ȡ��ͨ���¼�����PTZ
#define NET_DVR_SET_PTZ_NOTIFICATION        8202//���ö�ͨ���¼�����PTZ
/*****************************����ǽ start****************************/
#define    NET_DVR_MATRIX_WALL_SET                    9001  //���õ���ǽ����Ļ����
#define    NET_DVR_MATRIX_WALL_GET                    9002  //��ȡ����ǽ����Ļ����
#define    NET_DVR_WALLWIN_GET                        9003  //����ǽ�л�ȡ���ڲ���
#define    NET_DVR_WALLWIN_SET                        9004  //����ǽ�����ô��ڲ���
#define    NET_DVR_WALLWINPARAM_SET                9005  //���õ���ǽ������ز���
#define    NET_DVR_WALLWINPARAM_GET                9006  //��ȡ����ǽ������ز���
#define NET_DVR_WALLSCENEPARAM_GET                9007  //���ó���ģʽ����
#define NET_DVR_WALLSCENEPARAM_SET                9008  //��ȡ����ģʽ����
#define NET_DVR_MATRIX_GETWINSTATUS             9009  //��ȡ���ڽ���״̬
#define    NET_DVR_GET_WINASSOCIATEDDEVINFO        9010  //����ǽ�л�ȡ��Ӧ��Դ��Ϣ
#define    NET_DVR_WALLOUTPUT_GET                    9011  //����ǽ�л�ȡ��ʾ�������
#define    NET_DVR_WALLOUTPUT_SET                    9012  //����ǽ��������ʾ�������
#define NET_DVR_GET_UNITEDMATRIXSYSTEM          9013  //����ǽ�л�ȡ��Ӧ��Դ
#define NET_DVR_GET_WALL_CFG                    9014  //��ȡ����ǽȫ�ֲ���
#define NET_DVR_SET_WALL_CFG                    9015  //���õ���ǽȫ�ֲ���
#define NET_DVR_CLOSE_ALL_WND                    9016  //�ر����д���
#define NET_DVR_SWITCH_WIN_TOP                  9017  //�����ö�
#define NET_DVR_SWITCH_WIN_BOTTOM               9018  //�����õ�

#define    NET_DVR_CLOSE_ALL_WND_V41                9019  //����ǽ�ر����д���v41���ж������ǽ��
#define    NET_DVR_GET_WALL_WINDOW_V41                9020  //��ȡ����ǽ�еĴ���v41
#define    NET_DVR_SET_WALL_WINDOW_V41                9021  //���õ���ǽ�еĴ���v41
#define    NET_DVR_GET_CURRENT_SCENE_V41            9022  //��ȡ��ǰ����ǽ������ʹ�õĳ���v41
#define    NET_DVR_GET_WALL_SCENE_PARAM_V41        9023  //��ȡ��ǰ����ǽ������ʹ�õĳ���v41
#define    NET_DVR_SET_WALL_SCENE_PARAM_V41        9024  //���õ�ǰ����ǽ������ʹ�õĳ���v41
#define NET_DVR_GET_MATRIX_LOGO_CFG             9025  //��ȡlogo����
#define NET_DVR_SET_MATRIX_LOGO_CFG             9026  //����logo����
#define NET_DVR_GET_WIN_LOGO_CFG                9027  //��ȡ����logo����
#define NET_DVR_SET_WIN_LOGO_CFG                9028  //���ô���logo����
#define NET_DVR_DELETE_LOGO                     9029  //ɾ��logo
#define NET_DVR_SET_DISPLAY_EFFECT_CFG            9030  //������ʾ���Ч������v41
#define NET_DVR_GET_DISPLAY_EFFECT_CFG            9031  //��ȡ��ʾ���Ч������v41
#define NET_DVR_DEC_PLAY_REMOTE_FILE            9032  //���벥��Զ���ļ�
#define NET_DVR_GET_WIN_ZOOM_STATUS             9033  //��ȡ���ڵ��ӷŴ�״̬
#define NET_DVR_GET_ALL_MATRIX_LOGOCFG          9034  //��ȡ����logo����

/*****************************����ǽ end******************************/

/*******************************LCDƴ���� begin******************************************/
#define NET_DVR_SIMULATE_REMOTE_CONTROL         9035    //ģ��ң�ذ��� 2013-09-05
#define NET_DVR_SET_SCREEN_SIGNAL_CFG            9036    //������Ļ�ź�Դ����
#define    NET_DVR_GET_SCREEN_SIGNAL_CFG            9037    //��ȡ��Ļ�ź�Դ����
#define NET_DVR_SET_SCREEN_SPLICE_CFG              9038    //������Ļƴ��
#define    NET_DVR_GET_SCREEN_SPLICE_CFG            9039    //��ȡ��Ļƴ��
#define NET_DVR_GET_SCREEN_FAN_WORK_MODE         9040    //��ȡ���ȹ�����ʽ
#define NET_DVR_SET_SCREEN_FAN_WORK_MODE         9041    //���÷��ȹ�����ʽ
#define NET_DVR_SHOW_SCREEN_WORK_STATUS          9044    //��ʾ��Ļ״̬
#define NET_DVR_GET_VGA_CFG                      9045    //��ȡVGA�ź�����
#define NET_DVR_SET_VGA_CFG                      9046    //����VGA�ź�����
#define NET_DVR_GET_SCREEN_MENU_CFG                9048   //��ȡ��Ļ�˵�����
#define NET_DVR_SET_SCREEN_MENU_CFG              9049    //������Ļ�˵�����
#define NET_DVR_SET_SCREEN_DISPLAY_CFG          9050    //������ʾ���� 2013-08-28
#define    NET_DVR_GET_SCREEN_DISPLAY_CFG            9051    //��ȡ��ʾ���� 2013-08-28

#define NET_DVR_SET_FUSION_CFG                    9052    //����ͼ���ںϲ���
#define NET_DVR_GET_FUSION_CFG                    9053    //��ȡͼ���ںϲ���

#define NET_DVR_SET_PIP_CFG                      9060    //���û��л�����
#define    NET_DVR_GET_PIP_CFG                        9061    //��ȡ���л�����
#define NET_DVR_SET_DEFOG_LCD                      9073    //����͸�����
#define    NET_DVR_GET_DEFOG_LCD                    9074    //��ȡ͸�����
#define NET_DVR_SHOW_IP                          9075    //��ʾIP
#define NET_DVR_SCREEN_MAINTENANCE_WALL            9076    //��Ļάǽ
#define NET_DVR_SET_SCREEN_POS                  9077    //������Ļλ�ò���
#define    NET_DVR_GET_SCREEN_POS                    9078    //��ȡ��Ļλ�ò���
/*******************************LCDƴ���� end******************************************/

/*******************************LCDƴ����V1.2 begin******************************************/
#define    NET_DVR_SCREEN_INDEX_SET                9079    //��Ļ������ز�������
#define    NET_DVR_SCREEN_INDEX_GET                9080    //��Ļ������ز�����ȡ
#define NET_DVR_SCREEN_SPLICE_SET               9081    //������Ļƴ�Ӳ���
#define NET_DVR_SCREEN_SPLICE_GET               9082    //��ȡ��Ļƴ�Ӳ���
#define NET_DVR_SET_SCREEN_PARAM                9083    //������Ļ��ز���
#define NET_DVR_GET_SCREEN_PARAM                9084    //��ȡ��Ļ��ز���
#define NET_DVR_SET_SWITCH_CFG                  9085    //���ö�ʱ���ػ�����
#define NET_DVR_GET_SWITCH_CFG                  9086    //��ȡ��ʱ���ػ�����
#define NET_DVR_SET_POWERON_DELAY_CFG           9087    //������ʱ��������
#define NET_DVR_GET_POWERON_DELAY_CFG           9088    //��ȡ��ʱ��������
#define    NET_DVR_SET_SCREEN_POSITION                9089    //������Ļλ�ò���
#define    NET_DVR_GET_SCREEN_POSITION                9090    //��ȡ��Ļλ�ò���
#define NET_DVR_SCREEN_SCENE_CONTROL            9091    //��Ļ��������
#define NET_DVR_GET_CURRENT_SCREEN_SCENE        9092    //��ȡ��ǰ��Ļ������
#define NET_DVR_GET_SCREEN_SCENE_PARAM          9093    //��ȡ��Ļ����ģʽ����
#define NET_DVR_SET_SCREEN_SCENE_PARAM          9094    //������Ļ����ģʽ����
#define NET_DVR_GET_EXTERNAL_MATRIX_RELATION    9095    //��ȡ��Ӿ����������������ϵ
#define NET_DVR_GET_LCD_AUDIO_CFG                9096     //��ȡLCD��Ļ��Ƶ����
#define NET_DVR_SET_LCD_AUDIO_CFG                9097     //����LCD��Ļ��Ƶ����
#define NET_DVR_GET_LCD_WORK_STATE                9098     //��ȡLCD��Ļ����״̬
#define NET_DVR_GET_BOOT_LOGO_CFG                9099    //��ȡLCD��Ļ����logo��ʾ����
#define NET_DVR_SET_BOOT_LOGO_CFG                9100    //����LCD��Ļ����logo��ʾ����

/*******************************LCDƴ����V1.2 end ******************************************/
#define NET_DVR_GET_STREAM_DST_COMPRESSIONINFO    9101  //��ȡĿ��ѹ������
#define NET_DVR_SET_STREAM_DST_COMPRESSIONINFO  9102  //����Ŀ��ѹ������
#define NET_DVR_GET_STREAM_TRANS_STATUS            9103  //��ȡ��״̬
#define NET_DVR_GET_DEVICE_TRANS_STATUS            9104  //��ȡ�豸ת��״̬
#define NET_DVR_GET_ALLSTREAM_SRC_INFO          9105  //��ȡ��������Ϣ
#define NET_DVR_GET_BIG_SCREEN_AUDIO            9106  //��ȡ������Ƶ��Ϣ
#define NET_DVR_SET_BIG_SCREEN_AUDIO            9107  //���ô�����Ƶ��Ϣ
#define NET_DVR_GET_DEV_WORK_MODE                9108  //��ȡת���豸����ģʽ
#define NET_DVR_SET_DEV_WORK_MODE                9109  //����ת���豸����ģʽ
#define NET_DVR_APPLY_TRANS_CHAN                9110  //����ID����ת��ͨ��
#define NET_DVR_GET_DISPCHAN_CFG                9111  //������ȡ��ʾͨ������
#define NET_DVR_SET_DISPCHAN_CFG                9112  //����������ʾͨ������

#define NET_DVR_GET_DEC_CHAN_STATUS                9113  //��ȡ����ͨ������״̬
#define NET_DVR_GET_DISP_CHAN_STATUS            9114  //��ȡ��ʾͨ��״̬
#define NET_DVR_GET_ALARMIN_STATUS                9115  //��ȡ��������״̬
#define NET_DVR_GET_ALARMOUT_STATUS                9116  //��ȡ�������״̬
#define NET_DVR_GET_AUDIO_CHAN_STATUS            9117  //��ȡ�����Խ�״̬

#define    NET_DVR_GET_VIDEO_AUDIOIN_CFG            9118   //��ȡ��Ƶ����Ƶ�������
#define NET_DVR_SET_VIDEO_AUDIOIN_CFG            9119   //������Ƶ����Ƶ�������

#define    NET_DVR_SET_BASEMAP_CFG                    9120  //���õ�ͼ����
#define NET_DVR_GET_BASEMAP_CFG                    9121  //��ȡ��ͼ����
#define NET_DVR_GET_VIRTUAL_SCREEN_CFG          9122  //��ȡ������������ϵͳ����
#define NET_DVR_SET_VIRTUAL_SCREEN_CFG          9123  //���ó�����������ϵͳ����
#define NET_DVR_GET_BASEMAP_WIN_CFG                9124  //��ȡ��ͼ���ڲ���
#define NET_DVR_SET_BASEMAP_WIN_CFG                9125  //���õ�ͼ���ڲ���
#define NET_DVR_DELETE_PICTURE                    9126  //ɾ����ͼ
#define NET_DVR_GET_BASEMAP_PIC_INFO            9127  //��ȡ��ͼͼƬ��Ϣ
#define    NET_DVR_SET_BASEMAP_WIN_CFG_V40         9128  //���õ�ͼ���ڲ���V40
#define NET_DVR_GET_BASEMAP_WIN_CFG_V40         9129  //��ȡ��ͼ���ڲ���V40

#define NET_DVR_GET_DEC_VCA_CFG                    9130    //��ȡ���������ܱ�������
#define NET_DVR_SET_DEC_VCA_CFG                    9131    //���ý��������ܱ�������

#define NET_DVR_SET_VS_INPUT_CHAN_INIT_ALL  9132  //��ʼ���������Ӱ����������ͨ��
#define NET_DVR_GET_VS_INPUT_CHAN_INIT_ALL  9133  //��ȡ�������Ӱ����������ͨ���ĳ�ʼ������
#define NET_DVR_GET_VS_INPUT_CHAN_INIT 9134  //��ȡ����������ͨ���ĳ�ʼ������
#define NET_DVR_GET_VS_INPUT_CHAN_CFG  9135  //��ȡ����������ͨ�����ò���

#define NET_DVR_GET_TERMINAL_CONFERENCE_STATUS    9136    //��ȡ�ն˻���״̬
#define NET_DVR_GET_TERMINAL_INPUT_CFG_CAP        9137    //��ȡ�ն������������
#define NET_DVR_GET_TERMINAL_INPUT_CFG            9138    //��ȡ�ն���Ƶ�����������
#define NET_DVR_SET_TERMINAL_INPUT_CFG            9139    //�����ն���Ƶ�����������

#define NET_DVR_GET_CONFERENCE_REGION_CAP        9140    //��ȡ�ն˻�����������
#define NET_DVR_GET_CONFERENCE_REGION            9141    //��ȡ�ն˻����������
#define NET_DVR_SET_CONFERENCE_REGION            9142    //�����ն˻����������
#define NET_DVR_GET_TERMINAL_CALL_CFG_CAP        9143    //��ȡ�ն˺�����������
#define NET_DVR_GET_TERMINAL_CALL_CFG            9144    //��ȡ�ն˺��в���
#define NET_DVR_SET_TERMINAL_CALL_CFG            9145    //�����ն˺��в���
#define NET_DVR_GET_TERMINAL_CTRL_CAP            9146    //��ȡ�ն˺��п�������
#define NET_DVR_TERMINAL_CTRL                    9147    //�ն˺��п���
#define    NET_DVR_GET_CALL_QUERY_CAP                9148    //��ȡ�����������
#define NET_DVR_GET_CALLINFO_BY_COND            9149    //��������ѯ���м�¼

#define    NET_DVR_SET_FUSION_SCALE                9150    //����ͼ���ںϹ�ģ
#define NET_DVR_GET_FUSION_SCALE                9151    //��ȡͼ���ںϹ�ģ

#define NET_DVR_GET_VCS_CAP                        9152    //��ȡMCU������


#define NET_DVR_GET_TERMINAL_GK_CFG_CAP            9153    //��ȡ�ն�ע��GK����
#define NET_DVR_GET_TERMINAL_GK_CFG                9154    //��ȡ�ն�ע��GK����
#define NET_DVR_SET_TERMINAL_GK_CFG                9155    //�����ն�ע��GK����
#define NET_DVR_GET_MCU_CONFERENCESEARCH_CAP    9156    //��ȡMCU�豸������
#define NET_DVR_SET_VS_INPUT_CHAN_CFG  9157  //��������������ͨ�����ò���
#define NET_DVR_GET_VS_NETSRC_CFG      9158  //��������������Դ����
#define NET_DVR_SET_VS_NETSRC_CFG      9159  //��������������Դ����

#define    NET_DVR_GET_LLDP_CFG                    9160    //��ȡLLDP����
#define    NET_DVR_SET_LLDP_CFG                    9161    //����LLDP����
#define NET_DVR_GET_LLDP_CAP                    9162    //��ȡLLDP������
#define    NET_DVR_GET_FIBER_CONVERT_BASIC_INFO    9163    //��ȡ�����շ���������Ϣ
#define    NET_DVR_GET_FIBER_CONVERT_WORK_STATE    9164    //��ȡ�����շ�������״
#define    NET_DVR_GET_FIBER_CONVERT_TOPOLOGY      9165    //��ȡ�����շ���������Ϣ
#define    NET_DVR_GET_FC_PORT_REMARKS                9166    //��ȡ�����շ����˿�ע�Ͳ���
#define    NET_DVR_SET_FC_PORT_REMARKS                9167    //���ù����շ����˿�ע�Ͳ���
#define NET_DVR_GET_PORT_REMARKS_CAP            9168    //��ȡ�����շ����˿�ע��������

#define NET_DVR_GET_MCU_CONFERENCECONTROL_CAP   9169    //��ȡ�����������
#define NET_DVR_GET_MCU_TERMINALCONTROL_CAP     9170    //��ȡ�ն˿�������
#define NET_DVR_GET_MCU_TERIMINALGROUP_CAP      9171    //��ȡ�ն˷�������
#define NET_DVR_GET_MCU_TERMINAL_CAP            9174    //��ȡ�ն˹�������
#define NET_DVR_GET_MCU_CONFERENCE_CAP          9175    //��ȡ��������
#define NET_DVR_GET_MCU_GK_CFG_CAP              9176    //��ȡMCUGK��������
#define NET_DVR_GET_MCU_GK_SERVER_CAP           9177    //��ȡMCUGK��������

#define NET_DVR_GET_EDID_CFG_FILE_INFO  9178  //��ȡEDID�����ļ���Ϣ
#define NET_DVR_GET_EDID_CFG_FILE_INFO_LIST  9179  //��ȡ����EDID�����ļ���Ϣ
#define NET_DVR_SET_EDID_CFG_FILE_INFO  9180  //����EDID�����ļ���Ϣ
#define NET_DVR_DEL_EDID_CFG_FILE_INFO  9181  //ɾ��EDID�����ļ���Ϣ�������ļ���
#define NET_DVR_GET_EDID_CFG_FILE_INFO_CAP  9182  //EDID�����ļ���Ϣ������

#define NET_DVR_GET_SUBWND_DECODE_OSD  9183  //��ȡ�Ӵ��ڽ���OSD��Ϣ
#define NET_DVR_GET_SUBWND_DECODE_OSD_ALL  9184  //��ȡ�����Ӵ��ڽ���OSD��Ϣ
#define NET_DVR_SET_SUBWND_DECODE_OSD  9185  //�����Ӵ��ڽ���OSD��Ϣ
#define NET_DVR_GET_SUBWND_DECODE_OSD_CAP  9186  //��ȡ�Ӵ��ڽ���OSD��Ϣ������
#define NET_DVR_GET_DECODE_CHANNEL_OSD  9187  //��ȡ����ͨ��OSD��Ϣ
#define NET_DVR_SET_DECODE_CHANNEL_OSD  9188  //���ý���ͨ��OSD��Ϣ


#define NET_DVR_GET_OUTPUT_PIC_INFO             9200    //��ȡ�����ͼƬ����
#define NET_DVR_SET_OUTPUT_PIC_INFO             9201    //���������ͼƬ����
#define NET_DVR_GET_OUTPUT_PIC_WIN_CFG          9202    //��ȡ�����ͼƬ���ڲ���
#define NET_DVR_SET_OUTPUT_PIC_WIN_CFG          9203    //���������ͼƬ���ڲ���
#define NET_DVR_GET_OUTPUT_ALL_PIC_WIN_CFG      9204    //��ȡ���������ͼƬ���ڲ���
#define NET_DVR_DELETE_OUPUT_PIC                9205    //ɾ�������ͼƬ
#define NET_DVR_GET_OUTPUT_OSD_CFG              9206    //��ȡ�����OSD����
#define NET_DVR_SET_OUTPUT_OSD_CFG              9207    //���������OSD����
#define NET_DVR_GET_OUTPUT_ALL_OSD_CFG          9208    //��ȡ���������OSD����
#define NET_DVR_GET_CHAN_RELATION               9209    //��ȡ����ͨ��������Դ����
#define NET_DVR_SET_CHAN_RELATION               9210    //���ñ���ͨ��������Դ����
#define NET_DVR_GET_ALL_CHAN_RELATION           9211    //��ȡ���б���ͨ��������Դ����
#define NET_DVR_GET_NS_RING_CFG                    9212    //��ȡ���˰廷������
#define NET_DVR_SET_NS_RING_CFG                   9213    //���ù��˰廷������
#define NET_DVR_GET_NS_RING_STATUS              9214    //��ȡ���˰廷��״̬
#define NET_DVR_GET_OPTICAL_PORT_INFO            9220    //��ȡ�����Ϣ
#define NET_DVR_SET_OPTICAL_PORT_INFO            9221    //���ù����Ϣ
#define NET_DVR_GET_OPTICAL_CHAN_RELATE_CFG        9222    //��ȡ����ͨ�������������Դ����
#define NET_DVR_SET_OPTICAL_CHAN_RELATE_CFG        9223    //���ñ���ͨ�������������Դ����
#define  NET_DVR_GET_WIN_ROAM_SWITCH_CFG        9224    //��ȡ�������������ο��ز���
#define  NET_DVR_SET_WIN_ROAM_SWITCH_CFG        9225    //���ý������������ο��ز���
#define    NET_DVR_START_SCREEN_CRTL                9226    //��ʼ��Ļ����
#define    NET_DVR_GET_SCREEN_FLIE_LIST            9227    //��ȡ��Ļ�ļ��б�
#define    NET_DVR_GET_SCREEN_FILEINFO                9228    //��ȡ��Ļ�ļ���Ϣ����
#define    NET_DVR_SET_SCREEN_FILEINFO             9229    //������Ļ�ļ���Ϣ����

/*******************************С���LED��ʾ�� begin***************************************/
#define NET_DVR_GET_LED_OUTPUT_CFG                9230    //��ȡ���Ϳ��������
#define NET_DVR_SET_LED_OUTPUT_CFG                9231    //���÷��Ϳ��������
#define NET_DVR_GET_LED_OUTPUT_PORT_CFG            9232    //��ȡLED���Ϳ�����˿ڲ���
#define NET_DVR_SET_LED_OUTPUT_PORT_CFG            9233    //����LED���Ϳ�����˿ڲ���
#define NET_DVR_GET_LED_DISPLAY_AREA_CFG        9234    //��ȡLED���Ϳ���ʾ����
#define NET_DVR_SET_LED_DISPLAY_AREA_CFG        9235    //����LED���Ϳ���ʾ����
#define NET_DVR_GET_LED_PORT_CFG                9236    //��ȡLED���Ϳ��˿ڲ���
#define NET_DVR_SET_LED_PORT_CFG                9237    //����LED���Ϳ��˿ڲ���
#define NET_DVR_GET_LED_DISPLAY_CFG                9238    //��ȡLED���Ϳ���ʾ����
#define NET_DVR_SET_LED_DISPLAY_CFG                9239    //����LED���Ϳ���ʾ����
#define NET_DVR_GET_ALL_LED_PORT_CFG            9240    //��ȡLED���Ϳ�ĳ�������Ӧ
#define NET_DVR_SAVE_LED_CONFIGURATION            9241    //�����̻�
#define NET_DVR_GET_LED_TEST_SIGNAL_CFG            9242    //��ȡLED�������źŲ���
#define NET_DVR_SET_LED_TEST_SIGNAL_CFG            9243    //����LED�������źŲ���
#define NET_DVR_GET_LED_NOSIGNAL_CFG            9244    //��ȡLED�����ź���ʾģʽ����
#define NET_DVR_SET_LED_NOSIGNAL_CFG            9245    //����LED�����ź���ʾģʽ����
#define NET_DVR_GET_LED_INPUT_CFG                9246    //��ȡLED���Ϳ��������
#define NET_DVR_SET_LED_INPUT_CFG                9247    //����LED���Ϳ��������
#define NET_DVR_GET_LED_RECV_GAMMA_CFG            9248    //��ȡ���տ�GAMMA�����
#define NET_DVR_SET_LED_RECV_GAMMA_CFG            9249    //���ý��տ�GAMMA�����
#define NET_DVR_GET_LED_RECV_CFG                9250    //��ȡ���տ���������
#define NET_DVR_SET_LED_RECV_CFG                9251    //���ý��տ���������
#define NET_DVR_GET_LED_RECV_ADVANCED_CFG        9252    //��ȡ���տ��߼�����
#define NET_DVR_SET_LED_RECV_ADVANCED_CFG        9253    //���ý��տ��߼�����
#define NET_DVR_GET_LED_SCREEN_DISPLAY_CFG        9254    //��ȡLED����ʾ����
#define NET_DVR_SET_LED_SCREEN_DISPLAY_CFG        9255    //����LED����ʾ����
/*******************************С���LED��ʾ�� end*****************************************/

#define NET_DVR_GET_INSERTPLAY_PROGRESS            9273    //��ȡ�岥����

#define    NET_DVR_GET_SCREEN_CONFIG               9260    //��ȡ��Ļ����������
#define    NET_DVR_SET_SCREEN_CONFIG               9261    //������Ļ����������
#define NET_DVR_GET_SCREEN_CONFIG_CAP              9262    //��ȡ��Ļ����������������

#define    NET_DVR_GET_SCHEDULE_PUBLISH_PROGRESS    9271    //��ȡ�ճ̷�������
#define    NET_DVR_GET_PUBLISH_UPGRADE_PROGRESS    9272    //��ȡ��Ϣ�����ն���������

#define NET_DVR_GET_INPUT_BOARD_CFG                9281    //��ȡ�����������Ϣ
#define NET_DVR_GET_INPUT_BOARD_CFG_LIST        9282    //��ȡ�����������Ϣ�б�
#define NET_DVR_SET_INPUT_BOARD_CFG                9283    //���������������Ϣ

#define NET_DVR_GET_INPUT_SOURCE_TEXT_CAP    9284            //��ȡ����Դ�ַ���������
#define NET_DVR_GET_INPUT_SOURCE_TEXT_CFG    9285            //��ȡ����Դ�ַ����Ӳ���
#define NET_DVR_GET_INPUT_SOURCE_TEXT_CFG_LSIT 9286        //��ȡ����Դ�ַ����Ӳ����б�
#define NET_DVR_SET_INPUT_SOURCE_TEXT_CFG    9287            //��������Դ�ַ����Ӳ���
#define NET_DVR_SET_INPUT_SOURCE_TEXT_CFG_LIST 9288        //��������Դ�ַ����Ӳ����б�
#define NET_DVR_GET_INPUT_SOURCE_RESOLUTION_CAP    9289    //��ȡ����Դ�Զ���ֱ�������
#define NET_DVR_GET_INPUT_SOURCE_RESOLUTION_CFG    9290    //��ȡ����Դ�Զ���ֱ��ʲ���
#define NET_DVR_GET_INPUT_SOURCE_RESOLUTION_CFG_LIST    9291 //��ȡ����Դ�Զ���ֱ����б�
#define NET_DVR_SET_INPUT_SOURCE_RESOLUTION_CFG    9292    //��������Դ�Զ���ֱ��ʲ���
#define NET_DVR_SET_INPUT_SOURCE_RESOLUTION_CFG_LIST  9293  //��������Դ�Զ���ֱ��ʲ���
#define NET_DVR_GET_LED_AREA_INFO_LIST  9295  //��ȡLED�����б�

#define NET_DVR_GET_DISPINPUT_CFG  9296  //��ȡ��ʾ�������
#define NET_DVR_GET_DISPINPUT_CFG_LIST  9297  //��ȡ������ʾ�������
#define NET_DVR_SET_DISPINPUT_CFG  9298  //������ʾ�������
#define NET_DVR_GET_DISPINPUT_CFG_CAP  9299  //��ȡ��ʾ�������������
#define NET_DVR_GET_CURRENT_VALID_PORT          9300    //��ȡ��ǰ��Ч��,�������ӵĶ˿�

#define    NET_DVR_SET_ONLINE_UPGRADE                9301    //������������
#define NET_DVR_GET_ONLINEUPGRADE_PROGRESS      9302    //��ȡ������������
#define    NET_DVR_GET_FIRMWARECODE                9303    //��ȡʶ����
#define NET_DVR_GET_ONLINEUPGRADE_SERVER        9304    //��ȡ����������״̬
#define NET_DVR_GET_ONLINEUPGRADE_VERSION       9305    //��ȡ�°汾��Ϣ
#define NET_DVR_GET_RECOMMEN_VERSION            9306    //����Ƿ��Ƽ��������˰汾
#define NET_DVR_GET_ONLINEUPGRADE_ABILITY       9309    //��ȡ��������������

#define    NET_DVR_GET_FIBER_CONVERT_BASIC_INFO_V50     9310    //��ȡԶ�������շ���������ϢV50
#define    NET_DVR_GET_FIBER_CONVERT_WORK_STATE_V50     9311    //��ȡԶ�������շ�������״̬

#define  NET_SDK_LED_SCREEN_CHECK  9312  //LED��ĻУ��

#define NET_DVR_GET_RS485_WORK_MODE             10001 //��ȡRS485���ڹ���ģʽ
#define NET_DVR_SET_RS485_WORK_MODE             10002 //����RS485���ڹ���ģʽ
#define NET_DVR_GET_SPLITTER_TRANS_CHAN_CFG     10003 //��ȡ�����͸��ͨ������
#define NET_DVR_SET_SPLITTER_TRANS_CHAN_CFG     10004 //���������͸��ͨ������

#define NET_DVR_GET_RS485_PROTOCOL_VERSION              10301       //��ȡRS485Э���汾��Ϣ

#define  NET_DVR_GET_SIP_CFG                    11001   //IP���ӻ�����ȡSIP����
#define  NET_DVR_SET_SIP_CFG                    11002   //IP���ӻ�������SIP����
#define  NET_DVR_GET_IP_VIEW_DEVCFG                11003   //��ȡIP�Խ��ֻ�����
#define  NET_DVR_SET_IP_VIEW_DEVCFG                11004   //����IP�Խ��ֻ�����
#define  NET_DVR_GET_IP_VIEW_AUDIO_CFG            11005   //��ȡIP�Խ��ֻ���Ƶ����
#define  NET_DVR_SET_IP_VIEW_AUDIO_CFG            11006   //����IP�Խ��ֻ���Ƶ����
#define     NET_DVR_GET_IP_VIEW_CALL_CFG            11007   //��ȡIP�Խ��ֻ����в���
#define  NET_DVR_SET_IP_VIEW_CALL_CFG            11008   //����IP�Խ��ֻ����в���
#define     NET_DVR_GET_AUDIO_LIMIT_ALARM_CFG        11009    //��ȡ�����������ò���
#define     NET_DVR_SET_AUDIO_LIMIT_ALARM_CFG        11010    //���������������ò���
#define     NET_DVR_GET_BUTTON_DOWN_ALARM_CFG        11011    //��ȡ��ť���¸澯���ò���
#define     NET_DVR_SET_BUTTON_DOWN_ALARM_CFG        11012    //���ð�ť���¸澯���ò���

#define  NET_DVR_GET_ISCSI_CFG                  11070   // ��ȡISCSI�洢����Э��
#define  NET_DVR_SET_ISCSI_CFG                  11071   // ��ȡISCSI�洢����Э��

#define NET_DVR_GET_SECURITYMODE                12004   //��ȡ��ǰ��ȫģʽ
//2013-11-21 ��ȡ�豸��ǰ���¶Ⱥ�ʪ��
#define  NET_DVR_GET_TEMP_HUMI                  12005

//2014-02-15 ����IPC�Զ���������Ŀ
#define  NET_DVR_SET_ALARMSOUNDMODE             12006   //���ñ�������ģʽ
#define  NET_DVR_GET_ALARMSOUNDMODE             12007   //��ȡ��������ģʽ

#define    NET_DVR_SET_IPDEVICE_ACTIVATED       13000//ͨ��NVR����ǰ���豸
#define NET_DVR_GET_DIGITAL_CHAN_SECURITY_STATUS    13001   //��ȡ����ͨ����Ӧ�豸��ȫ״̬
#define    NET_DVR_GET_ACTIVATE_IPC_ABILITY     13003    //��ȡNVR����IPC������


/*******************************¥����ӶԽ��� start***********************************/
#define NET_DVR_GET_VIDEO_INTERCOM_DEVICEID_CFG  16001  //��ȡ���ӶԽ��豸���
#define NET_DVR_SET_VIDEO_INTERCOM_DEVICEID_CFG  16002  //���ÿ��ӶԽ��豸���
#define NET_DVR_SET_PRIVILEGE_PASSWORD           16003  //����Ȩ������������Ϣ
#define NET_DVR_GET_OPERATION_TIME_CFG           16004  //��ȡ����ʱ������
#define NET_DVR_SET_OPERATION_TIME_CFG           16005  //���ò���ʱ������
#define NET_DVR_GET_VIDEO_INTERCOM_RELATEDEV_CFG 16006  //��ȡ���������豸����
#define NET_DVR_SET_VIDEO_INTERCOM_RELATEDEV_CFG 16007  //���ù��������豸����
#define NET_DVR_REMOTECONTROL_NOTICE_DATA        16008  //������Ϣ�·�
#define NET_DVR_REMOTECONTROL_GATEWAY            16009  //Զ�̿���
#define NET_DVR_REMOTECONTROL_OPERATION_AUTH     16010  //����Ȩ����֤

#define NET_DVR_GET_VIDEO_INTERCOM_IOIN_CFG      16016  //��ȡIO�������
#define NET_DVR_SET_VIDEO_INTERCOM_IOIN_CFG      16017  //����IO�������
#define NET_DVR_GET_VIDEO_INTERCOM_IOOUT_CFG     16018  //��ȡIO�������
#define NET_DVR_SET_VIDEO_INTERCOM_IOOUT_CFG     16019  //����IO�������
#define NET_DVR_GET_ELEVATORCONTROL_CFG          16020  //��ȡ�ݿ�������
#define NET_DVR_SET_ELEVATORCONTROL_CFG          16021  //�����ݿ�������
#define NET_DVR_GET_VIDEOINTERCOM_STREAM         16022  //��ȡ���ӶԽ���ͨ������
#define NET_DVR_SET_VIDEOINTERCOM_STREAM         16023  //���ÿ��ӶԽ���ͨ������
#define NET_DVR_GET_WDR_CFG                      16024  //��ȡ��̬��������
#define NET_DVR_SET_WDR_CFG                      16025  //���ÿ�̬��������
#define NET_DVR_GET_VIS_DEVINFO                  16026  //��ȡ���豸�����Ϣ
#define NET_DVR_GET_VIS_REGISTER_INFO            16027  //��ȡ���豸ע����豸��Ϣ
#define NET_DVR_GET_ELEVATORCONTROL_CFG_V40      16028  //��ȡ�ݿ�������-��չ
#define NET_DVR_SET_ELEVATORCONTROL_CFG_V40      16029  //�����ݿ�������-��չ
#define NET_DVR_GET_CALL_ROOM_CFG                 16030  //��ȡ��������ס������
#define NET_DVR_SET_CALL_ROOM_CFG                 16031  //���ð�������ס������
#define NET_DVR_VIDEO_CALL_SIGNAL_PROCESS        16032  //���ӻ��Խ������
#define NET_DVR_GET_CALLER_INFO                  16033  //��ȡ���г�����Ϣ
#define NET_DVR_GET_CALL_STATUS                  16034  //��ȡͨ��״̬
#define NET_DVR_GET_SERVER_DEVICE_INFO           16035  //��ȡ�豸�б�
#define NET_DVR_SET_CALL_SIGNAL                  16036  //���ӶԽ��ֻ��˷�������
#define NET_DVR_GET_VIDEO_INTERCOM_ALARM_CFG       16037    //��ȡ���ӶԽ������¼�����
#define NET_DVR_SET_VIDEO_INTERCOM_ALARM_CFG       16038    //���ÿ��ӶԽ������¼�����
#define NET_DVR_GET_RING_LIST                    16039    //��ѯ���������б�

#define NET_DVR_GET_ROOM_CUSTOM_CFG             16040  //�����Զ����ȡ
#define NET_DVR_SET_ROOM_CUSTOM_CFG             16041  //�����Զ�������
#define NET_DVR_GET_ELEVATORCONTROL_CFG_V50     16042  //��ȡ�ݿ�������V50
#define NET_DVR_SET_ELEVATORCONTROL_CFG_V50     16043  //�����ݿ�������V50
/*******************************¥����ӶԽ��� end***********************************/

#define    NET_DVR_DEBUGINFO_START                     18000    //�����豸������Ϣ��������
#define    NET_DVR_AUTO_TEST_START                     18001    //�Զ����Գ����ӻ�ȡ

#define NET_DVR_GET_SELFCHECK_RESULT        20000    //��ȡ�豸�Լ���
#define NET_DVR_SET_TEST_COMMAND            20001    //���ò��Կ�������
#define NET_DVR_SET_TEST_DEVMODULE          20002    //���ò���Ӳ��ģ���������
#define NET_DVR_GET_TEST_DEVMODULE          20003    //��ȡ����Ӳ��ģ���������

#define NET_DVR_SET_AUTOFOCUS_TEST          20004    //�����Զ��Խ����� 2013-10-26
#define NET_DVR_CHECK_USER_STATUS           20005    //����û��Ƿ�����
#define NET_DVR_GET_TEST_COMMAND            20010    //��ȡ���Կ�������
#define NET_DVR_GET_DIAL_SWITCH_CFG         20200    //��ȡ���뿪����Ϣ
#define NET_DVR_SET_AGING_TRICK_SCAN          20201  //�����ϻ�ǰ�󹤾߲���
#define NET_DVR_GET_ECCENTRIC_CORRECT_STATE   20202  //��ȡ��ȡƫ��У��״̬

#define NET_DVR_T1_TEST_CMD                    131073 //�������������ã�ͨ������������ı��������־�����ʲô.���ݳ��Ȳ��ô���1024
//��������ʽΪ��<T1TestCmd type="0"/>//�ָ��豸Ĭ�ϲ������ػ���

// ���ֶ��Ʋ˵����ģʽ�ⲿ����
#define NET_DVR_GET_MEMU_OUTPUT_MODE            155649            // ��ȡ�˵����ģʽ
#define NET_DVR_SET_MEMU_OUTPUT_MODE            155650            // ���ò˵����ģʽ

/***************************DS9000��������(_V30) end *****************************/

#define NET_DVR_GET_DEV_LOGIN_RET_INFO      16777200  //�豸��½���ز���


#define NET_DVR_GET_TEST_VERSION_HEAD           268435441   //��ȡ���԰汾ͷ
#define NET_DVR_SET_TEST_VERSION_HEAD           268435442   //���ò��԰汾ͷ
#define NET_DVR_GET_TEST_VERSION_HEAD_V1        268435443   //��ȡ���԰汾ͷ-�ڶ���
#define NET_DVR_SET_TEST_VERSION_HEAD_V1        268435444   //���ò��԰汾ͷ-�ڶ���
#define NET_DVR_GET_TEST_VERSION_HEAD_V2        268435445   //��ȡ���԰汾ͷ-������
#define NET_DVR_SET_TEST_VERSION_HEAD_V2        268435446   //���ò��԰汾ͷ-������

#define NET_DVR_GET_TEST_VERSION_HEAD_ONLY_0    268435447   //��ȡ���԰汾ͷ,��ǰ����һ���汾
#define NET_DVR_SET_TEST_VERSION_HEAD_ONLY_0    268435448   //���ò��԰汾ͷ,��ǰ����һ���汾


#define MAX_LOCAL_ADDR_LEN             96        //SOCKS��󱾵����θ���
#define    MAX_COUNTRY_NAME_LEN          4        //���Ҽ�д���Ƴ���

/************************DVR��־ begin***************************/

/* ���� */
//������
#define MAJOR_ALARM                        0x1
//������
#define MINOR_ALARM_IN                    0x1        /* �������� */
#define MINOR_ALARM_OUT                    0x2        /* ������� */
#define MINOR_MOTDET_START                0x3        /* �ƶ���ⱨ����ʼ */
#define MINOR_MOTDET_STOP                0x4        /* �ƶ���ⱨ������ */
#define MINOR_HIDE_ALARM_START            0x5        /* �ڵ�������ʼ */
#define MINOR_HIDE_ALARM_STOP            0x6        /* �ڵ��������� */
#define MINOR_VCA_ALARM_START            0x7        /*���ܱ�����ʼ*/
#define MINOR_VCA_ALARM_STOP            0x8        /*���ܱ���ֹͣ*/
#define MINOR_ITS_ALARM_START           0x09    // ��ͨ�¼�������ʼ
#define MINOR_ITS_ALARM_STOP            0x0A    // ��ͨ�¼���������
//2010-11-10 ���籨����־
#define MINOR_NETALARM_START            0x0b    /*���籨����ʼ*/
#define MINOR_NETALARM_STOP             0x0c    /*���籨������*/
//2010-12-16 ��������־����"MINOR_ALARM_IN"���ʹ��
#define MINOR_NETALARM_RESUME            0x0d    /*���籨���ָ�*/
//2012-4-5 IPC PIR�����ߡ����ȱ���
#define MINOR_WIRELESS_ALARM_START      0x0e  /* ���߱�����ʼ */
#define MINOR_WIRELESS_ALARM_STOP          0x0f /* ���߱������� */
#define MINOR_PIR_ALARM_START           0x10  /* �����Ӧ������ʼ */
#define MINOR_PIR_ALARM_STOP               0x11  /* �����Ӧ�������� */
#define MINOR_CALLHELP_ALARM_START      0x12  /* ���ȱ�����ʼ */
#define MINOR_CALLHELP_ALARM_STOP          0x13  /* ���ȱ������� */
#define MINOR_IPCHANNEL_ALARMIN_START   0x14  //����ͨ���������뿪ʼ��PCNVR�ڽ��յ�����ͨ����MINOR_ALARM_IN����������ͨ���������뿪ʼ����10s�����ղ���MINOR_ALARM_IN������������ͨ���������������
#define MINOR_IPCHANNEL_ALARMIN_STOP    0x15  //����ͨ���������뿪ʼ��ͬ��
#define MINOR_DETECTFACE_ALARM_START    0x16  /* ������ⱨ����ʼ */
#define MINOR_DETECTFACE_ALARM_STOP      0x17  /* ������ⱨ������ */
#define MINOR_VQD_ALARM_START           0x18  //VQD����
#define MINOR_VQD_ALARM_STOP            0x19  //VQD��������
#define MINOR_VCA_SECNECHANGE_DETECTION 0x1a  //������ⱨ�� 2013-07-16

#define MINOR_SMART_REGION_EXITING_BEGIN            0x1b  //�뿪������⿪ʼ
#define MINOR_SMART_REGION_EXITING_END              0x1c  //�뿪����������
#define MINOR_SMART_LOITERING_BEGIN                 0x1d  //�ǻ���⿪ʼ
#define MINOR_SMART_LOITERING_END                   0x1e  //�ǻ�������

#define MINOR_VCA_ALARM_LINE_DETECTION_BEGIN        0x20
#define MINOR_VCA_ALARM_LINE_DETECTION_END          0x21
#define MINOR_VCA_ALARM_INTRUDE_BEGIN                0x22  //������⿪ʼ
#define MINOR_VCA_ALARM_INTRUDE_END                       0x23  //����������
#define MINOR_VCA_ALARM_AUDIOINPUT                    0x24   //��Ƶ�쳣����
#define MINOR_VCA_ALARM_AUDIOABNORMAL                 0x25   //��ǿͻ��
#define MINOR_VCA_DEFOCUS_DETECTION_BEGIN           0x26  //�齹��⿪ʼ
#define MINOR_VCA_DEFOCUS_DETECTION_END                0x27  //�齹������

//����NVR
#define MINOR_EXT_ALARM                             0x28/*IPC�ⲿ����*/
#define MINOR_VCA_FACE_ALARM_BEGIN                    0x29    /*������⿪ʼ*/
#define MINOR_SMART_REGION_ENTRANCE_BEGIN           0x2a  //����������⿪ʼ
#define MINOR_SMART_REGION_ENTRANCE_END             0x2b  //��������������
#define MINOR_SMART_PEOPLE_GATHERING_BEGIN          0x2c  //��Ա�ۼ���⿪ʼ
#define MINOR_SMART_PEOPLE_GATHERING_END            0x2d  //��Ա�ۼ�������
#define MINOR_SMART_FAST_MOVING_BEGIN               0x2e  //�����˶���⿪ʼ
#define MINOR_SMART_FAST_MOVING_END                 0x2f  //�����˶�������

#define MINOR_VCA_FACE_ALARM_END                    0x30    /*����������*/
#define MINOR_VCA_SCENE_CHANGE_ALARM_BEGIN            0x31   /*���������⿪ʼ*/
#define MINOR_VCA_SCENE_CHANGE_ALARM_END            0x32   /*�������������*/
#define MINOR_VCA_ALARM_AUDIOINPUT_BEGIN            0x33   /*��Ƶ�쳣���뿪ʼ*/
#define MINOR_VCA_ALARM_AUDIOINPUT_END                0x34   /*��Ƶ�쳣�������*/
#define MINOR_VCA_ALARM_AUDIOABNORMAL_BEGIN            0x35  /*��ǿͻ����⿪ʼ*/
#define MINOR_VCA_ALARM_AUDIOABNORMAL_END            0x36  /*��ǿͻ��������*/

#define MINOR_VCA_LECTURE_DETECTION_BEGIN           0x37  //�ڿ���⿪ʼ����
#define MINOR_VCA_LECTURE_DETECTION_END             0x38  //�ڿ�����������
#define MINOR_VCA_ALARM_AUDIOSTEEPDROP              0x39  //��ǿ���� 2014-03-21
#define MINOR_VCA_ANSWER_DETECTION_BEGIN            0x3a  //�ش�������⿪ʼ����
#define MINOR_VCA_ANSWER_DETECTION_END              0x3b  //�ش���������������

#define MINOR_SMART_PARKING_BEGIN                   0x3c   //ͣ����⿪ʼ
#define MINOR_SMART_PARKING_END                     0x3d   //ͣ��������
#define MINOR_SMART_UNATTENDED_BAGGAGE_BEGIN        0x3e   //��Ʒ������⿪ʼ
#define MINOR_SMART_UNATTENDED_BAGGAGE_END          0x3f   //��Ʒ����������
#define MINOR_SMART_OBJECT_REMOVAL_BEGIN            0x40   //��Ʒ��ȡ��⿪ʼ
#define MINOR_SMART_OBJECT_REMOVAL_END              0x41   //��Ʒ��ȡ������
#define MINOR_SMART_VEHICLE_ALARM_START             0x46   //���Ƽ�⿪ʼ
#define MINOR_SMART_VEHICLE_ALARM_STOP              0x47   //���Ƽ�����
#define MINOR_THERMAL_FIREDETECTION                 0x48   //�ȳ���������⿪ʼ
#define MINOR_THERMAL_FIREDETECTION_END             0x49   //�ȳ�������������
#define MINOR_SMART_VANDALPROOF_BEGIN               0x50   //���ƻ���⿪ʼ
#define MINOR_SMART_VANDALPROOF_END                 0x51   //���ƻ�������

#define MINOR_FACESNAP_MATCH_ALARM_START            0x55  /*�����ȶԱ�����ʼ*/
#define MINOR_FACESNAP_MATCH_ALARM_STOP             0x56  /*�����ȶԱ�������*/

#define MINOR_THERMAL_SHIPSDETECTION                0x5a   //�ȳ���ֻ������
#define MINOR_THERMAL_THERMOMETRY_EARLYWARNING_BEGIN 0x5b  //�ȳ������Ԥ����ʼ
#define MINOR_THERMAL_THERMOMETRY_EARLYWARNING_END  0x5c   //�ȳ������Ԥ������
#define MINOR_THERMAL_THERMOMETRY_ALARM_BEGIN       0x5d   //�ȳ�����±�����ʼ
#define MINOR_THERMAL_THERMOMETRY_ALARM_END         0x5e   //�ȳ�����±�������
#define MINOR_THERMAL_THERMOMETRY_DIFF_ALARM_BEGIN  0x5f   //�ȳ����²����ʼ
#define MINOR_THERMAL_THERMOMETRY_DIFF_ALARM_END    0x60   //�ȳ����²������
#define MINOR_FACE_THERMOMETRY_ALARM                0x63   //�������±���
#define MINOR_SMART_DENSEFOGDETECTION_BEGIN         0x6e   //������⿪ʼ
#define MINOR_SMART_DENSEFOGDETECTION_END           0x6f   //����������
#define MINOR_RUNNING_ALARM                         0x70   //���ܼ��
#define MINOR_RETENTION_ALARM                       0x71   //�������
#define MINOR_VCA_GET_UP_ALARM_BEGIN                0x80   //�𴲼�ⱨ����ʼ
#define MINOR_VCA_GET_UP_ALARM_END                  0x81   //�𴲼�ⱨ������
#define MINOR_VCA_ADV_REACH_HEIGHT_ALARM_BEGIN      0x82   //�����ʸ߱�����ʼ
#define MINOR_VCA_ADV_REACH_HEIGHT_ALARM_END        0x83   //�����ʸ߱�������
#define MINOR_VCA_TOILET_TARRY_ALARM_BEGIN          0x84   //��޳�ʱ������ʼ
#define MINOR_VCA_TOILET_TARRY_ALARM_END            0x85   //��޳�ʱ��������
#define MINOR_HUMAN_RECOGNITION_ALARM_BEGIN         0x86   //����ʶ�𱨾���ʼ
#define MINOR_HUMAN_RECOGNITION_ALARM_END           0x87   //����ʶ�𱨾�����
#define MINOR_STUDENTS_STOODUP_ALARM_BEGIN          0x88   //ѧ������������ʼ
#define MINOR_STUDENTS_STOODUP_ALARM_END            0x89   //ѧ��������������
#define MINOR_FRAMES_PEOPLE_COUNTING_ALARM          0x8a   //��������ͳ�Ʊ���

//0x400-0x1000 �Ž�����
#define MINOR_ALARMIN_SHORT_CIRCUIT                 0x400  //������·����
#define MINOR_ALARMIN_BROKEN_CIRCUIT                0x401  //������·����
#define MINOR_ALARMIN_EXCEPTION                     0x402  //�����쳣����
#define MINOR_ALARMIN_RESUME                        0x403  //���������ָ�
#define MINOR_HOST_DESMANTLE_ALARM                  0x404  //�豸���𱨾�
#define MINOR_HOST_DESMANTLE_RESUME                 0x405  //�豸����ָ�
#define MINOR_CARD_READER_DESMANTLE_ALARM           0x406  //���������𱨾�
#define MINOR_CARD_READER_DESMANTLE_RESUME          0x407  //����������ָ�
#define MINOR_CASE_SENSOR_ALARM                     0x408  //�¼����뱨��
#define MINOR_CASE_SENSOR_RESUME                    0x409  //�¼�����ָ�
#define MINOR_STRESS_ALARM                          0x40a  //в�ȱ���
#define MINOR_OFFLINE_ECENT_NEARLY_FULL             0x40b  //�����¼���90%����
#define MINOR_CARD_MAX_AUTHENTICATE_FAIL            0x40c  //������֤ʧ�ܳ��α���
#define MINOR_SD_CARD_FULL                          0x40d  //SD���洢������
#define MINOR_LINKAGE_CAPTURE_PIC                   0x40e  //����ץ���¼�����
#define MINOR_SECURITY_MODULE_DESMANTLE_ALARM        0x40f  //�ſذ�ȫģ����𱨾�
#define MINOR_SECURITY_MODULE_DESMANTLE_RESUME        0x410  //�ſذ�ȫģ�����ָ�

#define MINOR_POS_START_ALARM                       0x411  //POS����
#define MINOR_POS_END_ALARM                         0x412  //POS����
#define MINOR_FACE_IMAGE_QUALITY_LOW                0x413  //����ͼ���ʵ�
#define MINOR_FINGE_RPRINT_QUALITY_LOW              0x414  //ָ��ͼ���ʵ�
#define MINOR_FIRE_IMPORT_SHORT_CIRCUIT             0x415  //���������·����
#define MINOR_FIRE_IMPORT_BROKEN_CIRCUIT            0x416  //���������·����
#define MINOR_FIRE_IMPORT_RESUME                    0x417  //��������ָ�
#define MINOR_FIRE_BUTTON_TRIGGER                   0x418  //������ť����
#define MINOR_FIRE_BUTTON_RESUME                    0x419  //������ť�ָ�
#define MINOR_MAINTENANCE_BUTTON_TRIGGER            0x41a  //ά����ť����
#define MINOR_MAINTENANCE_BUTTON_RESUME             0x41b  //ά����ť�ָ�
#define MINOR_EMERGENCY_BUTTON_TRIGGER              0x41c  //������ť����
#define MINOR_EMERGENCY_BUTTON_RESUME               0x41d  //������ť�ָ�
#define MINOR_DISTRACT_CONTROLLER_ALARM             0x41e  //�ֿ������𱨾�
#define MINOR_DISTRACT_CONTROLLER_RESUME            0x41f  //�ֿ������𱨾��ָ�

#define MINOR_PERSON_DENSITY_DETECTION_START        0x420  //��Ա�ܶȳ���ֵ������ʼ
#define MINOR_PERSON_DENSITY_DETECTION_END          0x421  //��Ա�ܶȳ���ֵ��������

#define MINOR_CHANNEL_CONTROLLER_DESMANTLE_ALARM    0x422  //ͨ�����������𱨾�
#define MINOR_CHANNEL_CONTROLLER_DESMANTLE_RESUME   0x423  //ͨ�����������𱨾��ָ�
#define MINOR_CHANNEL_CONTROLLER_FIRE_IMPORT_ALARM  0x424  //ͨ���������������뱨��
#define MINOR_CHANNEL_CONTROLLER_FIRE_IMPORT_RESUME 0x425  //ͨ���������������뱨���ָ�

#define MINOR_ALARM_CUSTOM1                         0x900  //�Ž��Զ��屨��1
#define MINOR_ALARM_CUSTOM2                         0x901  //�Ž��Զ��屨��2
#define MINOR_ALARM_CUSTOM3                         0x902  //�Ž��Զ��屨��3
#define MINOR_ALARM_CUSTOM4                         0x903  //�Ž��Զ��屨��4
#define MINOR_ALARM_CUSTOM5                         0x904  //�Ž��Զ��屨��5
#define MINOR_ALARM_CUSTOM6                         0x905  //�Ž��Զ��屨��6
#define MINOR_ALARM_CUSTOM7                         0x906  //�Ž��Զ��屨��7
#define MINOR_ALARM_CUSTOM8                         0x907  //�Ž��Զ��屨��8
#define MINOR_ALARM_CUSTOM9                         0x908  //�Ž��Զ��屨��9
#define MINOR_ALARM_CUSTOM10                        0x909  //�Ž��Զ��屨��10
#define MINOR_ALARM_CUSTOM11                        0x90a  //�Ž��Զ��屨��11
#define MINOR_ALARM_CUSTOM12                        0x90b  //�Ž��Զ��屨��12
#define MINOR_ALARM_CUSTOM13                        0x90c  //�Ž��Զ��屨��13
#define MINOR_ALARM_CUSTOM14                        0x90d  //�Ž��Զ��屨��14
#define MINOR_ALARM_CUSTOM15                        0x90e  //�Ž��Զ��屨��15
#define MINOR_ALARM_CUSTOM16                        0x90f  //�Ž��Զ��屨��16
#define MINOR_ALARM_CUSTOM17                        0x910  //�Ž��Զ��屨��17
#define MINOR_ALARM_CUSTOM18                        0x911  //�Ž��Զ��屨��18
#define MINOR_ALARM_CUSTOM19                        0x912  //�Ž��Զ��屨��19
#define MINOR_ALARM_CUSTOM20                        0x913  //�Ž��Զ��屨��20
#define MINOR_ALARM_CUSTOM21                        0x914  //�Ž��Զ��屨��21
#define MINOR_ALARM_CUSTOM22                        0x915  //�Ž��Զ��屨��22
#define MINOR_ALARM_CUSTOM23                        0x916  //�Ž��Զ��屨��23
#define MINOR_ALARM_CUSTOM24                        0x917  //�Ž��Զ��屨��24
#define MINOR_ALARM_CUSTOM25                        0x918  //�Ž��Զ��屨��25
#define MINOR_ALARM_CUSTOM26                        0x919  //�Ž��Զ��屨��26
#define MINOR_ALARM_CUSTOM27                        0x91a  //�Ž��Զ��屨��27
#define MINOR_ALARM_CUSTOM28                        0x91b  //�Ž��Զ��屨��28
#define MINOR_ALARM_CUSTOM29                        0x91c  //�Ž��Զ��屨��29
#define MINOR_ALARM_CUSTOM30                        0x91d  //�Ž��Զ��屨��30
#define MINOR_ALARM_CUSTOM31                        0x91e  //�Ž��Զ��屨��31
#define MINOR_ALARM_CUSTOM32                        0x91f  //�Ž��Զ��屨��32
#define MINOR_ALARM_CUSTOM33                        0x920  //�Ž��Զ��屨��33
#define MINOR_ALARM_CUSTOM34                        0x921  //�Ž��Զ��屨��34
#define MINOR_ALARM_CUSTOM35                        0x922  //�Ž��Զ��屨��35
#define MINOR_ALARM_CUSTOM36                        0x923  //�Ž��Զ��屨��36
#define MINOR_ALARM_CUSTOM37                        0x924  //�Ž��Զ��屨��37
#define MINOR_ALARM_CUSTOM38                        0x925  //�Ž��Զ��屨��38
#define MINOR_ALARM_CUSTOM39                        0x926  //�Ž��Զ��屨��39
#define MINOR_ALARM_CUSTOM40                        0x927  //�Ž��Զ��屨��40
#define MINOR_ALARM_CUSTOM41                        0x928  //�Ž��Զ��屨��41
#define MINOR_ALARM_CUSTOM42                        0x929  //�Ž��Զ��屨��42
#define MINOR_ALARM_CUSTOM43                        0x92a  //�Ž��Զ��屨��43
#define MINOR_ALARM_CUSTOM44                        0x92b  //�Ž��Զ��屨��44
#define MINOR_ALARM_CUSTOM45                        0x92c  //�Ž��Զ��屨��45
#define MINOR_ALARM_CUSTOM46                        0x92d  //�Ž��Զ��屨��46
#define MINOR_ALARM_CUSTOM47                        0x92e  //�Ž��Զ��屨��47
#define MINOR_ALARM_CUSTOM48                        0x92f  //�Ž��Զ��屨��48
#define MINOR_ALARM_CUSTOM49                        0x930  //�Ž��Զ��屨��49
#define MINOR_ALARM_CUSTOM50                        0x931  //�Ž��Զ��屨��50
#define MINOR_ALARM_CUSTOM51                        0x932  //�Ž��Զ��屨��51
#define MINOR_ALARM_CUSTOM52                        0x933  //�Ž��Զ��屨��52
#define MINOR_ALARM_CUSTOM53                        0x934  //�Ž��Զ��屨��53
#define MINOR_ALARM_CUSTOM54                        0x935  //�Ž��Զ��屨��54
#define MINOR_ALARM_CUSTOM55                        0x936  //�Ž��Զ��屨��55
#define MINOR_ALARM_CUSTOM56                        0x937  //�Ž��Զ��屨��56
#define MINOR_ALARM_CUSTOM57                        0x938  //�Ž��Զ��屨��57
#define MINOR_ALARM_CUSTOM58                        0x939  //�Ž��Զ��屨��58
#define MINOR_ALARM_CUSTOM59                        0x93a  //�Ž��Զ��屨��59
#define MINOR_ALARM_CUSTOM60                        0x93b  //�Ž��Զ��屨��60
#define MINOR_ALARM_CUSTOM61                        0x93c  //�Ž��Զ��屨��61
#define MINOR_ALARM_CUSTOM62                        0x93d  //�Ž��Զ��屨��62
#define MINOR_ALARM_CUSTOM63                        0x93e  //�Ž��Զ��屨��63
#define MINOR_ALARM_CUSTOM64                        0x93f  //�Ž��Զ��屨��64

/* �쳣 */
//������
#define MAJOR_EXCEPTION                    0x2
//������
#define MINOR_RAID_ERROR                0x20    /* �����쳣 */
#define MINOR_VI_LOST                    0x21    /* ��Ƶ�źŶ�ʧ */
#define MINOR_ILLEGAL_ACCESS            0x22    /* �Ƿ����� */
#define MINOR_HD_FULL                    0x23    /* Ӳ���� */
#define MINOR_HD_ERROR                    0x24    /* Ӳ�̴��� */
#define MINOR_DCD_LOST                    0x25    /* MODEM ����(������ʹ��) */
#define MINOR_IP_CONFLICT                0x26    /* IP��ַ��ͻ */
#define MINOR_NET_BROKEN                0x27    /* ����Ͽ�*/
#define MINOR_REC_ERROR                 0x28    /* ¼����� */
#define MINOR_IPC_NO_LINK               0x29    /* IPC�����쳣 */
#define MINOR_VI_EXCEPTION              0x2a    /* ��Ƶ�����쳣(ֻ���ģ��ͨ��) */
#define MINOR_IPC_IP_CONFLICT           0x2b    /*ipc ip ��ַ ��ͻ*/
#define MINOR_SENCE_EXCEPTION           0x2c    // �����쳣

#define MINOR_PIC_REC_ERROR              0x2d    /* ץͼ����--��ȡͼƬ�ļ�ʧ��*/
#define MINOR_VI_MISMATCH                0x2e    /* ��Ƶ��ʽ��ƥ��*/
#define MINOR_RESOLUTION_MISMATCH        0x2f    /*ǰ��/¼��ֱ��ʲ�ƥ��  */

//2009-12-16 ������Ƶ�ۺ�ƽ̨��־����
#define MINOR_FANABNORMAL                0x31    /* ��Ƶ�ۺ�ƽ̨������״̬�쳣 */
#define MINOR_FANRESUME                    0x32    /* ��Ƶ�ۺ�ƽ̨������״̬�ָ����� */
#define MINOR_SUBSYSTEM_ABNORMALREBOOT    0x33    /* ��Ƶ�ۺ�ƽ̨��6467�쳣���� */
#define MINOR_MATRIX_STARTBUZZER        0x34    /* ��Ƶ�ۺ�ƽ̨��dm6467�쳣������������ */

//2010-01-22 ������Ƶ�ۺ�ƽ̨�쳣��־������
#define MINOR_NET_ABNORMAL                0x35    /*����״̬�쳣*/
#define MINOR_MEM_ABNORMAL                0x36    /*�ڴ�״̬�쳣*/
#define MINOR_FILE_ABNORMAL                0x37    /*�ļ�״̬�쳣*/
#define MINOR_PANEL_ABNORMAL            0x38 /*ǰ��������쳣*/
#define MINOR_PANEL_RESUME                0x39 /*ǰ���ָ�����*/
#define MINOR_RS485_DEVICE_ABNORMAL        0x3a     /*RS485����״̬�쳣*/
#define MINOR_RS485_DEVICE_REVERT        0x3b    /*RS485����״̬�쳣�ָ�*/

//2012-2-18 ���Ӵ����������쳣��־������
#define MINOR_SCREEN_SUBSYSTEM_ABNORMALREBOOT   0x3c            //�Ӱ��쳣����
#define    MINOR_SCREEN_SUBSYSTEM_ABNORMALINSERT    0x3d            //�Ӱ����
#define    MINOR_SCREEN_SUBSYSTEM_ABNORMALPULLOUT    0x3e            //�Ӱ�γ�
#define    MINOR_SCREEN_ABNARMALTEMPERATURE        0x3f            //�¶��쳣
//2012-07-26 ��Ƶ�ۺ�ƽ̨v2.1
#define MINOR_HIGH_TEMPERATURE_PROTECT          0x40 //�Ӱ���ȱ���

//Netra 2.2.2
#define MINOR_RECORD_OVERFLOW                   0x41              /*���������*/
#define MINOR_DSP_ABNORMAL                      0x42              //DSP�쳣

//Netra 3.0.0
#define MINOR_ANR_RECORD_FAIED                 0x43         /*ANR¼��ʧ��*/
#define MINOR_SPARE_WORK_DEVICE_EXCEPT         0x44            /*�ȱ��豸�������쳣*/
#define MINOR_START_IPC_MAS_FAILED             0x45            /*����IPC MASʧ��*/
//������ 256·NVR
#define MINOR_IPCM_CRASH                       0x46         /*IPCM�쳣����*/
#define MINOR_POE_POWER_EXCEPTION              0x47         /*POE �����쳣*/
#define MINOR_UPLOAD_DATA_CS_EXCEPTION         0x48          //�ƴ洢�����ϴ�ʧ��/
#define MINOR_DIAL_EXCEPTION                   0x49         /*�����쳣*/
#define MINOR_DEV_EXCEPTION_OFFLINE            0x50  //�豸�쳣����
#define MINOR_UPGRADEFAIL                      0x51 //Զ�������豸ʧ��
#define MINOR_AI_LOST                           0x52    /* ��Ƶ�źŶ�ʧ */
#define MINOR_SYNC_IPC_PASSWD                   0x53    /* ͬ��IPC�����쳣 */
#define MINOR_EZVIZ_OFFLINE                        0x54    /* өʯ�����쳣*/
#define MINOR_VQD_ABNORMAL                        0x55 //VQD�쳣
#define MINOR_ACCESSORIES_PLATE                0x57 //������쳣
#define MINOR_KMS_EXPAMSION_DISK_LOST         0x58 // KMS�����̶�ʧ
#define MINOR_ABNORMAL_PORT                 0x59 // �˿��쳣
#define MINOR_CAMERA_ANGLE_ANOMALY          0x60//  ����ӽ��쳣
#define MINOR_DATA_DISK_ERROE               0x61//  �����̴���
#define MINOR_INTELLIGENT_SYSTEM_RUNNING_ERROR     0x62//  ����ϵͳ�����쳣

//0x400-0x1000 �Ž��쳣����
#define MINOR_DEV_POWER_ON                     0x400  //�豸�ϵ�����
#define MINOR_DEV_POWER_OFF                    0x401  //�豸����ر�
#define MINOR_WATCH_DOG_RESET                  0x402  //���Ź���λ
#define MINOR_LOW_BATTERY                      0x403  //���ص�ѹ��
#define MINOR_BATTERY_RESUME                   0x404  //���ص�ѹ�ָ�����
#define MINOR_AC_OFF                           0x405  //������ϵ�
#define MINOR_AC_RESUME                        0x406  //������ָ�
#define MINOR_NET_RESUME                       0x407  //����ָ�
#define MINOR_FLASH_ABNORMAL                   0x408  //FLASH��д�쳣
#define MINOR_CARD_READER_OFFLINE              0x409  //����������
#define MINOR_CARD_READER_RESUME               0x40a  //���������߻ָ�
#define MINOR_INDICATOR_LIGHT_OFF              0x40b  //ָʾ�ƹر�
#define MINOR_INDICATOR_LIGHT_RESUME           0x40c  //ָʾ�ƻָ�
#define MINOR_CHANNEL_CONTROLLER_OFF           0x40d  //ͨ������������
#define MINOR_CHANNEL_CONTROLLER_RESUME        0x40e  //ͨ���������ָ�
#define MINOR_SECURITY_MODULE_OFF               0x40f  //�ſذ�ȫģ�����
#define MINOR_SECURITY_MODULE_RESUME           0x410  //�ſذ�ȫģ������
#define MINOR_BATTERY_ELECTRIC_LOW             0x411  //��ص�ѹ��(�������豸ʹ��)
#define MINOR_BATTERY_ELECTRIC_RESUME          0x412  //��ص�ѹ�ָ�����(�������豸ʹ��)
#define MINOR_LOCAL_CONTROL_NET_BROKEN           0x413  //�͵ؿ���������Ͽ�
#define MINOR_LOCAL_CONTROL_NET_RSUME           0x414  //�͵ؿ���������ָ�
#define MINOR_MASTER_RS485_LOOPNODE_BROKEN     0x415  //����RS485��·�ڵ�Ͽ�
#define MINOR_MASTER_RS485_LOOPNODE_RESUME     0x416  //����RS485��·�ڵ�ָ�
#define MINOR_LOCAL_CONTROL_OFFLINE            0x417  //�͵ؿ���������
#define MINOR_LOCAL_CONTROL_RESUME             0x418  //�͵ؿ��������߻ָ�
#define MINOR_LOCAL_DOWNSIDE_RS485_LOOPNODE_BROKEN  0x419  //�͵�����RS485��·�Ͽ�
#define MINOR_LOCAL_DOWNSIDE_RS485_LOOPNODE_RESUME  0x41a  //�͵�����RS485��·�ָ�
#define MINOR_DISTRACT_CONTROLLER_ONLINE       0x41b  //�ֿ�������
#define MINOR_DISTRACT_CONTROLLER_OFFLINE      0x41c  //�ֿ�������
#define MINOR_ID_CARD_READER_NOT_CONNECT       0x41d  //���֤�Ķ���δ���ӣ�����ר�ã�
#define MINOR_ID_CARD_READER_RESUME            0x41e  //���֤�Ķ������ӻָ�������ר�ã�
#define MINOR_FINGER_PRINT_MODULE_NOT_CONNECT  0x41f  //ָ��ģ��δ���ӣ�����ר�ã�
#define MINOR_FINGER_PRINT_MODULE_RESUME       0x420  //ָ��ģ�����ӻָ�������ר�ã�
#define MINOR_CAMERA_NOT_CONNECT               0x421  //����ͷδ����
#define MINOR_CAMERA_RESUME                    0x422  //����ͷ���ӻָ�
#define MINOR_COM_NOT_CONNECT                  0x423  //COM��δ����
#define MINOR_COM_RESUME                       0x424  //COM�����ӻָ�
#define MINOR_DEVICE_NOT_AUTHORIZE             0x425  //�豸δ��Ȩ
#define MINOR_PEOPLE_AND_ID_CARD_DEVICE_ONLINE 0x426  //��֤�豸����
#define MINOR_PEOPLE_AND_ID_CARD_DEVICE_OFFLINE 0x427 //��֤�豸����
#define MINOR_LOCAL_LOGIN_LOCK                 0x428  //���ص�¼����
#define MINOR_LOCAL_LOGIN_UNLOCK               0x429  //���ص�¼����
#define MINOR_SUBMARINEBACK_COMM_BREAK         0x42a  //�뷴Ǳ�ط�����ͨ�ŶϿ�
#define MINOR_SUBMARINEBACK_COMM_RESUME        0x42b  //�뷴Ǳ�ط�����ͨ�Żָ�
#define MINOR_MOTOR_SENSOR_EXCEPTION           0x42c  //����������쳣
#define MINOR_CAN_BUS_EXCEPTION                0x42d  //CAN�����쳣
#define MINOR_CAN_BUS_RESUME                   0x42e  //CAN���߻ָ�
#define MINOR_GATE_TEMPERATURE_OVERRUN         0x42f  //բ��ǻ���¶ȳ���
#define MINOR_IR_EMITTER_EXCEPTION             0x430  //��������쳣
#define MINOR_IR_EMITTER_RESUME                0x431  //�������ָ�
#define MINOR_LAMP_BOARD_COMM_EXCEPTION        0x432  //�ư�ͨ���쳣
#define MINOR_LAMP_BOARD_COMM_RESUME           0x433  //�ư�ͨ�Żָ�
#define MINOR_IR_ADAPTOR_COMM_EXCEPTION        0x434  //����ת�Ӱ�ͨ���쳣
#define MINOR_IR_ADAPTOR_COMM_RESUME           0x435  //����ת�Ӱ�ͨ�Żָ�

#define MINOR_EXCEPTION_CUSTOM1                 0x900  //�Ž��Զ����쳣1
#define MINOR_EXCEPTION_CUSTOM2                 0x901  //�Ž��Զ����쳣2
#define MINOR_EXCEPTION_CUSTOM3                 0x902  //�Ž��Զ����쳣3
#define MINOR_EXCEPTION_CUSTOM4                 0x903  //�Ž��Զ����쳣4
#define MINOR_EXCEPTION_CUSTOM5                 0x904  //�Ž��Զ����쳣5
#define MINOR_EXCEPTION_CUSTOM6                 0x905  //�Ž��Զ����쳣6
#define MINOR_EXCEPTION_CUSTOM7                 0x906  //�Ž��Զ����쳣7
#define MINOR_EXCEPTION_CUSTOM8                 0x907  //�Ž��Զ����쳣8
#define MINOR_EXCEPTION_CUSTOM9                 0x908  //�Ž��Զ����쳣9
#define MINOR_EXCEPTION_CUSTOM10                0x909  //�Ž��Զ����쳣10
#define MINOR_EXCEPTION_CUSTOM11                0x90a  //�Ž��Զ����쳣11
#define MINOR_EXCEPTION_CUSTOM12                0x90b  //�Ž��Զ����쳣12
#define MINOR_EXCEPTION_CUSTOM13                0x90c  //�Ž��Զ����쳣13
#define MINOR_EXCEPTION_CUSTOM14                0x90d  //�Ž��Զ����쳣14
#define MINOR_EXCEPTION_CUSTOM15                0x90e  //�Ž��Զ����쳣15
#define MINOR_EXCEPTION_CUSTOM16                0x90f  //�Ž��Զ����쳣16
#define MINOR_EXCEPTION_CUSTOM17                0x910  //�Ž��Զ����쳣17
#define MINOR_EXCEPTION_CUSTOM18                0x911  //�Ž��Զ����쳣18
#define MINOR_EXCEPTION_CUSTOM19                0x912  //�Ž��Զ����쳣19
#define MINOR_EXCEPTION_CUSTOM20                0x913  //�Ž��Զ����쳣20
#define MINOR_EXCEPTION_CUSTOM21                0x914  //�Ž��Զ����쳣21
#define MINOR_EXCEPTION_CUSTOM22                0x915  //�Ž��Զ����쳣22
#define MINOR_EXCEPTION_CUSTOM23                0x916  //�Ž��Զ����쳣23
#define MINOR_EXCEPTION_CUSTOM24                0x917  //�Ž��Զ����쳣24
#define MINOR_EXCEPTION_CUSTOM25                0x918  //�Ž��Զ����쳣25
#define MINOR_EXCEPTION_CUSTOM26                0x919  //�Ž��Զ����쳣26
#define MINOR_EXCEPTION_CUSTOM27                0x91a  //�Ž��Զ����쳣27
#define MINOR_EXCEPTION_CUSTOM28                0x91b  //�Ž��Զ����쳣28
#define MINOR_EXCEPTION_CUSTOM29                0x91c  //�Ž��Զ����쳣29
#define MINOR_EXCEPTION_CUSTOM30                0x91d  //�Ž��Զ����쳣30
#define MINOR_EXCEPTION_CUSTOM31                0x91e  //�Ž��Զ����쳣31
#define MINOR_EXCEPTION_CUSTOM32                0x91f  //�Ž��Զ����쳣32
#define MINOR_EXCEPTION_CUSTOM33                0x920  //�Ž��Զ����쳣33
#define MINOR_EXCEPTION_CUSTOM34                0x921  //�Ž��Զ����쳣34
#define MINOR_EXCEPTION_CUSTOM35                0x922  //�Ž��Զ����쳣35
#define MINOR_EXCEPTION_CUSTOM36                0x923  //�Ž��Զ����쳣36
#define MINOR_EXCEPTION_CUSTOM37                0x924  //�Ž��Զ����쳣37
#define MINOR_EXCEPTION_CUSTOM38                0x925  //�Ž��Զ����쳣38
#define MINOR_EXCEPTION_CUSTOM39                0x926  //�Ž��Զ����쳣39
#define MINOR_EXCEPTION_CUSTOM40                0x927  //�Ž��Զ����쳣40
#define MINOR_EXCEPTION_CUSTOM41                0x928  //�Ž��Զ����쳣41
#define MINOR_EXCEPTION_CUSTOM42                0x929  //�Ž��Զ����쳣42
#define MINOR_EXCEPTION_CUSTOM43                0x92a  //�Ž��Զ����쳣43
#define MINOR_EXCEPTION_CUSTOM44                0x92b  //�Ž��Զ����쳣44
#define MINOR_EXCEPTION_CUSTOM45                0x92c  //�Ž��Զ����쳣45
#define MINOR_EXCEPTION_CUSTOM46                0x92d  //�Ž��Զ����쳣46
#define MINOR_EXCEPTION_CUSTOM47                0x92e  //�Ž��Զ����쳣47
#define MINOR_EXCEPTION_CUSTOM48                0x92f  //�Ž��Զ����쳣48
#define MINOR_EXCEPTION_CUSTOM49                0x930  //�Ž��Զ����쳣49
#define MINOR_EXCEPTION_CUSTOM50                0x931  //�Ž��Զ����쳣50
#define MINOR_EXCEPTION_CUSTOM51                0x932  //�Ž��Զ����쳣51
#define MINOR_EXCEPTION_CUSTOM52                0x933  //�Ž��Զ����쳣52
#define MINOR_EXCEPTION_CUSTOM53                0x934  //�Ž��Զ����쳣53
#define MINOR_EXCEPTION_CUSTOM54                0x935  //�Ž��Զ����쳣54
#define MINOR_EXCEPTION_CUSTOM55                0x936  //�Ž��Զ����쳣55
#define MINOR_EXCEPTION_CUSTOM56                0x937  //�Ž��Զ����쳣56
#define MINOR_EXCEPTION_CUSTOM57                0x938  //�Ž��Զ����쳣57
#define MINOR_EXCEPTION_CUSTOM58                0x939  //�Ž��Զ����쳣58
#define MINOR_EXCEPTION_CUSTOM59                0x93a  //�Ž��Զ����쳣59
#define MINOR_EXCEPTION_CUSTOM60                0x93b  //�Ž��Զ����쳣60
#define MINOR_EXCEPTION_CUSTOM61                0x93c  //�Ž��Զ����쳣61
#define MINOR_EXCEPTION_CUSTOM62                0x93d  //�Ž��Զ����쳣62
#define MINOR_EXCEPTION_CUSTOM63                0x93e  //�Ž��Զ����쳣63
#define MINOR_EXCEPTION_CUSTOM64                0x93f  //�Ž��Զ����쳣64

//[add]by silujie 2013-3-22 14:16
//0x2000~0x3fff Ϊ�豸������־
//0x4000~0x5000 Ϊ�豸�쳣��־
#define MINOR_SUBSYSTEM_IP_CONFLICT        0x4000        //�Ӱ�IP��ͻ
#define MINOR_SUBSYSTEM_NET_BROKEN        0x4001        //�Ӱ����
#define    MINOR_FAN_ABNORMAL                0x4002        //�����쳣
#define    MINOR_BACKPANEL_TEMPERATURE_ABNORMAL        0x4003        //�����¶��쳣

#define    MINOR_SDCARD_ABNORMAL            0x4004        //SD��������
#define    MINOR_SDCARD_DAMAGE                0x4005        //SD����
#define    MINOR_POC_ABNORMAL				0x4006   //�豸POCģ���쳣

/* ���� */
//������
#define MAJOR_OPERATION                    0x3

//������
#define MINOR_VCA_MOTIONEXCEPTION        0x29  //��������쳣
#define MINOR_START_DVR                    0x41    /* ���� */
#define MINOR_STOP_DVR                    0x42    /* �ػ� */
#define MINOR_STOP_ABNORMAL                0x43    /* �쳣�ػ� */
#define MINOR_REBOOT_DVR                0x44    /*���������豸*/

#define MINOR_LOCAL_LOGIN                0x50    /* ���ص�½ */
#define MINOR_LOCAL_LOGOUT                0x51    /* ����ע����½ */
#define MINOR_LOCAL_CFG_PARM            0x52    /* �������ò��� */
#define MINOR_LOCAL_PLAYBYFILE          0x53    /* ���ذ��ļ��طŻ����� */
#define MINOR_LOCAL_PLAYBYTIME          0x54    /* ���ذ�ʱ��طŻ�����*/
#define MINOR_LOCAL_START_REC            0x55    /* ���ؿ�ʼ¼�� */
#define MINOR_LOCAL_STOP_REC            0x56    /* ����ֹͣ¼�� */
#define MINOR_LOCAL_PTZCTRL                0x57    /* ������̨���� */
#define MINOR_LOCAL_PREVIEW                0x58    /* ����Ԥ�� (������ʹ��)*/
#define MINOR_LOCAL_MODIFY_TIME         0x59    /* �����޸�ʱ��(������ʹ��) */
#define MINOR_LOCAL_UPGRADE             0x5a    /* �������� */
#define MINOR_LOCAL_RECFILE_OUTPUT      0x5b    /* ���ر���¼���ļ� */
#define MINOR_LOCAL_FORMAT_HDD          0x5c    /* ���س�ʼ��Ӳ�� */
#define MINOR_LOCAL_CFGFILE_OUTPUT      0x5d    /* �������������ļ� */
#define MINOR_LOCAL_CFGFILE_INPUT       0x5e    /* ���뱾�������ļ� */
#define MINOR_LOCAL_COPYFILE            0x5f    /* ���ر����ļ� */
#define MINOR_LOCAL_LOCKFILE            0x60    /* ��������¼���ļ� */
#define MINOR_LOCAL_UNLOCKFILE          0x61    /* ���ؽ���¼���ļ� */
#define MINOR_LOCAL_DVR_ALARM           0x62    /* �����ֶ�����ʹ�������*/
#define MINOR_IPC_ADD                   0x63    /* �������IPC */
#define MINOR_IPC_DEL                   0x64    /* ����ɾ��IPC */
#define MINOR_IPC_SET                   0x65    /* ��������IPC */
#define MINOR_LOCAL_START_BACKUP        0x66    /* ���ؿ�ʼ���� */
#define MINOR_LOCAL_STOP_BACKUP            0x67    /* ����ֹͣ����*/
#define MINOR_LOCAL_COPYFILE_START_TIME 0x68    /* ���ر��ݿ�ʼʱ��*/
#define MINOR_LOCAL_COPYFILE_END_TIME    0x69    /* ���ر��ݽ���ʱ��*/
#define MINOR_LOCAL_ADD_NAS             0x6a    /*�����������Ӳ�� ��nfs��iscsi��*/
#define MINOR_LOCAL_DEL_NAS             0x6b    /* ����ɾ��nas�� ��nfs��iscsi��*/
#define MINOR_LOCAL_SET_NAS             0x6c    /* ��������nas�� ��nfs��iscsi��*/
#define MINOR_LOCAL_RESET_PASSWD        0x6d    /* ���ػָ�����ԱĬ������*/

#define MINOR_REMOTE_LOGIN                0x70    /* Զ�̵�¼ */
#define MINOR_REMOTE_LOGOUT                0x71    /* Զ��ע����½ */
#define MINOR_REMOTE_START_REC            0x72    /* Զ�̿�ʼ¼�� */
#define MINOR_REMOTE_STOP_REC            0x73    /* Զ��ֹͣ¼�� */
#define MINOR_START_TRANS_CHAN            0x74    /* ��ʼ͸������ */
#define MINOR_STOP_TRANS_CHAN            0x75    /* ֹͣ͸������ */
#define MINOR_REMOTE_GET_PARM            0x76    /* Զ�̻�ȡ���� */
#define MINOR_REMOTE_CFG_PARM            0x77    /* Զ�����ò��� */
#define MINOR_REMOTE_GET_STATUS         0x78    /* Զ�̻�ȡ״̬ */
#define MINOR_REMOTE_ARM                0x79    /* Զ�̲��� */
#define MINOR_REMOTE_DISARM                0x7a    /* Զ�̳��� */
#define MINOR_REMOTE_REBOOT                0x7b    /* Զ������ */
#define MINOR_START_VT                    0x7c    /* ��ʼ�����Խ� */
#define MINOR_STOP_VT                    0x7d    /* ֹͣ�����Խ� */
#define MINOR_REMOTE_UPGRADE            0x7e    /* Զ������ */
#define MINOR_REMOTE_PLAYBYFILE         0x7f    /* Զ�̰��ļ��ط� */
#define MINOR_REMOTE_PLAYBYTIME         0x80    /* Զ�̰�ʱ��ط� */
#define MINOR_REMOTE_PTZCTRL            0x81    /* Զ����̨���� */
#define MINOR_REMOTE_FORMAT_HDD         0x82    /* Զ�̸�ʽ��Ӳ�� */
#define MINOR_REMOTE_STOP               0x83    /* Զ�̹ػ� */
#define MINOR_REMOTE_LOCKFILE            0x84    /* Զ�������ļ� */
#define MINOR_REMOTE_UNLOCKFILE         0x85    /* Զ�̽����ļ� */
#define MINOR_REMOTE_CFGFILE_OUTPUT     0x86    /* Զ�̵��������ļ� */
#define MINOR_REMOTE_CFGFILE_INTPUT     0x87    /* Զ�̵��������ļ� */
#define MINOR_REMOTE_RECFILE_OUTPUT     0x88    /* Զ�̵���¼���ļ� */
#define MINOR_REMOTE_DVR_ALARM          0x89    /* Զ���ֶ�����ʹ�������*/
#define MINOR_REMOTE_IPC_ADD            0x8a    /* Զ�����IPC */
#define MINOR_REMOTE_IPC_DEL            0x8b    /* Զ��ɾ��IPC */
#define MINOR_REMOTE_IPC_SET            0x8c    /* Զ������IPC */
#define MINOR_REBOOT_VCA_LIB            0x8d    /*�������ܿ�*/
#define MINOR_REMOTE_ADD_NAS            0x8e   /* Զ�����nas�� ��nfs��iscsi��*/
#define MINOR_REMOTE_DEL_NAS            0x8f   /* Զ��ɾ��nas�� ��nfs��iscsi��*/
#define MINOR_REMOTE_SET_NAS            0x90   /* Զ������nas�� ��nfs��iscsi��*/
#define MINOR_LOCAL_OPERATE_LOCK        0x9d            /* ���ز�������             */
#define MINOR_LOCAL_OPERATE_UNLOCK      0x9e            /* ���ز����������         */
#define MINOR_REMOTE_DELETE_HDISK       0x9a            /* Զ��ɾ���쳣�����ڵ�Ӳ�� */
#define MINOR_REMOTE_LOAD_HDISK         0x9b            /* Զ�̼���Ӳ��             */
#define MINOR_REMOTE_UNLOAD_HDISK       0x9c            /* Զ��ж��Ӳ��   */


//2010-05-26 ������ѶDVR��־����
#define MINOR_LOCAL_START_REC_CDRW      0x91   /* ���ؿ�ʼѶ�� */
#define MINOR_LOCAL_STOP_REC_CDRW       0x92   /* ����ֹͣѶ�� */
#define MINOR_REMOTE_START_REC_CDRW     0x93   /* Զ�̿�ʼѶ�� */
#define MINOR_REMOTE_STOP_REC_CDRW      0x94   /* Զ��ֹͣѶ�� */

#define MINOR_LOCAL_PIC_OUTPUT            0x95   /* ���ر���ͼƬ�ļ� */
#define MINOR_REMOTE_PIC_OUTPUT            0x96   /* Զ�̱���ͼƬ�ļ� */

//2011-07-26 ����81��ѶDVR��־����
#define MINOR_LOCAL_INQUEST_RESUME      0x97   /* ���ػָ���Ѷ�¼�*/
#define MINOR_REMOTE_INQUEST_RESUME     0x98   /* Զ�ָ̻���Ѷ�¼�*/

//2013-01-23 ����86������ѶNVR������־
#define MINOR_LOCAL_ADD_FILE            0x99        /*���ص����ļ�*/
#define MINOR_LOCAL_DEL_FILE            0x9f        /*����ɾ����Ѷ*/
#define MINOR_REMOTE_INQUEST_ADD_FILE   0x100       /*Զ�̵����ļ�*/

//2009-12-16 ������Ƶ�ۺ�ƽ̨��־����
#define MINOR_SUBSYSTEMREBOOT           0xa0    /*��Ƶ�ۺ�ƽ̨��dm6467 ��������*/
#define MINOR_MATRIX_STARTTRANSFERVIDEO 0xa1    /*��Ƶ�ۺ�ƽ̨�������л���ʼ����ͼ��*/
#define MINOR_MATRIX_STOPTRANSFERVIDEO    0xa2    /*��Ƶ�ۺ�ƽ̨�������л�ֹͣ����ͼ��*/
#define MINOR_REMOTE_SET_ALLSUBSYSTEM   0xa3    /*��Ƶ�ۺ�ƽ̨����������6467��ϵͳ��Ϣ*/
#define MINOR_REMOTE_GET_ALLSUBSYSTEM   0xa4    /*��Ƶ�ۺ�ƽ̨����ȡ����6467��ϵͳ��Ϣ*/
#define MINOR_REMOTE_SET_PLANARRAY      0xa5    /*��Ƶ�ۺ�ƽ̨�����üƻ���Ѳ��*/
#define MINOR_REMOTE_GET_PLANARRAY      0xa6    /*��Ƶ�ۺ�ƽ̨����ȡ�ƻ���Ѳ��*/
#define MINOR_MATRIX_STARTTRANSFERAUDIO 0xa7    /*��Ƶ�ۺ�ƽ̨�������л���ʼ������Ƶ*/
#define MINOR_MATRIX_STOPRANSFERAUDIO   0xa8    /*��Ƶ�ۺ�ƽ̨�������л�ֹͣ������Ƶ*/
#define MINOR_LOGON_CODESPITTER         0xa9    /*��Ƶ�ۺ�ƽ̨����½�����*/
#define MINOR_LOGOFF_CODESPITTER        0xaa    /*��Ƶ�ۺ�ƽ̨���˳������*/

//2010-01-22 ������Ƶ�ۺ�ƽ̨�н�����������־
#define MINOR_START_DYNAMIC_DECODE         0xb0    /*��ʼ��̬����*/
#define MINOR_STOP_DYNAMIC_DECODE        0xb1    /*ֹͣ��̬����*/
#define MINOR_GET_CYC_CFG                0xb2    /*��ȡ������ͨ����Ѳ����*/
#define MINOR_SET_CYC_CFG                0xb3    /*���ý���ͨ����Ѳ����*/
#define MINOR_START_CYC_DECODE            0xb4    /*��ʼ��Ѳ����*/
#define MINOR_STOP_CYC_DECODE            0xb5    /*ֹͣ��Ѳ����*/
#define MINOR_GET_DECCHAN_STATUS        0xb6    /*��ȡ����ͨ��״̬*/
#define MINOR_GET_DECCHAN_INFO            0xb7    /*��ȡ����ͨ����ǰ��Ϣ*/
#define MINOR_START_PASSIVE_DEC            0xb8    /*��ʼ��������*/
#define MINOR_STOP_PASSIVE_DEC            0xb9    /*ֹͣ��������*/
#define MINOR_CTRL_PASSIVE_DEC            0xba    /*���Ʊ�������*/
#define MINOR_RECON_PASSIVE_DEC            0xbb    /*������������*/
#define MINOR_GET_DEC_CHAN_SW            0xbc    /*��ȡ����ͨ���ܿ���*/
#define MINOR_SET_DEC_CHAN_SW            0xbd    /*���ý���ͨ���ܿ���*/
#define MINOR_CTRL_DEC_CHAN_SCALE        0xbe    /*����ͨ�����ſ���*/
#define MINOR_SET_REMOTE_REPLAY            0xbf    /*����Զ�̻ط�*/
#define MINOR_GET_REMOTE_REPLAY            0xc0    /*��ȡԶ�̻ط�״̬*/
#define MINOR_CTRL_REMOTE_REPLAY        0xc1    /*Զ�̻طſ���*/
#define MINOR_SET_DISP_CFG                0xc2    /*������ʾͨ��*/
#define MINOR_GET_DISP_CFG                0xc3    /*��ȡ��ʾͨ������*/
#define MINOR_SET_PLANTABLE                0xc4    /*���üƻ���Ѳ��*/
#define MINOR_GET_PLANTABLE                0xc5    /*��ȡ�ƻ���Ѳ��*/
#define MINOR_START_PPPPOE                0xc6    /*��ʼPPPoE����*/
#define MINOR_STOP_PPPPOE                0xc7    /*����PPPoE����*/
#define MINOR_UPLOAD_LOGO                0xc8    /*�ϴ�LOGO*/
//��ģʽ������־
#define MINOR_LOCAL_PIN                    0xc9    /* ����PIN���ܲ��� */
#define MINOR_LOCAL_DIAL                0xca    /* �����ֶ������Ͽ����� */
#define MINOR_SMS_CONTROL                0xcb    /* ���ſ��������� */
#define MINOR_CALL_ONLINE                0xcc    /* ���п������� */
#define MINOR_REMOTE_PIN                0xcd    /* Զ��PIN���ܲ��� */

//2010-12-16 ��������־
#define MINOR_REMOTE_BYPASS             0xd0    /* Զ����·*/
#define MINOR_REMOTE_UNBYPASS           0xd1    /* Զ����·�ָ�*/
#define MINOR_REMOTE_SET_ALARMIN_CFG    0xd2    /* Զ�����ñ����������*/
#define MINOR_REMOTE_GET_ALARMIN_CFG    0xd3    /* Զ�̻�ȡ�����������*/
#define MINOR_REMOTE_SET_ALARMOUT_CFG   0xd4    /* Զ�����ñ����������*/
#define MINOR_REMOTE_GET_ALARMOUT_CFG   0xd5    /* Զ�̻�ȡ�����������*/
#define MINOR_REMOTE_ALARMOUT_OPEN_MAN  0xd6    /* Զ���ֶ������������*/
#define MINOR_REMOTE_ALARMOUT_CLOSE_MAN 0xd7    /* Զ���ֶ��رձ������*/
#define MINOR_REMOTE_ALARM_ENABLE_CFG   0xd8    /* Զ�����ñ���������RS485����ʹ��״̬*/
#define MINOR_DBDATA_OUTPUT                0xd9    /* �������ݿ��¼ */
#define MINOR_DBDATA_INPUT                0xda    /* �������ݿ��¼ */
#define MINOR_MU_SWITCH                    0xdb    /* �����л� */
#define MINOR_MU_PTZ                    0xdc    /* ����PTZ���� */
#define MINOR_DELETE_LOGO               0xdd    /* ɾ��logo */
#define MINOR_REMOTE_INQUEST_DEL_FILE   0xde       /*Զ��ɾ���ļ�*/

#define MINOR_LOCAL_CONF_REB_RAID       0x101           /*���������Զ��ؽ�*/
#define MINOR_LOCAL_CONF_SPARE          0x102           /*���������ȱ�*/
#define MINOR_LOCAL_ADD_RAID            0x103           /*���ش�������*/
#define MINOR_LOCAL_DEL_RAID            0x104           /*����ɾ������*/
#define MINOR_LOCAL_MIG_RAID            0x105           /*����Ǩ������*/
#define MINOR_LOCAL_REB_RAID            0x106           /* �����ֶ��ؽ�����*/
#define MINOR_LOCAL_QUICK_CONF_RAID     0x107           /*����һ������*/
#define MINOR_LOCAL_ADD_VD              0x108           /*���ش����������*/
#define MINOR_LOCAL_DEL_VD              0x109           /*����ɾ���������*/
#define MINOR_LOCAL_RP_VD               0x10a           /*�����޸��������*/
#define MINOR_LOCAL_FORMAT_EXPANDVD     0X10b           /*������չ�����������*/
#define MINOR_LOCAL_RAID_UPGRADE        0X10c           /*����raid������*/
#define MINOR_LOCAL_STOP_RAID           0x10d           /*������ͣRAID����(����ȫ����)*/
#define MINOR_REMOTE_CONF_REB_RAID      0x111           /*Զ�������Զ��ؽ�*/
#define MINOR_REMOTE_CONF_SPARE         0x112            /*Զ�������ȱ�*/
#define MINOR_REMOTE_ADD_RAID           0x113           /*Զ�̴�������*/
#define MINOR_REMOTE_DEL_RAID           0x114           /*Զ��ɾ������*/
#define MINOR_REMOTE_MIG_RAID           0x115           /*Զ��Ǩ������*/
#define MINOR_REMOTE_REB_RAID           0x116           /* Զ���ֶ��ؽ�����*/
#define MINOR_REMOTE_QUICK_CONF_RAID    0x117           /*Զ��һ������*/
#define MINOR_REMOTE_ADD_VD             0x118           /*Զ�̴����������*/
#define MINOR_REMOTE_DEL_VD             0x119           /*Զ��ɾ���������*/
#define MINOR_REMOTE_RP_VD              0x11a           /*Զ���޸��������*/
#define MINOR_REMOTE_FORMAT_EXPANDVD    0X11b           /*Զ�������������*/
#define MINOR_REMOTE_RAID_UPGRADE       0X11c           /*Զ��raid������*/
#define MINOR_REMOTE_STOP_RAID          0x11d           /*Զ����ͣRAID����(����ȫ����)*/
#define MINOR_LOCAL_START_PIC_REC       0x121          /*���ؿ�ʼץͼ*/
#define MINOR_LOCAL_STOP_PIC_REC        0x122          /*����ֹͣץͼ*/
#define MINOR_LOCAL_SET_SNMP            0x125           /*��������SNMP*/
#define MINOR_LOCAL_TAG_OPT             0x126          /*���ر�ǩ����*/
#define MINOR_REMOTE_START_PIC_REC      0x131          /*Զ�̿�ʼץͼ*/
#define MINOR_REMOTE_STOP_PIC_REC       0x132           /*Զ��ֹͣץͼ*/
#define MINOR_REMOTE_SET_SNMP           0x135            /*Զ������SNMP*/
#define MINOR_REMOTE_TAG_OPT            0x136             /*Զ�̱�ǩ����*/

// 9000 v2.2.0
#define MINOR_LOCAL_VOUT_SWITCH         0x140   /* ����������л�����*/
#define MINOR_STREAM_CABAC                 0x141   /* ����ѹ������ѡ�����ò���*/

//Netra 3.0.0
#define MINOR_LOCAL_SPARE_OPT           0x142   /*����N+1 �ȱ���ز���*/
#define MINOR_REMOTE_SPARE_OPT            0x143   /*Զ��N+1 �ȱ���ز���*/
#define MINOR_LOCAL_IPCCFGFILE_OUTPUT    0x144      /* ���ص���ipc�����ļ�*/
#define MINOR_LOCAL_IPCCFGFILE_INPUT      0x145   /* ���ص���ipc�����ļ� */
#define MINOR_LOCAL_IPC_UPGRADE         0x146   /* ��������IPC */
#define MINOR_REMOTE_IPCCFGFILE_OUTPUT  0x147   /* Զ�̵���ipc�����ļ�*/
#define MINOR_REMOTE_IPCCFGFILE_INPUT   0x148   /* Զ�̵���ipc�����ļ�*/
#define MINOR_REMOTE_IPC_UPGRADE        0x149   /* Զ������IPC */

#define MINOR_LOCAL_UNLOAD_HDISK        0x150     /*����ж��Ӳ��*/
#define MINOR_LOCAL_AUDIO_MIX           0x151     /*����������Ƶ��������*/
#define MINOR_REMOTE_AUDIO_MIX          0x152     /*Զ��������Ƶ��������*/
#define MINOR_LOCAL_TRIAL_PAUSE         0x153     /*������ͣѶ��*/
#define MINOR_LOCAL_TRIAL_RESUME        0x154     /*���ؼ���Ѷ��*/
#define MINOR_REMOTE_TRIAL_PAUSE        0x155     /*Զ����ͣѶ��*/
#define MINOR_REMOTE_TRIAL_RESUME       0x156     /*Զ�̼���Ѷ��*/
#define MINOR_REMOTE_MODIFY_VERIFICATION_CODE   0x157 /*�޸�ƽ̨����֤��*/

#define MINOR_SET_MULTI_MASTER          0x201    /*���ô�������*/
#define MINOR_SET_MULTI_SLAVE           0x202    /*���ô�������*/
#define MINOR_CANCEL_MULTI_MASTER       0x203    /*ȡ����������*/
#define MINOR_CANCEL_MULTI_SLAVE        0x204    /*ȡ����������*/

#define MINOR_DISPLAY_LOGO                0x205    /*��ʾLOGO*/
#define MINOR_HIDE_LOGO                 0x206    /*����LOGO*/
#define MINOR_SET_DEC_DELAY_LEVEL       0x207    /*����ͨ����ʱ��������*/
#define MINOR_SET_BIGSCREEN_DIPLAY_AREA 0x208    /*���ô�����ʾ����*/
#define MINOR_CUT_VIDEO_SOURCE          0x209    /*������ƵԴ�и�����*/
#define MINOR_SET_BASEMAP_AREA          0x210    /*������ͼ��������*/
#define MINOR_DOWNLOAD_BASEMAP          0x211    /*���ش�����ͼ*/
#define MINOR_CUT_BASEMAP               0x212    /*��ͼ�и�����*/
#define MINOR_CONTROL_ELEC_ENLARGE      0x213    /*���ӷŴ����(�Ŵ��ԭ)*/
#define MINOR_SET_OUTPUT_RESOLUTION     0x214    /*��ʾ����ֱ�������*/
#define MINOR_SET_TRANCSPARENCY         0X215    /*ͼ��͸��������*/
#define MINOR_SET_OSD                   0x216    /*��ʾOSD����*/
#define MINOR_RESTORE_DEC_STATUS        0x217    /*�ָ���ʼ״̬(�����л�ʱ������ָ���ʼ״̬)*/

//2011-11-11 ���Ӵ���������������־������
#define MINOR_SCREEN_OPEN_SCREEN        0x218   //����Ļ
#define MINOR_SCREEN_CLOSE_SCREEN       0x219   //�ر���Ļ
#define MINOR_SCREEN_SWITCH_SIGNAL      0x21a   //�ź�Դ�л�
#define MINOR_SCREEN_MODIFY_NETWORK     0x21b   //�����������
#define MINOR_SCREEN_MODIFY_LEDRES      0x21c   //���������LED�ֱ���
#define MINOR_SCREEN_SHOW_NORMAL        0x21d   //���ô�����ͨ��ʾģʽ
#define MINOR_SCREEN_SHOW_TILE          0x21e   //���ô���ƽ����ʾģʽ
#define MINOR_SCREEN_DEC_NORMAL         0x21f   //������ͨ����ģʽ
#define MINOR_SCREEN_DEC_LOWLATENCY     0x220   //���õ���ʱ����ģʽ
#define MINOR_SCREEN_MODIFY_SELFRES     0x221   //�����ź�Դ�Զ���ֱ���
#define MINOR_SCREEN_OUTPUT_POSITION    0x222   //����ڹ�����Ļ
#define MINOR_SCREEN_IMAGE_ENHANCE      0x223   //ͼ����ǿ
#define MINOR_SCREEN_JOIN_SIGNAL        0x224   //�ź�Դƴ��
#define MINOR_SCREEN_SIGNAL_OSD         0x225   //�ź�Դ�ַ�����
#define MINOR_SCREEN_ASSOCIATED_INTERACTION 0x226   //�ź�Դ������������������
#define MINOR_SCREEN_MODIFY_MATRIX      0x227   //���þ������
#define MINOR_SCREEN_WND_TOP_KEEP       0x228   //�����ö�����
#define MINOR_SCREEN_WND_OPEN_KEEP      0x229   //���ڴ򿪱���
#define MINOR_SCREEN_WALL_MIRROR        0x22a   //����ǽ������
#define MINOR_SCREEN_UPLOAD_BASEMAP     0x22b   //�ϴ���ͼ
#define MINOR_SCREEN_SHOW_BASEMAP       0x22c   //��ʾ��ͼ
#define MINOR_SCREEN_HIDE_BASEMAP       0x22d   //���ص�ͼ
#define MINOR_SCREEN_MODIFY_SERIAL      0x22e   //���ô��ڲ���

#define MINOR_SCREEN_SET_INPUT          0x251    /*�޸�����Դ*/
#define MINOR_SCREEN_SET_OUTPUT         0x252    /*�޸����ͨ��*/
#define MINOR_SCREEN_SET_OSD            0x253    /*�޸�����LED*/
#define MINOR_SCREEN_SET_LOGO           0x254    /*�޸�LOGO*/
#define MINOR_SCREEN_SET_LAYOUT         0x255    /*���ò���*/
#define MINOR_SCREEN_PICTUREPREVIEW     0x256    /*���Բ���*/


//2012-06-14 CVCS2.0, �������õȲ�����V1.0�� V1.1���Ѿ����ˣ���ʱ���豸��־��û�ж���
#define MINOR_SCREEN_GET_OSD            0x257   /*��ȡ����LED*/
#define MINOR_SCREEN_GET_LAYOUT            0x258   /*��ȡ����*/
#define MINOR_SCREEN_LAYOUT_CTRL        0x259   /*���ֿ���*/
#define MINOR_GET_ALL_VALID_WND            0x260    /*��ȡ������Ч����*/
#define MINOR_GET_SIGNAL_WND            0x261    /*��ȡ����������Ϣ*/
#define MINOR_WINDOW_CTRL                0x262    /*���ڿ���*/
#define MINOR_GET_LAYOUT_LIST            0x263    /*��ȡ�����б�*/
#define MINOR_LAYOUT_CTRL                0x264    /*���ֿ���*/
#define MINOR_SET_LAYOUT                0x265    /*���ò���*/
#define MINOR_GET_SIGNAL_LIST            0x266    /*��ȡ�����ź�Դ�б�*/
#define MINOR_GET_PLAN_LIST                0x267    /*��ȡԤ���б�*/
#define MINOR_SET_PLAN                    0x268    /*�޸�Ԥ��*/
#define MINOR_CTRL_PLAN                    0x269    /*����Ԥ��*/
#define MINOR_CTRL_SCREEN                0x270    /*��Ļ����*/
#define MINOR_ADD_NETSIG                0x271    /*����ź�Դ*/
#define MINOR_SET_NETSIG                0x272    /*�޸��ź�Դ*/
#define MINOR_SET_DECBDCFG                0x273    /*���ý�������*/
#define MINOR_GET_DECBDCFG                0x274    /*��ȡ��������*/
#define MINOR_GET_DEVICE_STATUS            0x275    /*��ȡ�豸��Ϣ*/
#define MINOR_UPLOAD_PICTURE            0x276    /*��ͼ�ϴ�*/
#define MINOR_SET_USERPWD                0x277    /*�����û�����*/
#define MINOR_ADD_LAYOUT                0x278    /*��Ӳ���*/
#define MINOR_DEL_LAYOUT                0x279    /*ɾ������*/
#define MINOR_DEL_NETSIG                0x280    /*ɾ���ź�Դ*/
#define MINOR_ADD_PLAN                    0x281    /*���Ԥ��*/
#define MINOR_DEL_PLAN                    0x282    /*ɾ��Ԥ��*/
#define MINOR_GET_EXTERNAL_MATRIX_CFG    0x283    //��ȡ��Ӿ�������
#define MINOR_SET_EXTERNAL_MATRIX_CFG    0x284    //������Ӿ�������
#define    MINOR_GET_USER_CFG                0x285    //��ȡ�û�����
#define    MINOR_SET_USER_CFG                0x286    //�����û�����
#define    MINOR_GET_DISPLAY_PANEL_LINK_CFG 0x287    //��ȡ��ʾǽ��������
#define    MINOR_SET_DISPLAY_PANEL_LINK_CFG 0x288    //������ʾǽ��������

#define    MINOR_GET_WALLSCENE_PARAM        0x289        //��ȡ����ǽ����
#define    MINOR_SET_WALLSCENE_PARAM        0x28a        //���õ���ǽ����
#define    MINOR_GET_CURRENT_WALLSCENE        0x28b        //��ȡ��ǰʹ�ó���
#define    MINOR_SWITCH_WALLSCENE            0x28c        //�����л�
#define    MINOR_SIP_LOGIN                    0x28d        //SIPע��ɹ�
#define MINOR_VOIP_START                0x28e        //VOIP�Խ���ʼ
#define MINOR_VOIP_STOP                    0x28f        //VOIP�Խ�ֹͣ
#define MINOR_WIN_TOP                   0x290       //����ǽ�����ö�
#define MINOR_WIN_BOTTOM                0x291       //����ǽ�����õ�

// Netra 2.2.2
#define MINOR_LOCAL_LOAD_HDISK          0x300            //���ؼ���Ӳ��
#define MINOR_LOCAL_DELETE_HDISK        0x301            //����ɾ���쳣�����ڵ�Ӳ��

//KY2013 3.0.0
#define MINOR_LOCAL_MAIN_AUXILIARY_PORT_SWITCH    0X302 //�����������л�
#define MINOR_LOCAL_HARD_DISK_CHECK                0x303 //��������Ӳ���Լ�

//Netra3.1.0
#define MINOR_LOCAL_CFG_DEVICE_TYPE        0x310    //���������豸����
#define MINOR_REMOTE_CFG_DEVICE_TYPE    0x311    //Զ�������豸����
#define MINOR_LOCAL_CFG_WORK_HOT_SERVER    0x312    //�������ù������ȱ�������
#define MINOR_REMOTE_CFG_WORK_HOT_SERVER 0x313    //Զ�����ù������ȱ�������
#define MINOR_LOCAL_DELETE_WORK            0x314    //����ɾ��������
#define MINOR_REMOTE_DELETE_WORK        0x315    //Զ��ɾ��������
#define    MINOR_LOCAL_ADD_WORK            0x316    //������ӹ�����
#define MINOR_REMOTE_ADD_WORK            0x317    //Զ����ӹ�����
#define MINOR_LOCAL_IPCHEATMAP_OUTPUT   0x318            /* ���ص����ȶ�ͼ�ļ�      */
#define MINOR_LOCAL_IPCHEATFLOW_OUTPUT  0x319          /* ���ص����ȶ������ļ�      */
#define MINOR_REMOTE_SMS_SEND           0x350    /*Զ�̷��Ͷ���*/
#define MINOR_LOCAL_SMS_SEND            0x351   /*���ط��Ͷ���*/
#define MINOR_ALARM_SMS_SEND            0x352    /*���Ͷ��ű���*/
#define MINOR_SMS_RECV                  0x353     /*���ն���*/
//����ע��0x350��0x351��ָ�˹���GUI��IE�ؼ��ϱ༭�����Ͷ��ţ�
#define MINOR_LOCAL_SMS_SEARCH          0x354  /*������������*/
#define MINOR_REMOTE_SMS_SEARCH         0x355   /*Զ����������*/
#define MINOR_LOCAL_SMS_READ            0x356   /*���ز鿴����*/
#define MINOR_REMOTE_SMS_READ           0x357   /*Զ�̲鿴����*/
#define MINOR_REMOTE_DIAL_CONNECT       0x358   /*Զ�̿����ֶ�����*/
#define MINOR_REMOTE_DIAL_DISCONN       0x359   /*Զ��ֹͣ�ֶ�����*/
#define MINOR_LOCAL_WHITELIST_SET       0x35A   /*�������ð�����*/
#define MINOR_REMOTE_WHITELIST_SET      0x35B   /*Զ�����ð�����*/
#define MINOR_LOCAL_DIAL_PARA_SET       0x35C   /*�������ò��Ų���*/
#define MINOR_REMOTE_DIAL_PARA_SET      0x35D   /*Զ�����ò��Ų���*/
#define MINOR_LOCAL_DIAL_SCHEDULE_SET   0x35E   /*�������ò��żƻ�*/
#define MINOR_REMOTE_DIAL_SCHEDULE_SET  0x35F   /*Զ�����ò��żƻ�*/
#define MINOR_PLAT_OPER                 0x360   /* ƽ̨����*/

//0x400-0x1000 �Ž���������
#define MINOR_REMOTE_OPEN_DOOR          0x400   //Զ�̿���
#define MINOR_REMOTE_CLOSE_DOOR         0x401   //Զ�̹���(�ܿ�)
#define MINOR_REMOTE_ALWAYS_OPEN        0x402   //Զ�̳���(����)
#define MINOR_REMOTE_ALWAYS_CLOSE       0x403   //Զ�̳���(����)
#define MINOR_REMOTE_CHECK_TIME         0x404   //Զ���ֶ�Уʱ
#define MINOR_NTP_CHECK_TIME            0x405   //NTP�Զ�Уʱ
#define MINOR_REMOTE_CLEAR_CARD         0x406   //Զ����տ���
#define MINOR_REMOTE_RESTORE_CFG        0x407   //Զ�ָ̻�Ĭ�ϲ���
#define MINOR_ALARMIN_ARM               0x408   //��������
#define MINOR_ALARMIN_DISARM            0x409   //��������
#define MINOR_LOCAL_RESTORE_CFG         0x40a   //���ػָ�Ĭ�ϲ���
#define MINOR_REMOTE_CAPTURE_PIC        0x40b  //Զ��ץ��
#define MINOR_MOD_NET_REPORT_CFG        0x40c   //�޸��������Ĳ�������
#define MINOR_MOD_GPRS_REPORT_PARAM     0x40d   //�޸�GPRS���Ĳ�������
#define MINOR_MOD_REPORT_GROUP_PARAM    0x40e   //�޸��������������
#define    MINOR_UNLOCK_PASSWORD_OPEN_DOOR  0x40f  //���������
#define MINOR_AUTO_RENUMBER              0x410  //�Զ����±��
#define MINOR_AUTO_COMPLEMENT_NUMBER     0x411  //�Զ�������
#define MINOR_NORMAL_CFGFILE_INPUT          0x412   //������ͨ�����ļ�
#define MINOR_NORMAL_CFGFILE_OUTTPUT     0x413   //������ͨ�����ļ�
#define MINOR_CARD_RIGHT_INPUT              0x414   //���뿨Ȩ�޲���
#define MINOR_CARD_RIGHT_OUTTPUT          0x415   //������Ȩ�޲���
#define MINOR_LOCAL_USB_UPGRADE             0x416   //����U������
#define MINOR_REMOTE_VISITOR_CALL_LADDER     0x417  //�ÿͺ���
#define MINOR_REMOTE_HOUSEHOLD_CALL_LADDER   0x418  //ס������
#define MINOR_REMOTE_ACTUAL_GUARD            0x419  //Զ��ʵʱ����
#define MINOR_REMOTE_ACTUAL_UNGUARD          0x41a  //Զ��ʵʱ����
#define MINOR_REMOTE_CONTROL_NOT_CODE_OPER_FAILED     0x41b   //ң����δ�������ʧ��
#define MINOR_REMOTE_CONTROL_CLOSE_DOOR               0x41c   //ң��������
#define MINOR_REMOTE_CONTROL_OPEN_DOOR                0x41d   //ң��������
#define MINOR_REMOTE_CONTROL_ALWAYS_OPEN_DOOR         0x41e   //ң����������

#define MINOR_OPERATION_CUSTOM1        0x900  //�Ž��Զ������1
#define MINOR_OPERATION_CUSTOM2        0x901  //�Ž��Զ������2
#define MINOR_OPERATION_CUSTOM3        0x902  //�Ž��Զ������3
#define MINOR_OPERATION_CUSTOM4        0x903  //�Ž��Զ������4
#define MINOR_OPERATION_CUSTOM5        0x904  //�Ž��Զ������5
#define MINOR_OPERATION_CUSTOM6        0x905  //�Ž��Զ������6
#define MINOR_OPERATION_CUSTOM7        0x906  //�Ž��Զ������7
#define MINOR_OPERATION_CUSTOM8        0x907  //�Ž��Զ������8
#define MINOR_OPERATION_CUSTOM9        0x908  //�Ž��Զ������9
#define MINOR_OPERATION_CUSTOM10       0x909  //�Ž��Զ������10
#define MINOR_OPERATION_CUSTOM11       0x90a  //�Ž��Զ������11
#define MINOR_OPERATION_CUSTOM12       0x90b  //�Ž��Զ������12
#define MINOR_OPERATION_CUSTOM13       0x90c  //�Ž��Զ������13
#define MINOR_OPERATION_CUSTOM14       0x90d  //�Ž��Զ������14
#define MINOR_OPERATION_CUSTOM15       0x90e  //�Ž��Զ������15
#define MINOR_OPERATION_CUSTOM16       0x90f  //�Ž��Զ������16
#define MINOR_OPERATION_CUSTOM17       0x910  //�Ž��Զ������17
#define MINOR_OPERATION_CUSTOM18       0x911  //�Ž��Զ������18
#define MINOR_OPERATION_CUSTOM19       0x912  //�Ž��Զ������19
#define MINOR_OPERATION_CUSTOM20       0x913  //�Ž��Զ������20
#define MINOR_OPERATION_CUSTOM21       0x914  //�Ž��Զ������21
#define MINOR_OPERATION_CUSTOM22       0x915  //�Ž��Զ������22
#define MINOR_OPERATION_CUSTOM23       0x916  //�Ž��Զ������23
#define MINOR_OPERATION_CUSTOM24       0x917  //�Ž��Զ������24
#define MINOR_OPERATION_CUSTOM25       0x918  //�Ž��Զ������25
#define MINOR_OPERATION_CUSTOM26       0x919  //�Ž��Զ������26
#define MINOR_OPERATION_CUSTOM27       0x91a  //�Ž��Զ������27
#define MINOR_OPERATION_CUSTOM28       0x91b  //�Ž��Զ������28
#define MINOR_OPERATION_CUSTOM29       0x91c  //�Ž��Զ������29
#define MINOR_OPERATION_CUSTOM30       0x91d  //�Ž��Զ������30
#define MINOR_OPERATION_CUSTOM31       0x91e  //�Ž��Զ������31
#define MINOR_OPERATION_CUSTOM32       0x91f  //�Ž��Զ������32
#define MINOR_OPERATION_CUSTOM33       0x920  //�Ž��Զ������33
#define MINOR_OPERATION_CUSTOM34       0x921  //�Ž��Զ������34
#define MINOR_OPERATION_CUSTOM35       0x922  //�Ž��Զ������35
#define MINOR_OPERATION_CUSTOM36       0x923  //�Ž��Զ������36
#define MINOR_OPERATION_CUSTOM37       0x924  //�Ž��Զ������37
#define MINOR_OPERATION_CUSTOM38       0x925  //�Ž��Զ������38
#define MINOR_OPERATION_CUSTOM39       0x926  //�Ž��Զ������39
#define MINOR_OPERATION_CUSTOM40       0x927  //�Ž��Զ������40
#define MINOR_OPERATION_CUSTOM41       0x928  //�Ž��Զ������41
#define MINOR_OPERATION_CUSTOM42       0x929  //�Ž��Զ������42
#define MINOR_OPERATION_CUSTOM43       0x92a  //�Ž��Զ������43
#define MINOR_OPERATION_CUSTOM44       0x92b  //�Ž��Զ������44
#define MINOR_OPERATION_CUSTOM45       0x92c  //�Ž��Զ������45
#define MINOR_OPERATION_CUSTOM46       0x92d  //�Ž��Զ������46
#define MINOR_OPERATION_CUSTOM47       0x92e  //�Ž��Զ������47
#define MINOR_OPERATION_CUSTOM48       0x92f  //�Ž��Զ������48
#define MINOR_OPERATION_CUSTOM49       0x930  //�Ž��Զ������49
#define MINOR_OPERATION_CUSTOM50       0x931  //�Ž��Զ������50
#define MINOR_OPERATION_CUSTOM51       0x932  //�Ž��Զ������51
#define MINOR_OPERATION_CUSTOM52       0x933  //�Ž��Զ������52
#define MINOR_OPERATION_CUSTOM53       0x934  //�Ž��Զ������53
#define MINOR_OPERATION_CUSTOM54       0x935  //�Ž��Զ������54
#define MINOR_OPERATION_CUSTOM55       0x936  //�Ž��Զ������55
#define MINOR_OPERATION_CUSTOM56       0x937  //�Ž��Զ������56
#define MINOR_OPERATION_CUSTOM57       0x938  //�Ž��Զ������57
#define MINOR_OPERATION_CUSTOM58       0x939  //�Ž��Զ������58
#define MINOR_OPERATION_CUSTOM59       0x93a  //�Ž��Զ������59
#define MINOR_OPERATION_CUSTOM60       0x93b  //�Ž��Զ������60
#define MINOR_OPERATION_CUSTOM61       0x93c  //�Ž��Զ������61
#define MINOR_OPERATION_CUSTOM62       0x93d  //�Ž��Զ������62
#define MINOR_OPERATION_CUSTOM63       0x93e  //�Ž��Զ������63
#define MINOR_OPERATION_CUSTOM64       0x93f  //�Ž��Զ������64

//2012-03-05 ITC������־����
#define MINOR_SET_TRIGGERMODE_CFG          0x1001    /*���ô���ģʽ����*/
#define MINOR_GET_TRIGGERMODE_CFG          0x1002    /*��ȡ����ģʽ����*/
#define MINOR_SET_IOOUT_CFG                0x1003    /*����IO�������*/
#define MINOR_GET_IOOUT_CFG                0x1004    /*��ȡIO�������*/
#define MINOR_GET_TRIGGERMODE_DEFAULT      0x1005    /*��ȡ����ģʽ�Ƽ�����*/
#define MINOR_GET_ITCSTATUS                0x1006    /*��ȡ״̬������*/
#define MINOR_SET_STATUS_DETECT_CFG        0x1007    /*����״̬������*/
#define MINOR_GET_STATUS_DETECT_CFG        0x1008    /*��ȡ״̬������*/
#define MINOR_SET_VIDEO_TRIGGERMODE_CFG    0x1009  /*������Ƶ����ģʽ����*/
#define MINOR_GET_VIDEO_TRIGGERMODE_CFG    0x100a   /*��ȡ��Ƶ����ģʽ����*/

//2013-04-19 ITS������־����
#define MINOR_LOCAL_ADD_CAR_INFO            0x2001  /*������ӳ�����Ϣ*/
#define MINOR_LOCAL_MOD_CAR_INFO            0x2002  /*�����޸ĳ�����Ϣ*/
#define MINOR_LOCAL_DEL_CAR_INFO            0x2003  /*����ɾ��������Ϣ*/
#define MINOR_LOCAL_FIND_CAR_INFO           0x2004  /*���ز��ҳ�����Ϣ*/
#define MINOR_LOCAL_ADD_MONITOR_INFO        0x2005  /*������Ӳ�����Ϣ*/
#define MINOR_LOCAL_MOD_MONITOR_INFO        0x2006  /*�����޸Ĳ�����Ϣ*/
#define MINOR_LOCAL_DEL_MONITOR_INFO        0x2007  /*����ɾ��������Ϣ*/
#define MINOR_LOCAL_FIND_MONITOR_INFO       0x2008  /*���ز�ѯ������Ϣ*/
#define MINOR_LOCAL_FIND_NORMAL_PASS_INFO   0x2009  /*���ز�ѯ����ͨ����Ϣ*/
#define MINOR_LOCAL_FIND_ABNORMAL_PASS_INFO 0x200a  /*���ز�ѯ�쳣ͨ����Ϣ*/
#define MINOR_LOCAL_FIND_PEDESTRIAN_PASS_INFO   0x200b  /*���ز�ѯ����ͨ����Ϣ*/
#define MINOR_LOCAL_PIC_PREVIEW             0x200c  /*����ͼƬԤ��*/
#define MINOR_LOCAL_SET_GATE_PARM_CFG       0x200d  /*���ñ������ó���ڲ���*/
#define MINOR_LOCAL_GET_GATE_PARM_CFG       0x200e  /*��ȡ�������ó���ڲ���*/
#define MINOR_LOCAL_SET_DATAUPLOAD_PARM_CFG 0x200f  /*���ñ������������ϴ�����*/
#define MINOR_LOCAL_GET_DATAUPLOAD_PARM_CFG 0x2010  /*��ȡ�������������ϴ�����*/

//2013-11-19������־����
#define MINOR_LOCAL_DEVICE_CONTROL                         0x2011   /*�����豸����(���ؿ���բ)*/
#define MINOR_LOCAL_ADD_EXTERNAL_DEVICE_INFO               0x2012   /*�����������豸��Ϣ */
#define MINOR_LOCAL_MOD_EXTERNAL_DEVICE_INFO               0x2013   /*�����޸�����豸��Ϣ */
#define MINOR_LOCAL_DEL_EXTERNAL_DEVICE_INFO               0x2014   /*����ɾ������豸��Ϣ */
#define MINOR_LOCAL_FIND_EXTERNAL_DEVICE_INFO              0x2015   /*���ز�ѯ����豸��Ϣ */
#define MINOR_LOCAL_ADD_CHARGE_RULE                        0x2016   /*��������շѹ��� */
#define MINOR_LOCAL_MOD_CHARGE_RULE                        0x2017   /*�����޸��շѹ��� */
#define MINOR_LOCAL_DEL_CHARGE_RULE                        0x2018   /*����ɾ���շѹ��� */
#define MINOR_LOCAL_FIND_CHARGE_RULE                       0x2019   /*���ز�ѯ�շѹ��� */
#define MINOR_LOCAL_COUNT_NORMAL_CURRENTINFO               0x2020   /*����ͳ������ͨ����Ϣ */
#define MINOR_LOCAL_EXPORT_NORMAL_CURRENTINFO_REPORT       0x2021   /*���ص�������ͨ����Ϣͳ�Ʊ��� */
#define MINOR_LOCAL_COUNT_ABNORMAL_CURRENTINFO             0x2022   /*����ͳ���쳣ͨ����Ϣ */
#define MINOR_LOCAL_EXPORT_ABNORMAL_CURRENTINFO_REPORT     0x2023   /*���ص����쳣ͨ����Ϣͳ�Ʊ��� */
#define MINOR_LOCAL_COUNT_PEDESTRIAN_CURRENTINFO           0x2024   /*����ͳ������ͨ����Ϣ */
#define MINOR_LOCAL_EXPORT_PEDESTRIAN_CURRENTINFO_REPORT   0x2025   /*���ص�������ͨ����Ϣͳ�Ʊ��� */
#define MINOR_LOCAL_FIND_CAR_CHARGEINFO                    0x2026   /*���ز�ѯ�����շ���Ϣ */
#define MINOR_LOCAL_COUNT_CAR_CHARGEINFO                   0x2027   /*����ͳ�ƹ����շ���Ϣ */
#define MINOR_LOCAL_EXPORT_CAR_CHARGEINFO_REPORT           0x2028   /*���ص��������շ���Ϣͳ�Ʊ��� */
#define MINOR_LOCAL_FIND_SHIFTINFO                         0x2029   /*���ز�ѯ���Ӱ���Ϣ */
#define MINOR_LOCAL_FIND_CARDINFO                          0x2030   /*���ز�ѯ��Ƭ��Ϣ */
#define MINOR_LOCAL_ADD_RELIEF_RULE                        0x2031   /*������Ӽ������ */
#define MINOR_LOCAL_MOD_RELIEF_RULE                        0x2032   /*�����޸ļ������ */
#define MINOR_LOCAL_DEL_RELIEF_RULE                        0x2033   /*����ɾ��������� */
#define MINOR_LOCAL_FIND_RELIEF_RULE                       0x2034   /*���ز�ѯ������� */
#define MINOR_LOCAL_GET_ENDETCFG                           0x2035   /*���ػ�ȡ����ڿ��ƻ����߼������ */
#define MINOR_LOCAL_SET_ENDETCFG                           0x2036   /*�������ó���ڿ��ƻ����߼������*/
#define MINOR_LOCAL_SET_ENDEV_ISSUEDDATA                   0x2037   /*�������ó���ڿ��ƻ��·���Ƭ��Ϣ */
#define MINOR_LOCAL_DEL_ENDEV_ISSUEDDATA                   0x2038   /*������ճ���ڿ��ƻ��·���Ƭ��Ϣ */

#define MINOR_REMOTE_DEVICE_CONTROL                        0x2101   /*Զ���豸����*/
#define MINOR_REMOTE_SET_GATE_PARM_CFG                     0x2102   /*����Զ�����ó���ڲ���*/
#define MINOR_REMOTE_GET_GATE_PARM_CFG                     0x2103   /*��ȡԶ�����ó���ڲ���*/
#define MINOR_REMOTE_SET_DATAUPLOAD_PARM_CFG               0x2104   /*����Զ�����������ϴ�����*/
#define MINOR_REMOTE_GET_DATAUPLOAD_PARM_CFG               0x2105   /*��ȡԶ�����������ϴ�����*/
#define MINOR_REMOTE_GET_BASE_INFO                         0x2106   /*Զ�̻�ȡ�ն˻�����Ϣ*/
#define MINOR_REMOTE_GET_OVERLAP_CFG                       0x2107   /*Զ�̻�ȡ�ַ����Ӳ�������*/
#define MINOR_REMOTE_SET_OVERLAP_CFG                       0x2108   /*Զ�������ַ����Ӳ�������*/
#define MINOR_REMOTE_GET_ROAD_INFO                         0x2109   /*Զ�̻�ȡ·����Ϣ*/
#define MINOR_REMOTE_START_TRANSCHAN                       0x210a   /*Զ�̽���ͬ�����ݷ�����*/
#define MINOR_REMOTE_GET_ECTWORKSTATE                      0x210b   /*Զ�̻�ȡ������ն˹���״̬*/
#define MINOR_REMOTE_GET_ECTCHANINFO                       0x210c   /*Զ�̻�ȡ������ն�ͨ��״̬*/

//Զ�̿��� 2013-11-19
#define MINOR_REMOTE_ADD_EXTERNAL_DEVICE_INFO              0x210d   /*Զ���������豸��Ϣ */
#define MINOR_REMOTE_MOD_EXTERNAL_DEVICE_INFO              0x210e   /*Զ���޸�����豸��Ϣ */
#define MINOR_REMOTE_GET_ENDETCFG                          0x210f   /*Զ�̻�ȡ����ڿ��ƻ����߼������ */
#define MINOR_REMOTE_SET_ENDETCFG                          0x2110   /*Զ�����ó���ڿ��ƻ����߼������*/
#define MINOR_REMOTE_ENDEV_ISSUEDDATA                      0x2111   /*Զ�����ó���ڿ��ƻ��·���Ƭ��Ϣ */
#define MINOR_REMOTE_DEL_ENDEV_ISSUEDDATA                  0x2112   /*Զ����ճ���ڿ��ƻ��·���Ƭ��Ϣ */

//ITS 0x2115~0x2120 ͣ������λ��Ŀ
#define MINOR_REMOTE_ON_CTRL_LAMP           0x2115  /*����Զ�̿��Ƴ�λָʾ��*/
#define MINOR_REMOTE_OFF_CTRL_LAMP          0x2116  /*�ر�Զ�̿��Ƴ�λָʾ��*/
//Netra3.1.0
#define MINOR_SET_VOICE_LEVEL_PARAM         0x2117  /*����������С */
#define MINOR_SET_VOICE_INTERCOM_PARAM      0x2118  /*��������¼�� */
#define MINOR_SET_INTELLIGENT_PARAM         0x2119  /*��������*/
#define MINOR_LOCAL_SET_RAID_SPEED          0x211a  /*��������raid�ٶ�*/
#define MINOR_REMOTE_SET_RAID_SPEED         0x211b /*Զ������raid�ٶ�*/
//Nerta3.1.2
#define MINOR_REMOTE_CREATE_STORAGE_POOL    0x211c   //Զ����Ӵ洢��
#define MINOR_REMOTE_DEL_STORAGE_POOL       0x211d    //Զ��ɾ���洢��

#define MINOR_REMOTE_DEL_PIC                0x2120   //Զ��ɾ��ͼƬ����
#define MINOR_REMOTE_DEL_RECORD             0x2121   //Զ��ɾ��¼������
#define MINOR_REMOTE_CLOUD_ENABLE           0x2123  //Զ��������ϵͳ����
#define MINOR_REMOTE_CLOUD_DISABLE          0x2124  //Զ��������ϵͳ����
#define MINOR_REMOTE_CLOUD_MODIFY_PARAM     0x2125  //Զ���޸Ĵ洢�ز���
#define MINOR_REMOTE_CLOUD_MODIFY_VOLUME    0x2126  //Զ���޸Ĵ洢������
#define MINOR_REMOTE_GET_GB28181_SERVICE_PARAM    0x2127  //Զ�̻�ȡGB28181�������
#define MINOR_REMOTE_SET_GB28181_SERVICE_PARAM    0x2128  //Զ������GB28181�������
#define MINOR_LOCAL_GET_GB28181_SERVICE_PARAM     0x2129  //���ػ�ȡGB28181�������
#define MINOR_LOCAL_SET_GB28181_SERVICE_PARAM     0x212a  //��������B28181�������
#define MINOR_REMOTE_SET_SIP_SERVER               0x212b  //Զ������SIP SERVER
#define MINOR_LOCAL_SET_SIP_SERVER                0x212c  //��������SIP SERVER
#define MINOR_LOCAL_BLACKWHITEFILE_OUTPUT         0x212d  //���غڰ���������
#define MINOR_LOCAL_BLACKWHITEFILE_INPUT          0x212e  //���غڰ���������
#define MINOR_REMOTE_BALCKWHITECFGFILE_OUTPUT     0x212f  //Զ�̺ڰ���������
#define MINOR_REMOTE_BALCKWHITECFGFILE_INPUT      0x2130  //Զ�̺ڰ���������


#define MINOR_REMOTE_CREATE_MOD_VIEWLIB_SPACE        0x2200    /*Զ�̴���/�޸���ͼ��ռ�*/
#define MINOR_REMOTE_DELETE_VIEWLIB_FILE            0x2201    /*Զ��ɾ����ͼ���ļ�*/
#define MINOR_REMOTE_DOWNLOAD_VIEWLIB_FILE            0x2202    /*Զ��������ͼ���ļ�*/
#define MINOR_REMOTE_UPLOAD_VIEWLIB_FILE            0x2203    /*Զ���ϴ���ͼ���ļ�*/
#define MINOR_LOCAL_CREATE_MOD_VIEWLIB_SPACE        0x2204    /*���ش���/�޸���ͼ��ռ�*/

#define MINOR_LOCAL_SET_DEVICE_ACTIVE   0x3000  //���ؼ����豸
#define MINOR_REMOTE_SET_DEVICE_ACTIVE  0x3001  //Զ�̼����豸
#define MINOR_LOCAL_PARA_FACTORY_DEFAULT    0x3002  //���ػظ���������
#define MINOR_REMOTE_PARA_FACTORY_DEFAULT   0x3003  //Զ�ָ̻���������

/*��Ϣ����������������־*/
#define MINOR_UPLAOD_STATIC_MATERIAL                0x2401  //��̬�ز��ϴ�
#define MINOR_UPLOAD_DYNAMIC_MATERIAL               0x2402  //��̬�ز��ϴ�
#define MINOR_DELETE_MATERIAL                       0x2403  //ɾ���ز�
#define MINOR_DOWNLOAD_STATIC_MATERIAL              0x2404  //��̬�ز�����
#define MINOR_COVER_STATIC_MATERIAL                 0x2405  //��̬�زĸ���
#define MINOR_APPROVE_MATERIAL                      0x2406  //�ز����
#define MINOR_UPLAOD_PROGRAM                        0x2407  //�ϴ���Ŀ
#define MINOR_DOWNLOAD_PROGRAM                      0x2408  //���ؽ�Ŀ
#define MINOR_DELETE_PROGRAM                        0x2409  //ɾ����Ŀ
#define MINOR_MODIFY_PROGRAM                        0x240a  //��Ŀ�����޸�
#define MINOR_APPROVE_PRAGRAM                       0x240b  //��Ŀ���
#define MINOR_UPLAOD_SCHEDULE                       0x240c  //�ϴ��ճ�
#define MINOR_DOWNLOAD_SCHEDULE                     0x240d  //�����ճ�
#define MINOR_DELETE_SCHEDULE                       0x240e  //ɾ���ճ�
#define MINOR_MODIFY_SCHEDULE                       0x240f  //�޸��ճ�����
#define MINOR_RELEASE_SCHEDULE                      0x2410  //�����ճ�
#define MINOR_ADD_TERMINAL                          0x2411  //����ն�
#define MINOR_DELETE_TERMINAL                       0x2412  //ɾ���ն�
#define MINOR_MODIFY_TERMIANL_PARAM                 0x2413  //�޸��ն˲���
#define MINOR_MODIFY_TERMIANL_PLAY_PARAM            0x2414  //�����ն˲��Ų���
#define MINOR_ADD_TERMIANL_GROUP                    0x2415  //����ն���
#define MINOR_MODIFY_TERMINAL_GROUP_PARAM           0x2416  //�޸��ն������
#define MINOR_DELETE_TERMIANL_GROUP                 0x2417  //ɾ���ն���
#define MINOR_TERMINAL_PLAY_CONTROL                 0x2418  //�ն˲��ſ���
#define MINOR_TERMINAL_ON_OFF_LINE                  0x2419  //�ն�������
#define MINOR_SET_SWITCH_PLAN                       0x241a  //�����ն˶�ʱ���ػ��ƻ�
#define MINOR_SET_VOLUME_PLAN                       0x241b  //�����ն˶�ʱ�����ƻ�
#define MINOR_TERMINAL_SCREENSHOT                   0x241c  //�ն˽���


#define MINOR_REMOTE_CONFERENCE_CONFIG             0x2501  //MCU��������
#define MINOR_REMOTE_TERMINAL_CONFIG               0x2502  //MCU�ն�����
#define MINOR_REMOTE_GROUP_CONFIG                  0x2503  //MCU��������
#define MINOR_REMOTE_CONFERENCE_CTRL               0x2504  //MCU�������
#define MINOR_REMOTE_TERMINAL_CTRL                 0x2505  //MCU�ն˿���

//NVR���
#define MINOR_LOCAL_RESET_LOGIN_PASSWORD           0x2600    /* ��������admin��½����*/
#define MINOR_REMOTE_RESET_LOGIN_PASSWORD          0x2601    /* Զ������admin��¼���� */
#define MINOR_LOCAL_FACE_BASE_CREATE        0x2602    /* ���������Աȿⴴ��*/
#define MINOR_REMOTE_FACE_BASE_CREATE       0x2603    /* Զ�������Աȿⴴ��*/
#define MINOR_LOCAL_FACE_BASE_MODIFY        0x2604    /* ���������Աȿ��޸�*/
#define MINOR_REMOTE_FACE_BASE_MODIFY      0x2605    /* Զ�������Աȿ��޸�*/
#define MINOR_LOCAL_FACE_BASE_DELETE        0x2606    /* ���������Աȿ�ɾ��*/
#define MINOR_REMOTE_FACE_BASE_DELETE       0x2607    /* Զ�������Աȿ�ɾ��*/
#define MINOR_LOCAL_FACE_DATA_APPEND        0x2608    /* ����¼����������*/
#define MINOR_REMOTE_FACE_DATA_APPEND       0x2609    /* Զ��¼����������*/
#define MINOR_LOCAL_FACE_DATA_SEARCH       0x2610    /* ���������ȶ����ݲ���*/
#define MINOR_REMOTE_FACE_DATA_SEARCH       0x2611    /* Զ�������ȶ����ݲ���*/
#define MINOR_LOCAL_FACE_DATA_ANALYSIS        0x2612    /* ����ͼƬ��������*/
#define MINOR_REMOTE_FACE_DATA_ANALYSIS       0x2613    /* Զ��ͼƬ��������*/
#define MINOR_LOCAL_FACE_DATA_EDIT            0x2614    /* �������������޸�*/
#define MINOR_REMOTE_FACE_DATA_EDIT           0x2615    /* Զ�����������޸�*/

#define MINOR_LOCAL_FACE_DATA_DELETE          0x2616    /* ������������ɾ��*/
#define MINOR_REMOTE_FACE_DATA_DELET          0x2617    /* Զ����������ɾ��*/

#define MINOR_LOCAL_VCA_ANALYSIS_CFG          0x2618    /* �������ܷ�������*/
#define MINOR_REMOTE_VCA_ANALYSIS_CFG         0x2619    /* Զ�����ܷ�������*/

/*��־������Ϣ*/
//������
#define MAJOR_INFORMATION               0x4     /*������Ϣ*/
//������
#define MINOR_HDD_INFO                  0xa1 /*Ӳ����Ϣ*/
#define MINOR_SMART_INFO                0xa2 /*SMART��Ϣ*/
#define MINOR_REC_START                 0xa3 /*��ʼ¼��*/
#define MINOR_REC_STOP                  0xa4 /*ֹͣ¼��*/
#define MINOR_REC_OVERDUE                0xa5 /*����¼��ɾ��*/
#define MINOR_LINK_START                0xa6 //����ǰ���豸
#define MINOR_LINK_STOP                    0xa7 //�Ͽ�ǰ���豸��
#define MINOR_NET_DISK_INFO                0xa8 //����Ӳ����Ϣ
#define MINOR_RAID_INFO                 0xa9 //raid�����Ϣ
#define MINOR_RUN_STATUS_INFO           0xaa /*ϵͳ����״̬��Ϣ*/

//Netra3.0.0
#define MINOR_SPARE_START_BACKUP        0xab   /*�ȱ�ϵͳ��ʼ����ָ��������*/
#define MINOR_SPARE_STOP_BACKUP            0xac   /*�ȱ�ϵͳֹͣ����ָ��������*/
#define MINOR_SPARE_CLIENT_INFO         0xad   /*�ȱ��ͻ�����Ϣ*/
#define MINOR_ANR_RECORD_START            0xae   /*ANR¼��ʼ*/
#define MINOR_ANR_RECORD_END            0xaf   /*ANR¼�����*/
#define MINOR_ANR_ADD_TIME_QUANTUM        0xb0    /*ANR���ʱ���*/
#define MINOR_ANR_DEL_TIME_QUANTUM        0xb1    /*ANRɾ��ʱ���*/

#define MINOR_PIC_REC_START             0xb3  /* ��ʼץͼ*/
#define MINOR_PIC_REC_STOP              0xb4  /* ֹͣץͼ*/
#define MINOR_PIC_REC_OVERDUE           0xb5  /* ����ͼƬ�ļ�ɾ�� */
//Netra3.1.0
#define  MINOR_CLIENT_LOGIN             0xb6   /*��¼�������ɹ�*/
#define  MINOR_CLIENT_RELOGIN            0xb7   /*���µ�¼������*/
#define  MINOR_CLIENT_LOGOUT            0xb8   /*�˳��������ɹ�*/
#define  MINOR_CLIENT_SYNC_START        0xb9   /*¼��ͬ����ʼ*/
#define  MINOR_CLIENT_SYNC_STOP            0xba   /*¼��ͬ����ֹ*/
#define  MINOR_CLIENT_SYNC_SUCC            0xbb   /*¼��ͬ���ɹ�*/
#define  MINOR_CLIENT_SYNC_EXCP            0xbc   /*¼��ͬ���쳣*/
#define  MINOR_GLOBAL_RECORD_ERR_INFO   0xbd   /*ȫ�ִ����¼��Ϣ*/
#define  MINOR_BUFFER_STATE             0xbe   /*������״̬��־��¼*/
#define  MINOR_DISK_ERRORINFO_V2        0xbf   /*Ӳ�̴�����ϸ��ϢV2*/
#define  MINOR_CS_DATA_EXPIRED          0xc0   //�ƴ洢���ݹ���
#define  MINOR_PLAT_INFO                0xc1   //ƽ̨������Ϣ
#define  MINOR_DIAL_STAT                0xc2   /*����״̬*/

#define MINOR_UNLOCK_RECORD             0xc3   //������¼
#define MINOR_VIS_ALARM                 0xc4   //��������
#define MINOR_TALK_RECORD               0xc5   //ͨ����¼
#define MINOR_ACCESSORIES_MESSAGE       0xc6 //�������Ϣ
#define MINOR_KMS_EXPAMSION_DISK_INSERT 0xc7// KMS�����̲���
#define MINOR_IPC_CONNECT               0xc8//  IPC����
#define MINOR_INTELLIGENT_BOARD_STATUS  0xc9//  ���ܰ�״̬
#define MINOR_EZVIZ_OPERATION           0xcc   //өʯ����״̬
/*�¼�*/
//������
#define MAJOR_EVENT                             0x5     /*�¼�*/
//������
#define MINOR_LEGAL_CARD_PASS                   0x01    //�Ϸ�����֤ͨ��
#define MINOR_CARD_AND_PSW_PASS                 0x02    //ˢ����������֤ͨ��
#define MINOR_CARD_AND_PSW_FAIL                 0x03    //ˢ����������֤ʧ��
#define MINOR_CARD_AND_PSW_TIMEOUT              0x04    //������������֤��ʱ
#define MINOR_CARD_AND_PSW_OVER_TIME            0x05    //ˢ�������볬��
#define MINOR_CARD_NO_RIGHT                     0x06    //δ����Ȩ��
#define MINOR_CARD_INVALID_PERIOD               0x07    //��Чʱ��
#define MINOR_CARD_OUT_OF_DATE                  0x08    //���Ź���
#define MINOR_INVALID_CARD                      0x09    //�޴˿���
#define MINOR_ANTI_SNEAK_FAIL                   0x0a    //��Ǳ����֤ʧ��
#define MINOR_INTERLOCK_DOOR_NOT_CLOSE          0x0b    //������δ�ر�
#define MINOR_NOT_BELONG_MULTI_GROUP            0x0c    //�������ڶ�����֤Ⱥ��
#define MINOR_INVALID_MULTI_VERIFY_PERIOD       0x0d    //�����ڶ�����֤ʱ�����
#define MINOR_MULTI_VERIFY_SUPER_RIGHT_FAIL     0x0e    //������֤ģʽ����Ȩ����֤ʧ��
#define MINOR_MULTI_VERIFY_REMOTE_RIGHT_FAIL    0x0f    //������֤ģʽԶ����֤ʧ��
#define MINOR_MULTI_VERIFY_SUCCESS              0x10    //������֤�ɹ�
#define MINOR_LEADER_CARD_OPEN_BEGIN            0x11    //�׿����ſ�ʼ
#define MINOR_LEADER_CARD_OPEN_END              0x12    //�׿����Ž���
#define MINOR_ALWAYS_OPEN_BEGIN                 0x13    //����״̬��ʼ
#define MINOR_ALWAYS_OPEN_END                   0x14    //����״̬����
#define MINOR_LOCK_OPEN                         0x15    //������
#define MINOR_LOCK_CLOSE                        0x16    //�����ر�
#define MINOR_DOOR_BUTTON_PRESS                 0x17    //���Ű�ť��
#define MINOR_DOOR_BUTTON_RELEASE               0x18    //���Ű�ť�ſ�
#define MINOR_DOOR_OPEN_NORMAL                  0x19    //�������ţ��Ŵţ�
#define MINOR_DOOR_CLOSE_NORMAL                 0x1a    //�������ţ��Ŵţ�
#define MINOR_DOOR_OPEN_ABNORMAL                0x1b    //���쳣�򿪣��Ŵţ�
#define MINOR_DOOR_OPEN_TIMEOUT                 0x1c    //�Ŵ򿪳�ʱ���Ŵţ�
#define MINOR_ALARMOUT_ON                       0x1d    //���������
#define MINOR_ALARMOUT_OFF                      0x1e    //��������ر�
#define MINOR_ALWAYS_CLOSE_BEGIN                0x1f    //����״̬��ʼ
#define MINOR_ALWAYS_CLOSE_END                  0x20    //����״̬����
#define MINOR_MULTI_VERIFY_NEED_REMOTE_OPEN     0x21    //���ض�����֤��ҪԶ�̿���
#define MINOR_MULTI_VERIFY_SUPERPASSWD_VERIFY_SUCCESS  0x22  //������֤����������֤�ɹ��¼�
#define MINOR_MULTI_VERIFY_REPEAT_VERIFY        0x23    //������֤�ظ���֤�¼�
#define MINOR_MULTI_VERIFY_TIMEOUT               0x24    //������֤�ظ���֤�¼�
#define MINOR_DOORBELL_RINGING                  0x25    //������
#define MINOR_FINGERPRINT_COMPARE_PASS          0x26    //ָ�Ʊȶ�ͨ��
#define MINOR_FINGERPRINT_COMPARE_FAIL          0x27    //ָ�Ʊȶ�ʧ��
#define MINOR_CARD_FINGERPRINT_VERIFY_PASS              0x28    //ˢ����ָ����֤ͨ��
#define MINOR_CARD_FINGERPRINT_VERIFY_FAIL              0x29    //ˢ����ָ����֤ʧ��
#define MINOR_CARD_FINGERPRINT_VERIFY_TIMEOUT           0x2a    //ˢ����ָ����֤��ʱ
#define MINOR_CARD_FINGERPRINT_PASSWD_VERIFY_PASS       0x2b    //ˢ����ָ�Ƽ�������֤ͨ��
#define MINOR_CARD_FINGERPRINT_PASSWD_VERIFY_FAIL       0x2c    //ˢ����ָ�Ƽ�������֤ʧ��
#define MINOR_CARD_FINGERPRINT_PASSWD_VERIFY_TIMEOUT    0x2d    //ˢ����ָ�Ƽ�������֤��ʱ
#define MINOR_FINGERPRINT_PASSWD_VERIFY_PASS            0x2e    //ָ�Ƽ�������֤ͨ��
#define MINOR_FINGERPRINT_PASSWD_VERIFY_FAIL            0x2f    //ָ�Ƽ�������֤ʧ��
#define MINOR_FINGERPRINT_PASSWD_VERIFY_TIMEOUT         0x30    //ָ�Ƽ�������֤��ʱ
#define MINOR_FINGERPRINT_INEXISTENCE                   0x31    //ָ�Ʋ�����
#define MINOR_CARD_PLATFORM_VERIFY                      0x32    //ˢ��ƽ̨��֤
#define MINOR_CALL_CENTER                               0x33    //���������¼�
#define MINOR_FIRE_RELAY_TURN_ON_DOOR_ALWAYS_OPEN       0x34    //�����̵�����ͨ�����ų���
#define MINOR_FIRE_RELAY_RECOVER_DOOR_RECOVER_NORMAL    0x35   //�����̵����ָ��Żָ�����
#define MINOR_FACE_AND_FP_VERIFY_PASS                   0x36    //������ָ����֤ͨ��
#define MINOR_FACE_AND_FP_VERIFY_FAIL                   0x37    //������ָ����֤ʧ��
#define MINOR_FACE_AND_FP_VERIFY_TIMEOUT                0x38    //������ָ����֤��ʱ
#define MINOR_FACE_AND_PW_VERIFY_PASS                   0x39    //������������֤ͨ��
#define MINOR_FACE_AND_PW_VERIFY_FAIL                   0x3a    //������������֤ʧ��
#define MINOR_FACE_AND_PW_VERIFY_TIMEOUT                0x3b    //������������֤��ʱ
#define MINOR_FACE_AND_CARD_VERIFY_PASS                 0x3c    //������ˢ����֤ͨ��
#define MINOR_FACE_AND_CARD_VERIFY_FAIL                 0x3d    //������ˢ����֤ʧ��
#define MINOR_FACE_AND_CARD_VERIFY_TIMEOUT              0x3e    //������ˢ����֤��ʱ
#define MINOR_FACE_AND_PW_AND_FP_VERIFY_PASS            0x3f    //�����������ָ����֤ͨ��
#define MINOR_FACE_AND_PW_AND_FP_VERIFY_FAIL            0x40    //�����������ָ����֤ʧ��
#define MINOR_FACE_AND_PW_AND_FP_VERIFY_TIMEOUT         0x41    //�����������ָ����֤��ʱ
#define MINOR_FACE_CARD_AND_FP_VERIFY_PASS              0x42    //������ˢ����ָ����֤ͨ��
#define MINOR_FACE_CARD_AND_FP_VERIFY_FAIL              0x43    //������ˢ����ָ����֤ʧ��
#define MINOR_FACE_CARD_AND_FP_VERIFY_TIMEOUT           0x44    //������ˢ����ָ����֤��ʱ
#define MINOR_EMPLOYEENO_AND_FP_VERIFY_PASS             0x45    //���ż�ָ����֤ͨ��
#define MINOR_EMPLOYEENO_AND_FP_VERIFY_FAIL             0x46    //���ż�ָ����֤ʧ��
#define MINOR_EMPLOYEENO_AND_FP_VERIFY_TIMEOUT          0x47    //���ż�ָ����֤��ʱ
#define MINOR_EMPLOYEENO_AND_FP_AND_PW_VERIFY_PASS      0x48    //���ż�ָ�Ƽ�������֤ͨ��
#define MINOR_EMPLOYEENO_AND_FP_AND_PW_VERIFY_FAIL      0x49    //���ż�ָ�Ƽ�������֤ʧ��
#define MINOR_EMPLOYEENO_AND_FP_AND_PW_VERIFY_TIMEOUT   0x4a    //���ż�ָ�Ƽ�������֤��ʱ
#define MINOR_FACE_VERIFY_PASS                          0x4b    //������֤ͨ��
#define MINOR_FACE_VERIFY_FAIL                          0x4c    //������֤ʧ��
#define MINOR_EMPLOYEENO_AND_FACE_VERIFY_PASS           0x4d    //���ż�������֤ͨ��
#define MINOR_EMPLOYEENO_AND_FACE_VERIFY_FAIL           0x4e    //���ż�������֤ʧ��
#define MINOR_EMPLOYEENO_AND_FACE_VERIFY_TIMEOUT        0x4f    //���ż�������֤��ʱ
#define MINOR_FACE_RECOGNIZE_FAIL                       0x50    //����ʶ��ʧ��
#define MINOR_FIRSTCARD_AUTHORIZE_BEGIN                    0x51    //�׿���Ȩ��ʼ
#define MINOR_FIRSTCARD_AUTHORIZE_END                    0x52    //�׿���Ȩ����
#define MINOR_DOORLOCK_INPUT_SHORT_CIRCUIT                0x53    //���������·����
#define MINOR_DOORLOCK_INPUT_BROKEN_CIRCUIT                0x54    //���������·����
#define MINOR_DOORLOCK_INPUT_EXCEPTION                    0x55    //���������쳣����
#define MINOR_DOORCONTACT_INPUT_SHORT_CIRCUIT            0x56    //�Ŵ������·����
#define MINOR_DOORCONTACT_INPUT_BROKEN_CIRCUIT            0x57    //�Ŵ������·����
#define MINOR_DOORCONTACT_INPUT_EXCEPTION                0x58    //�Ŵ������쳣����
#define MINOR_OPENBUTTON_INPUT_SHORT_CIRCUIT            0x59    //���Ű�ť�����·����
#define MINOR_OPENBUTTON_INPUT_BROKEN_CIRCUIT            0x5a    //���Ű�ť�����·����
#define MINOR_OPENBUTTON_INPUT_EXCEPTION                0x5b    //���Ű�ť�����쳣����
#define MINOR_DOORLOCK_OPEN_EXCEPTION                    0x5c    //�����쳣��
#define MINOR_DOORLOCK_OPEN_TIMEOUT                        0x5d    //�����򿪳�ʱ
#define MINOR_FIRSTCARD_OPEN_WITHOUT_AUTHORIZE            0x5e    //�׿�δ��Ȩ����ʧ��
#define MINOR_CALL_LADDER_RELAY_BREAK                   0x5f    //���ݼ̵����Ͽ�
#define MINOR_CALL_LADDER_RELAY_CLOSE                   0x60    //���ݼ̵����պ�
#define MINOR_AUTO_KEY_RELAY_BREAK                      0x61    //�Զ������̵����Ͽ�
#define MINOR_AUTO_KEY_RELAY_CLOSE                      0x62    //�Զ������̵����պ�
#define MINOR_KEY_CONTROL_RELAY_BREAK                   0x63    //�����ݿؼ̵����Ͽ�
#define MINOR_KEY_CONTROL_RELAY_CLOSE                   0x64    //�����ݿؼ̵����պ�
#define MINOR_EMPLOYEENO_AND_PW_PASS                    0x65    //���ż�������֤ͨ��
#define MINOR_EMPLOYEENO_AND_PW_FAIL                    0x66    //���ż�������֤ʧ��
#define MINOR_EMPLOYEENO_AND_PW_TIMEOUT                 0x67    //���ż�������֤��ʱ
#define MINOR_HUMAN_DETECT_FAIL                         0x68    //���˼��ʧ��
#define MINOR_PEOPLE_AND_ID_CARD_COMPARE_PASS           0x69    //��֤�ȶ�ͨ��
#define MINOR_PEOPLE_AND_ID_CARD_COMPARE_FAIL           0x70    //��֤�ȶ�ʧ��
#define MINOR_CERTIFICATE_BLACK_LIST                    0x71    //�������¼�
#define MINOR_LEGAL_MESSAGE                             0x72    //�Ϸ�����
#define MINOR_ILLEGAL_MESSAGE                           0x73    //�Ƿ�����
#define MINOR_MAC_DETECT                                0x74    //MAC���
#define MINOR_DOOR_OPEN_OR_DORMANT_FAIL                 0x75   //��״̬���ջ�����״̬��֤ʧ��
#define MINOR_AUTH_PLAN_DORMANT_FAIL                    0x76   //��֤�ƻ�����ģʽ��֤ʧ��
#define MINOR_CARD_ENCRYPT_VERIFY_FAIL                  0x77   //������У��ʧ��
#define MINOR_SUBMARINEBACK_REPLY_FAIL                  0x78   //��Ǳ�ط�����Ӧ��ʧ��
#define MINOR_DOOR_OPEN_OR_DORMANT_OPEN_FAIL            0x82   //�ų��ջ�����ʱ���Ű�ť����ʧ��
#define MINOR_HEART_BEAT                                0x83    //�����¼�
#define MINOR_DOOR_OPEN_OR_DORMANT_LINKAGE_OPEN_FAIL    0x84   //�ų��ջ�����ʱ������������ʧ��
#define MINOR_TRAILING                                  0x85   //β��ͨ��
#define MINOR_REVERSE_ACCESS                            0x86   //������
#define MINOR_FORCE_ACCESS                              0x87   //������ײ
#define MINOR_CLIMBING_OVER_GATE                        0x88   //��Խ
#define MINOR_PASSING_TIMEOUT                           0x89   //ͨ�г�ʱ
#define MINOR_INTRUSION_ALARM                           0x8a   //�󴳱���
#define MINOR_FREE_GATE_PASS_NOT_AUTH                   0x8b   //բ������ͨ��ʱδ��֤ͨ��
#define MINOR_DROP_ARM_BLOCK                            0x8c   //�ڱ۱��赲
#define MINOR_DROP_ARM_BLOCK_RESUME                     0x8d   //�ڱ��赲����

#define MINOR_EVENT_CUSTOM1                         0x500  //�Ž��Զ����¼�1
#define MINOR_EVENT_CUSTOM2                         0x501  //�Ž��Զ����¼�2
#define MINOR_EVENT_CUSTOM3                         0x502  //�Ž��Զ����¼�3
#define MINOR_EVENT_CUSTOM4                         0x503  //�Ž��Զ����¼�4
#define MINOR_EVENT_CUSTOM5                         0x504  //�Ž��Զ����¼�5
#define MINOR_EVENT_CUSTOM6                         0x505  //�Ž��Զ����¼�6
#define MINOR_EVENT_CUSTOM7                         0x506  //�Ž��Զ����¼�7
#define MINOR_EVENT_CUSTOM8                         0x507  //�Ž��Զ����¼�8
#define MINOR_EVENT_CUSTOM9                         0x508  //�Ž��Զ����¼�9
#define MINOR_EVENT_CUSTOM10                        0x509  //�Ž��Զ����¼�10
#define MINOR_EVENT_CUSTOM11                        0x50a  //�Ž��Զ����¼�11
#define MINOR_EVENT_CUSTOM12                        0x50b  //�Ž��Զ����¼�12
#define MINOR_EVENT_CUSTOM13                        0x50c  //�Ž��Զ����¼�13
#define MINOR_EVENT_CUSTOM14                        0x50d  //�Ž��Զ����¼�14
#define MINOR_EVENT_CUSTOM15                        0x50e  //�Ž��Զ����¼�15
#define MINOR_EVENT_CUSTOM16                        0x50f  //�Ž��Զ����¼�16
#define MINOR_EVENT_CUSTOM17                        0x510  //�Ž��Զ����¼�17
#define MINOR_EVENT_CUSTOM18                        0x511  //�Ž��Զ����¼�18
#define MINOR_EVENT_CUSTOM19                        0x512  //�Ž��Զ����¼�19
#define MINOR_EVENT_CUSTOM20                        0x513  //�Ž��Զ����¼�20
#define MINOR_EVENT_CUSTOM21                        0x514  //�Ž��Զ����¼�21
#define MINOR_EVENT_CUSTOM22                        0x515  //�Ž��Զ����¼�22
#define MINOR_EVENT_CUSTOM23                        0x516  //�Ž��Զ����¼�23
#define MINOR_EVENT_CUSTOM24                        0x517  //�Ž��Զ����¼�24
#define MINOR_EVENT_CUSTOM25                        0x518  //�Ž��Զ����¼�25
#define MINOR_EVENT_CUSTOM26                        0x519  //�Ž��Զ����¼�26
#define MINOR_EVENT_CUSTOM27                        0x51a  //�Ž��Զ����¼�27
#define MINOR_EVENT_CUSTOM28                        0x51b  //�Ž��Զ����¼�28
#define MINOR_EVENT_CUSTOM29                        0x51c  //�Ž��Զ����¼�29
#define MINOR_EVENT_CUSTOM30                        0x51d  //�Ž��Զ����¼�30
#define MINOR_EVENT_CUSTOM31                        0x51e  //�Ž��Զ����¼�31
#define MINOR_EVENT_CUSTOM32                        0x51f  //�Ž��Զ����¼�32
#define MINOR_EVENT_CUSTOM33                        0x520  //�Ž��Զ����¼�33
#define MINOR_EVENT_CUSTOM34                        0x521  //�Ž��Զ����¼�34
#define MINOR_EVENT_CUSTOM35                        0x522  //�Ž��Զ����¼�35
#define MINOR_EVENT_CUSTOM36                        0x523  //�Ž��Զ����¼�36
#define MINOR_EVENT_CUSTOM37                        0x524  //�Ž��Զ����¼�37
#define MINOR_EVENT_CUSTOM38                        0x525  //�Ž��Զ����¼�38
#define MINOR_EVENT_CUSTOM39                        0x526  //�Ž��Զ����¼�39
#define MINOR_EVENT_CUSTOM40                        0x527  //�Ž��Զ����¼�40
#define MINOR_EVENT_CUSTOM41                        0x528  //�Ž��Զ����¼�41
#define MINOR_EVENT_CUSTOM42                        0x529  //�Ž��Զ����¼�42
#define MINOR_EVENT_CUSTOM43                        0x52a  //�Ž��Զ����¼�43
#define MINOR_EVENT_CUSTOM44                        0x52b  //�Ž��Զ����¼�44
#define MINOR_EVENT_CUSTOM45                        0x52c  //�Ž��Զ����¼�45
#define MINOR_EVENT_CUSTOM46                        0x52d  //�Ž��Զ����¼�46
#define MINOR_EVENT_CUSTOM47                        0x52e  //�Ž��Զ����¼�47
#define MINOR_EVENT_CUSTOM48                        0x52f  //�Ž��Զ����¼�48
#define MINOR_EVENT_CUSTOM49                        0x530  //�Ž��Զ����¼�49
#define MINOR_EVENT_CUSTOM50                        0x531  //�Ž��Զ����¼�50
#define MINOR_EVENT_CUSTOM51                        0x532  //�Ž��Զ����¼�51
#define MINOR_EVENT_CUSTOM52                        0x533  //�Ž��Զ����¼�52
#define MINOR_EVENT_CUSTOM53                        0x534  //�Ž��Զ����¼�53
#define MINOR_EVENT_CUSTOM54                        0x535  //�Ž��Զ����¼�54
#define MINOR_EVENT_CUSTOM55                        0x536  //�Ž��Զ����¼�55
#define MINOR_EVENT_CUSTOM56                        0x537  //�Ž��Զ����¼�56
#define MINOR_EVENT_CUSTOM57                        0x538  //�Ž��Զ����¼�57
#define MINOR_EVENT_CUSTOM58                        0x539  //�Ž��Զ����¼�58
#define MINOR_EVENT_CUSTOM59                        0x53a  //�Ž��Զ����¼�59
#define MINOR_EVENT_CUSTOM60                        0x53b  //�Ž��Զ����¼�60
#define MINOR_EVENT_CUSTOM61                        0x53c  //�Ž��Զ����¼�61
#define MINOR_EVENT_CUSTOM62                        0x53d  //�Ž��Զ����¼�62
#define MINOR_EVENT_CUSTOM63                        0x53e  //�Ž��Զ����¼�63
#define MINOR_EVENT_CUSTOM64                        0x53f  //�Ž��Զ����¼�64

typedef enum tagALARMHOST_MAJOR_TYPE
{
    MAJOR_ALARMHOST_ALARM = 1,
        MAJOR_ALARMHOST_EXCEPTION,
        MAJOR_ALARMHOST_OPERATION,
        MAJ0R_ALARMHOST_EVENT
}ALARMHOST_MAJOR_TYPE;

typedef enum tagALARMHOST_MINOR_TYPE
{
    // ����
    MINOR_SHORT_CIRCUIT =0x01,      // ��·����
        MINOR_BROKEN_CIRCUIT,           // ��·����
        MINOR_ALARM_RESET,              // ������λ
        MINOR_ALARM_NORMAL,                // �����ָ�����
        MINOR_PASSWORD_ERROR,            // �����������3�������������
        MINOR_ID_CARD_ILLEGALLY,        // �Ƿ���Ӧ��ID
        MINOR_KEYPAD_REMOVE,            // ���̷���
        MINOR_KEYPAD_REMOVE_RESTORE,    // ���̷���λ
        MINOR_DEV_REMOVE,                // �豸����
        MINOR_DEV_REMOVE_RESTORE,        // �豸����λ
        MINOR_BELOW_ALARM_LIMIT1,        // ģ�������ڱ�����1
        MINOR_BELOW_ALARM_LIMIT2,        // ģ�������ڱ�����2
        MINOR_BELOW_ALARM_LIMIT3,        // ģ�������ڱ�����3
        MINOR_BELOW_ALARM_LIMIT4,        // ģ�������ڱ�����4
        MINOR_ABOVE_ALARM_LIMIT1,        // ģ�������ڱ�����1
        MINOR_ABOVE_ALARM_LIMIT2,        // ģ�������ڱ�����2
        MINOR_ABOVE_ALARM_LIMIT3,        // ģ�������ڱ�����3
        MINOR_ABOVE_ALARM_LIMIT4,        // ģ�������ڱ�����4
        MINOR_URGENCYBTN_ON,            // ������ť����
        MINOR_URGENCYBTN_OFF,            // ������ť��λ
        MINOR_VIRTUAL_DEFENCE_BANDIT,            //������˾�
        MINOR_VIRTUAL_DEFENCE_FIRE,                //�������
        MINOR_VIRTUAL_DEFENCE_URGENT,            //���������
        MINOR_ALARMHOST_MOTDET_START,            //�ƶ���ⱨ����ʼ
        MINOR_ALARMHOST_MOTDET_STOP,            //�ƶ���ⱨ������
        MINOR_ALARMHOST_HIDE_ALARM_START,        //�ڵ�������ʼ
        MINOR_ALARMHOST_HIDE_ALARM_STOP,        //�ڵ���������
        MINOR_ALARMHOST_UPS_ALARM,                //UPS����
        MINOR_ALARMHOST_ELECTRICITY_METER_ALARM, //��������
        MINOR_ALARMHOST_SWITCH_POWER_ALARM,        //���ص�Դ����
        MINOR_ALARMHOST_GAS_DETECT_SYS_ALARM,      //������ϵͳ����
        MINOR_ALARMHOST_TRANSFORMER_TEMPRATURE_ALARM, //��������Ա���
        MINOR_ALARMHOST_TEMP_HUMI_ALARM,            //��ʪ�ȴ���������
        MINOR_ALARMHOST_UPS_ALARM_RESTORE,    //UPS�����ָ�
        MINOR_ALARMHOST_ELECTRICITY_METER_ALARM_RESTORE, //���������ָ�
        MINOR_ALARMHOST_SWITCH_POWER_ALARM_RESTORE,      //���ص�Դ�����ָ�
        MINOR_ALARMHOST_GAS_DETECT_SYS_ALARM_RESTORE,      //������ϵͳ�����ָ�
        MINOR_ALARMHOST_TRANSFORMER_TEMPRATURE_ALARM_RESTORE, //��������Ա����ָ�
        MINOR_ALARMHOST_TEMP_HUMI_ALARM_RESTORE,          //��ʪ�ȴ����������ָ�
        MINOR_ALARMHOST_WATER_LEVEL_SENSOR_ALARM,            //ˮλ����������
        MINOR_ALARMHOST_WATER_LEVEL_SENSOR_ALARM_RESTORE,    //ˮλ�����������ָ�
        MINOR_ALARMHOST_DUST_NOISE_ALARM,                    //�ﳾ��������������
        MINOR_ALARMHOST_DUST_NOISE_ALARM_RESTORE,            //�ﳾ���������������ָ�
        MINOR_ALARMHOST_ENVIRONMENTAL_LOGGER_ALARM,            //�����ɼ��Ǳ���
        MINOR_ALARMHOST_ENVIRONMENTAL_LOGGER_ALARM_RESTORE,    //�����ɼ��Ǳ����ָ�

        MINOR_ALARMHOST_TRIGGER_TAMPER,                //̽��������
        MINOR_ALARMHOST_TRIGGER_TAMPER_RESTORE,                //̽��������ָ�
        MINOR_ALARMHOST_EMERGENCY_CALL_HELP_ALARM,            //����������������
        MINOR_ALARMHOST_EMERGENCY_CALL_HELP_ALARM_RESTORE,    //�����������������ָ�
        MINOR_ALARMHOST_CONSULTING_ALARM,                     //ҵ����ѯ����
        MINOR_ALARMHOST_CONSULTING_ALARM_RESTORE,             //ҵ����ѯ�����ָ�
        MINOR_ZONE_MODULE_REMOVE,            // ����ģ�����
        MINOR_ZONE_MODULE_RESET,    // ����ģ�����λ

        // �쳣
        MINOR_POWER_ON      = 0x01,    // �ϵ�
        MINOR_POWER_OFF,                // ����
        MINOR_WDT_RESET,                // WDT ��λ
        MINOR_LOW_BATTERY_VOLTAGE,        // ���ص�ѹ��
        MINOR_AC_LOSS,                    // ������ϵ�
        MINOR_AC_RESTORE,                // ������ָ�
        MINOR_RTC_EXCEPTION,            // RTCʵʱʱ���쳣
        MINOR_NETWORK_CONNECT_FAILURE,    // �������Ӷ�
        MINOR_NETWORK_CONNECT_RESTORE,    // �������ӻָ�
        MINOR_TEL_LINE_CONNECT_FAILURE,    // �绰�����Ӷ�
        MINOR_TEL_LINE_CONNECT_RESTORE,    // �绰�����ӻָ�
        MINOR_EXPANDER_BUS_LOSS,        // ��չ����ģ�����
        MINOR_EXPANDER_BUS_RESTORE,        // ��չ����ģ����߻ָ�
        MINOR_KEYPAD_BUS_LOSS,            // ��������ģ�����
        MINOR_KEYPAD_BUS_RESTORE,        // ��������ģ����߻ָ�
        MINOR_SENSOR_FAILURE,            // ģ��������������
        MINOR_SENSOR_RESTORE,            // ģ�����������ָ�
        MINOR_RS485_CONNECT_FAILURE,    // RS485ͨ�����Ӷ�
        MINOR_RS485_CONNECT_RESTORE,    // RS485ͨ�����Ӷϻָ�
        MINOR_BATTERT_VOLTAGE_RESTORE,  // ���ص�ѹ�ָ�����
        MINOR_WIRED_NETWORK_ABNORMAL,    //���������쳣
        MINOR_WIRED_NETWORK_RESTORE,    //��������ָ�����
        MINOR_GPRS_ABNORMAL,            //GPRSͨ���쳣
        MINOR_GPRS_RESTORE,                //GPRS�ָ�����
        MINOR_3G_ABNORMAL,                //3Gͨ���쳣
        MINOR_3G_RESTORE,                //3G�ָ�����
        MINOR_SIM_CARD_ABNORMAL,        //SIM���쳣
        MINOR_SIM_CARD_RESTORE,            //SIM���ָ�����
        MINOR_ALARMHOST_VI_LOST,        // ��Ƶ�źŶ�ʧ
        MINOR_ALARMHOST_ILLEGAL_ACCESS,    // �Ƿ�����
        MINOR_ALARMHOST_HD_FULL,        // Ӳ����
        MINOR_ALARMHOST_HD_ERROR,        // Ӳ�̴���
        MINOR_ALARMHOST_DCD_LOST,        // MODEM ����(������ʹ��)
        MINOR_ALARMHOST_IP_CONFLICT,    // IP��ַ��ͻ
        MINOR_ALARMHOST_NET_BROKEN,        // ����Ͽ�
        MINOR_ALARMHOST_REC_ERROR,      // ¼�����
        MINOR_ALARMHOST_VI_EXCEPTION,   // ��Ƶ�����쳣(ֻ���ģ��ͨ��)
        MINOR_ALARMHOST_FORMAT_HDD_ERROR, //Զ�̸�ʽ��Ӳ��ʧ��
        MINOR_ALARMHOST_USB_ERROR,        //USBͨ�Ź���
        MINOR_ALARMHOST_USB_RESTORE,    //USBͨ�Ź��ϻָ�
        MINOR_ALARMHOST_PRINT_ERROR,    //��ӡ������
        MINOR_ALARMHOST_PRINT_RESTORE,    //��ӡ�����ϻָ�
        MINOR_SUBSYSTEM_COMMUNICATION_ERROR, //�Ӱ�ͨѶ����
        MINOR_ALARMHOST_IPC_NO_LINK,                /* IPC���ӶϿ�  */
        MINOR_ALARMHOST_IPC_IP_CONFLICT,            /*ipc ip ��ַ ��ͻ*/
        MINOR_ALARMHOST_VI_MISMATCH,                /*��Ƶ��ʽ��ƥ��*/
        MINOR_ALARMHOST_MCU_RESTART,                //MCU����
        MINOR_ALARMHOST_GPRS_MODULE_FAULT,          //GPRSģ�����
        MINOR_ALARMHOST_TELEPHONE_MODULE_FAULT,     //�绰ģ�����
        MINOR_ALARMHOST_WIFI_ABNORMAL,              //WIFIͨ���쳣
        MINOR_ALARMHOST_WIFI_RESTORE,               //WIFI�ָ�����
        MINOR_ALARMHOST_RF_ABNORMAL,                //RF�ź��쳣
        MINOR_ALARMHOST_RF_RESTORE,                 //RF�źŻָ�����
        MINOR_ALARMHOST_DETECTOR_ONLINE,            //̽��������
        MINOR_ALARMHOST_DETECTOR_OFFLINE,           //̽��������
        MINOR_ALARMHOST_DETECTOR_BATTERY_NORMAL,    //̽������������
        MINOR_ALARMHOST_DETECTOR_BATTERY_LOW,       //̽��������Ƿѹ
        MINOR_ALARMHOST_DATA_TRAFFIC_OVERFLOW,     //��������
        MINOR_ZONE_MODULE_LOSS,            // ����ģ�����
        MINOR_ZONE_MODULE_RESTORE,        // ����ģ����߻ָ�
        MINOR_ALARMHOST_WIRELESS_OUTPUT_LOSS,   //�������ģ������
        MINOR_ALARMHOST_WIRELESS_OUTPUT_RESTORE,   //�������ģ��ָ�����
        MINOR_ALARMHOST_WIRELESS_REPEATER_LOSS,   //�����м�������
        MINOR_ALARMHOST_WIRELESS_REPEATER_RESTORE,   //�����м����ָ�����
        MINOR_TRIGGER_MODULE_LOSS,            // ������ģ�����
        MINOR_TRIGGER_MODULE_RESTORE,        // ������ģ����߻ָ�


        // ����
        MINOR_GUARD         = 0x01,        // ��ͨ����
        MINOR_UNGUARD,                    // ��ͨ����
        MINOR_BYPASS,                    // ��·
        MINOR_DURESS_ACCESS,            // Ю��
        MINOR_ALARMHOST_LOCAL_REBOOT,    // ��������
        MINOR_ALARMHOST_REMOTE_REBOOT,    // Զ������
        MINOR_ALARMHOST_LOCAL_UPGRADE,    // ��������
        MINOR_ALARMHOST_REMOTE_UPGRADE,    // Զ������
        MINOR_RECOVERY_DEFAULT_PARAM,    // �ָ�Ĭ�ϲ���
        MINOR_ALARM_OUTPUT,                // ���Ʊ������
        MINOR_ACCESS_OPEN,                // �����Ž���
        MINOR_ACCESS_CLOSE,                // �����Ž���
        MINOR_SIREN_OPEN,                // ���ƾ��ſ�
        MINOR_SIREN_CLOSE,                // ���ƾ��Ź�
        MINOR_MOD_ZONE_CONFIG,            // �޸ķ�������
        MINOR_MOD_ALARMOUT_CONIFG,        // ���Ʊ����������
        MINOR_MOD_ANALOG_CONFIG,        // �޸�ģ��������
        MINOR_RS485_CONFIG,                // �޸�485ͨ������
        MINOR_PHONE_CONFIG,                // �޸Ĳ�������
        MINOR_ADD_ADMIN,                // ���ӹ���Ա
        MINOR_MOD_ADMIN_PARAM,            // �޸Ĺ���Ա����
        MINOR_DEL_ADMIN,                // ɾ������Ա
        MINOR_ADD_NETUSER,                // ���Ӻ�˲���Ա
        MINOR_MOD_NETUSER_PARAM,        // �޸ĺ�˲���Ա����
        MINOR_DEL_NETUSER,                // ɾ����˲���Ա
        MINOR_ADD_OPERATORUSER,            // ����ǰ�˲���Ա
        MINOR_MOD_OPERATORUSER_PW,        // �޸�ǰ�˲���Ա����
        MINOR_DEL_OPERATORUSER,            // ɾ��ǰ�˲���Ա
        MINOR_ADD_KEYPADUSER,            // ���Ӽ���/�������û�
        MINOR_DEL_KEYPADUSER,            // ɾ������/�������û�
        MINOR_REMOTEUSER_LOGIN,            // Զ���û���½
        MINOR_REMOTEUSER_LOGOUT,        // Զ���û�ע��
        MINOR_REMOTE_GUARD,                // Զ�̲���
        MINOR_REMOTE_UNGUARD,            // Զ�̳���
        MINOR_MOD_HOST_CONFIG,          // �޸���������
        MINOR_RESTORE_BYPASS,            // ��·�ָ�
        MINOR_ALARMOUT_OPEN,            // �����������
        MINOR_ALARMOUT_CLOSE,            // ��������ر�
        MINOR_MOD_SUBSYSTEM_PARAM,        // �޸���ϵͳ��������
        MINOR_GROUP_BYPASS,                // ����·
        MINOR_RESTORE_GROUP_BYPASS,        // ����·�ָ�
        MINOR_MOD_GRPS_PARAM,            // �޸�GPRS����
        MINOR_MOD_NET_REPORT_PARAM,        // �޸������ϱ���������
        MINOR_MOD_REPORT_MOD,            // �޸��ϴ���ʽ����
        MINOR_MOD_GATEWAY_PARAM,        // �޸��Ž���������
        MINOR_ALARMHOST_REMOTE_START_REC,        // Զ�̿�ʼ¼��
        MINOR_ALARMHOST_REMOTE_STOP_REC,        // Զ��ֹͣ¼��
        MINOR_ALARMHOST_START_TRANS_CHAN,        // ��ʼ͸������
        MINOR_ALARMHOST_STOP_TRANS_CHAN,        // ֹͣ͸������
        MINOR_ALARMHOST_START_VT,                // ��ʼ�����Խ�
        MINOR_ALARMHOST_STOP_VTM,                // ֹͣ�����Խ�
        MINOR_ALARMHOST_REMOTE_PLAYBYFILE,        // Զ�̰��ļ��ط�
        MINOR_ALARMHOST_REMOTE_PLAYBYTIME,      // Զ�̰�ʱ��ط�
        MINOR_ALARMHOST_REMOTE_PTZCTRL,            // Զ����̨����
        MINOR_ALARMHOST_REMOTE_FORMAT_HDD,      // Զ�̸�ʽ��Ӳ��
        MINOR_ALARMHOST_REMOTE_LOCKFILE,        // Զ�������ļ�
        MINOR_ALARMHOST_REMOTE_UNLOCKFILE,      // Զ�̽����ļ�
        MINOR_ALARMHOST_REMOTE_CFGFILE_OUTPUT,  // Զ�̵��������ļ�
        MINOR_ALARMHOST_REMOTE_CFGFILE_INTPUT,  // Զ�̵��������ļ�
        MINOR_ALARMHOST_REMOTE_RECFILE_OUTPUT,  // Զ�̵���¼���ļ�

        MINOR_ALARMHOST_STAY_ARM,                        //���ز���
        MINOR_ALARMHOST_QUICK_ARM,                        //��ʱ����
        MINOR_ALARMHOST_AUTOMATIC_ARM,                    //�Զ�����
        MINOR_ALARMHOST_AUTOMATIC_DISARM,                //�Զ�����
        MINOR_ALARMHOST_KEYSWITCH_ARM,                    //Կ�׷�������
        MINOR_ALARMHOST_KEYSWITCH_DISARM,                //Կ�׷�������
        MINOR_ALARMHOST_CLEAR_ALARM,                    //����
        MINOR_ALARMHOST_MOD_FAULT_CFG,                    //�޸�ϵͳ��������
        MINOR_ALARMHOST_MOD_EVENT_TRIGGER_ALARMOUT_CFG,    //�޸��¼����������������
        MINOR_ALARMHOST_SEARCH_EXTERNAL_MODULE,            //�������ģ��
        MINOR_ALARMHOST_REGISTER_EXTERNAL_MODULE,        //����ע�����ģ��
        MINOR_ALARMHOST_CLOSE_KEYBOARD_ALARM,            //�رռ��̱�����ʾ��
        MINOR_ALARMHOST_MOD_3G_PARAM,                    //�޸�3G����
        MINOR_ALARMHOST_MOD_PRINT_PARAM, //�޸Ĵ�ӡ������
        MINOR_SD_CARD_FORMAT,        //SD����ʽ��
        MINOR_SUBSYSTEM_UPGRADE,        //�Ӱ�̼�����

        MINOR_ALARMHOST_PLAN_ARM_CFG,    //�ƻ���������������
        MINOR_ALARMHOST_PHONE_ARM,        //�ֻ�����
        MINOR_ALARMHOST_PHONE_STAY_ARM,    //�ֻ����ز���
        MINOR_ALARMHOST_PHONE_QUICK_ARM,//�ֻ���ʱ����
        MINOR_ALARMHOST_PHONE_DISARM,    //�ֻ�����
        MINOR_ALARMHOST_PHONE_CLEAR_ALARM,    //�ֻ�����
        MINOR_ALARMHOST_WHITELIST_CFG,    //����������
        MINOR_ALARMHOST_TIME_TRIGGER_CFG,            //��ʱ���ش���������
        MINOR_ALARMHOST_CAPTRUE_CFG,                //ץͼ��������
        MINOR_ALARMHOST_TAMPER_CFG,                //���������������

        MINOR_ALARMHOST_REMOTE_KEYPAD_UPGRADE,               //Զ����������
        MINOR_ALARMHOST_ONETOUCH_AWAY_ARMING,                //һ���������
        MINOR_ALARMHOST_ONETOUCH_STAY_ARMING,                //һ�����ز���
        MINOR_ALARMHOST_SINGLE_PARTITION_ARMING_OR_DISARMING,    //������������
        MINOR_ALARMHOST_CARD_CONFIGURATION,         //����������
        MINOR_ALARMHOST_CARD_ARMING_OR_DISARMING,         //ˢ��������
        MINOR_ALARMHOST_EXPENDING_NETCENTER_CONFIGURATION,         //��չ������������
        MINOR_ALARMHOST_NETCARD_CONFIGURATION,         //��������
        MINOR_ALARMHOST_DDNS_CONFIGURATION,         //DDNS����
        MINOR_ALARMHOST_RS485BUS_CONFIGURATION,        // 485���߲�������
        MINOR_ALARMHOST_RS485BUS_RE_REGISTRATION,            //485��������ע��

        MINOR_ALARMHOST_REMOTE_OPEN_ELECTRIC_LOCK,    //Զ�̴򿪵���
        MINOR_ALARMHOST_REMOTE_CLOSE_ELECTRIC_LOCK,    //Զ�̹رյ���
        MINOR_ALARMHOST_LOCAL_OPEN_ELECTRIC_LOCK,    //���ش򿪵���
        MINOR_ALARMHOST_LOCAL_CLOSE_ELECTRIC_LOCK,    //���عرյ���
        MINOR_ALARMHOST_OPEN_ALARM_LAMP,            //�򿪾���(Զ��)
        MINOR_ALARMHOST_CLOSE_ALARM_LAMP,            //�رվ���(Զ��)


        MINOR_ALARMHOST_TEMPORARY_PASSWORD,         //��ʱ���������¼
        MINOR_ALARMHOST_ONEKEY_AWAY_ARM,            //һ���������
        MINOR_ALARMHOST_ONEKEY_STAY_ARM,            //һ�����ز���
        MINOR_ALARMHOST_SINGLE_ZONE_ARM,            //����������
        MINOR_ALARMHOST_SINGLE_ZONE_DISARM,         //����������
        MINOR_ALARMHOST_HIDDNS_CONFIG,                // HIDDNS����
        MINOR_ALARMHOST_REMOTE_KEYBOARD_UPDATA,     //Զ�̼���������־
        MINOR_ALARMHOST_ZONE_ADD_DETECTOR,          //�������̽����
        MINOR_ALARMHOST_ZONE_DELETE_DETECTOR,       //����ɾ��̽����
        MINOR_ALARMHOST_QUERY_DETECTOR_SIGNAL,      //������ѯ̽�����ź�ǿ��
        MINOR_ALARMHOST_QUERY_DETECTOR_BATTERY,     //������ѯ̽��������
        MINOR_ALARMHOST_SET_DETECTOR_GUARD,         //̽��������
        MINOR_ALARMHOST_SET_DETECTOR_UNGUARD,       //̽��������
        MINOR_ALARMHOST_SET_WIFI_PARAMETER,         //����WIFI���ò���
        MINOR_ALARMHOST_OPEN_VOICE,                 //������
        MINOR_ALARMHOST_CLOSE_VOICE,                //�ر�����
        MINOR_ALARMHOST_ENABLE_FUNCTION_KEY,        //���ù��ܼ�
        MINOR_ALARMHOST_DISABLE_FUNCTION_KEY,        //�رչ��ܼ�
        MINOR_ALARMHOST_READ_CARD,                  //Ѳ��ˢ��
        MINOR_ALARMHOST_START_BROADCAST,             //�������㲥
        MINOR_ALARMHOST_STOP_BROADCAST,               //�ر������㲥
        MINOR_ALARMHOST_REMOTE_ZONE_MODULE_UPGRADE,            //Զ����������ģ��
        MINOR_ALARMHOST_NETWORK_MODULE_EXTEND,    //����ģ���������
        MINOR_ALARMHOST_ADD_CONTROLLER,		//���ң�����û�
        MINOR_ALARMHOST_DELETE_CONTORLLER,		//ɾ��ң�����û�
        MINOR_ALARMHOST_REMOTE_NETWORKMODULE_UPGRADE,            //Զ����������ģ��

        MINOR_ALARMHOST_LOCAL_SET_DEVICE_ACTIVE = 0xf0,        //���ؼ����豸
        MINOR_ALARMHOST_REMOTE_SET_DEVICE_ACTIVE = 0xf1,        //Զ�̼����豸
        MINOR_ALARMHOST_LOCAL_PARA_FACTORY_DEFAULT = 0xf2,    //���ػظ���������
        MINOR_ALARMHOST_REMOTE_PARA_FACTORY_DEFAULT = 0xf3,    //Զ�ָ̻���������


        // �¼�
        MINOR_SCHOOLTIME_IRGI_B = 0x01,        // B��Уʱ
        MINOR_SCHOOLTIME_SDK,                // SDKУʱ
        MINOR_SCHOOLTIME_SELFTEST,            // ��ʱ�Լ�Уʱ
        MINOR_SUBSYSTEM_ABNORMALINSERT,        //�Ӱ����
        MINOR_SUBSYSTEM_ABNORMALPULLOUT,        //�Ӱ�γ�

        MINOR_AUTO_ARM,                    //�Զ�����
        MINOR_AUTO_DISARM,                //�Զ�����
        MINOR_TIME_TIGGER_ON,            //��ʱ����������
        MINOR_TIME_TIGGER_OFF,            //��ʱ�رմ�����
        MINOR_AUTO_ARM_FAILD,            //�Զ�����ʧ��
        MINOR_AUTO_DISARM_FAILD,        //�Զ�����ʧ��
        MINOR_TIME_TIGGER_ON_FAILD,        //��ʱ����������ʧ��
        MINOR_TIME_TIGGER_OFF_FAILD,    //��ʱ�رմ�����ʧ��
        MINOR_MANDATORY_ALARM,            //ǿ�Ʋ���
        MINOR_KEYPAD_LOCKED,            //��������
        MINOR_USB_INSERT,               //USB����
        MINOR_USB_PULLOUT,              //USB�γ�
}ALARMHOST_MINOR_TYPE;


//����־��������ΪMAJOR_OPERATION=03��������ΪMINOR_LOCAL_CFG_PARM=0x52����MINOR_REMOTE_GET_PARM=0x76
//����MINOR_REMOTE_CFG_PARM=0x77ʱ��dwParaType:����������Ч���京�����£�
#define PARA_VIDEOOUT    0x1
#define PARA_IMAGE        0x2
#define PARA_ENCODE        0x4
#define PARA_NETWORK    0x8
#define PARA_ALARM        0x10
#define PARA_EXCEPTION    0x20
#define PARA_DECODER    0x40    /*������*/
#define PARA_RS232        0x80
#define PARA_PREVIEW    0x100
#define PARA_SECURITY    0x200
#define PARA_DATETIME    0x400
#define PARA_FRAMETYPE    0x800    /*֡��ʽ*/
#define PARA_DETECTION  0x1000   //�������
#define PARA_VCA_RULE   0x1001  //��Ϊ����
#define PARA_VCA_CTRL   0x1002  //�������ܿ�����Ϣ
#define PARA_VCA_PLATE  0x1003 // ����ʶ��

#define PARA_CODESPLITTER 0x2000 /*���������*/
//2010-01-22 ������Ƶ�ۺ�ƽ̨��־��Ϣ������
#define PARA_RS485          0x2001            /* RS485������Ϣ*/
#define PARA_DEVICE          0x2002            /* �豸������Ϣ*/
#define PARA_HARDDISK      0x2003            /* Ӳ��������Ϣ */
#define PARA_AUTOBOOT      0x2004            /* �Զ�����������Ϣ*/
#define PARA_HOLIDAY      0x2005            /* �ڼ���������Ϣ*/
#define PARA_IPC          0x2006            /* IPͨ������ */
/*************************������������ end*******************************/


/*******************�����ļ�����־��������ֵ*************************/
#define NET_DVR_FILE_SUCCESS            1000    //����ļ���Ϣ
#define NET_DVR_FILE_NOFIND                1001    //û���ļ�
#define NET_DVR_ISFINDING                1002    //���ڲ����ļ�
#define    NET_DVR_NOMOREFILE                1003    //�����ļ�ʱû�и�����ļ�
#define    NET_DVR_FILE_EXCEPTION            1004    //�����ļ�ʱ�쳣

/*********************�ص��������� begin************************/

//�����ص�����
#define COMM_ALARM                           0x1100    //8000������Ϣ�����ϴ�

//��ӦNET_VCA_RULE_ALARM
#define COMM_ALARM_RULE                      0x1102     //��Ϊ����������Ϣ
#define COMM_ALARM_PDC                       0x1103  //����ͳ�Ʊ�����Ϣ
#define COMM_ALARM_VIDEOPLATFORM             0x1104  //��Ƶ�ۺ�ƽ̨����
#define COMM_ALARM_ALARMHOST                 0x1105  //���籨����������
#define COMM_ALARM_FACE                      0x1106  //�������ʶ�𱨾���Ϣ
#define COMM_RULE_INFO_UPLOAD                0x1107  // �¼�������Ϣ�ϴ�
#define COMM_ALARM_AID                       0x1110  //��ͨ�¼�������Ϣ
#define COMM_ALARM_TPS                       0x1111  //��ͨ����ͳ�Ʊ�����Ϣ
//��������ץ�Ľ���ϴ�
#define COMM_UPLOAD_FACESNAP_RESULT          0x1112  //����ʶ�����ϴ�
#define COMM_ALARM_TFS                       0x1113  //��ͨȡ֤������Ϣ
#define COMM_ALARM_TPS_V41                   0x1114  //��ͨ����ͳ�Ʊ�����Ϣ��չ
#define COMM_ALARM_AID_V41                   0x1115  //��ͨ�¼�������Ϣ��չ
#define COMM_ALARM_VQD_EX                    0x1116     //��Ƶ������ϱ���
#define COMM_SENSOR_VALUE_UPLOAD             0x1120  //ģ��������ʵʱ�ϴ�
#define COMM_SENSOR_ALARM                    0x1121  //ģ���������ϴ�
#define COMM_SWITCH_ALARM                    0x1122     //����������
#define COMM_ALARMHOST_EXCEPTION             0x1123  //�����������ϱ���
#define COMM_ALARMHOST_OPERATEEVENT_ALARM    0x1124  //�����¼������ϴ�
#define COMM_ALARMHOST_SAFETYCABINSTATE      0x1125     //������״̬
#define COMM_ALARMHOST_ALARMOUTSTATUS        0x1126     //���������/����״̬
#define COMM_ALARMHOST_CID_ALARM               0x1127     //���汨���ϴ�
#define    COMM_ALARMHOST_EXTERNAL_DEVICE_ALARM 0x1128     //������������豸�����ϴ�
#define COMM_ALARMHOST_DATA_UPLOAD           0x1129     //���������ϴ�
#define COMM_FACECAPTURE_STATISTICS_RESULT   0x112a  //����ץ��ͳ���ϴ�
#define COMM_SCENECHANGE_DETECTION_UPLOAD     0x1130     //������������ϴ�(����)2013-7-16
#define COMM_CROSSLINE_ALARM                 0x1131    //ѹ�߱���(����) 2013-09-27
#define COMM_UPLOAD_VIDEO_INTERCOM_EVENT     0x1132  //���ӶԽ��¼���¼�ϴ�
#define COMM_ALARM_VIDEO_INTERCOM               0x1133  //���ӶԽ������ϴ�
#define COMM_ALARM_AUDIOEXCEPTION             0x1150     //����������Ϣ
#define COMM_ALARM_DEFOCUS                   0x1151     //�齹������Ϣ
#define COMM_ALARM_BUTTON_DOWN_EXCEPTION     0x1152     //��ť���±�����Ϣ
#define COMM_ALARM_ALARMGPS                  0x1202  //GPS������Ϣ�ϴ�
#define    COMM_TRADEINFO                       0x1500  //ATMDVR�����ϴ�������Ϣ
#define COMM_UPLOAD_PLATE_RESULT             0x2800     //�ϴ�������Ϣ
#define COMM_ITC_STATUS_DETECT_RESULT        0x2810  //ʵʱ״̬������ϴ�(���ܸ���IPC)
#define COMM_IPC_AUXALARM_RESULT             0x2820  //PIR���������߱��������ȱ����ϴ�
#define COMM_UPLOAD_PICTUREINFO              0x2900     //�ϴ�ͼƬ��Ϣ
#define COMM_SNAP_MATCH_ALARM                0x2902  //�������ȶԽ���ϴ�
#define COMM_ITS_PLATE_RESULT                0x3050  //�ն�ͼƬ�ϴ�
#define    COMM_ITS_TRAFFIC_COLLECT             0x3051  //�ն�ͳ�������ϴ�
#define COMM_ITS_GATE_VEHICLE                0x3052  //����ڳ���ץ�������ϴ�
#define COMM_ITS_GATE_FACE                   0x3053  //���������ץ�������ϴ�
#define COMM_ITS_GATE_COSTITEM                 0x3054  //����ڹ����շ���ϸ 2013-11-19
#define COMM_ITS_GATE_HANDOVER                 0x3055  //����ڽ��Ӱ����� 2013-11-19
#define COMM_ITS_PARK_VEHICLE                0x3056  //ͣ���������ϴ�
#define COMM_ITS_BLACKLIST_ALARM             0x3057  //�����������ϴ�

#define COMM_VEHICLE_CONTROL_LIST_DSALARM    0x3058  //�ڰ�����������Ҫͬ������2013-11-04
#define COMM_VEHICLE_CONTROL_ALARM           0x3059  //��������2013-11-04
#define COMM_FIRE_ALARM                      0x3060  //��������2013-11-04

#define COMM_ITS_GATE_ALARMINFO              0x3061  //����ڿ��ƻ������ϴ�

#define COMM_VEHICLE_RECOG_RESULT            0x3062  //��������ʶ�����ϴ� 2014-11-12
#define COMM_PLATE_RESULT_V50                0x3063  //�����ϴ� V50

#define COMM_GATE_CHARGEINFO_UPLOAD          0x3064  //����ڸ�����Ϣ�ϴ�
#define COMM_TME_VEHICLE_INDENTIFICATION     0x3065  //TME����ץͼ�ϴ�
#define COMM_GATE_CARDINFO_UPLOAD            0x3066  //����ڿ�Ƭ��Ϣ�ϴ�

#define COMM_ALARM_SENSORINFO_UPLOAD         0x3077     //�������ϴ���Ϣ
#define COMM_ALARM_CAPTURE_UPLOAD             0x3078     //ץ��ͼƬ�ϴ�

#define COMM_ITS_RADARINFO                   0x3079  //�״ﱨ���ϴ�

#define COMM_SIGNAL_LAMP_ABNORMAL            0x3080  //�źŵ��쳣����ϴ�

#define COMM_ALARM_TPS_REAL_TIME             0x3081  //TPSʵʱ���������ϴ�
#define COMM_ALARM_TPS_STATISTICS            0x3082  //TPSͳ�ƹ��������ϴ�

#define COMM_ALARM_V30                         0x4000     //9000������Ϣ�����ϴ�
#define COMM_IPCCFG                             0x4001     //9000�豸IPC�������øı䱨����Ϣ�����ϴ�
#define COMM_IPCCFG_V31                         0x4002     //9000�豸IPC�������øı䱨����Ϣ�����ϴ���չ 9000_1.1
#define COMM_IPCCFG_V40                      0x4003  // IVMS 2000 ��������� NVR IPC�������øı�ʱ������Ϣ�ϴ�
#define COMM_ALARM_DEVICE                    0x4004  //�豸�������ݣ�����ͨ��ֵ����256����չ
#define COMM_ALARM_CVR                         0x4005  //CVR 2.0.X�ⲿ��������
#define COMM_ALARM_HOT_SPARE                 0x4006  //�ȱ��쳣������N+1ģʽ�쳣������
#define COMM_ALARM_V40                         0x4007    //�ƶ���⣬��Ƶ��ʧ���ڵ���IO�ź����ȱ�����Ϣ�����ϴ�����������Ϊ�ɱ䳤

#define COMM_UPLOAD_HEATMAP_RESULT           0x4008 //�ȶ�ͼ�����ϴ� 2014-03-21
#define COMM_ALARM_DEVICE_V40                0x4009  //�豸����������չ
#define COMM_ALARM_FACE_DETECTION            0x4010 //������ⱨ��
#define COMM_ALARM_TARGET_LEFT_REGION        0x4011 //���Ŀ���뿪������򱨾�(��ʦ����ѧ������(���������л�¼���������Ƽ��ѧ�������))
#define COMM_GISINFO_UPLOAD                  0x4012 //GIS��Ϣ�ϴ�
#define COMM_VANDALPROOF_ALARM               0x4013 //�ϴ����ƻ�������Ϣ
#define COMM_PEOPLE_DETECTION_UPLOAD         0x4014 //��Ա�����Ϣ�ϴ�
#define COMM_ALARM_STORAGE_DETECTION         0x4015 //�洢���ܼ�ⱨ���ϴ�
#define    COMM_ITS_ROAD_EXCEPTION                 0x4500     //·���豸�쳣����
#define    COMM_ITS_EXTERNAL_CONTROL_ALARM         0x4520  //��ر���
#define COMM_ALARM_SHIPSDETECTION             0x4521    // ��ֻ��ⱨ����Ϣ
#define COMM_FIREDETECTION_ALARM             0x4991 //����ⱨ��
#define COMM_ALARM_DENSEFOGDETECTION    0x4992     //�����ⱨ����Ϣ
#define COMM_VCA_ALARM                     0x4993     //���ܼ�ⱨ��
#define COMM_FACE_THERMOMETRY_ALARM        0x4994     //�������±���

#define    COMM_SCREEN_ALARM                    0x5000  //������������������
#define COMM_DVCS_STATE_ALARM                 0x5001  //�ֲ�ʽ���������������ϴ�
#define COMM_ALARM_ACS                         0x5002  //�Ž���������
#define COMM_ALARM_FIBER_CONVERT             0x5003  //�����շ�������
#define COMM_ALARM_SWITCH_CONVERT             0x5004  //����������
#define COMM_ALARM_DEC_VCA                   0x5010  //���ܽ��뱨��
#define COMM_ALARM_LCD                         0x5011     //��Ļ����
#define COMM_CONFERENCE_CALL_ALARM             0x5012     //������и澯

#define COMM_ALARM_WALL_CONFERNECE  0x5015  //MCU�����ѿ���Ļ�����Ϣ����

#define COMM_DIAGNOSIS_UPLOAD                0x5100  //��Ϸ�����VQD�����ϴ�
#define COMM_HIGH_DENSITY_UPLOAD             0x5101  //��Ա�ۼ��ܶ���������ϴ�

#define COMM_ID_INFO_ALARM                   0x5200  //���֤��Ϣ�ϴ�
#define COMM_PASSNUM_INFO_ALARM              0x5201  //ͨ�������ϱ�

#define COMM_THERMOMETRY_DIFF_ALARM          0x5211  //�²���ϴ�
#define COMM_THERMOMETRY_ALARM               0x5212  //�¶ȱ����ϴ�
#define COMM_PANORAMIC_LINKAGE_ALARM         0x5213  //ȫ��������λ�ϴ�
#define COMM_TAG_INFO_ALARM                  0x5215  // ��ǩ��Ϣ�ϴ�
#define COMM_ALARM_VQD                         0x6000  //VQD���������ϴ�
#define COMM_PUSH_UPDATE_RECORD_INFO          0x6001  //��ģʽ¼����Ϣ�ϴ�
#define COMM_SWITCH_LAMP_ALARM               0x6002  //���صƼ��
#define COMM_INQUEST_ALARM             0x6005  // ��Ѷ���������ϴ�
#define COMM_GPS_STATUS_ALARM                0x6010  // GPS״̬�ϴ�

#define COMM_FACESNAP_RAWDATA_ALARM          0x6015  //�����ȶԱ���������͸����ʽ��

//PJ01C20170209084����¼��NVS������ܿ���������Ŀר��
#define COMM_FRAMES_PEOPLE_COUNTING_ALARM	 0x6069	 //��֡��������ͳ�ƽ���ϴ�

/*************�����쳣����(��Ϣ��ʽ, �ص���ʽ(����))****************/
#define EXCEPTION_EXCHANGE                0x8000    //�û�����ʱ�쳣
#define EXCEPTION_AUDIOEXCHANGE            0x8001    //�����Խ��쳣
#define EXCEPTION_ALARM                    0x8002    //�����쳣
#define EXCEPTION_PREVIEW                0x8003    //����Ԥ���쳣
#define EXCEPTION_SERIAL                0x8004    //͸��ͨ���쳣
#define EXCEPTION_RECONNECT                0x8005    //Ԥ��ʱ����
#define EXCEPTION_ALARMRECONNECT        0x8006    //����ʱ����
#define EXCEPTION_SERIALRECONNECT        0x8007    //͸��ͨ������
#define SERIAL_RECONNECTSUCCESS         0x8008    //͸��ͨ�������ɹ�
#define EXCEPTION_PLAYBACK                0x8010    //�ط��쳣
#define EXCEPTION_DISKFMT                0x8011    //Ӳ�̸�ʽ��
#define EXCEPTION_PASSIVEDECODE         0x8012  //���������쳣
#define EXCEPTION_EMAILTEST             0x8013  //�ʼ������쳣
#define EXCEPTION_BACKUP                0x8014  //�����쳣
#define PREVIEW_RECONNECTSUCCESS        0x8015  //Ԥ��ʱ�����ɹ�
#define ALARM_RECONNECTSUCCESS          0x8016  //����ʱ�����ɹ�
#define RESUME_EXCHANGE                    0x8017    //�û������ָ�
#define NETWORK_FLOWTEST_EXCEPTION      0x8018  //������������쳣
#define EXCEPTION_PICPREVIEWRECONNECT    0x8019    //ͼƬԤ������
#define PICPREVIEW_RECONNECTSUCCESS        0x8020    //ͼƬԤ�������ɹ�
#define EXCEPTION_PICPREVIEW            0x8021    //ͼƬԤ���쳣
#define    EXCEPTION_MAX_ALARM_INFO        0x8022    //������Ϣ�����Ѵ�����
#define    EXCEPTION_LOST_ALARM            0x8023  //������ʧ
#define EXCEPTION_PASSIVETRANSRECONNECT 0x8024  //����ת������
#define PASSIVETRANS_RECONNECTSUCCESS   0x8025  //����ת�������ɹ�
#define EXCEPTION_PASSIVETRANS          0x8026  //����ת���쳣
#define SUCCESS_PUSHDEVLOGON            0x8030  //��ģʽ�豸ע��ɹ�
#define EXCEPTION_RELOGIN                0x8040    //�û��ص�½
#define RELOGIN_SUCCESS                    0x8041    //�û��ص�½�ɹ�
#define EXCEPTION_PASSIVEDECODE_RECONNNECT  0x8042  //������������

#define EXCEPTION_RELOGIN_FAILED                0x8044   //�ص�½ʧ�ܣ�ֹͣ�ص�½
#define EXCEPTION_PREVIEW_RECONNECT_CLOSED      0x8045   //�ر�Ԥ����������
#define EXCEPTION_ALARM_RECONNECT_CLOSED        0x8046   //�رձ�����������
#define EXCEPTION_SERIAL_RECONNECT_CLOSED       0x8047   //�ر�͸��ͨ����������
#define EXCEPTION_PIC_RECONNECT_CLOSED          0x8048   //�رջ�����������
#define EXCEPTION_PASSIVE_DECODE_RECONNECT_CLOSED 0x8049 //�رձ���������������
#define EXCEPTION_PASSIVE_TRANS_RECONNECT_CLOSED 0x804a  //�رձ���ת����������

/********************Ԥ���ص�����*********************/
#define NET_DVR_SYSHEAD            1    //ϵͳͷ����
#define NET_DVR_STREAMDATA        2    //��Ƶ�����ݣ�����������������Ƶ�ֿ�����Ƶ�����ݣ�
#define NET_DVR_AUDIOSTREAMDATA    3    //��Ƶ������
#define NET_DVR_STD_VIDEODATA    4    //��׼��Ƶ������
#define NET_DVR_STD_AUDIODATA    5    //��׼��Ƶ������
#define NET_DVR_SDP             6   //SDP��Ϣ(Rstp����ʱ��Ч)
#define NET_DVR_CHANGE_FORWARD  10  //�����ı�Ϊ����
#define NET_DVR_CHANGE_REVERSE  11  //�����ı�Ϊ����
#define NET_DVR_PLAYBACK_ALLFILEEND      12  //�ط��ļ��������
#define NET_DVR_VOD_DRAW_FRAME      13  //�طų�֡����
#define NET_DVR_PRIVATE_DATA    112 //˽������,����������Ϣ

//�豸�ͺ�(DVR����)
/* �豸���� */
#define DVR                            1                /*����δ�����dvr���ͷ���DVR*/
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
#define DVS_A                        13              /* ��ATAӲ�̵�DVS */
#define DVR_HC_S                    14              /* 8000HC-S */
#define DVR_HT_S                    15              /* 8000HT-S */
#define DVR_HF_S                    16              /* 8000HF-S */
#define DVR_HS_S                    17              /* 8000HS-S */
#define ATMDVR_S                    18              /* ATM-S */
#define DVR_7000H                    19                /*7000Hϵ��*/
#define DEC_MAT                        20              /*��·������*/
#define DVR_MOBILE                    21                /* mobile DVR */
#define DVR_HD_S                    22              /* 8000HD-S */
#define DVR_HD_SL                    23                /* 8000HD-SL */
#define DVR_HC_SL                    24                /* 8000HC-SL */
#define DVR_HS_ST                    25                /* 8000HS_ST */
#define DVS_HW                        26              /* 6000HW */
#define DS630X_D                    27              /* ��·������ */
#define DS640X_HD                    28                /*640X���������*/
#define DS610X_D                    29              /*610X������*/
#define IPCAM                        30                /*IP �����*/
#define MEGA_IPCAM                    31                /*����IP�����*/
#define IPCAM_X62MF                    32                /*862MF���Խ���9000�豸*/
#define ITCCAM                      35              /*���ܸ������������*/
#define IVS_IPCAM                   36              /*���ܷ����������������*/
#define ZOOMCAM                     38              /*һ���*/
#define IPDOME                      40              /*IP �������*/
#define IPDOME_MEGA200              41              /*IP 200��������*/
#define IPDOME_MEGA130              42              /*IP 130��������*/
#define IPDOME_AI                   43              /*IP �������ܿ���*/
#define TII_IPCAM                   44              /*�����ȳ��������*/
#define IPTC_DOME                   45              /*�����ȳ���˫Ŀ���*/
#define DS_2DP_Z                    46              /*����ӥ�ۣ���*/
#define DS_2DP                       47              /*������ӥ�ۣ�С��*/
#define ITS_WMS                      48              /*�������ݹ��������*/
#define IPMOD                        50                /*IP ģ��*/
#define TRAFFIC_YTDOME              51              //��ͨ������̨�������״���٣�
#define TRAFFIC_RDDOME              52              //��ͨ������̨�����״���٣�
#define IDS6501_HF_P                60              // 6501 ����
#define IDS6101_HF_A                61              //����ATM
#define IDS6002_HF_B                62          //˫�����٣�DS6002-HF/B
#define IDS6101_HF_B                63              //��Ϊ������DS6101-HF/B DS6101-HF/B_SATA
#define IDS52XX                        64          //���ܷ�����IVMS
#define IDS90XX                        65                // 9000����
#define IDS8104_AHL_S_HX            66          // ��������ʶ�� ATM
#define IDS8104_AHL_S_H             67              // ˽������ʶ�� ATM
#define IDS91XX                        68                // 9100����
#define IIP_CAM_B                   69              // ������ΪIP�����
#define IIP_CAM_F                   70              //��������IP�����
#define DS71XX_H                    71                /* DS71XXH_S */
#define DS72XX_H_S                    72                /* DS72XXH_S */
#define DS73XX_H_S                    73                /* DS73XXH_S */
#define DS72XX_HF_S                 74              //DS72XX_HF_S
#define DS73XX_HFI_S                75              //DS73XX_HFI_S
#define DS76XX_H_S                    76                /* DVR,e.g. DS7604_HI_S */
#define DS76XX_N_S                    77                /* NVR,e.g. DS7604_NI_S */
#define DS_TP3200_EC                   78              /*�������ܼ����*/
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
#define IDS90XX_A                    93                // 9000���� ATM
#define IDS91XX_A                    94                // 9100���� ATM
#define DS95XX_N_S                    95              /*DS95XX_N_S NVR �����κ����*/
#define DS96XX_N_SH                    96              /*DS96XX_N_SH NVR*/
#define DS90XX_HF_SH                97              /*DS90XX_HF_SH */
#define DS91XX_HF_SH                98              /*DS91XX_HF_SH */
#define DS_B10_XY                   100             /*��Ƶ�ۺ�ƽ̨�豸�ͺ�(X:�����Ƭ����Y:�����Ƭ��)*/
#define DS_6504HF_B10               101             /*��Ƶ�ۺ�ƽ̨�ڲ�������*/
#define DS_6504D_B10                102             /*��Ƶ�ۺ�ƽ̨�ڲ�������*/
#define DS_1832_B10                 103             /*��Ƶ�ۺ�ƽ̨�ڲ������*/
#define DS_6401HFH_B10              104             /*��Ƶ�ۺ�ƽ̨�ڲ����˰�*/
#define DS_65XXHC                    105                //65XXHC DVS
#define DS_65XXHC_S                    106                //65XXHC-SATA DVS
#define DS_65XXHF                    107                //65XXHF DVS
#define DS_65XXHF_S                    108                //65XXHF-SATA DVS
#define DS_6500HF_B                 109             //65 rack DVS
#define IVMS_6200_C                 110             // iVMS-6200(/C)
#define IVMS_6200_B                 111             // iVMS-6200(/B)
#define DS_72XXHV_ST15                112                //72XXHV_ST  ��˼3515ƽ̨ DVR
#define DS_72XXHV_ST20                113                //72XXHV_ST  ��˼3520ƽ̨ DVR
#define IVMS_6200_T                    114             // IVMS-6200(/T)
#define IVMS_6200_BP                115             // IVMS-6200(/BP)
#define DS_81XXHC_ST                116                //DS_81XXHC_ST
#define DS_81XXHS_ST                117                //DS_81XXHS_ST
#define DS_81XXAH_ST                118                //DS_81XXAH_ST
#define DS_81XXAHF_ST                119                //DS_81XXAHF_ST
#define DS_66XXDVS                    120                //66XX DVS

#define DS_1964_B10                 121             /*��Ƶ�ۺ�ƽ̨�ڲ�������*/
#define DS_B10N04_IN                122             /*��Ƶ�ۺ�ƽ̨�ڲ���������*/
#define DS_B10N04_OUT                123             /*��Ƶ�ۺ�ƽ̨�ڲ��������*/
#define DS_B10N04_INTEL             124             /*��Ƶ�ۺ�ƽ̨�ڲ�����*/
#define DS_6408HFH_B10E_RM          125             //V6����
#define DS_B10N64F1_RTM             126             //V6��������DSP
#define DS_B10N64F1D_RTM            127             //V6������DSP
#define DS_B10_SDS                  128             //��Ƶ�ۺ�ƽ̨���������
#define DS_B10_DS                   129             //��Ƶ�ۺ�ƽ̨�������
#define DS_6401HFH_B10V                130             //VGA���������
#define DS_6504D_B10B               131             /*��Ƶ�ۺ�ƽ̨�ڲ����������*/
#define DS_6504D_B10H               132             /*��Ƶ�ۺ�ƽ̨�ڲ����������*/
#define DS_6504D_B10V               133             /*��Ƶ�ۺ�ƽ̨�ڲ�VGA������*/
#define DS_6408HFH_B10S                134             //��Ƶ�ۺ�ƽ̨SDI�Ӱ�
#define DS_18XX_N                      135             /* �����������*/
#define DS_6504HF_B10F_CLASS        136                //��˻�SD
#define DS_18XX_PTZ                    141                /*����������Ʒ*/
#define DS_19AXX                    142                /*ͨ�ñ����������Ʒ*/
#define DS_19BXX                    143                /*���ñ�������*/
#define DS_19CXX                    144                /*�������б�������*/
#define DS_19DXX                    145                /*������ر�������*/
#define DS_19XX                     146             /*1900ϵ�б�������*/
#define DS_19SXX                    147                /*��Ƶ��������*/
#define DS_1HXX                        148                /*CS���Ʒ*/ //������
#define DS_PEAXX                    149                /*һ��ʽ����������Ʒ*/
#define DS_PWXX                     150                 /*���߱���������Ʒ*/
#define DS_PMXX                     151                 /*4G����ģ��*/
#define DS_19DXX_S                  152                /*��Ƶ�����������*/


//2011-11-30
#define    DS_C10H                        161                /*����������*/
#define DS_C10N_BI                    162                //BNC������
#define DS_C10N_DI                    163                //rbg������
#define DS_C10N_SI                    164                //����������
#define DS_C10N_DO                    165                //��ʾ������
#define DS_C10N_SERVER                166                //�ֲ�ʽ������


#define IDS_8104_AHFL_S_H           171             // 8104ATM
#define IDS_65XX_HF_A               172             // 65 ATM
#define IDS90XX_HF_RH               173             // 9000 ����RH
#define IDS91XX_HF_RH               174             // 9100 ����RH�豸
#define IDS_65XX_HF_B               175             // 65 ��Ϊ����
#define IDS_65XX_HF_P               176             // 65 ����ʶ��
#define IVMS_6200_F                 177             // IVMS-6200(/F)
#define IVMS_6200_A                 178             //iVMS-6200(/A)
#define IVMS_6200_F_S                 179             // IVMS-6200(/F_S)���������������

#define DS90XX_HF_RH                181             // 9000 RH    648
#define DS91XX_HF_RH                182             // 9100 RH�豸 648
#define DS78XX_S                    183             // 78ϵ���豸 6446
#define DS81XXHW_S                    185                // 81 Resolution 960 KY2011
#define DS81XXHW_ST                    186             // DS81XXHW_ST  KY2011
#define DS91XXHW_ST                    187             // DS91XXHW_ST  KY2011
#define DS91XX_ST                    188             // DS91XX_ST netra
#define DS81XX_ST                    189             // DS81XX_ST netra
#define DS81XXHX_ST                    190             // DS81XXHDI_ST,DS81XXHE_ST ky2012
#define DS73XXHX_ST                    191             // DS73XXHI_ST ky2012
#define DS81XX_SH                   192             // ��Ѷ81SH,81SHF
#define DS81XX_SN                   193             // ��Ѷ81SNL

#define DS96XXN_ST                  194             //NVR:DS96xxN_ST
#define DS86XXN_ST                  195             //NVR:DS86xxN_ST
#define DS80XXHF_ST                 196             //DVR:DS80xxHF_ST
#define DS90XXHF_ST                 197             //DVR:DS90xxHF_ST
#define DS76XXN_ST                  198             //NVR:DS76xxN_ST

#define DS_9664N_RX                 199         //NVR:DS_9664N_RX
#define ENCODER_SERVER                200            // ���뿨������
#define DECODER_SERVER              201         // ���뿨������
#define PCNVR_SERVER                202         // PCNVR�洢������
#define CVR_SERVER                  203         // ��ŵCVR�������Լ���������ΪDVR_S-1
#define DS_91XXHFH_ST                204         // 91ϵ��HD-SDI����DVR
#define DS_66XXHFH                    205         // 66���������
#define    TRAFFIC_TS_SERVER            210           //�ն˷�����
#define    TRAFFIC_VAR                    211           //��Ƶ������¼��
#define IPCALL                      212        //IP���ӶԽ��ֻ�
#define SAN_SERVER                  213         //��CVR_SERVER��ͬ�ĳ���ֻ��ģʽ��ͬ

#define DS_B11_M_CLASS                 301             /*��Ƶ�ۺ�ƽ̨�豸�ͺ�*/
#define DS_B12_M_CLASS                  302             /*��Ƶ�ۺ�ƽ̨�豸�ͺ�*/
#define DS_6504HF_B11_CLASS         303             /*��Ƶ�ۺ�ƽ̨�ڲ�������*/
#define DS_6504HF_B12_CLASS         304              /*��Ƶ�ۺ�ƽ̨�ڲ�������*/
#define  DS_6401HFH_B11V_CLASS         305     //VGA����
#define  DS_6401HFH_B12V_CLASS         306     //VGA����
#define  DS_6408HFH_B11S_CLASS         307     //SDI
#define  DS_6408HFH_B12S_CLASS      308     //SDI
#define  DS_6504D_B11H_CLASS        309   /*��Ƶ�ۺ�ƽ̨�ڲ����������*/
#define  DS_6504D_B11B_CLASS        310    /*��Ƶ�ۺ�ƽ̨�ڲ����������*/
#define  DS_6504D_B12B_CLASS        311       /*��Ƶ�ۺ�ƽ̨�ڲ����������*/
#define  DS_6504D_B11V_CLASS        312      /*��Ƶ�ۺ�ƽ̨�ڲ�VGA������*/
#define  DS_6504D_B12V_CLASS        313     /*��Ƶ�ۺ�ƽ̨�ڲ�VGA������*/
//B10����
#define  DS_6401HFH_B10R_CLASS         314     //B10 RGB����
#define  DS_6401HFH_B10D_CLASS         315     //B10 DVI����
#define  DS_6401HFH_B10H_CLASS         316     //B10 HDMI����
//B11����
#define  DS_6401HFH_B11R_CLASS         317     //B11 RGB����
#define  DS_6401HFH_B11D_CLASS         318     //B11 DVI����
#define  DS_6401HFH_B11H_CLASS         319     //B11 HDMI����
//B12����
#define  DS_6401HFH_B12R_CLASS         320     //B12 RGB����
#define  DS_6401HFH_B12D_CLASS         321     //B12 DVI����
#define  DS_6401HFH_B12H_CLASS         322     //B12 HDMI����
#define  DS_65XXD_B10Ex_CLASS        323     //netra�������

//B10 V2.1����
#define  DS_6516HW_B10_CLASS        324     //netra���߱���
#define  DS_6401HFH_B10F_RX_CLASS   326        //�����˻����루֧��1/2·��˻����룩
#define  DS_6502HW_B10F_RX_CLASS    327        //960H��˻����루֧��1/4/8·��˻����룩
//2012-5-16����
#define  DS_6504D_B11Ex_CLASS        328     //netra�������
#define  DS_6504D_B12Ex_CLASS        329     //netra�������
#define  DS_6512_B11_CLASS            330     //netra���߱���
#define  DS_6512_B12_CLASS            331     //netra���߱���
#define  DS_6504D_B10H_CLASS        332     //��Ƶ�ۺ�ƽ̨�ڲ����������

#define  DS_65XXT_B10_CLASS         333     //��Ƶ�ۺ�ƽ̨ת����ϵͳ
#define  DS_65XXD_B10_CLASS         335     //��Ƶ�ۺ�ƽ̨���ܽ����
#define  DS_IVMSE_B10X_CLASS        336     //X86��������ϵͳ
#define  DS_6532D_B10ES_CLASS        337     //��ǿ�ͽ����_SDI(B10)
#define  DS_6508HFH_B10ES_CLASS        338     //SDI���������ϵͳ
#define  DS_82NCG_CLASS                340     //���������е���ϵͳ
#define  DS_82VAG_CLASS                341     //���������е���ϵͳ
#define  DS_1802XXF_B10_CLASS       342     //��ڽ�����ϵͳ
#define  iDS_6504_B10EVAC_CLASS     343     //������ϵͳ
#define  iDS_6504_B10EDEC_CLASS     344     //������ϵͳ
#define  DS_6402HFH_B10EV_CLASS     345     //netra����(VGA)
#define  DS_6402HFH_B10ED_CLASS     346     //netra����(DVI)
#define  DS_6402HFH_B10EH_CLASS     347     //netra����(HDMI)
#define  DS_6404HFH_B10T_RX_CLASS   348     //���˽������
#define  DS_6504D_AIO_CLASS         349        //netra�������
#define  DS_IVMST_B10_CLASS            350        //X86ת����ϵͳ
#define  DS_6402_AIO_CLASS          351     //netra����
#define  DS_iVMSE_AIO_CLASS         352     //x86��������ϵͳ
#define  DS_AIO_M_CLASS             353     //һ���


#define  DS_6508HF_B10E_CLASS        355        //BNC���������ϵͳ
#define  DS_6404HFH_B10ES_CLASS        356        //SDI���������ϵͳ
#define  DS_6402HFH_B10ER_CLASS        358        //RGB���������ϵͳ
#define  DS_6404HFH_B10T_RM_CLASS    361        //�������������ϵͳ
#define  DS_6516D_B10EB_CLASS        362        //BNC���������ϵͳ
#define  DS_6516D_B10ES_CLASS        363        //SDI���������ϵͳ

//DVI/HDMI/VGA���Խ��빫��һ������
#define  DS_6508D_B10FH_CLASS        364
#define  DS_6508D_B10FD_CLASS        364
#define  DS_6508D_B10FV_CLASS        364

#define  DS_6508_B11E_CLASS            365        //BNC���������ϵͳ
#define  DS_6402_B11ES_CLASS        366        //SDI���������ϵͳ
#define  DS_6402_B11EV_CLASS        367        //VGA���������ϵͳ
#define  DS_6402_B11ER_CLASS        368        //RGB���������ϵͳ
#define  DS_6402_B11ED_CLASS        369        //DVI���������ϵͳ
#define  DS_6402_B11EH_CLASS        370        //HDMI���������ϵͳ
#define  DS_6516D_B11EB_CLASS        371        //BNC���������ϵͳ
#define  DS_6516D_B11ES_CLASS        372        //SDI���������ϵͳ

#define  DS_6508_B12E_CLASS         373     //BNC���������ϵͳ
#define     DS_6402_B12ES_CLASS        375        //SDI���������ϵͳ
#define  DS_6402_B12EV_CLASS        376        //VGA���������ϵͳ
#define  DS_6402_B12ER_CLASS        377        //RGB���������ϵͳ
#define  DS_6402_B12ED_CLASS        378        //DVI���������ϵͳ
#define  DS_6402_B12EH_CLASS        379        //HDMI���������ϵͳ
#define  DS_6516D_B12EB_CLASS        380        //BNC���������ϵͳ

#define  DS_iVMSE_AIO_8100x_CLASS   381     //������ҵһ���X86��ϵͳ
#define  DS_iVMSE_AIO_87x_CLASS     382     //����¥��һ���X86��ϵͳ
#define  DS_6532D_B11ES_CLASS        384        //��ǿ�ͽ����_SDI(B11)
#define  DS_6532D_B12ES_CLASS        385        //��ǿ�ͽ����_SDI(B12)
//B20����
#define  DS_B20_MSU_NP              400     //B20���ذ�
#define  DS_6416HFH_B20S            401     //SDI�������
#define  DS_6416HFH_B20_RM          402     //��������������
#define  DS_6564D_B20D              403     //DVI����
#define  DS_6564D_B20H              404     //HDMI����
#define  DS_6564D_B20V              405     //VGA����
#define  DS_B20_6516D_DEV_CLASS     406     //B20������ϵͳ
#define  DS_6408HFH_B20V            407     //VGA�����
#define  DS_MMC_B20_CLASS           408     //B20����
#define  DS_CARD_CHIP_B20_CLASS     409     //B20�����Ӱ�
#define  DS_6564D_B20B_DEV_CLASS    410     //BNC������ϵͳ
#define  DS_6564D_B20S_DEV_CLASS    411     //SDI������ϵͳ
#define  DS_6532HF_B20B_DEV_CLASS   412     //BNC������ϵͳ
#define  DS_6408HFH_B20D_DEV_CLASS  413     //DVI������ϵͳ
#define  DS_6408HFH_B20H_DEV_CLASS  414     //HDMI������ϵͳ
#define  DS_IVMSE_B20_CLASS            415     //X86��������ϵͳ
#define  DS_6402HFH_B20Y_DEV_CLASS  416     //YUV������ϵͳ
#define  DS_6508HW_B20_DEV_CLASS    417     //HW������ϵͳ
#define  DS_B20N128Fx_B20_DEV_CLASS 418     //DS_B20N128Fx_M������
#define  DS_AIO_MCU_NP_DEV_CLASS    419     //IO���ذ�
#define  DS_6402_AIO_EV_DEV_CLASS   420     //VGA����
#define  DS_6508D_AIO_EV_DEV_CLASS  421     //VGA����
#define  DS_6508D_AIO_ED_DEV_CLASS  422     //DVI����
#define  DS_6508D_AIO_EH_DEV_CLASS  423     //HDMI����
#define  DS_6508HD_B20F_DEV_CLASS    424     //��Ƶ��ǿ��
#define  DS_6402HFH_B20ES_DEV_CLASS 425     //3G SID����
#define  DS_6532D_B20_DEV_CLASS     426     //B20������ϵͳ
#define  DS_IVMST_B20_DEV_CLASS     427     //X86��������ϵͳ
#define  DS_6416HFH_B20DD_DEV_CLASS 428     //DVI˫��·
#define  DS_6441VS_B20_DEV_CLASS    429        //���ƴ������
#define  DS_6404HFH_B20T_CLASS         431        //TVI
#define  DS_FS22_B20_DEV_CLASS         432        //��������ϵͳ
#define  DS_IVMSE_B20UH_DEV_CLASS   433     //������X86����
#define  IDS_6524J_B20_DEV_CLASS    434
#define  IDS_6532B_B20_DEV_CLASS    435
#define DS_6404HFH_B20Fx_DEV_CLASS  436        //��˻�������ϵͳ
#define DS_N128x_B20Fy_CLASS        437     //������ϵͳ
#define DS_181600F_B20_CLASS        438     //���������ϵͳ
#define  DS_6904UD_B20H_CLASS       439     //�����������ϵͳ

#define DS_B21_MCU_NP_CLASS         440     //B21����
#define DS_B21_S10_x_CLASS          441     //B21���� x = A/S/D
#define DS_6402HFH_B21D_CLASS       442     //B21������ϵͳ
#define DS_6508HD_B21D_CLASS        443     //B21������ϵͳ
#define DS_iVMSE_B21HW_CLASS        444     //B21 X86��ϵͳ

#define  DS_C10S                    501     //C10S ����ʽ����������

#define  DS_C10N_SDI                551        //SDI������
#define  DS_C10N_BIW                552        //8·BNC������
#define  DS_C10N_DON                553        //��ʾ������
#define  DS_C10N_TVI                554     //TVI�����
#define  DS_C10N_DI2                555     //DVI 2·�����
#define  DS_C10N_AUDIO_OUT          556     //DVI��HDMI��VGA��������Ƶ
#define  DS_C10N_AUDIO_IN           557     //DVI��HDMI��VGA��������Ƶ

//��������汾�ķֲ�ʽ����������
#define  DS_C20N                    570     //�ֲ�ʽ����������
#define  DS_C20N_BNC                571     //BNC�����豸
#define  DS_C20N_DVI                572     //DVI�����豸
#define  DS_C20N_DP                 573     //DP�����豸
#define  DS_C20N_OUT                574     //����豸

//Ӳ�������汾�ķֲ�ʽ����������
#define DS_C20N_VWMS                5351    //������
#define DS_C20N_DI2                 5352    //��·DVI�����豸
#define DS_C20N_DO2                 5353    //��·DVI����豸
#define DS_C20N_UHDI                5354    //DP/HDMI 1·4K�����������豸

//���ߴ����豸
#define ELEVATO_BRIDGE  5751  //���ߵ�������

//�����豸
#define DS_19M00_MN                    601     //����������������ģ��
#define DS_KH8302_A                 602  //���ڻ�
#define DS_KD8101_2                 603  //�ſڻ�
#define DS_KM8301                   604  //�����
#define DS_KVXXXX_XX                605  //�����ſڻ�
#define DS_LHPM1D_C                 606  //�Ƶ���

#define DS64XXHD_T                    701        //64-T���������
#define DS_65XXD                    703     //65���ܽ�����
#define DS63XXD_T                    704        //63-T���������
#define SCE_SERVER                  705     //ץ��������
#define DS_64XXHD_S                 706     //64XXHD-S���������
#define DS_68XXT                    707     //�๦������Ƶת����
#define DS_65XXD_T                  708     //65D-T���ܽ�����
#define DS_65XXHD_T                 709     //65HD-T���ܽ�����
#define DS_69XXUD                   710     //69XXUD�����������
#define DS_65XXUD                   711     //65XXUD������
#define DS_65XXUD_L                 712     //65XXUD_L������
#define DS_65XXUD_T                 713     //65XXUD_T������

#define DS_D20XX                    750     //LCD��Ļ ���뿨
//SDI����
#define DS_C50S                     751     //SDI����
#define DS_D50XX                    752     //LCD��Ļ ���뿨

#define DS_D40                      760     //LED�����Ϳ�

#define DS_65VMXX                   770     //��Ƶ���������
#define DS_65VTXX                   771     //��Ƶ�����ն�
#define DS_65VTA                    772     //��Ƶ����һ��ʽ�ն�
#define DS_65VT_RX                  773     //������ѧ�ն�
#define DS_65VC10                   5571    //һ��ʽ��Ƶ�����ն�

#define DS_CS_SERVER                800     //������������
#define DS_68GAP_MCU                831     //��Ƶ��բ
#define DS_K260X                    850     //�Ž�����
#define DS_K1TXXX                   851     //ָ��һ���
#define DS_K280X                    852     //�������Ž�����
#define DS_K1T80X                   854     //�������Ž�һ���
#define RAC_6X00                    856     //����ָ���Ž�һ���
#define DS_K2602_AX                 857     //��Աͨ������
#define DS_K1T803F                  858     //������ָ���Ž���Ʒ
#define DS_K2700                    859     //�ֲ�ʽ����ܹ��Ž�����
#define DS_K270X                    860     //�ֲ�ʽ����ܹ��͵ؿ�����
#define DS_K1T500S                  861     //�����Ž�һ���
#define DS_K1A801F                  862     //������ָ���Ž���Ʒ
#define DS_K1T600X                  863     //����ʶ���Ž�һ���
#define DS_K22X                     864     //�ݿ���������
#define DS_K2M0016AX                865     //�ݿطֿ�����
#define DS_K560XX                   870     //��ʽ/̨ʽ�������ʶ���ն�
#define DS_6800M                    900     //68M������
#define DS_68NTH                    901     //��Ϣ��������
#define DS_D60S                     902     //��Ϣ����������
#define DS_D10                      931     //��Ͷ��ʾ�豸
#define DS_3K0X_NM                  951     //�����շ���
#define DS_3E2328                   952     //���׽�����
#define DS_3E1528                   953     //ǧ�׽�����
#define SCREEN_LINK_SERVER          971     //��Ļ������
#define DS_D51OPSXX                 972     //OPS���Ժ�
//һ�廯��̨
#define IP_PTSYS_MEGA200            1001   //IP 200��һ�廯��̨
#define IPCAM_FISHEYE               1002   //���������
#define IPCAM_FISHEYE_E             1003   //���������������

//68xxϵ��˫Ŀ3D���
#define IPCAM_BINOCULAR             1004   //˫Ŀ�����

#define IPCAM_365                    1010    //֧��365��ƽ̨��IPC CAM
#define IPCAM_R0                    1011    //֧��A5S��ƽ̨��IPC CAM
#define IPCAM_R1                    1012    //֧��385��ƽ̨��IPC CAM
#define IPCAM_R2                    1013    //֧��R2��ƽ̨��IPC CAM
#define IPCAM_R3                    1014    //֧��8127��ƽ̨��IPC CAM
#define IPCAM_R4                    1015    //֧��S2��ƽ̨��IPC CAM

#define IPDOME_365                    1110    //֧��365��ƽ̨��IPD CAM
#define IPDOME_R0                    1111    //֧��A5S��ƽ̨��IPD CAM
#define IPDOME_R1                    1112    //֧��385��ƽ̨��IPD CAM
#define IPDOME_R2                    1113    //֧��R2��ƽ̨��IPD CAM
#define IPDOME_R3                    1114    //֧��8127��ƽ̨��IPD CAM
#define IPDOME_R4                    1115    //֧��S2��ƽ̨��IPD CAM
#define ITCCAM_R3                    1211    //֧��8127��ƽ̨��ITCCAM

//���˻�ҵ���豸��1300~1350��
#define UAV_S                       1300    //���˻���վ�豸 ��Ummanned Aerial Vehicle �C Station��

//�����豸���� 2013-11-19
#define TRAFFIC_ECT                    1400  //ECT�豸����
#define TRAFFIC_PARKING_SERVER        1401  //ͣ����������
#define TRAFFIC_TME                    1402  //����ڿ��ƻ�
// DVR
#define DS90XXHW_ST                    2001    // DS90XXHW_ST���DVR
#define DS72XXHX_SH                 2002    // DS-72xxHV_SH, DS-72xxHF-SH
#define DS_92XX_HF_ST                2003    // DS-92XX-HF-ST
#define DS_91XX_HF_XT                2004    // 9100DVR_HF_XT
#define DS_90XX_HF_XT               2005    // 9000DVR_HF_XT
#define DS_73XXHX_SH                2006    // 7300DVR_HX_SH
#define DS_72XXHFH_ST                2007    // 7200DVR_HFH_ST
//DS_67ϵ��

#define DS_67XXHF_SATA              2008 // DS-67XXHF-SATA
#define DS_67XXHW                   2009 // DS-67XXHW
#define DS_67XXHW_SATA              2010 // DS-67XXHW-SATA
#define DS_67XXHF                   2011 // DS-67XXHF

//Netra2.3
#define DS_72XXHF_SV                2012  // DS-72xxHF-SV
#define DS_72XXHW_SV                2013   // DS-72xxHW-SV

#define DS_81XXHX_SH                2014   // 8100DVR_HX_SH

#define DS_71XXHX_SL                2015    //С��DVR

#define DS_76XXH_ST                    2016    //DS_76XXH_ST


#define DS_73XXHFH_ST               2017   //73HFHϵ��
#define DS_81XXHFH_ST               2018   //81HFHϵ�� ST

#define DS_72XXHFH_SL                2019    //hi3521
#define DS_FDXXCGA_FLT                2020    //2��λATM

#define IDS_91XX_HF_ST_A            2100    //iDS-9100HF-ST/A
#define IDS_91XX_HF_ST_B            2101    //iDS-9100HF-ST/B
#define IDS_90XX_HF_ST_A            2102    //iDS-9000HF-ST/A
#define IDS_90XX_HF_ST_B            2103    //iDS-9000HF-ST/B
#define IDS_81XX_HF_ST_A            2104    //iDS-8100HF-ST/A
#define IDS_81XX_HF_ST_B            2105    //iDS-8100HF-ST/B
#define IDS_80XX_HF_ST_A            2106    //iDS-8000HF-ST/A
#define IDS_80XX_HF_ST_B            2107    //iDS-8000HF-ST/B
#define IDS_8104_AHFL_ST            2108    //���ܻ��ATM��
#define IDS_2CD6812F_C              2109    //��ֱ˫Ŀ���


// NVR
#define DS_77XXN_ST                    2201    //  NVR DS-77XXHF-ST
#define DS_95XX_N_ST                2202    //  95XXN_ST NVR
#define DS_85XX_N_ST                2203    //  85XXN_ST NVR
#define DS_96XX_N_XT                2204    // 9600NVR_N_XT
#define DS_76XX_N_SE                2205    // 7600NVR_N_SE

//������Ѷ��
#define DS_86XXSN_SX                2206    // 8608NVR_SX������4������DS-8608SNL-SP��DS-8608SNL-ST��DS-8608SN-SP��DS-8608SN-ST��L��ʾ��LCD��P��POE

//#define DS_96XX_N_RX                2207  //DS-96XX-N-RX
#define DS_71XXN_SL                    2208  //DS-71XXN-SL ���ò�Ʒ
#define CS_N1_1XX                    2209  //CS_N1_1XX��������ҵ������

#define DS_71XXN_SN                    2210    //71XX_N_SN  ���������ò�Ʒ
#define CS_N1_2XX                    2211    //N1_2XX        ������ҵ������
#define DS_76XX_N_SHT                2212    //76XX_N_SHT  ��˻��߲�Ʒ
#define DS_96XXX_N_E                2213    //��������NVR(256)

#define    DS_76XXN_EX                    2214 /* 76 78ϵ��NVR��ע������ 4 8 16·��E1һ��λ�� 8 16 32· E2����λ�� /N /P�豸*/
#define DS_77XXN_E4                    2215/* 77ϵ��NVR��   ע������8 16 32·�� /N /P�豸*/
#define DS_86XXN_E8                    2216/* 86ϵ��NVR��   ע������8 16 32·�� /N /P�豸*/
#define DS_9616N_H8                 2217   //DS_9616N_H8
#define DS_72XXHX_EX_GXY            2218   //��ʾ72ϵ������DVR��Ʒ������72�����xx��ʾͨ������H���XĿǰ����HW,Ϊ�˺�����չ������E�����X��ʾ������λ����G XY��ʾ������������
#define DS_76XXN_EX_GXY             2219   //��ʾ��76ϵ������NVR��Ʒ������76�����xx��ʾͨ������E�����X��ʾ������λ����G XY��ʾ������������
#define DS_72XXHXH_SH_21            2220   //  72XXHXH_SH_21
#define DS_72XXHXH_SH_31            2221  //  72XXHXH_SH_31
#define DS_73XXHXH_SH_31            2222  // 73XXHXH_SH_31
#define DS_81XXHXH_SH_31            2223  //  81XXHXH_SH_31
#define DS_71XXHXH_SH_21            2224  // 71XXHXH_SH_21
#define DS_71XXHXH_SH_31            2225  // 71XXHXH_SH_31
#define DS_NBXX_N_E1_X              2226  //��Яʽ����
#define DS_96XXN_FX                 2230
#define DS_86XXN_FX                 2231
#define DS_96XXXN_HX                2232  //96ϵ�и������豸


#define DS_86XXN_I                    2233    //DS_86XXN_I
#define DS_77XX_N_I                    2234    //DS_77XX_N_I
#define DS_76XX_N_I                    2235    //DS_76XX_N_I
#define DS_78XX_N_I                    2236    //DS_78XX_N_I
#define DS_96XXXN_IX                2237    //DS-96XXX_N_I��DS-96128N-I16��DS-96128N-I24��DS-96256N-I16��DS-96256N-I24��

#define DS_90XXHXH_XT               2238    //DS_90XXHXH_XT��DS-9016HQH-XT��

//PCNVR
#define PCNVR_IVMS_4200             2301    // PCNVR_IVMS_4200


//���ܷ�����
#define IVMS_6200_TP                2401   //IVMS-6200 ��ͨ�յ�������
#define IVMS_6200_TF                2402   //IVMS-6200 ��ͨȡ֤������
#define IVMS_6200_D                 2403   //iVMS-6200(/D)
#define IDS_81XXAHW_ST              2405   //iDS-81xxAHW-ST
#define IDS_81XXAHW_SP              2406   //iDS-81xxAHW-SP
#define IDS_81XXAHWL_ST             2407   //iDS-81xxAHWL-ST
#define IDS_81XXAHWL_SP             2408   //iDS-81xxAHWL-SP
#define IDS_9616N_H8                2409   //iDS_9616N_H8
#define IVMS_6200_SMD               2500   //IVMS_6200_SMD
//HISI3531ƽ̨���ATM DVR�� ����L��ʾ��Һ������P��ʾ��poe
#define DS_81XXAHW_ST                2501
#define DS_81XXAHW_SP                2502
#define DS_81XXAHWL_ST                2503
#define DS_81XXAHWL_SP                2504

//TVI ATM
#define DS_81XXAHGH_E4                2601    //DS_81XXAHGH_E4

#define DS_6904UD_AIOE_H_CLASS      4002    //B20һ���
#define DS_6402HFH_B21B_CLASS       4005    //B21 ����
#define DS_6902UD_B21H_CLASS        4006    //B21 HDMI����
#define DS_6902UD_B21D_CLASS        4007    //B21 DVI����
#define DS_6902UD_B21V_CLASS        4008    //B21 VGA����
#define DS_6904UD_B20D_CLASS        4010    //B20 DVI����
#define DS_6904UD_B20V_CLASS        4011    //B20 VGA����

//B21һ����豸�ͺ�
#define DS_AIOH_MCU_NP              4042    //���ذ�
#define DS_6404HFH_AIOH_D           4043    //4·DVI�����
#define DS_6908UD_AIOH_D            4044    //4·DVI�����
#define DS_6908UD_AIOH_H            4045    //4·HDMI�����

//����һ����豸�ͺ�
#define DS_69XXUD_B                 4046    //����һ���
#define DS_6404HFH_I                4047    //4·DVI�����
#define DS_6904UD_O                 4048    //8·HDMI�����

#define DS_81XX_SHXL_K4               6101    //KY2017ƽ̨��Ѷ��DS-8104SHFH��L��-K4/4P

#define DS_8116THFHL_F4               6201    //��׼ͥ������DS-8116THFHL-F4

#define DS_81XXAHQ_E4                 6301    //DS_81XXAHQ_E4(TVI ATM)
#define IDS_81XXAHQ_E4                6302    //IDS_81XXAHQ_E4(����TVI ATM)

#define IDS_86XX_NX_A               7501    //��������ATM NVR(iDS-8632NX-I8/A)
#define IDS_96XX_NX_S               7502    //���峬������NVR
#define IDS_96XX_NX_V               7503    //���Լ���վNVR
#define DS_TRIXX                    8471    //����Ƶ�̶�ʽ������DS_TRI900

#define IDS_67XX_NX_A               12501    //67ϵ��NVS��Ʒ(iDS-6704NX/A)
#define IDS_67XX_NX_L               12502    //67ϵ��¼��NVS��Ʒ
#define IDS_ENIXX_XHE               12503    //¼��NVS��ҵרҵ��Ʒ
#define IDS_67XX_NX_V               12504    //���Լ���վNVS

/**********************�豸���� end***********************/
/**********************�豸���� begin**********************/

/* dvr��� 1-50 */
#define DEV_CLASS_DVR      1          //��ͨdvr����
#define DEV_CLASS_INTERROGATION  2    //��Ѷ��
#define DEV_CLASS_SIMPLE_TRAIL  3    //����ͥ������
#define DEV_CLASS_TRAIL  4           //��׼ͥ������
#define DEV_CLASS_RECORD_PLAY  5     //¼������
#define DEV_CLASS_ATM 6           //ATM��

/* dvs��� 51-100 */
#define DEV_CLASS_DVS 51          //��ͨdvs

/* nvr��� 101-150 */
#define DEV_CLASS_NVR 101          //��ͨnvr

/* ipc��� 151-200 */
#define DEV_CLASS_GUN 151          //ipcǹ��
#define DEV_CLASS_BALL 152          //ipc���
#define DEV_CLASS_SNAP 153          //ץ�Ļ�
#define DEV_CLASS_INTELLI_TILT 154   //������̨
#define DEV_CLASS_FISH_EYE 155          //����
#define DEV_CLASS_2DP_Z 156         //��ӥ��
#define DEV_CLASS_2DP 157   //Сӥ��
#define DEV_CLASS_PT 158   //ȫ��ϸ�����
#define DEV_CLASS_TRI 159   //����Ƶ�̶�ʽ������

/* CVR��� 201 - 250*/
#define DEV_CLASS_CVR 201          //CVR

/* ������� 251 - 300*/
#define DEV_CLASS_B20 251          //����B20ϵ��
#define DEV_CLASS_B10 252          //����B10ϵ��
#define DEV_CLASS_DECODER 253      //������
#define DEV_CLASS_MATRIXMANAGEDEVICE 254      //�����������
#define DEV_CLASS_OTICAL 255      //��˻�
#define DEV_CLASS_CODESPITTER 256      //�����
#define DEV_CLASS_ALARMHOST 257      //��ҵ��������
#define DEV_CLASS_MOVING_RING 258      //�����豸
#define DEV_CLASS_CVCS 259      //����ʽ����������
#define DEV_CLASS_DVCS 260      //�ֲ�ʽ����������
#define DEV_CLASS_TRANSCODER 261      //ת����
#define DEV_CLASS_LCD_SCREEN 262      //LCD��Ļ
#define DEV_CLASS_LED_SCREEN 263      //LED��Ļ
#define DEV_CLASS_MATRIX 264      //����
#define DEV_CLASS_CONFERENCE_SYSTEM 265      //��Ƶ�����豸
#define DEV_CLASS_INFORMATION_RELEASE_EQUIPMENT  266      //��Ϣ�����豸
#define DEV_CLASS_NET_GAP 267      //��բ
#define DEV_CLASS_MERGE 268      //������
#define DEV_CLASS_REAR_PROJECTION 269      //��Ͷ��ʾ�豸
#define DEV_CLASS_SWITCH 270      //������
#define DEV_CLASS_FIBER_CONVERTER 271      //�����շ���
#define DEV_CLASS_SCREEN_SERVER 272      //��Ļ������
#define DEV_CLASS_SCE_SERVER 273      //ץ��������
#define DEV_CLASS_WIRELESS_TRANS  274    //���ߴ����豸
/* ����������� 301 - 350*/
#define DEV_CLASS_VIDEO_ALARM_HOST 301          //��Ƶ��������
#define DEV_CLASS_NET_ALARM_HOST 302          //���籨������
#define DEV_CLASS_ONE_KEY_ALARM 303      //һ��ʽ������Ʒ
#define DEV_CLASS_WIRELESS_ALARM_HOST 304      //���߱�������
#define DEV_CLASS_ALARM_MODULE 305      //����ģ��
#define DEV_CLASS_HOME_ALARM_HOST 306      //���ñ�������

/* �Ž���� 351 - 400*/
#define DEV_CLASS_ACCESS_CONTROL 351          //�Ž���Ʒ

/* ���ӶԽ� 401 - 450*/
#define DEV_CLASS_VIDEO_INTERCOM 401          //���ӶԽ�

/* ���˻� 451 - 500*/
#define DEV_CLASS_UMMANNED_AERIAL_VEHICLE 451          //���˻���Ʒ

/* �ƶ���Ʒ: 501-550*/
#define DEV_CLASS_MOBILE 501          //�ƶ���Ʒ

/* �ƶ������豸: 551-600*/
#define DEV_CLASS_MOBILE_VEHICLE 551          //�ƶ������豸

//���ܷ����ǣ�601-650
#define DEV_CLASS_INTELLIGENT_ANALYZER 601  //���ܷ�����

//���ܽ�ͨ��������651-700
#define DEV_CLASS_INTELLIGENT_TRAFFIC_SERVER 651  //���ܽ�ͨ������
#define DS_TP2200_EC                         652  //�����ͻ�������

/* nvs��� 701-750 */
#define DEV_CLASS_NVS 701          //��ͨnvs

/*ȫ��ϸ������� 8451-8470*/
#define iDS_PT              8451  //ȫ��ϸ�����

/* �����豸���� 65534 */
#define DEV_CLASS_DEFAULT 65534   //Ĭ���豸����
/**********************�豸���� end**********************/

/******************************��������ȡ*********************************/
//������ȡ����
#define DEVICE_SOFTHARDWARE_ABILITY         0x001  //�豸��Ӳ������
#define DEVICE_NETWORK_ABILITY              0x002  //�豸��������
#define DEVICE_ENCODE_ALL_ABILITY           0x003  //�豸���б�������
#define    DEVICE_ENCODE_CURRENT               0x004  //�豸��ǰ��������
#define IPC_FRONT_PARAMETER                    0x005     //ipcǰ�˲���1.0
#define IPC_UPGRADE_DESCRIPTION                0x006     //ipc������Ϣ
#define DEVICE_RAID_ABILITY                 0x007  //RAID����
#define DEVICE_ENCODE_ALL_ABILITY_V20       0x008     //�豸���б�������2.0
#define IPC_FRONT_PARAMETER_V20                0x009     //ipcǰ�˲���2.0
#define DEVICE_ALARM_ABILITY                0x00a  //������������
#define DEVICE_DYNCHAN_ABILITY                0x00b  //�豸����ͨ������
#define DEVICE_USER_ABILITY                 0x00c  //�豸�û������������
#define DEVICE_NETAPP_ABILITY               0x00d  //�豸����Ӧ�ò�������
#define DEVICE_VIDEOPIC_ABILITY             0x00e  //�豸ͼ���������
#define DEVICE_JPEG_CAP_ABILITY             0x00f  //�豸JPEGץͼ����
#define DEVICE_SERIAL_ABILITY               0x010  //RS232��RS485��������
#define DEVICE_ABILITY_INFO                    0x011     //�豸ͨ���������ͣ������������ݷ��͵������ڵ�������
#define STREAM_ABILITY                      0x012  //������
#define SYSTEM_MANAGEMENT_ABILITY           0x013  //�豸ϵͳ��������
#define IP_VIEW_DEV_ABILITY                    0x014  //IP���ӶԽ��ֻ�����
#define VCA_DEV_ABILITY                     0x100  //�豸���ܷ�����������
#define VCA_CHAN_ABILITY                    0x110  //��Ϊ��������
#define TRANSFER_ABILITY                    0x120
#define MATRIXDECODER_ABILITY               0x200  //��·��������ʾ����������
#define VIDEOPLATFORM_ABILITY               0x210 //��Ƶ�ۺ�ƽ̨������
#define VIDEOPLATFORM_SBUCODESYSTEM_ABILITY 0x211 //��Ƶ�ۺ�ƽ̨������ϵͳ������
#define WALL_ABILITY                        0x212  //����ǽ������
#define MATRIX_ABILITY                      0x213  //SDI��������
#define DECODECARD_ABILITY                  0x220 //���뿨������������
#define VIDEOPLATFORM_ABILITY_V40           0x230 //��Ƶ�ۺ�ƽ̨������
#define MATRIXMANAGEDEVICE_ABILITY          0x240 //�����������������
#define MATRIXDECODER_ABILITY_V41           0x260 //������������
#define DECODER_ABILITY                     0x261 //������xml������
#define DECODECARD_ABILITY_V41              0x270 //���뿨������������V41
#define CODECARD_ABILITY                    0x271  //���뿨������
#define SNAPCAMERA_ABILITY                  0x300  //ץ�Ļ�������
#define ITC_TRIGGER_MODE_ABILITY            0x301  //����IPC�豸�Ĵ���ģʽ����
#define COMPRESSIONCFG_ABILITY              0x400  //��ȡѹ��������������
#define COMPRESSION_LIMIT                   0x401  //��ȡ��������ѹ��������������
#define PIC_CAPTURE_ABILITY                    0x402  //��ͼƬ�ֱ�����������
#define ALARMHOST_ABILITY                   0x500 //���籨������������
#define IT_DEVICE_ABILITY                   0x501  //���ܽ�ͨ������
#define    SCREENCONTROL_ABILITY                0x600     //����������������
#define    SCREENSERVER_ABILITY                0x610     //����������������
#define FISHEYE_ABILITY                     0x700   //����������
#define LCD_SCREEN_ABILITY                    0x800    //LCD��Ļ���� 2013-10-12
#define ACS_ABILITY                         0x801   //�Ž�����
#define MERGEDEV_ABILITY                    0x802   //������������
#define CAM_FUSION_ABILITY                  0x803   //���ƴ������
#define OPTICAL_DEV_ACCESS_ABILITY          0x805   //��˻���������
#define NET_RING_ABILITY                    0x806    //����������
#define LED_ABILITY                            0x807    //LED��������
#define PUBLISHDEV_ABILITY                    0x80a    //��Ϣ��������
#define SCREEN_EXCHANGE_ABILITY             0x80b   //��Ļ��������
#define REMOTE_NETMGR_FOT_ABILITY   0x80e   //Զ�������շ�������
/*************************************************
�������ýṹ������(����_V30Ϊ9000����)
**************************************************/

//�Ӱ��쳣��Ϣ
//������
#define EXCEPTION_MAJOR_MAINBOARD_BOOT                    0x1  //������������
//������
#define EXCEPTION_MINOR_PCIE_SCAN                        0x1  // pcie��·ɨ���쳣
#define EXCEPTION_MINOR_DOWNLOAD_SUBBOARD                 0xa  //�����Ӱ�����쳣

//������
#define EXCEPTION_MAJOR_SUBBOARD_BOOT                    0x2  //�Ӱ���������
//������
#define EXCEPTION_MINOR_INEXISTENCE                       0x1  //PCI-Eɨ������ǰ�Ӱ岻����
#define EXCEPTION_MINOR_UBOOT_DOWNLOAD                  0xa  // uboot�����쳣
#define EXCEPTION_MINOR_UBOOT_INIT                      0xe  //uboot��ʼ���쳣
#define EXCEPTION_MINOR_ROOTFS_DOWNLOAD                 0x14  //rootfs.img�����쳣
#define EXCEPTION_MINOR_UIMAGE_DOWNLOAD                 0x19  //uImage�����쳣
#define EXCEPTION_MINOR_UBOOT_SETBOOTFLAG               0x1e  // uboot������־λ��λ�쳣
#define EXCEPTION_MINOR_ROOTFS_BOOT_SUBBOARD            0x23  // rootfs�����쳣
#define EXCEPTION_MINOR_NEED_FILE_FINISH                0x28  //�Ӱ������ļ������쳣

//������
#define EXCEPTION_MAJOR_SUBBOARD_HARDWARE                0x3  //�Ӱ�Ӳ������
//������
#define EXCEPTION_MINOR_AD                               0x1  //AD�쳣
#define EXCEPTION_MINOR_DA                                 0xa  // DA�쳣
#define EXCEPTION_MINOR_TIMER                            0xb     //ʱ���쳣

//������
#define EXCEPTION_MAJOR_FPGA                            0x4  //FPGA����
//������
#define EXCEPTION_MINOR_IDLE                              0x1  //�޷�IDLE
#define EXCEPTION_MINOR_LANE                             0xa  // LANE OKʧ��
#define EXCEPTION_MINOR_REGISTER_ALL_F                     0xe  //FPGA�Ĵ���ȫF
#define EXCEPTION_MINOR_MEMORY_INIT_FAIL                 0x14 //FPGA�ڴ��ʼ��ʧ��
//������
#define EXCEPTION_MAJOR_DSP                                0x5  //DSP����

//������
#define EXCEPTION_MAJOR_ARM                                0x6  //ARM����

//������
#define EXCEPTION_MAJOR_BACKBOARD                        0x7  //��������
//������
#define EXCEPTION_MINOR_BLACKBOARD_TYPE                   0x1  //��ȡ���������쳣
#define EXCEPTION_MINOR_SERDES                           0xa  //��Ƶ����оƬ
#define EXCEPTION_MINOR_CLOCK                             0xe  //ʱ�ӹ���
#define EXCEPTION_MINOR_SYNCH                             0x14  //ͬ���źŹ���

//������
#define EXCEPTION_MAJOR_SUBBOARD_NET                    0x8  //�Ӱ�����
//������
#define EXCEPTION_MINOR_IP_CONFLICT                       0x1  //IP��ͻ
#define EXCEPTION_MINOR_DISCONNECT                         0x14  // ����


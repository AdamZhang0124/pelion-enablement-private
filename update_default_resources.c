
//----------------------------------------------------------------------------
//   The confidential and proprietary information contained in this file may
//   only be used by a person authorised under and to the extent permitted
//   by a subsisting licensing agreement from ARM Limited or its affiliates.
//
//          (C) COPYRIGHT 2013-2017 ARM Limited or its affiliates.
//              ALL RIGHTS RESERVED
//
//   This entire notice must be reproduced on all copies of this file
//   and copies of this file may only be made by a person if such person is
//   permitted to do so under the terms of a subsisting license agreement
//   from ARM Limited or its affiliates.
//----------------------------------------------------------------------------

#ifdef MBED_CLOUD_CLIENT_USER_CONFIG_FILE
#include MBED_CLOUD_CLIENT_USER_CONFIG_FILE
#endif

#include <stdint.h>

#ifdef MBED_CLOUD_DEV_UPDATE_ID
const uint8_t arm_uc_vendor_id[] = {
    0xfa, 0x6b, 0x4a, 0x53, 0xd5, 0xad, 0x5f, 0xdf, 0xbe, 0x9d, 0xe6, 0x63, 0xe4, 0xd4, 0x1f, 0xfe
};
const uint16_t arm_uc_vendor_id_size = sizeof(arm_uc_vendor_id);

const uint8_t arm_uc_class_id[]  = {
    0x90, 0xb, 0x1d, 0xe4, 0xca, 0x2, 0x5a, 0x87, 0xa9, 0x43, 0x1d, 0xb8, 0x54, 0xff, 0xef, 0x9a
};
const uint16_t arm_uc_class_id_size = sizeof(arm_uc_class_id);
#endif

#ifdef MBED_CLOUD_DEV_UPDATE_CERT
const uint8_t arm_uc_default_fingerprint[] =  {
    0xcf, 0xcd, 0x2b, 0xc9, 0x9d, 0x30, 0xc6, 0x42, 0x33, 0x13, 0x9f, 0x4e, 0x34, 0x7, 0xc6, 0xf2,
    0xd7, 0xbc, 0x88, 0x17, 0x84, 0xfb, 0x26, 0x5d, 0x53, 0x23, 0xa5, 0x73, 0xfc, 0xd1, 0x99, 0xd2
};
const uint16_t arm_uc_default_fingerprint_size =
    sizeof(arm_uc_default_fingerprint);

const uint8_t arm_uc_default_subject_key_identifier[] =  {
    0x16, 0x79, 0x31, 0x40, 0xf1, 0x33, 0x54, 0x5b, 0x4c, 0x9c, 0xf, 0xe4, 0x80, 0xaa, 0x9b, 0xa8,
    0x73, 0x94, 0x7e, 0xde
};
const uint16_t arm_uc_default_subject_key_identifier_size =
    sizeof(arm_uc_default_subject_key_identifier);

const uint8_t arm_uc_default_certificate[] = {
    0x30, 0x82, 0x1, 0x80, 0x30, 0x82, 0x1, 0x25, 0xa0, 0x3, 0x2, 0x1, 0x2, 0x2, 0x14, 0x8,
    0x92, 0x6e, 0x9b, 0xe9, 0xfe, 0x49, 0x9a, 0xfd, 0x0, 0x52, 0x1d, 0xcf, 0x2f, 0xb2, 0x87, 0xf3,
    0x14, 0xa6, 0xe4, 0x30, 0xa, 0x6, 0x8, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x4, 0x3, 0x2, 0x30,
    0x12, 0x31, 0x10, 0x30, 0xe, 0x6, 0x3, 0x55, 0x4, 0x3, 0xc, 0x7, 0x61, 0x72, 0x6d, 0x2e,
    0x63, 0x6f, 0x6d, 0x30, 0x1e, 0x17, 0xd, 0x31, 0x38, 0x31, 0x31, 0x31, 0x39, 0x32, 0x33, 0x33,
    0x34, 0x34, 0x38, 0x5a, 0x17, 0xd, 0x31, 0x39, 0x30, 0x32, 0x31, 0x37, 0x32, 0x33, 0x33, 0x34,
    0x34, 0x38, 0x5a, 0x30, 0x12, 0x31, 0x10, 0x30, 0xe, 0x6, 0x3, 0x55, 0x4, 0x3, 0xc, 0x7,
    0x61, 0x72, 0x6d, 0x2e, 0x63, 0x6f, 0x6d, 0x30, 0x59, 0x30, 0x13, 0x6, 0x7, 0x2a, 0x86, 0x48,
    0xce, 0x3d, 0x2, 0x1, 0x6, 0x8, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x3, 0x1, 0x7, 0x3, 0x42,
    0x0, 0x4, 0xda, 0x16, 0xe6, 0xe2, 0x78, 0x23, 0xc4, 0xf5, 0xe7, 0xb2, 0xf7, 0x1d, 0xd8, 0xf7,
    0xa9, 0x7b, 0x5, 0x2a, 0x4b, 0x68, 0x58, 0x33, 0x93, 0x79, 0x4, 0x62, 0x12, 0xee, 0x90, 0xc,
    0x4e, 0xa3, 0xc7, 0x5c, 0xba, 0x9d, 0xf3, 0xbb, 0x75, 0xa2, 0xbe, 0x2a, 0xf2, 0xbf, 0x3f, 0x1,
    0x33, 0x71, 0x90, 0xf3, 0xa1, 0xac, 0xa1, 0x5b, 0xf5, 0x3c, 0x9, 0x2c, 0x17, 0x25, 0xfd, 0x65,
    0x5e, 0x55, 0xa3, 0x59, 0x30, 0x57, 0x30, 0xb, 0x6, 0x3, 0x55, 0x1d, 0xf, 0x4, 0x4, 0x3,
    0x2, 0x7, 0x80, 0x30, 0x14, 0x6, 0x3, 0x55, 0x1d, 0x11, 0x4, 0xd, 0x30, 0xb, 0x82, 0x9,
    0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x68, 0x6f, 0x73, 0x74, 0x30, 0x13, 0x6, 0x3, 0x55, 0x1d, 0x25,
    0x4, 0xc, 0x30, 0xa, 0x6, 0x8, 0x2b, 0x6, 0x1, 0x5, 0x5, 0x7, 0x3, 0x3, 0x30, 0x1d,
    0x6, 0x3, 0x55, 0x1d, 0xe, 0x4, 0x16, 0x4, 0x14, 0x16, 0x79, 0x31, 0x40, 0xf1, 0x33, 0x54,
    0x5b, 0x4c, 0x9c, 0xf, 0xe4, 0x80, 0xaa, 0x9b, 0xa8, 0x73, 0x94, 0x7e, 0xde, 0x30, 0xa, 0x6,
    0x8, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x4, 0x3, 0x2, 0x3, 0x49, 0x0, 0x30, 0x46, 0x2, 0x21,
    0x0, 0xad, 0x4, 0xf0, 0x14, 0xe2, 0x9c, 0xd1, 0xc5, 0x69, 0x4c, 0xfe, 0xba, 0xc9, 0x25, 0x51,
    0xcb, 0xe5, 0x9f, 0xed, 0x49, 0x61, 0xfd, 0xde, 0x37, 0x7c, 0x80, 0x1e, 0x9a, 0xb, 0x67, 0x76,
    0xf8, 0x2, 0x21, 0x0, 0xdb, 0xfa, 0xa3, 0x38, 0x47, 0xf1, 0x85, 0x4f, 0xac, 0x47, 0x3a, 0x36,
    0xdd, 0xb9, 0xc6, 0xcf, 0xb0, 0x77, 0x9a, 0x9c, 0xc1, 0x7a, 0x43, 0x5e, 0x57, 0x8, 0x36, 0xdb,
    0x41, 0xb9, 0xba, 0xba
};
const uint16_t arm_uc_default_certificate_size = sizeof(arm_uc_default_certificate);
#endif


#ifdef MBED_CLOUD_DEV_UPDATE_PSK
const uint8_t arm_uc_default_psk[] = {
    
};
const uint8_t arm_uc_default_psk_size = sizeof(arm_uc_default_psk);
const uint16_t arm_uc_default_psk_bits = sizeof(arm_uc_default_psk)*8;

const uint8_t arm_uc_default_psk_id[] = {
    
};
const uint8_t arm_uc_default_psk_id_size = sizeof(arm_uc_default_psk_id);
#endif

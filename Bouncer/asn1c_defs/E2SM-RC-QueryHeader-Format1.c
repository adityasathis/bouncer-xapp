/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "defs/E2SM-RC-R003-v03.00.asn1"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#include "E2SM-RC-QueryHeader-Format1.h"

#include "RANParameter-Testing.h"
#include "Associated-UE-Info.h"
asn_TYPE_member_t asn_MBR_E2SM_RC_QueryHeader_Format1_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_RC_QueryHeader_Format1, ric_Style_Type),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RIC_Style_Type,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ric-Style-Type"
		},
	{ ATF_POINTER, 2, offsetof(struct E2SM_RC_QueryHeader_Format1, associatedE2NodeInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANParameter_Testing,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"associatedE2NodeInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct E2SM_RC_QueryHeader_Format1, associatedUEInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Associated_UE_Info,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"associatedUEInfo"
		},
};
static const int asn_MAP_E2SM_RC_QueryHeader_Format1_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_E2SM_RC_QueryHeader_Format1_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2SM_RC_QueryHeader_Format1_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ric-Style-Type */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* associatedE2NodeInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* associatedUEInfo */
};
asn_SEQUENCE_specifics_t asn_SPC_E2SM_RC_QueryHeader_Format1_specs_1 = {
	sizeof(struct E2SM_RC_QueryHeader_Format1),
	offsetof(struct E2SM_RC_QueryHeader_Format1, _asn_ctx),
	asn_MAP_E2SM_RC_QueryHeader_Format1_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_E2SM_RC_QueryHeader_Format1_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2SM_RC_QueryHeader_Format1 = {
	"E2SM-RC-QueryHeader-Format1",
	"E2SM-RC-QueryHeader-Format1",
	&asn_OP_SEQUENCE,
	asn_DEF_E2SM_RC_QueryHeader_Format1_tags_1,
	sizeof(asn_DEF_E2SM_RC_QueryHeader_Format1_tags_1)
		/sizeof(asn_DEF_E2SM_RC_QueryHeader_Format1_tags_1[0]), /* 1 */
	asn_DEF_E2SM_RC_QueryHeader_Format1_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2SM_RC_QueryHeader_Format1_tags_1)
		/sizeof(asn_DEF_E2SM_RC_QueryHeader_Format1_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E2SM_RC_QueryHeader_Format1_1,
	3,	/* Elements count */
	&asn_SPC_E2SM_RC_QueryHeader_Format1_specs_1	/* Additional specs */
};


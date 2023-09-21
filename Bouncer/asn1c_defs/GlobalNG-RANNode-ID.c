/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "defs/E2AP-R003-v03.00.asn1"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#include "GlobalNG-RANNode-ID.h"

#include "GlobalgNB-ID.h"
#include "GlobalngeNB-ID.h"
asn_per_constraints_t asn_PER_type_GlobalNG_RANNode_ID_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_GlobalNG_RANNode_ID_1[] = {
	{ ATF_POINTER, 0, offsetof(struct GlobalNG_RANNode_ID, choice.gNB),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GlobalgNB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gNB"
		},
	{ ATF_POINTER, 0, offsetof(struct GlobalNG_RANNode_ID, choice.ng_eNB),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GlobalngeNB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ng-eNB"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_GlobalNG_RANNode_ID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gNB */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ng-eNB */
};
asn_CHOICE_specifics_t asn_SPC_GlobalNG_RANNode_ID_specs_1 = {
	sizeof(struct GlobalNG_RANNode_ID),
	offsetof(struct GlobalNG_RANNode_ID, _asn_ctx),
	offsetof(struct GlobalNG_RANNode_ID, present),
	sizeof(((struct GlobalNG_RANNode_ID *)0)->present),
	asn_MAP_GlobalNG_RANNode_ID_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_GlobalNG_RANNode_ID = {
	"GlobalNG-RANNode-ID",
	"GlobalNG-RANNode-ID",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_GlobalNG_RANNode_ID_constr_1, CHOICE_constraint },
	asn_MBR_GlobalNG_RANNode_ID_1,
	2,	/* Elements count */
	&asn_SPC_GlobalNG_RANNode_ID_specs_1	/* Additional specs */
};


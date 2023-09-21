/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "defs/E2SM-RC-R003-v03.00.asn1"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#ifndef	_E2SM_RC_QueryOutcome_Format2_ItemUE_H_
#define	_E2SM_RC_QueryOutcome_Format2_ItemUE_H_


#include "asn_application.h"

/* Including external dependencies */
#include "UEID.h"
#include "UE-Filter-ID.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct E2SM_RC_QueryOutcome_Format2_ItemParameters;

/* E2SM-RC-QueryOutcome-Format2-ItemUE */
typedef struct E2SM_RC_QueryOutcome_Format2_ItemUE {
	UEID_t	 ueID;
	struct E2SM_RC_QueryOutcome_Format2_ItemUE__ranP_List {
		A_SEQUENCE_OF(struct E2SM_RC_QueryOutcome_Format2_ItemParameters) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ranP_List;
	UE_Filter_ID_t	*ueFilterID;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2SM_RC_QueryOutcome_Format2_ItemUE_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2SM_RC_QueryOutcome_Format2_ItemUE;
extern asn_SEQUENCE_specifics_t asn_SPC_E2SM_RC_QueryOutcome_Format2_ItemUE_specs_1;
extern asn_TYPE_member_t asn_MBR_E2SM_RC_QueryOutcome_Format2_ItemUE_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_RC_QueryOutcome_Format2_ItemUE_H_ */
#include "asn_internal.h"

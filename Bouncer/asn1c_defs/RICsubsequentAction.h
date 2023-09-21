/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "defs/E2AP-R003-v03.00.asn1"
 * 	`asn1c -fcompound-names -findirect-choice -fincludes-quoted -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#ifndef	_RICsubsequentAction_H_
#define	_RICsubsequentAction_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RICsubsequentActionType.h"
#include "RICtimeToWait.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RICsubsequentAction */
typedef struct RICsubsequentAction {
	RICsubsequentActionType_t	 ricSubsequentActionType;
	RICtimeToWait_t	 ricTimeToWait;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RICsubsequentAction_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RICsubsequentAction;
extern asn_SEQUENCE_specifics_t asn_SPC_RICsubsequentAction_specs_1;
extern asn_TYPE_member_t asn_MBR_RICsubsequentAction_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RICsubsequentAction_H_ */
#include "asn_internal.h"

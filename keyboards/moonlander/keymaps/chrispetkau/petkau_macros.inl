enum petkau_keycodes
{
	RGB_SLD = ML_SAFE_RANGE,
	PETKAU_MACRO_Void,
	PETKAU_MACRO_Break,
	PETKAU_MACRO_NotEqual,
	PETKAU_MACRO_EqualsArrow,
	PETKAU_MACRO_DashArrow,
	PETKAU_MACRO_Return,
	PETKAU_MACRO_Bool,
	PETKAU_MACRO_False,
	PETKAU_MACRO_True,
	PETKAU_MACRO_NullPtr,
	PETKAU_MACRO_Continue,
	PETKAU_MACRO_Virtual,
	PETKAU_MACRO_Override,
	PETKAU_MACRO_Static,
	PETKAU_MACRO_Enum,
	PETKAU_MACRO_Class,
	PETKAU_MACRO_Struct,
	PETKAU_MACRO_Namespace,
	PETKAU_MACRO_Include,
	PETKAU_MACRO_Define,
	PETKAU_MACRO_IfDef,
	PETKAU_MACRO_Else,
	PETKAU_MACRO_EndIf,
	PETKAU_MACRO_Public,
	PETKAU_MACRO_Private,
	PETKAU_MACRO_Template,
	PETKAU_MACRO_Typename,
	PETKAU_MACRO_Auto,
	PETKAU_MACRO_While,
	PETKAU_MACRO_ReinterpretCast,
	PETKAU_MACRO_Function,
};

#define PETKAU_DELAY SS_DELAY(1)

bool process_record_macros(uint16_t keycode, keyrecord_t *record)
{
	switch (keycode)
	{
	case PETKAU_MACRO_Void: SEND_STRING(SS_TAP(X_V) PETKAU_DELAY SS_TAP(X_O) PETKAU_DELAY SS_TAP(X_I) PETKAU_DELAY SS_TAP(X_D)); break;
	case PETKAU_MACRO_Break: SEND_STRING(SS_TAP(X_B) PETKAU_DELAY SS_TAP(X_R) PETKAU_DELAY SS_TAP(X_E) PETKAU_DELAY SS_TAP(X_A) PETKAU_DELAY SS_TAP(X_K)); break;
	case PETKAU_MACRO_NotEqual: SEND_STRING(SS_LSFT(SS_TAP(X_1)) PETKAU_DELAY SS_TAP(X_EQUAL)); break;
	case PETKAU_MACRO_EqualsArrow: SEND_STRING(SS_TAP(X_EQUAL) PETKAU_DELAY SS_LSFT(SS_TAP(X_DOT))); break;
	case PETKAU_MACRO_DashArrow: SEND_STRING(SS_TAP(X_MINUS) PETKAU_DELAY SS_LSFT(SS_TAP(X_DOT))); break;
	case PETKAU_MACRO_Return: SEND_STRING(SS_TAP(X_R) PETKAU_DELAY SS_TAP(X_E) PETKAU_DELAY SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_U) PETKAU_DELAY SS_TAP(X_R) PETKAU_DELAY SS_TAP(X_N)); break;
	case PETKAU_MACRO_Bool: SEND_STRING(SS_TAP(X_B) PETKAU_DELAY SS_TAP(X_O) PETKAU_DELAY SS_TAP(X_O) PETKAU_DELAY SS_TAP(X_L)); break;
	case PETKAU_MACRO_False: SEND_STRING(SS_TAP(X_F) PETKAU_DELAY SS_TAP(X_A) PETKAU_DELAY SS_TAP(X_L) PETKAU_DELAY SS_TAP(X_S) PETKAU_DELAY SS_TAP(X_E)); break;
	case PETKAU_MACRO_True: SEND_STRING(SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_R) PETKAU_DELAY SS_TAP(X_U) PETKAU_DELAY SS_TAP(X_E)); break;
	case PETKAU_MACRO_NullPtr: SEND_STRING(SS_TAP(X_N) PETKAU_DELAY SS_TAP(X_U) PETKAU_DELAY SS_TAP(X_L) PETKAU_DELAY SS_TAP(X_L) PETKAU_DELAY SS_TAP(X_P) PETKAU_DELAY SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_R)); break;
	case PETKAU_MACRO_Continue: SEND_STRING(SS_TAP(X_C) PETKAU_DELAY SS_TAP(X_O) PETKAU_DELAY SS_TAP(X_N) PETKAU_DELAY SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_I) PETKAU_DELAY SS_TAP(X_N) PETKAU_DELAY SS_TAP(X_U) PETKAU_DELAY SS_TAP(X_E)); break;
	case PETKAU_MACRO_Virtual: SEND_STRING(SS_TAP(X_V) PETKAU_DELAY SS_TAP(X_I) PETKAU_DELAY SS_TAP(X_R) PETKAU_DELAY SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_U) PETKAU_DELAY SS_TAP(X_A) PETKAU_DELAY SS_TAP(X_L)); break;
	case PETKAU_MACRO_Override: SEND_STRING(SS_TAP(X_O) PETKAU_DELAY SS_TAP(X_V) PETKAU_DELAY SS_TAP(X_E) PETKAU_DELAY SS_TAP(X_R) PETKAU_DELAY SS_TAP(X_R) PETKAU_DELAY SS_TAP(X_I) PETKAU_DELAY SS_TAP(X_D) PETKAU_DELAY SS_TAP(X_E)); break;
	case PETKAU_MACRO_Static: SEND_STRING(SS_TAP(X_S) PETKAU_DELAY SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_A) PETKAU_DELAY SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_I) PETKAU_DELAY SS_TAP(X_C)); break;
	case PETKAU_MACRO_Enum: SEND_STRING(SS_TAP(X_E) PETKAU_DELAY SS_TAP(X_N) PETKAU_DELAY SS_TAP(X_U) PETKAU_DELAY SS_TAP(X_M)); break;
	case PETKAU_MACRO_Class: SEND_STRING(SS_TAP(X_C) PETKAU_DELAY SS_TAP(X_L) PETKAU_DELAY SS_TAP(X_A) PETKAU_DELAY SS_TAP(X_S) PETKAU_DELAY SS_TAP(X_S)); break;
	case PETKAU_MACRO_Struct: SEND_STRING(SS_TAP(X_S) PETKAU_DELAY SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_R) PETKAU_DELAY SS_TAP(X_U) PETKAU_DELAY SS_TAP(X_C) PETKAU_DELAY SS_TAP(X_T)); break;
	case PETKAU_MACRO_Namespace: SEND_STRING(SS_TAP(X_N) PETKAU_DELAY SS_TAP(X_A) PETKAU_DELAY SS_TAP(X_M) PETKAU_DELAY SS_TAP(X_E) PETKAU_DELAY SS_TAP(X_S) PETKAU_DELAY SS_TAP(X_P) PETKAU_DELAY SS_TAP(X_A) PETKAU_DELAY SS_TAP(X_C) PETKAU_DELAY SS_TAP(X_E)); break;
	case PETKAU_MACRO_Include: SEND_STRING(SS_LSFT(SS_TAP(X_3)) PETKAU_DELAY SS_TAP(X_I) PETKAU_DELAY SS_TAP(X_N) PETKAU_DELAY SS_TAP(X_C) PETKAU_DELAY SS_TAP(X_L) PETKAU_DELAY SS_TAP(X_U) PETKAU_DELAY SS_TAP(X_D) PETKAU_DELAY SS_TAP(X_E)); break;
	case PETKAU_MACRO_Define: SEND_STRING(SS_LSFT(SS_TAP(X_3)) PETKAU_DELAY SS_TAP(X_D) PETKAU_DELAY SS_TAP(X_E) PETKAU_DELAY SS_TAP(X_F) PETKAU_DELAY SS_TAP(X_I) PETKAU_DELAY SS_TAP(X_N) PETKAU_DELAY SS_TAP(X_E)); break;
	case PETKAU_MACRO_IfDef: SEND_STRING(SS_LSFT(SS_TAP(X_3)) PETKAU_DELAY SS_TAP(X_I) PETKAU_DELAY SS_TAP(X_F) PETKAU_DELAY SS_TAP(X_D) PETKAU_DELAY SS_TAP(X_E) PETKAU_DELAY SS_TAP(X_F)); break;
	case PETKAU_MACRO_Else: SEND_STRING(SS_LSFT(SS_TAP(X_3)) PETKAU_DELAY SS_TAP(X_E) PETKAU_DELAY SS_TAP(X_L) PETKAU_DELAY SS_TAP(X_S) PETKAU_DELAY SS_TAP(X_E)); break;
	case PETKAU_MACRO_EndIf: SEND_STRING(SS_LSFT(SS_TAP(X_3)) PETKAU_DELAY SS_TAP(X_E) PETKAU_DELAY SS_TAP(X_N) PETKAU_DELAY SS_TAP(X_D) PETKAU_DELAY SS_TAP(X_I) PETKAU_DELAY SS_TAP(X_F)); break;
	case PETKAU_MACRO_Public: SEND_STRING(SS_TAP(X_P) PETKAU_DELAY SS_TAP(X_U) PETKAU_DELAY SS_TAP(X_B) PETKAU_DELAY SS_TAP(X_L) PETKAU_DELAY SS_TAP(X_I) PETKAU_DELAY SS_TAP(X_C)); break;
	case PETKAU_MACRO_Private: SEND_STRING(SS_TAP(X_P) PETKAU_DELAY SS_TAP(X_R) PETKAU_DELAY SS_TAP(X_I) PETKAU_DELAY SS_TAP(X_V) PETKAU_DELAY SS_TAP(X_A) PETKAU_DELAY SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_E)); break;
	case PETKAU_MACRO_Template: SEND_STRING(SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_E) PETKAU_DELAY SS_TAP(X_M) PETKAU_DELAY SS_TAP(X_P) PETKAU_DELAY SS_TAP(X_L) PETKAU_DELAY SS_TAP(X_A) PETKAU_DELAY SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_E)); break;
	case PETKAU_MACRO_Typename: SEND_STRING(SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_Y) PETKAU_DELAY SS_TAP(X_P) PETKAU_DELAY SS_TAP(X_E) PETKAU_DELAY SS_TAP(X_N) PETKAU_DELAY SS_TAP(X_A) PETKAU_DELAY SS_TAP(X_M) PETKAU_DELAY SS_TAP(X_E)); break;
	case PETKAU_MACRO_Auto: SEND_STRING(SS_TAP(X_A) PETKAU_DELAY SS_TAP(X_U) PETKAU_DELAY SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_O)); break;
	case PETKAU_MACRO_While: SEND_STRING(SS_TAP(X_W) PETKAU_DELAY SS_TAP(X_H) PETKAU_DELAY SS_TAP(X_I) PETKAU_DELAY SS_TAP(X_L) PETKAU_DELAY SS_TAP(X_E)); break;
	case PETKAU_MACRO_ReinterpretCast: SEND_STRING(SS_TAP(X_R) PETKAU_DELAY SS_TAP(X_E) PETKAU_DELAY SS_TAP(X_I) PETKAU_DELAY SS_TAP(X_N) PETKAU_DELAY SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_E) PETKAU_DELAY SS_TAP(X_R) PETKAU_DELAY SS_TAP(X_P) PETKAU_DELAY SS_TAP(X_R) PETKAU_DELAY SS_TAP(X_E) PETKAU_DELAY SS_TAP(X_T) PETKAU_DELAY SS_LSFT(SS_TAP(X_MINUS)) PETKAU_DELAY SS_TAP(X_C) PETKAU_DELAY SS_TAP(X_A) PETKAU_DELAY SS_TAP(X_S) PETKAU_DELAY SS_TAP(X_T)); break;
	case PETKAU_MACRO_Function: SEND_STRING(SS_TAP(X_F) PETKAU_DELAY SS_TAP(X_U) PETKAU_DELAY SS_TAP(X_N) PETKAU_DELAY SS_TAP(X_C) PETKAU_DELAY SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_I) PETKAU_DELAY SS_TAP(X_O) PETKAU_DELAY SS_TAP(X_N)); break;
	default: return false;
	}
	return true;
};

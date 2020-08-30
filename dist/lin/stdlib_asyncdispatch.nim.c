/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix

/* section: NIM_merge_FRAME_DEFINES */
#define nimfr_(x, y)
#define nimln_(x, y)

/* section: NIM_merge_FORWARD_TYPES */
typedef struct tyObject_PDispatchercolonObjectType___mNiwh37MfaAP9cG4kqT6kpg tyObject_PDispatchercolonObjectType___mNiwh37MfaAP9cG4kqT6kpg;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_PDispatcherBasecolonObjectType___YNzlM8oq8NLlO720L2VFMw tyObject_PDispatcherBasecolonObjectType___YNzlM8oq8NLlO720L2VFMw;
typedef struct RootObj RootObj;
typedef struct tyObject_HeapQueue__mgfFdry9aKsRMW9au5u9bSpOQ tyObject_HeapQueue__mgfFdry9aKsRMW9au5u9bSpOQ;
typedef struct tySequence__oKfdUHDH0q5oP14wOM6kug tySequence__oKfdUHDH0q5oP14wOM6kug;
typedef struct tyObject_Deque__NuwIXbomwb0PtcywOgXRnA tyObject_Deque__NuwIXbomwb0PtcywOgXRnA;
typedef struct tySequence__aNpJjaoUowCQc7fBn3wtDQ tySequence__aNpJjaoUowCQc7fBn3wtDQ;
typedef struct tyTuple__5aoVPIWYzahUyBc9bMm0M5w tyTuple__5aoVPIWYzahUyBc9bMm0M5w;
typedef struct tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w;
typedef struct tyObject_FuturecolonObjectType___te3W2Tqi7xuJ7rlPtg9al5w tyObject_FuturecolonObjectType___te3W2Tqi7xuJ7rlPtg9al5w;
typedef struct tyObject_SelectorImpl__jkoZicTBtYdKkYck5SFJEQ tyObject_SelectorImpl__jkoZicTBtYdKkYck5SFJEQ;
typedef struct tyObject_AsyncData__hOYUN4IOpj9adMwn6W7S2VA tyObject_AsyncData__hOYUN4IOpj9adMwn6W7S2VA;
typedef struct tySequence__mqHCvcswroDetkzsL3ixtg tySequence__mqHCvcswroDetkzsL3ixtg;
typedef struct tyTuple__JfHvHzMrhKkWAUvQKe0i1A tyTuple__JfHvHzMrhKkWAUvQKe0i1A;
typedef struct tyObject_Env_asyncdispatchdotnim___diB2NTuAIWY0FO9c5IUJRGg tyObject_Env_asyncdispatchdotnim___diB2NTuAIWY0FO9c5IUJRGg;
typedef struct TGenericSeq TGenericSeq;

/* section: NIM_merge_TYPES */
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
NI align;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct RootObj {
TNimType* m_type;
};
struct tyObject_HeapQueue__mgfFdry9aKsRMW9au5u9bSpOQ {
tySequence__oKfdUHDH0q5oP14wOM6kug* data;
};
struct tyObject_Deque__NuwIXbomwb0PtcywOgXRnA {
tySequence__aNpJjaoUowCQc7fBn3wtDQ* data;
NI head;
NI tail;
NI count;
NI mask;
};
struct tyObject_PDispatcherBasecolonObjectType___YNzlM8oq8NLlO720L2VFMw {
  RootObj Sup;
tyObject_HeapQueue__mgfFdry9aKsRMW9au5u9bSpOQ timers;
tyObject_Deque__NuwIXbomwb0PtcywOgXRnA callbacks;
};
struct tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w {
NI64 ticks;
};
struct tyTuple__5aoVPIWYzahUyBc9bMm0M5w {
tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w Field0;
tyObject_FuturecolonObjectType___te3W2Tqi7xuJ7rlPtg9al5w* Field1;
};
struct tyObject_PDispatchercolonObjectType___mNiwh37MfaAP9cG4kqT6kpg {
  tyObject_PDispatcherBasecolonObjectType___YNzlM8oq8NLlO720L2VFMw Sup;
tyObject_SelectorImpl__jkoZicTBtYdKkYck5SFJEQ* selector;
};
struct tyObject_AsyncData__hOYUN4IOpj9adMwn6W7S2VA {
tySequence__mqHCvcswroDetkzsL3ixtg* readList;
tySequence__mqHCvcswroDetkzsL3ixtg* writeList;
};
struct tyTuple__JfHvHzMrhKkWAUvQKe0i1A {
void* Field0;
tyObject_Env_asyncdispatchdotnim___diB2NTuAIWY0FO9c5IUJRGg* Field1;
};
struct TGenericSeq {
NI len;
NI reserved;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClP_0) (int fd, void* ClE_0);
void* ClE_0;
} tyProc__kbFLS7lxxUPzrFcbZuGUzQ;
typedef N_NIMCALL_PTR(void, tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (void* ClE_0);
void* ClE_0;
} tyProc__HzVCwACFYM9cx9aV62PdjtuA;

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__mqHCvcswroDetkzsL3ixtg {
  TGenericSeq Sup;
  tyProc__kbFLS7lxxUPzrFcbZuGUzQ data[SEQ_DECL_SIZE];
};
struct tySequence__oKfdUHDH0q5oP14wOM6kug {
  TGenericSeq Sup;
  tyTuple__5aoVPIWYzahUyBc9bMm0M5w data[SEQ_DECL_SIZE];
};
struct tySequence__aNpJjaoUowCQc7fBn3wtDQ {
  TGenericSeq Sup;
  tyProc__HzVCwACFYM9cx9aV62PdjtuA data[SEQ_DECL_SIZE];
};

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tySequence__mqHCvcswroDetkzsL3ixtg)(void* p, NI op);
static N_NIMCALL(void, Marker_tyRef__OGnyBMU9csFmaJm9bh2uOQiQ)(void* p, NI op);
static N_NIMCALL(void, TM__gfe9a52b5gJr8GSrnr883iA_6)(void);
N_LIB_PRIVATE N_NIMCALL(void, nimRegisterThreadLocalMarker)(tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);

/* section: NIM_merge_DATA */
extern TNimType NTI__ytyiCJqK439aF9cIibuRVpAg_;
N_LIB_PRIVATE TNimType NTI__YNzlM8oq8NLlO720L2VFMw_;
N_LIB_PRIVATE TNimType NTI__5aoVPIWYzahUyBc9bMm0M5w_;
extern TNimType NTI__FEvFMlkqJiSSGVO6HgTv8w_;
extern TNimType NTI__TjokxNjmnZmr9bygVDVC9bvg_;
extern TNimType NTI__mgfFdry9aKsRMW9au5u9bSpOQ_;
extern TNimType NTI__NuwIXbomwb0PtcywOgXRnA_;
N_LIB_PRIVATE TNimType NTI__mNiwh37MfaAP9cG4kqT6kpg_;
N_LIB_PRIVATE TNimType NTI__hOYUN4IOpj9adMwn6W7S2VA_;
N_LIB_PRIVATE TNimType NTI__kbFLS7lxxUPzrFcbZuGUzQ_;
extern TNimType NTI__vr5DoT1jILTGdRlYv1OYpw_;
extern TNimType NTI__HsJiUUcO9cHBdUCi0HwkSTA_;
N_LIB_PRIVATE TNimType NTI__mqHCvcswroDetkzsL3ixtg_;
extern TNimType NTI__Y5hK0M9cL3lXwccEV9cgR9cQw_;
N_LIB_PRIVATE TNimType NTI__OGnyBMU9csFmaJm9bh2uOQiQ_;

/* section: NIM_merge_VARS */
N_LIB_PRIVATE NIM_THREADVAR tyObject_PDispatchercolonObjectType___mNiwh37MfaAP9cG4kqT6kpg* gDisp__yIbBArLUsg2pBJkilx4yvg;

/* section: NIM_merge_PROCS */
static N_NIMCALL(void, Marker_tySequence__mqHCvcswroDetkzsL3ixtg)(void* p, NI op) {
	tySequence__mqHCvcswroDetkzsL3ixtg* a;
	NI T1_;
	a = (tySequence__mqHCvcswroDetkzsL3ixtg*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < (a ? a->Sup.len : 0); T1_++) {
	nimGCvisit((void*)a->data[T1_].ClE_0, op);
	}
}
static N_NIMCALL(void, Marker_tyRef__OGnyBMU9csFmaJm9bh2uOQiQ)(void* p, NI op) {
	tyObject_PDispatchercolonObjectType___mNiwh37MfaAP9cG4kqT6kpg* a;
	a = (tyObject_PDispatchercolonObjectType___mNiwh37MfaAP9cG4kqT6kpg*)p;
	nimGCvisit((void*)(*a).Sup.timers.data, op);
	nimGCvisit((void*)(*a).Sup.callbacks.data, op);
	nimGCvisit((void*)(*a).selector, op);
}
static N_NIMCALL(void, TM__gfe9a52b5gJr8GSrnr883iA_6)(void) {
	nimGCvisit((void*)gDisp__yIbBArLUsg2pBJkilx4yvg, 0);
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_asyncdispatchInit000)(void) {
{

	nimRegisterThreadLocalMarker(TM__gfe9a52b5gJr8GSrnr883iA_6);

}
}

N_LIB_PRIVATE N_NIMCALL(void, stdlib_asyncdispatchDatInit000)(void) {

/* section: NIM_merge_TYPE_INIT1 */
static TNimNode* TM__gfe9a52b5gJr8GSrnr883iA_2_2[2];
static TNimNode* TM__gfe9a52b5gJr8GSrnr883iA_3_2[2];
static TNimNode* TM__gfe9a52b5gJr8GSrnr883iA_4_2[2];
static TNimNode* TM__gfe9a52b5gJr8GSrnr883iA_5_2[2];
static TNimNode TM__gfe9a52b5gJr8GSrnr883iA_0[13];

/* section: NIM_merge_TYPE_INIT3 */
NTI__YNzlM8oq8NLlO720L2VFMw_.size = sizeof(tyObject_PDispatcherBasecolonObjectType___YNzlM8oq8NLlO720L2VFMw);
NTI__YNzlM8oq8NLlO720L2VFMw_.align = NIM_ALIGNOF(tyObject_PDispatcherBasecolonObjectType___YNzlM8oq8NLlO720L2VFMw);
NTI__YNzlM8oq8NLlO720L2VFMw_.kind = 17;
NTI__YNzlM8oq8NLlO720L2VFMw_.base = (&NTI__ytyiCJqK439aF9cIibuRVpAg_);
TM__gfe9a52b5gJr8GSrnr883iA_2_2[0] = &TM__gfe9a52b5gJr8GSrnr883iA_0[1];
NTI__5aoVPIWYzahUyBc9bMm0M5w_.size = sizeof(tyTuple__5aoVPIWYzahUyBc9bMm0M5w);
NTI__5aoVPIWYzahUyBc9bMm0M5w_.align = NIM_ALIGNOF(tyTuple__5aoVPIWYzahUyBc9bMm0M5w);
NTI__5aoVPIWYzahUyBc9bMm0M5w_.kind = 18;
NTI__5aoVPIWYzahUyBc9bMm0M5w_.base = 0;
TM__gfe9a52b5gJr8GSrnr883iA_3_2[0] = &TM__gfe9a52b5gJr8GSrnr883iA_0[3];
TM__gfe9a52b5gJr8GSrnr883iA_0[3].kind = 1;
TM__gfe9a52b5gJr8GSrnr883iA_0[3].offset = offsetof(tyTuple__5aoVPIWYzahUyBc9bMm0M5w, Field0);
TM__gfe9a52b5gJr8GSrnr883iA_0[3].typ = (&NTI__FEvFMlkqJiSSGVO6HgTv8w_);
TM__gfe9a52b5gJr8GSrnr883iA_0[3].name = "Field0";
TM__gfe9a52b5gJr8GSrnr883iA_3_2[1] = &TM__gfe9a52b5gJr8GSrnr883iA_0[4];
TM__gfe9a52b5gJr8GSrnr883iA_0[4].kind = 1;
TM__gfe9a52b5gJr8GSrnr883iA_0[4].offset = offsetof(tyTuple__5aoVPIWYzahUyBc9bMm0M5w, Field1);
TM__gfe9a52b5gJr8GSrnr883iA_0[4].typ = (&NTI__TjokxNjmnZmr9bygVDVC9bvg_);
TM__gfe9a52b5gJr8GSrnr883iA_0[4].name = "Field1";
TM__gfe9a52b5gJr8GSrnr883iA_0[2].len = 2; TM__gfe9a52b5gJr8GSrnr883iA_0[2].kind = 2; TM__gfe9a52b5gJr8GSrnr883iA_0[2].sons = &TM__gfe9a52b5gJr8GSrnr883iA_3_2[0];
NTI__5aoVPIWYzahUyBc9bMm0M5w_.node = &TM__gfe9a52b5gJr8GSrnr883iA_0[2];
TM__gfe9a52b5gJr8GSrnr883iA_0[1].kind = 1;
TM__gfe9a52b5gJr8GSrnr883iA_0[1].offset = offsetof(tyObject_PDispatcherBasecolonObjectType___YNzlM8oq8NLlO720L2VFMw, timers);
TM__gfe9a52b5gJr8GSrnr883iA_0[1].typ = (&NTI__mgfFdry9aKsRMW9au5u9bSpOQ_);
TM__gfe9a52b5gJr8GSrnr883iA_0[1].name = "timers";
TM__gfe9a52b5gJr8GSrnr883iA_2_2[1] = &TM__gfe9a52b5gJr8GSrnr883iA_0[5];
TM__gfe9a52b5gJr8GSrnr883iA_0[5].kind = 1;
TM__gfe9a52b5gJr8GSrnr883iA_0[5].offset = offsetof(tyObject_PDispatcherBasecolonObjectType___YNzlM8oq8NLlO720L2VFMw, callbacks);
TM__gfe9a52b5gJr8GSrnr883iA_0[5].typ = (&NTI__NuwIXbomwb0PtcywOgXRnA_);
TM__gfe9a52b5gJr8GSrnr883iA_0[5].name = "callbacks";
TM__gfe9a52b5gJr8GSrnr883iA_0[0].len = 2; TM__gfe9a52b5gJr8GSrnr883iA_0[0].kind = 2; TM__gfe9a52b5gJr8GSrnr883iA_0[0].sons = &TM__gfe9a52b5gJr8GSrnr883iA_2_2[0];
NTI__YNzlM8oq8NLlO720L2VFMw_.node = &TM__gfe9a52b5gJr8GSrnr883iA_0[0];
NTI__mNiwh37MfaAP9cG4kqT6kpg_.size = sizeof(tyObject_PDispatchercolonObjectType___mNiwh37MfaAP9cG4kqT6kpg);
NTI__mNiwh37MfaAP9cG4kqT6kpg_.align = NIM_ALIGNOF(tyObject_PDispatchercolonObjectType___mNiwh37MfaAP9cG4kqT6kpg);
NTI__mNiwh37MfaAP9cG4kqT6kpg_.kind = 17;
NTI__mNiwh37MfaAP9cG4kqT6kpg_.base = (&NTI__YNzlM8oq8NLlO720L2VFMw_);
NTI__hOYUN4IOpj9adMwn6W7S2VA_.size = sizeof(tyObject_AsyncData__hOYUN4IOpj9adMwn6W7S2VA);
NTI__hOYUN4IOpj9adMwn6W7S2VA_.align = NIM_ALIGNOF(tyObject_AsyncData__hOYUN4IOpj9adMwn6W7S2VA);
NTI__hOYUN4IOpj9adMwn6W7S2VA_.kind = 18;
NTI__hOYUN4IOpj9adMwn6W7S2VA_.base = 0;
TM__gfe9a52b5gJr8GSrnr883iA_4_2[0] = &TM__gfe9a52b5gJr8GSrnr883iA_0[8];
NTI__kbFLS7lxxUPzrFcbZuGUzQ_.size = sizeof(tyTuple__JfHvHzMrhKkWAUvQKe0i1A);
NTI__kbFLS7lxxUPzrFcbZuGUzQ_.align = NIM_ALIGNOF(tyTuple__JfHvHzMrhKkWAUvQKe0i1A);
NTI__kbFLS7lxxUPzrFcbZuGUzQ_.kind = 18;
NTI__kbFLS7lxxUPzrFcbZuGUzQ_.base = 0;
TM__gfe9a52b5gJr8GSrnr883iA_5_2[0] = &TM__gfe9a52b5gJr8GSrnr883iA_0[10];
TM__gfe9a52b5gJr8GSrnr883iA_0[10].kind = 1;
TM__gfe9a52b5gJr8GSrnr883iA_0[10].offset = offsetof(tyTuple__JfHvHzMrhKkWAUvQKe0i1A, Field0);
TM__gfe9a52b5gJr8GSrnr883iA_0[10].typ = (&NTI__vr5DoT1jILTGdRlYv1OYpw_);
TM__gfe9a52b5gJr8GSrnr883iA_0[10].name = "Field0";
TM__gfe9a52b5gJr8GSrnr883iA_5_2[1] = &TM__gfe9a52b5gJr8GSrnr883iA_0[11];
TM__gfe9a52b5gJr8GSrnr883iA_0[11].kind = 1;
TM__gfe9a52b5gJr8GSrnr883iA_0[11].offset = offsetof(tyTuple__JfHvHzMrhKkWAUvQKe0i1A, Field1);
TM__gfe9a52b5gJr8GSrnr883iA_0[11].typ = (&NTI__HsJiUUcO9cHBdUCi0HwkSTA_);
TM__gfe9a52b5gJr8GSrnr883iA_0[11].name = "Field1";
TM__gfe9a52b5gJr8GSrnr883iA_0[9].len = 2; TM__gfe9a52b5gJr8GSrnr883iA_0[9].kind = 2; TM__gfe9a52b5gJr8GSrnr883iA_0[9].sons = &TM__gfe9a52b5gJr8GSrnr883iA_5_2[0];
NTI__kbFLS7lxxUPzrFcbZuGUzQ_.node = &TM__gfe9a52b5gJr8GSrnr883iA_0[9];
NTI__mqHCvcswroDetkzsL3ixtg_.size = sizeof(tySequence__mqHCvcswroDetkzsL3ixtg*);
NTI__mqHCvcswroDetkzsL3ixtg_.align = NIM_ALIGNOF(tySequence__mqHCvcswroDetkzsL3ixtg*);
NTI__mqHCvcswroDetkzsL3ixtg_.kind = 24;
NTI__mqHCvcswroDetkzsL3ixtg_.base = (&NTI__kbFLS7lxxUPzrFcbZuGUzQ_);
NTI__mqHCvcswroDetkzsL3ixtg_.marker = Marker_tySequence__mqHCvcswroDetkzsL3ixtg;
TM__gfe9a52b5gJr8GSrnr883iA_0[8].kind = 1;
TM__gfe9a52b5gJr8GSrnr883iA_0[8].offset = offsetof(tyObject_AsyncData__hOYUN4IOpj9adMwn6W7S2VA, readList);
TM__gfe9a52b5gJr8GSrnr883iA_0[8].typ = (&NTI__mqHCvcswroDetkzsL3ixtg_);
TM__gfe9a52b5gJr8GSrnr883iA_0[8].name = "readList";
TM__gfe9a52b5gJr8GSrnr883iA_4_2[1] = &TM__gfe9a52b5gJr8GSrnr883iA_0[12];
TM__gfe9a52b5gJr8GSrnr883iA_0[12].kind = 1;
TM__gfe9a52b5gJr8GSrnr883iA_0[12].offset = offsetof(tyObject_AsyncData__hOYUN4IOpj9adMwn6W7S2VA, writeList);
TM__gfe9a52b5gJr8GSrnr883iA_0[12].typ = (&NTI__mqHCvcswroDetkzsL3ixtg_);
TM__gfe9a52b5gJr8GSrnr883iA_0[12].name = "writeList";
TM__gfe9a52b5gJr8GSrnr883iA_0[7].len = 2; TM__gfe9a52b5gJr8GSrnr883iA_0[7].kind = 2; TM__gfe9a52b5gJr8GSrnr883iA_0[7].sons = &TM__gfe9a52b5gJr8GSrnr883iA_4_2[0];
NTI__hOYUN4IOpj9adMwn6W7S2VA_.node = &TM__gfe9a52b5gJr8GSrnr883iA_0[7];
TM__gfe9a52b5gJr8GSrnr883iA_0[6].kind = 1;
TM__gfe9a52b5gJr8GSrnr883iA_0[6].offset = offsetof(tyObject_PDispatchercolonObjectType___mNiwh37MfaAP9cG4kqT6kpg, selector);
TM__gfe9a52b5gJr8GSrnr883iA_0[6].typ = (&NTI__Y5hK0M9cL3lXwccEV9cgR9cQw_);
TM__gfe9a52b5gJr8GSrnr883iA_0[6].name = "selector";
NTI__mNiwh37MfaAP9cG4kqT6kpg_.node = &TM__gfe9a52b5gJr8GSrnr883iA_0[6];
NTI__OGnyBMU9csFmaJm9bh2uOQiQ_.size = sizeof(tyObject_PDispatchercolonObjectType___mNiwh37MfaAP9cG4kqT6kpg*);
NTI__OGnyBMU9csFmaJm9bh2uOQiQ_.align = NIM_ALIGNOF(tyObject_PDispatchercolonObjectType___mNiwh37MfaAP9cG4kqT6kpg*);
NTI__OGnyBMU9csFmaJm9bh2uOQiQ_.kind = 22;
NTI__OGnyBMU9csFmaJm9bh2uOQiQ_.base = (&NTI__mNiwh37MfaAP9cG4kqT6kpg_);
NTI__OGnyBMU9csFmaJm9bh2uOQiQ_.marker = Marker_tyRef__OGnyBMU9csFmaJm9bh2uOQiQ;
}

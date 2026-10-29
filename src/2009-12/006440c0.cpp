// roc 2009-12 006440c0  unit: std::D::DU?$char_traits::V?$basic_string::?$TypedPropertyDescriptor  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006440c0
//
// 006440c0  8b542408             mov edx, dword ptr [esp + 8]
// 006440c4  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 006440c7  8b01                 mov eax, dword ptr [ecx]
// 006440c9  8b4010               mov eax, dword ptr [eax + 0x10]
// 006440cc  52                   push edx
// 006440cd  8b542408             mov edx, dword ptr [esp + 8]
// 006440d1  52                   push edx
// 006440d2  ffd0                 call eax
// 006440d4  b001                 mov al, 1
// 006440d6  c20800               ret 8
// copied from an identical function in another client (function ?f@S@@QAE_NPAX0@Z)

// from server: 100% by colin
// roc-flags: /O2 /Ob2 /Oy /GF- /GS- /EHsc /MD
struct B{virtual void v0();; virtual void v1();; virtual void v2();; virtual void v3(); virtual void m(void*,void*);}; struct S{char pad[0x1c]; B* p; bool f(void*,void*);};
bool S::f(void* a,void* b){p->m(a,b); return true;}
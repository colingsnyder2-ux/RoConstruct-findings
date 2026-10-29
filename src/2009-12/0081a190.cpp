// roc 2009-12 0081a190  unit: CXTPReportRecordItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081a190
//
// 0081a190  51                   push ecx
// 0081a191  56                   push esi
// 0081a192  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0081a196  83c160               add ecx, 0x60
// 0081a199  51                   push ecx
// 0081a19a  8bce                 mov ecx, esi
// 0081a19c  c744240800000000     mov dword ptr [esp + 8], 0
// 0081a1a4  ff1594de9800         call dword ptr [0x98de94]
// 0081a1aa  8bc6                 mov eax, esi
// 0081a1ac  5e                   pop esi
// 0081a1ad  59                   pop ecx
// 0081a1ae  c20800               ret 8
// copied from an identical function in another client (function ?copy@X@@QAEPAUStr@@PAU2@H@Z)

// from server: 100% by colin
// roc-flags: /O2 /Ob2 /Oy /GF- /GS- /EHsc /MD
struct Str{int words[8];}; extern void (__thiscall* str_ctor)(Str*,Str*); struct X{char pad[0x60]; Str value; Str* copy(Str* out,int unused);}; Str* X::copy(Str* out,int unused){volatile int zero=0; str_ctor(out,&value); return out;}
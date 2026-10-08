// from server: 64% by colin
// roc 2007-08 00416ab0  unit: VCLuaFunction::?$CComObject  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00416ab0
//
// 00416ab0  56                   push esi
// 00416ab1  57                   push edi
// 00416ab2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00416ab6  83ec24               sub esp, 0x24
// 00416ab9  8d7708               lea esi, [edi + 8]
// 00416abc  8d4608               lea eax, [esi + 8]
// 00416abf  8bcc                 mov ecx, esp
// 00416ac1  89642430             mov dword ptr [esp + 0x30], esp
// 00416ac5  50                   push eax
// 00416ac6  e825641500           call 0x56cef0
// 00416acb  56                   push esi
// 00416acc  8bcf                 mov ecx, edi
// 00416ace  e88defffff           call 0x415a60
// 00416ad3  5f                   pop edi
// 00416ad4  5e                   pop esi
// 00416ad5  c3                   ret 

struct VCLuaFunction {
    char pad[8];
    char field8[8];
    char field10[0x24];

    void f(char* p);
};

extern "C" void __stdcall sub_56cef0(char* p);
extern "C" void __fastcall sub_415a60(char* self, char* p);

void VCLuaFunction::f(char* p) {
    char* edi = p;
    char* esi = edi + 8;
    char* eax = esi + 8;
    char* ecx = (char*)&eax - 0x24;
    *(char**)((char*)&eax + 0x30) = ecx;
    sub_56cef0(eax);
    sub_415a60(edi, esi);
}

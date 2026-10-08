// from server: 100% by colin
// roc 2007-08 0042aaf0  unit: VCLuaFunction::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042aaf0
//
// 0042aaf0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042aaf4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042aaf8  8b542404             mov edx, dword ptr [esp + 4]
// 0042aafc  50                   push eax
// 0042aafd  51                   push ecx
// 0042aafe  6808737800           push 0x787308
// 0042ab03  52                   push edx
// 0042ab04  e89777fdff           call 0x4022a0
// 0042ab09  c20c00               ret 0xc

extern "C" void __stdcall sub_004022A0(void*, void*, void*, void*);

void __stdcall sub_0042AAF0(void* a, void* b, void* c)
{
    sub_004022A0(a, (void*)0x787308, b, c);
}

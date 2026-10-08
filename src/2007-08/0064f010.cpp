// from server: 100% by colin
// roc 2007-08 0064f010  unit: CXTPToolBar  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064f010
//
// 0064f010  8b442408             mov eax, dword ptr [esp + 8]
// 0064f014  56                   push esi
// 0064f015  57                   push edi
// 0064f016  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0064f01a  50                   push eax
// 0064f01b  57                   push edi
// 0064f01c  8bf1                 mov esi, ecx
// 0064f01e  e8dd4affff           call 0x643b00
// 0064f023  8b8f88010000         mov ecx, dword ptr [edi + 0x188]
// 0064f029  898e88010000         mov dword ptr [esi + 0x188], ecx
// 0064f02f  8b978c010000         mov edx, dword ptr [edi + 0x18c]
// 0064f035  89968c010000         mov dword ptr [esi + 0x18c], edx
// 0064f03b  8b8730010000         mov eax, dword ptr [edi + 0x130]
// 0064f041  5f                   pop edi
// 0064f042  898630010000         mov dword ptr [esi + 0x130], eax
// 0064f048  5e                   pop esi
// 0064f049  c20800               ret 8

struct CXTPToolBar
{
    char pad[0x130];
    int field_130;
    char pad2[0x188 - 0x134];
    int field_188;
    int field_18c;
    void sub_643b00(void*, int);
    void func_0064f010(void* param1, int param2);
};

void CXTPToolBar::func_0064f010(void* param1, int param2)
{
    sub_643b00(param1, param2);
    field_188 = *(int*)((char*)param1 + 0x188);
    field_18c = *(int*)((char*)param1 + 0x18c);
    field_130 = *(int*)((char*)param1 + 0x130);
}

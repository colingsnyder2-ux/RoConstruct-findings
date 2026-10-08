// from server: 82% by colin
// roc 2007-08 006864d0  unit: CXTPPropExchange  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006864d0
//
// 006864d0  51                   push ecx
// 006864d1  6a00                 push 0
// 006864d3  8d442404             lea eax, [esp + 4]
// 006864d7  50                   push eax
// 006864d8  68b8b07c00           push 0x7cb0b8
// 006864dd  51                   push ecx
// 006864de  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006864e6  e835f2ffff           call 0x685720
// 006864eb  8b442410             mov eax, dword ptr [esp + 0x10]
// 006864ef  83c414               add esp, 0x14
// 006864f2  c3                   ret 

struct CXTPPropExchange
{
    int GetCount();
};

extern int g_Count;

extern "C" int __stdcall sub_00685720(int, const char*, int*, int);

int CXTPPropExchange::GetCount()
{
    int result = 0;
    sub_00685720(0, (const char*)&g_Count, &result, 0);
    return result;
}

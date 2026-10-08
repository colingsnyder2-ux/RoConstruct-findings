// from server: 100% by colin
// roc 2007-08 0040c3f0  unit: CBrowserView  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040c3f0
//
// 0040c3f0  8b442404             mov eax, dword ptr [esp + 4]
// 0040c3f4  85c0                 test eax, eax
// 0040c3f6  7509                 jne 0x40c401
// 0040c3f8  89442404             mov dword ptr [esp + 4], eax
// 0040c3fc  e95ff6ffff           jmp 0x40ba60
// 0040c401  89442404             mov dword ptr [esp + 4], eax
// 0040c405  e946fdffff           jmp 0x40c150

extern void func_0040ba60(int);
extern void func_0040c150(int);

void func_0040c3f0(int a)
{
    if (a == 0)
    {
        func_0040ba60(a);
    }
    else
    {
        func_0040c150(a);
    }
}

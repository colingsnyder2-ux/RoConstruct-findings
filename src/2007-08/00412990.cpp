// from server: 80% by colin
// roc 2007-08 00412990  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00412990
//
// 00412990  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00412994  ff1598dd7700         call dword ptr [0x77dd98]
// 0041299a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0041299e  50                   push eax
// 0041299f  ff15b8dc7700         call dword ptr [0x77dcb8]
// 004129a5  f7d8                 neg eax
// 004129a7  1bc0                 sbb eax, eax
// 004129a9  83c001               add eax, 1
// 004129ac  c3                   ret

extern "C" int __stdcall sub_77dd98(int);
extern "C" int __stdcall sub_77dcb8(int);

int f(int a, int b)
{
    int r = sub_77dd98(b);
    r = sub_77dcb8(a);
    return (r == 0) ? 1 : 0;
}

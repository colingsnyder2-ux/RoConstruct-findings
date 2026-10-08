// from server: 100% by colin
// roc 2007-08 0042a530  unit: CLuaHtmlView  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042a530
//
// 0042a530  56                   push esi
// 0042a531  8b742408             mov esi, dword ptr [esp + 8]
// 0042a535  56                   push esi
// 0042a536  e8d55a2000           call 0x630010
// 0042a53b  85c0                 test eax, eax
// 0042a53d  7507                 jne 0x42a546
// 0042a53f  814e0417408401       or dword ptr [esi + 4], 0x1844017
// 0042a546  5e                   pop esi
// 0042a547  c20400               ret 4

extern "C" int __stdcall sub_630010(int* p);

int __stdcall sub_42a530(int* p)
{
    int result = sub_630010(p);
    if (result == 0)
        p[1] |= 0x1844017;
    return result;
}

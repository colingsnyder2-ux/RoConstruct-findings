// from server: 100% by colin
// roc 2007-08 0067c5e0  unit: CXTPControls  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067c5e0
//
// 0067c5e0  8b442404             mov eax, dword ptr [esp + 4]
// 0067c5e4  6a00                 push 0
// 0067c5e6  6a00                 push 0
// 0067c5e8  50                   push eax
// 0067c5e9  6a00                 push 0
// 0067c5eb  e8d0e0ffff           call 0x67a6c0
// 0067c5f0  c20400               ret 4

extern "C" int __stdcall sub_0067a6c0(int, int, int, int);

int __stdcall sub_0067c5e0(int arg)
{
    return sub_0067a6c0(0, arg, 0, 0);
}

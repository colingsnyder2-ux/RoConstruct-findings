// from server: 100% by colin
// roc 2007-08 00726c70  unit: boost::thread_resource_error  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00726c70
//
// 00726c70  837c240803           cmp dword ptr [esp + 8], 3
// 00726c75  7505                 jne 0x726c7c
// 00726c77  e854020000           call 0x726ed0
// 00726c7c  c20c00               ret 0xc

extern "C" void __cdecl helper_726ed0();

void __stdcall target_726c70(int a, int b, int c)
{
    if (b == 3)
        helper_726ed0();
}

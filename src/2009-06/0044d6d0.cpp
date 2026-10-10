// from server: 78% by why2
// roc 2009-06 0044d6d0  unit: VCWorkspace::?$CComObject  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044d6d0
//
// 0044d6d0  8b442404             mov eax, dword ptr [esp + 4]
// 0044d6d4  8b08                 mov ecx, dword ptr [eax]
// 0044d6d6  83c104               add ecx, 4
// 0044d6d9  ff25c8e38900         jmp dword ptr [0x89e3c8]

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD

extern "C" int __stdcall pubsync_impl(void*);

int __stdcall sub_0044d6d0(void** a)
{
    return pubsync_impl((char*)*a + 4);
}

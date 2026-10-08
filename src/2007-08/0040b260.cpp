// from server: 61% by colin
// roc 2007-08 0040b260  unit: VCApp::?$CProxy_IAppEvents  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040b260
//
// 0040b260  8b442404             mov eax, dword ptr [esp + 4]
// 0040b264  85c0                 test eax, eax
// 0040b266  7418                 je 0x40b280
// 0040b268  8b542408             mov edx, dword ptr [esp + 8]
// 0040b26c  8b48f8               mov ecx, dword ptr [eax - 8]
// 0040b26f  83c0f8               add eax, -8
// 0040b272  52                   push edx
// 0040b273  68e44b7800           push 0x784be4
// 0040b278  50                   push eax
// 0040b279  8b01                 mov eax, dword ptr [ecx]
// 0040b27b  ffd0                 call eax
// 0040b27d  c20800               ret 8
// 0040b280  8b542408             mov edx, dword ptr [esp + 8]
// 0040b284  33c0                 xor eax, eax
// 0040b286  8b08                 mov ecx, dword ptr [eax]
// 0040b288  52                   push edx
// 0040b289  68e44b7800           push 0x784be4
// 0040b28e  50                   push eax
// 0040b28f  8b01                 mov eax, dword ptr [ecx]
// 0040b291  ffd0                 call eax
// 0040b293  c20800               ret 8

struct VCApp_CProxy_IAppEvents_unknown {
    void invoke(void* p);
};

extern "C" void __stdcall func_0040b260(void* p, void* arg)
{
    if (p != 0) {
        void* base = (char*)p - 8;
        void** vtbl = *(void***)base;
        void (*fn)(void*, void*, void*) = (void (*)(void*, void*, void*))vtbl[0];
        fn(base, (void*)0x784be4, arg);
    } else {
        void* base = 0;
        void** vtbl = *(void***)base;
        void (*fn)(void*, void*, void*) = (void (*)(void*, void*, void*))vtbl[0];
        fn(base, (void*)0x784be4, arg);
    }
}

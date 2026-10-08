// from server: 76% by colin
// roc 2007-08 0054daf0  unit: boost::iostreams::DUinput::V?$basic_null_device::?$stream_buffer  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054daf0
//
// 0054daf0  57                   push edi
// 0054daf1  8bf9                 mov edi, ecx
// 0054daf3  807f0800             cmp byte ptr [edi + 8], 0
// 0054daf7  7437                 je 0x54db30
// 0054daf9  56                   push esi
// 0054dafa  8b7704               mov esi, dword ptr [edi + 4]
// 0054dafd  85f6                 test esi, esi
// 0054daff  742a                 je 0x54db2b
// 0054db01  8d4604               lea eax, [esi + 4]
// 0054db04  83c9ff               or ecx, 0xffffffff
// 0054db07  f00fc108             lock xadd dword ptr [eax], ecx
// 0054db0b  751e                 jne 0x54db2b
// 0054db0d  8b16                 mov edx, dword ptr [esi]
// 0054db0f  8b4204               mov eax, dword ptr [edx + 4]
// 0054db12  8bce                 mov ecx, esi
// 0054db14  ffd0                 call eax
// 0054db16  8d4e08               lea ecx, [esi + 8]
// 0054db19  83caff               or edx, 0xffffffff
// 0054db1c  f00fc111             lock xadd dword ptr [ecx], edx
// 0054db20  7509                 jne 0x54db2b
// 0054db22  8b06                 mov eax, dword ptr [esi]
// 0054db24  8b5008               mov edx, dword ptr [eax + 8]
// 0054db27  8bce                 mov ecx, esi
// 0054db29  ffd2                 call edx
// 0054db2b  c6470800             mov byte ptr [edi + 8], 0
// 0054db2f  5e                   pop esi
// 0054db30  5f                   pop edi
// 0054db31  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct S {
    void f();
    void* field0;
    char* field4;
    char field8;
};

void S::f() {
    if (field8) {
        char* p = field4;
        if (p) {
            if (_InterlockedExchangeAdd((volatile long*)(p + 4), -1) == 1) {
                void** vt = *(void***)p;
                ((void (__thiscall*)(void*))vt[1])(p);
                if (_InterlockedExchangeAdd((volatile long*)(p + 8), -1) == 1) {
                    void** vt2 = *(void***)p;
                    ((void (__thiscall*)(void*))vt2[2])(p);
                }
            }
        }
        field8 = 0;
    }
}

// from server: 70% by colin
// roc 2007-08 0054d340  unit: UString_sink::?$stream_buffer  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054d340
//
// 0054d340  56                   push esi
// 0054d341  8bf1                 mov esi, ecx
// 0054d343  807e0800             cmp byte ptr [esi + 8], 0
// 0054d347  7437                 je 0x54d380
// 0054d349  57                   push edi
// 0054d34a  8b7e04               mov edi, dword ptr [esi + 4]
// 0054d34d  85ff                 test edi, edi
// 0054d34f  742a                 je 0x54d37b
// 0054d351  8d4704               lea eax, [edi + 4]
// 0054d354  83c9ff               or ecx, 0xffffffff
// 0054d357  f00fc108             lock xadd dword ptr [eax], ecx
// 0054d35b  751e                 jne 0x54d37b
// 0054d35d  8b17                 mov edx, dword ptr [edi]
// 0054d35f  8b4204               mov eax, dword ptr [edx + 4]
// 0054d362  8bcf                 mov ecx, edi
// 0054d364  ffd0                 call eax
// 0054d366  8d4f08               lea ecx, [edi + 8]
// 0054d369  83caff               or edx, 0xffffffff
// 0054d36c  f00fc111             lock xadd dword ptr [ecx], edx
// 0054d370  7509                 jne 0x54d37b
// 0054d372  8b07                 mov eax, dword ptr [edi]
// 0054d374  8b5008               mov edx, dword ptr [eax + 8]
// 0054d377  8bcf                 mov ecx, edi
// 0054d379  ffd2                 call edx
// 0054d37b  c6460800             mov byte ptr [esi + 8], 0
// 0054d37f  5f                   pop edi
// 0054d380  8b442408             mov eax, dword ptr [esp + 8]
// 0054d384  8b08                 mov ecx, dword ptr [eax]
// 0054d386  890e                 mov dword ptr [esi], ecx
// 0054d388  8b4004               mov eax, dword ptr [eax + 4]
// 0054d38b  85c0                 test eax, eax
// 0054d38d  894604               mov dword ptr [esi + 4], eax
// 0054d390  740c                 je 0x54d39e
// 0054d392  83c004               add eax, 4
// 0054d395  ba01000000           mov edx, 1
// 0054d39a  f00fc110             lock xadd dword ptr [eax], edx
// 0054d39e  c6460801             mov byte ptr [esi + 8], 1
// 0054d3a2  5e                   pop esi
// 0054d3a3  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct UString_sink_stream_buffer
{
    void* field0;
    void* field4;
    char field8;
    void assign(void* src);
};

void UString_sink_stream_buffer::assign(void* src)
{
    if (field8)
    {
        if (field4)
        {
            volatile long* p = (volatile long*)((char*)field4 + 4);
            if (_InterlockedExchangeAdd(p, -1) == 1)
            {
                void** vtbl = *(void***)field4;
                void (*fn)(void*) = (void (*)(void*))vtbl[1];
                fn(field4);
                volatile long* p2 = (volatile long*)((char*)field4 + 8);
                if (_InterlockedExchangeAdd(p2, -1) == 1)
                {
                    void** vtbl2 = *(void***)field4;
                    void (*fn2)(void*) = (void (*)(void*))vtbl2[2];
                    fn2(field4);
                }
            }
        }
        field8 = 0;
    }
    void** s = (void**)src;
    field0 = s[0];
    field4 = s[1];
    if (field4)
    {
        volatile long* p3 = (volatile long*)((char*)field4 + 4);
        _InterlockedExchangeAdd(p3, 1);
    }
    field8 = 1;
}

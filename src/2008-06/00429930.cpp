// from server: 100% by king_originala
// roc 2008-06 00429930  unit: ThreadLogManager  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00429930
//
// 00429930  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00429934  56                   push esi
// 00429935  57                   push edi
// 00429936  85c0                 test eax, eax
// 00429938  7522                 jne 0x42995c
// 0042993a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042993e  8b38                 mov edi, dword ptr [eax]
// 00429940  6a20                 push 0x20
// 00429942  e8d96f2700           call 0x6a0920
// 00429947  8bf0                 mov esi, eax
// 00429949  57                   push edi
// 0042994a  56                   push esi
// 0042994b  e8f0f6ffff           call 0x429040
// 00429950  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00429954  83c40c               add esp, 0xc
// 00429957  5f                   pop edi
// 00429958  8931                 mov dword ptr [ecx], esi
// 0042995a  5e                   pop esi
// 0042995b  c3                   ret 
// 0042995c  83f801               cmp eax, 1
// 0042995f  7536                 jne 0x429997
// 00429961  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00429965  8b37                 mov esi, dword ptr [edi]
// 00429967  8b06                 mov eax, dword ptr [esi]
// 00429969  85c0                 test eax, eax
// 0042996b  7418                 je 0x429985
// 0042996d  8b00                 mov eax, dword ptr [eax]
// 0042996f  8d4e08               lea ecx, [esi + 8]
// 00429972  85c0                 test eax, eax
// 00429974  7409                 je 0x42997f
// 00429976  6a01                 push 1
// 00429978  51                   push ecx
// 00429979  51                   push ecx
// 0042997a  ffd0                 call eax
// 0042997c  83c40c               add esp, 0xc
// 0042997f  c70600000000         mov dword ptr [esi], 0
// 00429985  56                   push esi
// 00429986  e8ef6c2700           call 0x6a067a
// 0042998b  83c404               add esp, 4
// 0042998e  c70700000000         mov dword ptr [edi], 0
// 00429994  5f                   pop edi
// 00429995  5e                   pop esi
// 00429996  c3                   ret 
// 00429997  8b742410             mov esi, dword ptr [esp + 0x10]
// 0042999b  8b0e                 mov ecx, dword ptr [esi]
// 0042999d  68d0e59200           push 0x92e5d0
// 004299a2  ff1578288000         call dword ptr [0x802878]
// 004299a8  84c0                 test al, al
// 004299aa  740b                 je 0x4299b7
// 004299ac  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004299b0  8b02                 mov eax, dword ptr [edx]
// 004299b2  5f                   pop edi
// 004299b3  8906                 mov dword ptr [esi], eax
// 004299b5  5e                   pop esi
// 004299b6  c3                   ret 
// 004299b7  5f                   pop edi
// 004299b8  c70600000000         mov dword ptr [esi], 0
// 004299be  5e                   pop esi
// 004299bf  c3                   ret 

typedef void (__cdecl *Cleanup)(void *, void *, int);

struct Adapter
{
    Cleanup *cleanup;
    unsigned long reserved;
    unsigned char object[24];
};

extern "C" void *__cdecl allocate(unsigned int);
extern "C" void __cdecl construct(void *, void *);
extern "C" void __cdecl release(void *);

extern const unsigned char adapterType[];
extern bool (__thiscall *sameType)(const void *, const void *);

void __cdecl manage(void **source, void **destination, int operation)
{
    if (operation == 0)
    {
        void *value = *source;
        void *storage = allocate(32);
        construct(storage, value);
        *destination = storage;
    }
    else if (operation == 1)
    {
        Adapter *storage = static_cast<Adapter *>(*destination);
        if (storage->cleanup)
        {
            Cleanup cleanup = *storage->cleanup;
            void *object = storage->object;
            if (cleanup)
                cleanup(object, object, 1);
            storage->cleanup = 0;
        }
        release(storage);
        *destination = 0;
    }
    else
    {
        if (sameType(*destination, adapterType))
            *destination = *source;
        else
            *destination = 0;
    }
}

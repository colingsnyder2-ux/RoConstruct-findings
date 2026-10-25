// from server: 100% by king_originala
// roc 2008-06 00579b70  unit: RBX::VDataModel::?$BoundFuncDesc  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00579b70
//
// 00579b70  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00579b74  56                   push esi
// 00579b75  57                   push edi
// 00579b76  85c0                 test eax, eax
// 00579b78  7522                 jne 0x579b9c
// 00579b7a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00579b7e  8b38                 mov edi, dword ptr [eax]
// 00579b80  6a38                 push 0x38
// 00579b82  e8996d1200           call 0x6a0920
// 00579b87  8bf0                 mov esi, eax
// 00579b89  57                   push edi
// 00579b8a  56                   push esi
// 00579b8b  e890dfffff           call 0x577b20
// 00579b90  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00579b94  83c40c               add esp, 0xc
// 00579b97  5f                   pop edi
// 00579b98  8931                 mov dword ptr [ecx], esi
// 00579b9a  5e                   pop esi
// 00579b9b  c3                   ret 
// 00579b9c  83f801               cmp eax, 1
// 00579b9f  7538                 jne 0x579bd9
// 00579ba1  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00579ba5  8b37                 mov esi, dword ptr [edi]
// 00579ba7  8b4608               mov eax, dword ptr [esi + 8]
// 00579baa  85c0                 test eax, eax
// 00579bac  7419                 je 0x579bc7
// 00579bae  8b00                 mov eax, dword ptr [eax]
// 00579bb0  8d4e10               lea ecx, [esi + 0x10]
// 00579bb3  85c0                 test eax, eax
// 00579bb5  7409                 je 0x579bc0
// 00579bb7  6a01                 push 1
// 00579bb9  51                   push ecx
// 00579bba  51                   push ecx
// 00579bbb  ffd0                 call eax
// 00579bbd  83c40c               add esp, 0xc
// 00579bc0  c7460800000000       mov dword ptr [esi + 8], 0
// 00579bc7  56                   push esi
// 00579bc8  e8ad6a1200           call 0x6a067a
// 00579bcd  83c404               add esp, 4
// 00579bd0  c70700000000         mov dword ptr [edi], 0
// 00579bd6  5f                   pop edi
// 00579bd7  5e                   pop esi
// 00579bd8  c3                   ret 
// 00579bd9  8b742410             mov esi, dword ptr [esp + 0x10]
// 00579bdd  8b0e                 mov ecx, dword ptr [esi]
// 00579bdf  6818779400           push 0x947718
// 00579be4  ff1578288000         call dword ptr [0x802878]
// 00579bea  84c0                 test al, al
// 00579bec  740b                 je 0x579bf9
// 00579bee  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00579bf2  8b02                 mov eax, dword ptr [edx]
// 00579bf4  5f                   pop edi
// 00579bf5  8906                 mov dword ptr [esi], eax
// 00579bf7  5e                   pop esi
// 00579bf8  c3                   ret 
// 00579bf9  5f                   pop edi
// 00579bfa  c70600000000         mov dword ptr [esi], 0
// 00579c00  5e                   pop esi
// 00579c01  c3                   ret 

typedef void (__cdecl *Manager)(void *, void *, int);

struct Object {
    unsigned char padding0[8];
    Manager *manager;
    unsigned char padding1[4];
    unsigned char storage[40];
};

extern void *__cdecl allocate(unsigned int);
extern void __cdecl copy_construct(void *, const void *);
extern void __cdecl deallocate(void *);

extern bool (__thiscall *type_equal)(const void *, const void *);
extern const unsigned char target_type[];

void __cdecl manage(const void *const *source, void **destination, int operation)
{
    if (operation == 0) {
        const void *value = *source;
        void *result = allocate(56);
        copy_construct(result, value);
        *destination = result;
    } else if (operation == 1) {
        Object *object = static_cast<Object *>(*destination);
        if (object->manager) {
            Manager function = *object->manager;
            void *buffer = object->storage;
            if (function)
                function(buffer, buffer, 1);
            object->manager = 0;
        }
        deallocate(object);
        *destination = 0;
    } else {
        if (type_equal(*destination, target_type))
            *destination = const_cast<void *>(*source);
        else
            *destination = 0;
    }
}

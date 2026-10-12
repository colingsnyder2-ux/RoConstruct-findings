// from server: 100% by king_originala
// roc 2008-06 00577840  unit: RBX::PAVTool::?$sp_counted_impl_pd  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00577840
//
// 00577840  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00577844  56                   push esi
// 00577845  57                   push edi
// 00577846  85c0                 test eax, eax
// 00577848  7522                 jne 0x57786c
// 0057784a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057784e  8b38                 mov edi, dword ptr [eax]
// 00577850  6a20                 push 0x20
// 00577852  e8c9901200           call 0x6a0920
// 00577857  8bf0                 mov esi, eax
// 00577859  57                   push edi
// 0057785a  56                   push esi
// 0057785b  e8b0faffff           call 0x577310
// 00577860  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00577864  83c40c               add esp, 0xc
// 00577867  5f                   pop edi
// 00577868  8931                 mov dword ptr [ecx], esi
// 0057786a  5e                   pop esi
// 0057786b  c3                   ret 
// 0057786c  83f801               cmp eax, 1
// 0057786f  7521                 jne 0x577892
// 00577871  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00577875  8b37                 mov esi, dword ptr [edi]
// 00577877  8d4e04               lea ecx, [esi + 4]
// 0057787a  ff1568248000         call dword ptr [0x802468]
// 00577880  56                   push esi
// 00577881  e8f48d1200           call 0x6a067a
// 00577886  83c404               add esp, 4
// 00577889  c70700000000         mov dword ptr [edi], 0
// 0057788f  5f                   pop edi
// 00577890  5e                   pop esi
// 00577891  c3                   ret 
// 00577892  8b742410             mov esi, dword ptr [esp + 0x10]
// 00577896  8b0e                 mov ecx, dword ptr [esi]
// 00577898  6898699400           push 0x946998
// 0057789d  ff1578288000         call dword ptr [0x802878]
// 005778a3  84c0                 test al, al
// 005778a5  740b                 je 0x5778b2
// 005778a7  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005778ab  8b02                 mov eax, dword ptr [edx]
// 005778ad  5f                   pop edi
// 005778ae  8906                 mov dword ptr [esi], eax
// 005778b0  5e                   pop esi
// 005778b1  c3                   ret 
// 005778b2  5f                   pop edi
// 005778b3  c70600000000         mov dword ptr [esi], 0
// 005778b9  5e                   pop esi
// 005778ba  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

extern void __cdecl copy_object(void*, const void*);

typedef void (__thiscall *StringDestructor)(void*);
typedef bool (__thiscall *TypeEquality)(const void*, const void*);

extern StringDestructor destroy_string;
extern TypeEquality equal_type;
extern const char object_type;

void __cdecl manage(const void* const* source, void** destination,
                    int operation, bool)
{
    if (operation == 0)
    {
        const void* original = *source;
        void* copy = operator new(32);
        copy_object(copy, original);
        *destination = copy;
    }
    else if (operation == 1)
    {
        void* object = *destination;
        destroy_string(static_cast<char*>(object) + 4);
        operator delete(object);
        *destination = 0;
    }
    else
    {
        if (equal_type(*destination, &object_type))
            *destination = const_cast<void*>(*source);
        else
            *destination = 0;
    }
}

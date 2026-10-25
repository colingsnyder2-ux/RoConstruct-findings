// from server: 100% by tester
// roc 2008-06 005778c0  unit: RBX::PAVTool::?$sp_counted_impl_pd  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005778c0
//
// 005778c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005778c4  56                   push esi
// 005778c5  57                   push edi
// 005778c6  85c0                 test eax, eax
// 005778c8  7522                 jne 0x5778ec
// 005778ca  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005778ce  8b38                 mov edi, dword ptr [eax]
// 005778d0  6a3c                 push 0x3c
// 005778d2  e849901200           call 0x6a0920
// 005778d7  8bf0                 mov esi, eax
// 005778d9  57                   push edi
// 005778da  56                   push esi
// 005778db  e890faffff           call 0x577370
// 005778e0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005778e4  83c40c               add esp, 0xc
// 005778e7  5f                   pop edi
// 005778e8  8931                 mov dword ptr [ecx], esi
// 005778ea  5e                   pop esi
// 005778eb  c3                   ret 
// 005778ec  83f801               cmp eax, 1
// 005778ef  7520                 jne 0x577911
// 005778f1  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005778f5  8b37                 mov esi, dword ptr [edi]
// 005778f7  8d4e04               lea ecx, [esi + 4]
// 005778fa  e801deffff           call 0x575700
// 005778ff  56                   push esi
// 00577900  e8758d1200           call 0x6a067a
// 00577905  83c404               add esp, 4
// 00577908  c70700000000         mov dword ptr [edi], 0
// 0057790e  5f                   pop edi
// 0057790f  5e                   pop esi
// 00577910  c3                   ret 
// 00577911  8b742410             mov esi, dword ptr [esp + 0x10]
// 00577915  8b0e                 mov ecx, dword ptr [esi]
// 00577917  68706a9400           push 0x946a70
// 0057791c  ff1578288000         call dword ptr [0x802878]
// 00577922  84c0                 test al, al
// 00577924  740b                 je 0x577931
// 00577926  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0057792a  8b02                 mov eax, dword ptr [edx]
// 0057792c  5f                   pop edi
// 0057792d  8906                 mov dword ptr [esi], eax
// 0057792f  5e                   pop esi
// 00577930  c3                   ret 
// 00577931  5f                   pop edi
// 00577932  c70600000000         mov dword ptr [esi], 0
// 00577938  5e                   pop esi
// 00577939  c3                   ret 

struct TypeInfo {};

extern bool (__thiscall *type_equal)(const TypeInfo*, const TypeInfo&);
extern TypeInfo target_type;

struct Payload {
    void destroy();
};

struct Object {
    char prefix[4];
    Payload payload;
};

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);
extern void __cdecl copy_object(void*, const void*);

void __cdecl manage(void** source, void** destination, int operation)
{
    if (operation == 0) {
        void* original = *source;
        void* result = operator new(60);
        copy_object(result, original);
        *destination = result;
    } else if (operation == 1) {
        Object* object = static_cast<Object*>(*destination);
        object->payload.destroy();
        operator delete(object);
        *destination = 0;
    } else {
        if (type_equal(static_cast<const TypeInfo*>(*destination), target_type))
            *destination = *source;
        else
            *destination = 0;
    }
}

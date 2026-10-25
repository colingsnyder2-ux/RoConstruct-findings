// from server: 100% by king_originala
// roc 2008-06 0041a1d0  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041a1d0
//
// 0041a1d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041a1d4  56                   push esi
// 0041a1d5  57                   push edi
// 0041a1d6  85c0                 test eax, eax
// 0041a1d8  7522                 jne 0x41a1fc
// 0041a1da  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041a1de  8b38                 mov edi, dword ptr [eax]
// 0041a1e0  6a30                 push 0x30
// 0041a1e2  e839672800           call 0x6a0920
// 0041a1e7  8bf0                 mov esi, eax
// 0041a1e9  57                   push edi
// 0041a1ea  56                   push esi
// 0041a1eb  e820eeffff           call 0x419010
// 0041a1f0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0041a1f4  83c40c               add esp, 0xc
// 0041a1f7  5f                   pop edi
// 0041a1f8  8931                 mov dword ptr [ecx], esi
// 0041a1fa  5e                   pop esi
// 0041a1fb  c3                   ret 
// 0041a1fc  83f801               cmp eax, 1
// 0041a1ff  7520                 jne 0x41a221
// 0041a201  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0041a205  8b37                 mov esi, dword ptr [edi]
// 0041a207  8d4e08               lea ecx, [esi + 8]
// 0041a20a  e831d50700           call 0x497740
// 0041a20f  56                   push esi
// 0041a210  e865642800           call 0x6a067a
// 0041a215  83c404               add esp, 4
// 0041a218  c70700000000         mov dword ptr [edi], 0
// 0041a21e  5f                   pop edi
// 0041a21f  5e                   pop esi
// 0041a220  c3                   ret 
// 0041a221  8b742410             mov esi, dword ptr [esp + 0x10]
// 0041a225  8b0e                 mov ecx, dword ptr [esi]
// 0041a227  68b0c89200           push 0x92c8b0
// 0041a22c  ff1578288000         call dword ptr [0x802878]
// 0041a232  84c0                 test al, al
// 0041a234  740b                 je 0x41a241
// 0041a236  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0041a23a  8b02                 mov eax, dword ptr [edx]
// 0041a23c  5f                   pop edi
// 0041a23d  8906                 mov dword ptr [esi], eax
// 0041a23f  5e                   pop esi
// 0041a240  c3                   ret 
// 0041a241  5f                   pop edi
// 0041a242  c70600000000         mov dword ptr [esi], 0
// 0041a248  5e                   pop esi
// 0041a249  c3                   ret 

struct TypeInfo {};

extern bool (__thiscall *type_equal)(const TypeInfo*, const TypeInfo&);
extern TypeInfo target_type;

struct Payload {
    void destroy();
};

struct Object {
    char prefix[8];
    Payload payload;
};

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);
extern void __cdecl copy_object(void*, const void*);

void __cdecl manage(void** source, void** destination, int operation)
{
    if (operation == 0) {
        void* original = *source;
        void* result = operator new(48);
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

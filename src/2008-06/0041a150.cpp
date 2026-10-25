// from server: 100% by king_originala
// roc 2008-06 0041a150  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041a150
//
// 0041a150  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041a154  56                   push esi
// 0041a155  57                   push edi
// 0041a156  85c0                 test eax, eax
// 0041a158  7522                 jne 0x41a17c
// 0041a15a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041a15e  8b38                 mov edi, dword ptr [eax]
// 0041a160  6a38                 push 0x38
// 0041a162  e8b9672800           call 0x6a0920
// 0041a167  8bf0                 mov esi, eax
// 0041a169  57                   push edi
// 0041a16a  56                   push esi
// 0041a16b  e840eeffff           call 0x418fb0
// 0041a170  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0041a174  83c40c               add esp, 0xc
// 0041a177  5f                   pop edi
// 0041a178  8931                 mov dword ptr [ecx], esi
// 0041a17a  5e                   pop esi
// 0041a17b  c3                   ret 
// 0041a17c  83f801               cmp eax, 1
// 0041a17f  7520                 jne 0x41a1a1
// 0041a181  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0041a185  8b37                 mov esi, dword ptr [edi]
// 0041a187  8d4e08               lea ecx, [esi + 8]
// 0041a18a  e821d2ffff           call 0x4173b0
// 0041a18f  56                   push esi
// 0041a190  e8e5642800           call 0x6a067a
// 0041a195  83c404               add esp, 4
// 0041a198  c70700000000         mov dword ptr [edi], 0
// 0041a19e  5f                   pop edi
// 0041a19f  5e                   pop esi
// 0041a1a0  c3                   ret 
// 0041a1a1  8b742410             mov esi, dword ptr [esp + 0x10]
// 0041a1a5  8b0e                 mov ecx, dword ptr [esi]
// 0041a1a7  68e8c79200           push 0x92c7e8
// 0041a1ac  ff1578288000         call dword ptr [0x802878]
// 0041a1b2  84c0                 test al, al
// 0041a1b4  740b                 je 0x41a1c1
// 0041a1b6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0041a1ba  8b02                 mov eax, dword ptr [edx]
// 0041a1bc  5f                   pop edi
// 0041a1bd  8906                 mov dword ptr [esi], eax
// 0041a1bf  5e                   pop esi
// 0041a1c0  c3                   ret 
// 0041a1c1  5f                   pop edi
// 0041a1c2  c70600000000         mov dword ptr [esi], 0
// 0041a1c8  5e                   pop esi
// 0041a1c9  c3                   ret 

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
        void* result = operator new(56);
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

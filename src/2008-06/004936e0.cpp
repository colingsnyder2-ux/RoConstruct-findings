// from server: 100% by king_originala
// roc 2008-06 004936e0  unit: RBX::VShirt::?$FactoryProduct  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004936e0
//
// 004936e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004936e4  56                   push esi
// 004936e5  57                   push edi
// 004936e6  85c0                 test eax, eax
// 004936e8  7522                 jne 0x49370c
// 004936ea  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004936ee  8b38                 mov edi, dword ptr [eax]
// 004936f0  6a24                 push 0x24
// 004936f2  e829d22000           call 0x6a0920
// 004936f7  8bf0                 mov esi, eax
// 004936f9  57                   push edi
// 004936fa  56                   push esi
// 004936fb  e890dbffff           call 0x491290
// 00493700  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00493704  83c40c               add esp, 0xc
// 00493707  5f                   pop edi
// 00493708  8931                 mov dword ptr [ecx], esi
// 0049370a  5e                   pop esi
// 0049370b  c3                   ret 
// 0049370c  83f801               cmp eax, 1
// 0049370f  751f                 jne 0x493730
// 00493711  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00493715  8b37                 mov esi, dword ptr [edi]
// 00493717  8bce                 mov ecx, esi
// 00493719  e882a0ffff           call 0x48d7a0
// 0049371e  56                   push esi
// 0049371f  e856cf2000           call 0x6a067a
// 00493724  83c404               add esp, 4
// 00493727  c70700000000         mov dword ptr [edi], 0
// 0049372d  5f                   pop edi
// 0049372e  5e                   pop esi
// 0049372f  c3                   ret 
// 00493730  8b742410             mov esi, dword ptr [esp + 0x10]
// 00493734  8b0e                 mov ecx, dword ptr [esi]
// 00493736  68e8769300           push 0x9376e8
// 0049373b  ff1578288000         call dword ptr [0x802878]
// 00493741  84c0                 test al, al
// 00493743  740b                 je 0x493750
// 00493745  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00493749  8b02                 mov eax, dword ptr [edx]
// 0049374b  5f                   pop edi
// 0049374c  8906                 mov dword ptr [esi], eax
// 0049374e  5e                   pop esi
// 0049374f  c3                   ret 
// 00493750  5f                   pop edi
// 00493751  c70600000000         mov dword ptr [esi], 0
// 00493757  5e                   pop esi
// 00493758  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Object {
    unsigned char storage[36];
    ~Object();
};

extern "C" void __cdecl construct_object(Object*, const Object*);

struct TypeInfo {};
extern const TypeInfo object_type;
extern bool (__thiscall* type_equal)(const TypeInfo*, const TypeInfo&);

void __cdecl manage_object(Object* const* source, Object** destination, int operation)
{
    if (operation == 0) {
        Object* original = *source;
        Object* copy = static_cast<Object*>(operator new(36));
        construct_object(copy, original);
        *destination = copy;
    } else if (operation == 1) {
        Object* object = *destination;
        object->~Object();
        operator delete(object);
        *destination = 0;
    } else {
        if (type_equal(reinterpret_cast<const TypeInfo*>(*destination), object_type))
            *destination = *source;
        else
            *destination = 0;
    }
}

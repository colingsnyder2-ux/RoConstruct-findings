// from server: 100% by tester
// roc 2008-06 0041b520  unit: PAVDHTMLWindowService::?$sp_counted_impl_pd  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041b520
//
// 0041b520  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041b524  56                   push esi
// 0041b525  57                   push edi
// 0041b526  85c0                 test eax, eax
// 0041b528  7522                 jne 0x41b54c
// 0041b52a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041b52e  8b38                 mov edi, dword ptr [eax]
// 0041b530  6a38                 push 0x38
// 0041b532  e8e9532800           call 0x6a0920
// 0041b537  8bf0                 mov esi, eax
// 0041b539  57                   push edi
// 0041b53a  56                   push esi
// 0041b53b  e8a0e8ffff           call 0x419de0
// 0041b540  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0041b544  83c40c               add esp, 0xc
// 0041b547  5f                   pop edi
// 0041b548  8931                 mov dword ptr [ecx], esi
// 0041b54a  5e                   pop esi
// 0041b54b  c3                   ret 
// 0041b54c  83f801               cmp eax, 1
// 0041b54f  7520                 jne 0x41b571
// 0041b551  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0041b555  8b37                 mov esi, dword ptr [edi]
// 0041b557  8d4e08               lea ecx, [esi + 8]
// 0041b55a  e821d1ffff           call 0x418680
// 0041b55f  56                   push esi
// 0041b560  e815512800           call 0x6a067a
// 0041b565  83c404               add esp, 4
// 0041b568  c70700000000         mov dword ptr [edi], 0
// 0041b56e  5f                   pop edi
// 0041b56f  5e                   pop esi
// 0041b570  c3                   ret 
// 0041b571  8b742410             mov esi, dword ptr [esp + 0x10]
// 0041b575  8b0e                 mov ecx, dword ptr [esi]
// 0041b577  6808d29200           push 0x92d208
// 0041b57c  ff1578288000         call dword ptr [0x802878]
// 0041b582  84c0                 test al, al
// 0041b584  740b                 je 0x41b591
// 0041b586  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0041b58a  8b02                 mov eax, dword ptr [edx]
// 0041b58c  5f                   pop edi
// 0041b58d  8906                 mov dword ptr [esi], eax
// 0041b58f  5e                   pop esi
// 0041b590  c3                   ret 
// 0041b591  5f                   pop edi
// 0041b592  c70600000000         mov dword ptr [esi], 0
// 0041b598  5e                   pop esi
// 0041b599  c3                   ret 

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

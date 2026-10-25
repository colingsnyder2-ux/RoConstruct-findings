// from server: 100% by tester
// roc 2008-06 00499e30  unit: RBX::Network::VPlayers::?$SignalDesc  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00499e30
//
// 00499e30  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00499e34  56                   push esi
// 00499e35  57                   push edi
// 00499e36  85c0                 test eax, eax
// 00499e38  7522                 jne 0x499e5c
// 00499e3a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00499e3e  8b38                 mov edi, dword ptr [eax]
// 00499e40  6a28                 push 0x28
// 00499e42  e8d96a2000           call 0x6a0920
// 00499e47  8bf0                 mov esi, eax
// 00499e49  57                   push edi
// 00499e4a  56                   push esi
// 00499e4b  e800f2ffff           call 0x499050
// 00499e50  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00499e54  83c40c               add esp, 0xc
// 00499e57  5f                   pop edi
// 00499e58  8931                 mov dword ptr [ecx], esi
// 00499e5a  5e                   pop esi
// 00499e5b  c3                   ret 
// 00499e5c  83f801               cmp eax, 1
// 00499e5f  7520                 jne 0x499e81
// 00499e61  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00499e65  8b37                 mov esi, dword ptr [edi]
// 00499e67  8d4e04               lea ecx, [esi + 4]
// 00499e6a  e8d1d8ffff           call 0x497740
// 00499e6f  56                   push esi
// 00499e70  e805682000           call 0x6a067a
// 00499e75  83c404               add esp, 4
// 00499e78  c70700000000         mov dword ptr [edi], 0
// 00499e7e  5f                   pop edi
// 00499e7f  5e                   pop esi
// 00499e80  c3                   ret 
// 00499e81  8b742410             mov esi, dword ptr [esp + 0x10]
// 00499e85  8b0e                 mov ecx, dword ptr [esi]
// 00499e87  6818829300           push 0x938218
// 00499e8c  ff1578288000         call dword ptr [0x802878]
// 00499e92  84c0                 test al, al
// 00499e94  740b                 je 0x499ea1
// 00499e96  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00499e9a  8b02                 mov eax, dword ptr [edx]
// 00499e9c  5f                   pop edi
// 00499e9d  8906                 mov dword ptr [esi], eax
// 00499e9f  5e                   pop esi
// 00499ea0  c3                   ret 
// 00499ea1  5f                   pop edi
// 00499ea2  c70600000000         mov dword ptr [esi], 0
// 00499ea8  5e                   pop esi
// 00499ea9  c3                   ret 

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
        void* result = operator new(40);
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

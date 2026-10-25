// from server: 100% by king_originala
// roc 2008-06 004ca040  unit: RBX::Network::RoundRobinPhysicsSender  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ca040
//
// 004ca040  8b4904               mov ecx, dword ptr [ecx + 4]
// 004ca043  8b01                 mov eax, dword ptr [ecx]
// 004ca045  8b5044               mov edx, dword ptr [eax + 0x44]
// 004ca048  ffd2                 call edx
// 004ca04a  85c0                 test eax, eax
// 004ca04c  7433                 je 0x4ca081
// 004ca04e  8b8070010000         mov eax, dword ptr [eax + 0x170]
// 004ca054  85c0                 test eax, eax
// 004ca056  7429                 je 0x4ca081
// 004ca058  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 004ca05e  8b5104               mov edx, dword ptr [ecx + 4]
// 004ca061  8d8c0234010000       lea ecx, [edx + eax + 0x134]
// 004ca068  8b01                 mov eax, dword ptr [ecx]
// 004ca06a  8b10                 mov edx, dword ptr [eax]
// 004ca06c  ffd2                 call edx
// 004ca06e  85c0                 test eax, eax
// 004ca070  740f                 je 0x4ca081
// 004ca072  0528020000           add eax, 0x228
// 004ca077  50                   push eax
// 004ca078  e843b01100           call 0x5e50c0
// 004ca07d  83c404               add esp, 4
// 004ca080  c3                   ret 
// 004ca081  33c0                 xor eax, eax
// 004ca083  c3                   ret 

struct Object;
struct Result;
struct Node;
struct Interface;

typedef Result* (__thiscall *GetResult)(Object*);
typedef char* (__thiscall *GetValue)(Interface*);

struct Object
{
    GetResult* vtable;
};

struct Result
{
    char padding[0x170];
    Node* node;
};

struct Node
{
    char padding[0x134];
    int* vbtable;
};

struct Interface
{
    GetValue* vtable;
};

extern "C" void* __cdecl sub_5E50C0(void*);

struct S
{
    int padding;
    Object* object;
    void* f();
};

void* S::f()
{
    Result* result = object->vtable[17](object);
    if (result)
    {
        Node* node = result->node;
        if (node)
        {
            Interface* interfaceObject = reinterpret_cast<Interface*>(
                reinterpret_cast<char*>(node) + 0x134 + node->vbtable[1]);
            char* value = interfaceObject->vtable[0](interfaceObject);
            if (value)
                return sub_5E50C0(value + 0x228);
        }
    }
    return 0;
}

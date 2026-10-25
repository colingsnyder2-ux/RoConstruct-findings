// from server: 100% by colin
// roc 2008-06 0062d380  unit: RBX::VForceField::?$FactoryProduct  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062d380
//
// 0062d380  56                   push esi
// 0062d381  8b742408             mov esi, dword ptr [esp + 8]
// 0062d385  56                   push esi
// 0062d386  e885ffffff           call 0x62d310
// 0062d38b  83c404               add esp, 4
// 0062d38e  84c0                 test al, al
// 0062d390  7532                 jne 0x62d3c4
// 0062d392  8bb604010000         mov esi, dword ptr [esi + 0x104]
// 0062d398  85f6                 test esi, esi
// 0062d39a  742c                 je 0x62d3c8
// 0062d39c  6a00                 push 0
// 0062d39e  68b8819400           push 0x9481b8
// 0062d3a3  687c909200           push 0x92907c
// 0062d3a8  6a00                 push 0
// 0062d3aa  56                   push esi
// 0062d3ab  e816440700           call 0x6a17c6
// 0062d3b0  83c414               add esp, 0x14
// 0062d3b3  85c0                 test eax, eax
// 0062d3b5  7511                 jne 0x62d3c8
// 0062d3b7  56                   push esi
// 0062d3b8  e853ffffff           call 0x62d310
// 0062d3bd  83c404               add esp, 4
// 0062d3c0  84c0                 test al, al
// 0062d3c2  74ce                 je 0x62d392
// 0062d3c4  b001                 mov al, 1
// 0062d3c6  5e                   pop esi
// 0062d3c7  c3                   ret 
// 0062d3c8  32c0                 xor al, al
// 0062d3ca  5e                   pop esi
// 0062d3cb  c3                   ret 

struct Instance {
    virtual ~Instance();
    unsigned char padding[0x100];
    Instance *parent;
};
struct Workspace : Instance {};

bool __cdecl hasForceField(Instance *object);
extern char instanceType;
extern char workspaceType;
extern "C" void *__cdecl __RTDynamicCast(void *, long, void *, void *, int);

__declspec(dllexport) bool __cdecl protectedByForceField(Instance *object)
{
    if (hasForceField(object))
        goto yes;

    do {
        object = object->parent;
        if (!object)
            goto no;
        if (__RTDynamicCast(object, 0, &instanceType, &workspaceType, 0))
            goto no;
    } while (!hasForceField(object));
yes:
    return true;
no:
    return false;
}

// from server: 100% by king_originala
// roc 2008-06 00669c70  unit: RBX::TreeStage  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00669c70
//
// 00669c70  56                   push esi
// 00669c71  8b742408             mov esi, dword ptr [esp + 8]
// 00669c75  8b06                 mov eax, dword ptr [esi]
// 00669c77  8b500c               mov edx, dword ptr [eax + 0xc]
// 00669c7a  57                   push edi
// 00669c7b  8bf9                 mov edi, ecx
// 00669c7d  8bce                 mov ecx, esi
// 00669c7f  ffd2                 call edx
// 00669c81  85c0                 test eax, eax
// 00669c83  7546                 jne 0x669ccb
// 00669c85  8b06                 mov eax, dword ptr [esi]
// 00669c87  8b5014               mov edx, dword ptr [eax + 0x14]
// 00669c8a  8bce                 mov ecx, esi
// 00669c8c  ffd2                 call edx
// 00669c8e  83f805               cmp eax, 5
// 00669c91  7c38                 jl 0x669ccb
// 00669c93  807e2400             cmp byte ptr [esi + 0x24], 0
// 00669c97  743a                 je 0x669cd3
// 00669c99  56                   push esi
// 00669c9a  e8f1d7f7ff           call 0x5e7490
// 00669c9f  83c404               add esp, 4
// 00669ca2  8d4c240c             lea ecx, [esp + 0xc]
// 00669ca6  51                   push ecx
// 00669ca7  50                   push eax
// 00669ca8  8bcf                 mov ecx, edi
// 00669caa  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00669cb2  e8e9fcffff           call 0x6699a0
// 00669cb7  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00669cbb  52                   push edx
// 00669cbc  50                   push eax
// 00669cbd  56                   push esi
// 00669cbe  8bcf                 mov ecx, edi
// 00669cc0  e87bfcffff           call 0x669940
// 00669cc5  c6471401             mov byte ptr [edi + 0x14], 1
// 00669cc9  eb08                 jmp 0x669cd3
// 00669ccb  56                   push esi
// 00669ccc  8bcf                 mov ecx, edi
// 00669cce  e83dfaffff           call 0x669710
// 00669cd3  57                   push edi
// 00669cd4  8bce                 mov ecx, esi
// 00669cd6  e865bbfdff           call 0x645840
// 00669cdb  56                   push esi
// 00669cdc  e8bfe9f7ff           call 0x5e86a0
// 00669ce1  83c404               add esp, 4
// 00669ce4  5f                   pop edi
// 00669ce5  5e                   pop esi
// 00669ce6  c20400               ret 4

struct Node;
struct TreeStage;

struct Primitive
{
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual int inactive();
    virtual void v4();
    virtual int kind();

    unsigned char padding[32];
    unsigned char enabled;

    void f(int);
};

Node* __cdecl selectedEndpoint(Primitive*);
void __cdecl remove(Primitive*);

struct TreeStage
{
    unsigned char padding[20];
    unsigned char changed;

    Node* find(Node*, Node**);
    void detach(Primitive*, Node*, Node*);
    void reject(Primitive*);
    void process(Primitive*);
};

void TreeStage::process(Primitive* primitive)
{
    if (primitive->inactive() || primitive->kind() < 5)
    {
        reject(primitive);
    }
    else if (primitive->enabled)
    {
        Node* endpoint = selectedEndpoint(primitive);
        Node* parent = 0;
        Node* node = find(endpoint, &parent);
        detach(primitive, node, parent);
        changed = 1;
    }

    primitive->f(reinterpret_cast<int>(this));
    remove(primitive);
}

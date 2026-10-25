// from server: 100% by king_originala
// roc 2008-06 0043dae0  unit: Vector3Item  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043dae0
//
// 0043dae0  6aff                 push -1
// 0043dae2  681afa7b00           push 0x7bfa1a
// 0043dae7  64a100000000         mov eax, dword ptr fs:[0]
// 0043daed  50                   push eax
// 0043daee  64892500000000       mov dword ptr fs:[0], esp
// 0043daf5  51                   push ecx
// 0043daf6  53                   push ebx
// 0043daf7  56                   push esi
// 0043daf8  57                   push edi
// 0043daf9  8bf9                 mov edi, ecx
// 0043dafb  e8003b2d00           call 0x711600
// 0043db00  33f6                 xor esi, esi
// 0043db02  8d9f30010000         lea ebx, [edi + 0x130]
// 0043db08  eb06                 jmp 0x43db10
// 0043db0a  8d9b00000000         lea ebx, [ebx]
// 0043db10  6840010000           push 0x140
// 0043db15  e8062e2600           call 0x6a0920
// 0043db1a  83c404               add esp, 4
// 0043db1d  8944240c             mov dword ptr [esp + 0xc], eax
// 0043db21  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0043db29  85c0                 test eax, eax
// 0043db2b  7418                 je 0x43db45
// 0043db2d  8b8f28010000         mov ecx, dword ptr [edi + 0x128]
// 0043db33  8b972c010000         mov edx, dword ptr [edi + 0x12c]
// 0043db39  56                   push esi
// 0043db3a  51                   push ecx
// 0043db3b  52                   push edx
// 0043db3c  8bc8                 mov ecx, eax
// 0043db3e  e88dfcffff           call 0x43d7d0
// 0043db43  eb02                 jmp 0x43db47
// 0043db45  33c0                 xor eax, eax
// 0043db47  50                   push eax
// 0043db48  8bcf                 mov ecx, edi
// 0043db4a  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0043db52  8903                 mov dword ptr [ebx], eax
// 0043db54  e867562d00           call 0x7131c0
// 0043db59  46                   inc esi
// 0043db5a  83c304               add ebx, 4
// 0043db5d  83fe03               cmp esi, 3
// 0043db60  7cae                 jl 0x43db10
// 0043db62  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0043db66  5f                   pop edi
// 0043db67  5e                   pop esi
// 0043db68  5b                   pop ebx
// 0043db69  64890d00000000       mov dword ptr fs:[0], ecx
// 0043db70  83c410               add esp, 0x10
// 0043db73  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct PropertyGridItem {
    char padding[0x128];

    void OnAddChildItem();
    PropertyGridItem* AddChildItem(PropertyGridItem*);
};

struct ComponentItem : PropertyGridItem {
    char data[0x18];

    ComponentItem(void*, void*, int);
};

struct Vector3Item : PropertyGridItem {
    void* first;
    void* second;
    ComponentItem* children[3];

    void OnAddChildItem();
};

void Vector3Item::OnAddChildItem()
{
    PropertyGridItem::OnAddChildItem();
    for (int i = 0; i < 3; ++i) {
        children[i] = new ComponentItem(second, first, i);
        AddChildItem(children[i]);
    }
}

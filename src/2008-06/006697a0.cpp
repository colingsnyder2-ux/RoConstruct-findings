// from server: 100% by king_originala
// roc 2008-06 006697a0  unit: RBX::TreeStage  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006697a0
//
// 006697a0  83ec0c               sub esp, 0xc
// 006697a3  53                   push ebx
// 006697a4  55                   push ebp
// 006697a5  8be9                 mov ebp, ecx
// 006697a7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006697ab  394d10               cmp dword ptr [ebp + 0x10], ecx
// 006697ae  8d4510               lea eax, [ebp + 0x10]
// 006697b1  56                   push esi
// 006697b2  57                   push edi
// 006697b3  8d4c2428             lea ecx, [esp + 0x28]
// 006697b7  7c02                 jl 0x6697bb
// 006697b9  8bc8                 mov ecx, eax
// 006697bb  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006697bf  8b11                 mov edx, dword ptr [ecx]
// 006697c1  8b742420             mov esi, dword ptr [esp + 0x20]
// 006697c5  53                   push ebx
// 006697c6  56                   push esi
// 006697c7  8bcd                 mov ecx, ebp
// 006697c9  8910                 mov dword ptr [eax], edx
// 006697cb  e890fdffff           call 0x669560
// 006697d0  8b460c               mov eax, dword ptr [esi + 0xc]
// 006697d3  3bd8                 cmp ebx, eax
// 006697d5  7505                 jne 0x6697dc
// 006697d7  8b7e10               mov edi, dword ptr [esi + 0x10]
// 006697da  eb02                 jmp 0x6697de
// 006697dc  8bf8                 mov edi, eax
// 006697de  8bcf                 mov ecx, edi
// 006697e0  e81be3f7ff           call 0x5e7b00
// 006697e5  8bf0                 mov esi, eax
// 006697e7  85f6                 test esi, esi
// 006697e9  747b                 je 0x669866
// 006697eb  eb03                 jmp 0x6697f0
// 006697ed  8d4900               lea ecx, [ecx]
// 006697f0  8b06                 mov eax, dword ptr [esi]
// 006697f2  8b500c               mov edx, dword ptr [eax + 0xc]
// 006697f5  8bce                 mov ecx, esi
// 006697f7  ffd2                 call edx
// 006697f9  85c0                 test eax, eax
// 006697fb  7537                 jne 0x669834
// 006697fd  8b06                 mov eax, dword ptr [esi]
// 006697ff  8b5014               mov edx, dword ptr [eax + 0x14]
// 00669802  8bce                 mov ecx, esi
// 00669804  ffd2                 call edx
// 00669806  83f805               cmp eax, 5
// 00669809  7c29                 jl 0x669834
// 0066980b  807e2400             cmp byte ptr [esi + 0x24], 0
// 0066980f  7447                 je 0x669858
// 00669811  8b460c               mov eax, dword ptr [esi + 0xc]
// 00669814  3bf8                 cmp edi, eax
// 00669816  7503                 jne 0x66981b
// 00669818  8b4610               mov eax, dword ptr [esi + 0x10]
// 0066981b  85c0                 test eax, eax
// 0066981d  7439                 je 0x669858
// 0066981f  3bc3                 cmp eax, ebx
// 00669821  7435                 je 0x669858
// 00669823  8b442428             mov eax, dword ptr [esp + 0x28]
// 00669827  40                   inc eax
// 00669828  50                   push eax
// 00669829  57                   push edi
// 0066982a  56                   push esi
// 0066982b  8bcd                 mov ecx, ebp
// 0066982d  e86effffff           call 0x6697a0
// 00669832  eb24                 jmp 0x669858
// 00669834  807e1c00             cmp byte ptr [esi + 0x1c], 0
// 00669838  89742424             mov dword ptr [esp + 0x24], esi
// 0066983c  751a                 jne 0x669858
// 0066983e  8d4c2424             lea ecx, [esp + 0x24]
// 00669842  51                   push ecx
// 00669843  8d542414             lea edx, [esp + 0x14]
// 00669847  52                   push edx
// 00669848  8d4d58               lea ecx, [ebp + 0x58]
// 0066984b  e8f0f3f7ff           call 0x5e8c40
// 00669850  c6451401             mov byte ptr [ebp + 0x14], 1
// 00669854  c6461c01             mov byte ptr [esi + 0x1c], 1
// 00669858  56                   push esi
// 00669859  8bcf                 mov ecx, edi
// 0066985b  e8c0e2f7ff           call 0x5e7b20
// 00669860  8bf0                 mov esi, eax
// 00669862  85f6                 test esi, esi
// 00669864  758a                 jne 0x6697f0
// 00669866  5f                   pop edi
// 00669867  5e                   pop esi
// 00669868  5d                   pop ebp
// 00669869  5b                   pop ebx
// 0066986a  83c40c               add esp, 0xc
// 0066986d  c20c00               ret 0xc

struct Primitive;

struct Geometry {
    Primitive* getFirst();
    Primitive* getNext(Primitive*);
};

struct Primitive {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual int isA();
    virtual void v4();
    virtual int getType();

    char pad04[8];
    Geometry* first;
    Geometry* second;
    char pad14[8];
    bool marked;
    char pad1D[7];
    bool enabled;
};

struct Collection {
    void insert(void* result, Primitive** value);
};

struct TreeStage {
    char pad00[16];
    int depth;
    bool changed;
    char pad15[67];
    Collection collection;

    void reset(Primitive*, Geometry*);
    void visit(Primitive*, Geometry*, int);
};

void TreeStage::visit(Primitive* node, Geometry* previous, int level)
{
    const int* maximum = depth < level ? &level : &depth;
    depth = *maximum;
    reset(node, previous);

    Geometry* geometry =
        previous == node->first ? node->second : node->first;

    Primitive* current = geometry->getFirst();
    while (current) {
        if (!current->isA() && current->getType() >= 5) {
            if (current->enabled) {
                Geometry* other = current->first;
                if (geometry == other)
                    other = current->second;
                if (other && other != previous)
                    visit(current, geometry, level + 1);
            }
        } else {
            Primitive* value = current;
            if (!current->marked) {
                int result[3];
                collection.insert(result, &value);
                changed = true;
                current->marked = true;
            }
        }
        current = geometry->getNext(current);
    }
}

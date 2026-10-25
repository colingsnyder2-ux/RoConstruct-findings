// from server: 100% by king_originala
// roc 2008-06 00543e50  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 417 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00543e50
//
// 00543e50  55                   push ebp
// 00543e51  8bec                 mov ebp, esp
// 00543e53  83ec24               sub esp, 0x24
// 00543e56  894de0               mov dword ptr [ebp - 0x20], ecx
// 00543e59  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 00543e5c  e88fe5ffff           call 0x5423f0
// 00543e61  8b00                 mov eax, dword ptr [eax]
// 00543e63  8945f4               mov dword ptr [ebp - 0xc], eax
// 00543e66  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 00543e69  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00543e6c  8955f0               mov dword ptr [ebp - 0x10], edx
// 00543e6f  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 00543e72  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00543e75  894de4               mov dword ptr [ebp - 0x1c], ecx
// 00543e78  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 00543e7b  52                   push edx
// 00543e7c  e80fdfffff           call 0x541d90
// 00543e81  83c404               add esp, 4
// 00543e84  0fbe00               movsx eax, byte ptr [eax]
// 00543e87  85c0                 test eax, eax
// 00543e89  0f858e000000         jne 0x543f1d
// 00543e8f  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00543e92  51                   push ecx
// 00543e93  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 00543e96  52                   push edx
// 00543e97  e874870000           call 0x54c610
// 00543e9c  83c404               add esp, 4
// 00543e9f  50                   push eax
// 00543ea0  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 00543ea3  83c108               add ecx, 8
// 00543ea6  e835e6ffff           call 0x5424e0
// 00543eab  0fb6c0               movzx eax, al
// 00543eae  85c0                 test eax, eax
// 00543eb0  7413                 je 0x543ec5
// 00543eb2  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00543eb5  51                   push ecx
// 00543eb6  e8e5deffff           call 0x541da0
// 00543ebb  83c404               add esp, 4
// 00543ebe  8b10                 mov edx, dword ptr [eax]
// 00543ec0  8955f4               mov dword ptr [ebp - 0xc], edx
// 00543ec3  eb53                 jmp 0x543f18
// 00543ec5  8b45e4               mov eax, dword ptr [ebp - 0x1c]
// 00543ec8  50                   push eax
// 00543ec9  e8c2deffff           call 0x541d90
// 00543ece  83c404               add esp, 4
// 00543ed1  0fbe08               movsx ecx, byte ptr [eax]
// 00543ed4  85c9                 test ecx, ecx
// 00543ed6  7429                 je 0x543f01
// 00543ed8  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 00543edb  52                   push edx
// 00543edc  e82f870000           call 0x54c610
// 00543ee1  83c404               add esp, 4
// 00543ee4  50                   push eax
// 00543ee5  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00543ee8  50                   push eax
// 00543ee9  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 00543eec  83c108               add ecx, 8
// 00543eef  e8ece5ffff           call 0x5424e0
// 00543ef4  0fb6c8               movzx ecx, al
// 00543ef7  85c9                 test ecx, ecx
// 00543ef9  7406                 je 0x543f01
// 00543efb  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 00543efe  8955e4               mov dword ptr [ebp - 0x1c], edx
// 00543f01  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 00543f04  8945f0               mov dword ptr [ebp - 0x10], eax
// 00543f07  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00543f0a  51                   push ecx
// 00543f0b  e820870000           call 0x54c630
// 00543f10  83c404               add esp, 4
// 00543f13  8b10                 mov edx, dword ptr [eax]
// 00543f15  8955f4               mov dword ptr [ebp - 0xc], edx
// 00543f18  e95bffffff           jmp 0x543e78
// 00543f1d  8b45e4               mov eax, dword ptr [ebp - 0x1c]
// 00543f20  50                   push eax
// 00543f21  e86adeffff           call 0x541d90
// 00543f26  83c404               add esp, 4
// 00543f29  0fbe08               movsx ecx, byte ptr [eax]
// 00543f2c  85c9                 test ecx, ecx
// 00543f2e  740f                 je 0x543f3f
// 00543f30  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 00543f33  e8b8e4ffff           call 0x5423f0
// 00543f38  8b10                 mov edx, dword ptr [eax]
// 00543f3a  8955dc               mov dword ptr [ebp - 0x24], edx
// 00543f3d  eb11                 jmp 0x543f50
// 00543f3f  8b45e4               mov eax, dword ptr [ebp - 0x1c]
// 00543f42  50                   push eax
// 00543f43  e8e8860000           call 0x54c630
// 00543f48  83c404               add esp, 4
// 00543f4b  8b08                 mov ecx, dword ptr [eax]
// 00543f4d  894ddc               mov dword ptr [ebp - 0x24], ecx
// 00543f50  8b55dc               mov edx, dword ptr [ebp - 0x24]
// 00543f53  8955f4               mov dword ptr [ebp - 0xc], edx
// 00543f56  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 00543f59  50                   push eax
// 00543f5a  e831deffff           call 0x541d90
// 00543f5f  83c404               add esp, 4
// 00543f62  0fbe08               movsx ecx, byte ptr [eax]
// 00543f65  85c9                 test ecx, ecx
// 00543f67  754f                 jne 0x543fb8
// 00543f69  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 00543f6c  52                   push edx
// 00543f6d  e89e860000           call 0x54c610
// 00543f72  83c404               add esp, 4
// 00543f75  50                   push eax
// 00543f76  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00543f79  50                   push eax
// 00543f7a  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 00543f7d  83c108               add ecx, 8
// 00543f80  e85be5ffff           call 0x5424e0
// 00543f85  0fb6c8               movzx ecx, al
// 00543f88  85c9                 test ecx, ecx
// 00543f8a  7419                 je 0x543fa5
// 00543f8c  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 00543f8f  8955e4               mov dword ptr [ebp - 0x1c], edx
// 00543f92  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 00543f95  50                   push eax
// 00543f96  e895860000           call 0x54c630
// 00543f9b  83c404               add esp, 4
// 00543f9e  8b08                 mov ecx, dword ptr [eax]
// 00543fa0  894df4               mov dword ptr [ebp - 0xc], ecx
// 00543fa3  eb11                 jmp 0x543fb6
// 00543fa5  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 00543fa8  52                   push edx
// 00543fa9  e8f2ddffff           call 0x541da0
// 00543fae  83c404               add esp, 4
// 00543fb1  8b00                 mov eax, dword ptr [eax]
// 00543fb3  8945f4               mov dword ptr [ebp - 0xc], eax
// 00543fb6  eb9e                 jmp 0x543f56
// 00543fb8  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 00543fbb  51                   push ecx
// 00543fbc  8b55f0               mov edx, dword ptr [ebp - 0x10]
// 00543fbf  52                   push edx
// 00543fc0  8d4df8               lea ecx, [ebp - 8]
// 00543fc3  e858a30000           call 0x54e320
// 00543fc8  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 00543fcb  50                   push eax
// 00543fcc  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 00543fcf  51                   push ecx
// 00543fd0  8d4de8               lea ecx, [ebp - 0x18]
// 00543fd3  e848a30000           call 0x54e320
// 00543fd8  8d55e8               lea edx, [ebp - 0x18]
// 00543fdb  52                   push edx
// 00543fdc  8d45f8               lea eax, [ebp - 8]
// 00543fdf  50                   push eax
// 00543fe0  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00543fe3  e8e8190000           call 0x5459d0
// 00543fe8  8b4508               mov eax, dword ptr [ebp + 8]
// 00543feb  8be5                 mov esp, ebp
// 00543fed  5d                   pop ebp
// 00543fee  c20800               ret 8

#pragma optimize("", off)

struct Node;
struct Key;
struct S;

char* __cdecl nodeFlag(Node*);
char* __cdecl leftLink(Node*);
char* __cdecl rightLink(Node*);
const Key* __cdecl nodeKey(Node*);

struct Compare {
    bool compare(const Key&, const Key&);
};

struct Iterator {
    Node* node;
    S* owner;
    void initialize(Node*, S*);
};

struct Pair {
    Iterator first;
    Iterator second;
    Pair(const Iterator&, const Iterator&);
};

struct S {
    char padding[8];
    Compare comparator;
    char remaining[15];
    Node* head;

    char* root();
    Pair equalRange(const Key&);
};

Pair S::equalRange(const Key& key) {
    struct Frame {
        Node* upper;
        Iterator second;
        Node* lower;
        Node* current;
        Iterator first;
    } frame;

    frame.current = *reinterpret_cast<Node**>(root());
    frame.lower = head;
    frame.upper = head;

    while (!*nodeFlag(frame.current)) {
        if (comparator.compare(*nodeKey(frame.current), key)) {
            frame.current = *reinterpret_cast<Node**>(leftLink(frame.current));
        } else {
            if (*nodeFlag(frame.upper) &&
                comparator.compare(key, *nodeKey(frame.current))) {
                frame.upper = frame.current;
            }
            frame.lower = frame.current;
            frame.current = *reinterpret_cast<Node**>(rightLink(frame.current));
        }
    }

    frame.current = *nodeFlag(frame.upper)
        ? *reinterpret_cast<Node**>(root())
        : *reinterpret_cast<Node**>(rightLink(frame.upper));

    while (!*nodeFlag(frame.current)) {
        if (comparator.compare(key, *nodeKey(frame.current))) {
            frame.upper = frame.current;
            frame.current = *reinterpret_cast<Node**>(rightLink(frame.current));
        } else {
            frame.current = *reinterpret_cast<Node**>(leftLink(frame.current));
        }
    }

    frame.first.initialize(frame.lower, this);
    frame.second.initialize(frame.upper, this);
    return Pair(frame.first, frame.second);
}

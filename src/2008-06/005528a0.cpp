// from server: 100% by king_originala
// roc 2008-06 005528a0  unit: RBX::RenderBase::AggregateChunk  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005528a0
//
// 005528a0  55                   push ebp
// 005528a1  8bec                 mov ebp, esp
// 005528a3  51                   push ecx
// 005528a4  894dfc               mov dword ptr [ebp - 4], ecx
// 005528a7  8b45fc               mov eax, dword ptr [ebp - 4]
// 005528aa  c70000000000         mov dword ptr [eax], 0
// 005528b0  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005528b3  8b5508               mov edx, dword ptr [ebp + 8]
// 005528b6  895104               mov dword ptr [ecx + 4], edx
// 005528b9  8b4508               mov eax, dword ptr [ebp + 8]
// 005528bc  50                   push eax
// 005528bd  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005528c0  83c108               add ecx, 8
// 005528c3  e848060000           call 0x552f10
// 005528c8  8b45fc               mov eax, dword ptr [ebp - 4]
// 005528cb  8be5                 mov esp, ebp
// 005528cd  5d                   pop ebp
// 005528ce  c20400               ret 4

#pragma optimize("", off)

struct Member {
    Member(int value);
};

struct S {
    int first;
    int second;
    Member member;

    S(int value);
};

S::S(int value)
    : first(0), second(value), member(value)
{
}

// from server: 100% by king_originala
// roc 2008-06 00553380  unit: RBX::RenderBase::AggregateChunk  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00553380
//
// 00553380  55                   push ebp
// 00553381  8bec                 mov ebp, esp
// 00553383  83ec08               sub esp, 8
// 00553386  8d450c               lea eax, [ebp + 0xc]
// 00553389  50                   push eax
// 0055338a  e831010000           call 0x5534c0
// 0055338f  83c404               add esp, 4
// 00553392  8945f8               mov dword ptr [ebp - 8], eax
// 00553395  8d4d14               lea ecx, [ebp + 0x14]
// 00553398  51                   push ecx
// 00553399  e822010000           call 0x5534c0
// 0055339e  83c404               add esp, 4
// 005533a1  8945fc               mov dword ptr [ebp - 4], eax
// 005533a4  eb09                 jmp 0x5533af
// 005533a6  8b55f8               mov edx, dword ptr [ebp - 8]
// 005533a9  83c228               add edx, 0x28
// 005533ac  8955f8               mov dword ptr [ebp - 8], edx
// 005533af  8b45f8               mov eax, dword ptr [ebp - 8]
// 005533b2  3b45fc               cmp eax, dword ptr [ebp - 4]
// 005533b5  740e                 je 0x5533c5
// 005533b7  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005533ba  51                   push ecx
// 005533bb  8d4d1c               lea ecx, [ebp + 0x1c]
// 005533be  e81d010000           call 0x5534e0
// 005533c3  ebe1                 jmp 0x5533a6
// 005533c5  8b5508               mov edx, dword ptr [ebp + 8]
// 005533c8  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 005533cb  8902                 mov dword ptr [edx], eax
// 005533cd  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 005533d0  894a04               mov dword ptr [edx + 4], ecx
// 005533d3  8b4508               mov eax, dword ptr [ebp + 8]
// 005533d6  8be5                 mov esp, ebp
// 005533d8  5d                   pop ebp
// 005533d9  c3                   ret 

struct Element {
    char data[40];
};

struct Iterator {
    void* first;
    void* second;
};

struct Functor {
    unsigned int first;
    unsigned int second;
    Functor();
    void __thiscall operator()(Element*);
};

extern Element* __cdecl unwrap(Iterator*);

#pragma optimize("", off)
Functor __cdecl apply(Iterator begin, Iterator end, Functor function)
{
    struct {
        Element* current;
        Element* finish;
    } pointers;

    pointers.current = unwrap(&begin);
    pointers.finish = unwrap(&end);
    for (; pointers.current != pointers.finish; ++pointers.current)
        function(pointers.current);
    return function;
}
#pragma optimize("", on)

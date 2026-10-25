// from server: 100% by king_originala
// roc 2008-06 005530e0  unit: RBX::RenderBase::AggregateChunk  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005530e0
//
// 005530e0  55                   push ebp
// 005530e1  8bec                 mov ebp, esp
// 005530e3  51                   push ecx
// 005530e4  894dfc               mov dword ptr [ebp - 4], ecx
// 005530e7  8b45fc               mov eax, dword ptr [ebp - 4]
// 005530ea  c7400c00000000       mov dword ptr [eax + 0xc], 0
// 005530f1  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005530f4  c7411000000000       mov dword ptr [ecx + 0x10], 0
// 005530fb  8b55fc               mov edx, dword ptr [ebp - 4]
// 005530fe  c7421400000000       mov dword ptr [edx + 0x14], 0
// 00553105  837d0800             cmp dword ptr [ebp + 8], 0
// 00553109  7506                 jne 0x553111
// 0055310b  32c0                 xor al, al
// 0055310d  eb4b                 jmp 0x55315a
// 0055310f  eb47                 jmp 0x553158
// 00553111  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00553114  e817f9feff           call 0x542a30
// 00553119  3b4508               cmp eax, dword ptr [ebp + 8]
// 0055311c  7307                 jae 0x553125
// 0055311e  e84d010000           call 0x553270
// 00553123  eb33                 jmp 0x553158
// 00553125  8b4508               mov eax, dword ptr [ebp + 8]
// 00553128  50                   push eax
// 00553129  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0055312c  83c108               add ecx, 8
// 0055312f  e8acfcfeff           call 0x542de0
// 00553134  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00553137  89410c               mov dword ptr [ecx + 0xc], eax
// 0055313a  8b55fc               mov edx, dword ptr [ebp - 4]
// 0055313d  8b45fc               mov eax, dword ptr [ebp - 4]
// 00553140  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00553143  894a10               mov dword ptr [edx + 0x10], ecx
// 00553146  8b55fc               mov edx, dword ptr [ebp - 4]
// 00553149  8b420c               mov eax, dword ptr [edx + 0xc]
// 0055314c  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0055314f  8d1488               lea edx, [eax + ecx*4]
// 00553152  8b45fc               mov eax, dword ptr [ebp - 4]
// 00553155  895014               mov dword ptr [eax + 0x14], edx
// 00553158  b001                 mov al, 1
// 0055315a  8be5                 mov esp, ebp
// 0055315c  5d                   pop ebp
// 0055315d  c20400               ret 4

struct B {
    int *allocate(unsigned int);
};

extern "C" void __cdecl length_error();

struct S {
    char pad[8];
    B allocator;
    int *first;
    int *last;
    int *end;

    unsigned int max_size();
    bool f(unsigned int);
};

#pragma optimize("", off)
bool S::f(unsigned int count)
{
    first = 0;
    last = 0;
    end = 0;

    if (count == 0) {
        return false;
    } else if (max_size() < count) {
        length_error();
    } else {
        first = allocator.allocate(count);
        last = first;
        end = first + count;
    }

    return true;
}

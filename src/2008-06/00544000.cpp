// from server: 100% by king_originala
// roc 2008-06 00544000  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00544000
//
// 00544000  55                   push ebp
// 00544001  8bec                 mov ebp, esp
// 00544003  51                   push ecx
// 00544004  894dfc               mov dword ptr [ebp - 4], ecx
// 00544007  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054400a  e841150000           call 0x545550
// 0054400f  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00544012  894118               mov dword ptr [ecx + 0x18], eax
// 00544015  8b55fc               mov edx, dword ptr [ebp - 4]
// 00544018  8b4218               mov eax, dword ptr [edx + 0x18]
// 0054401b  50                   push eax
// 0054401c  e86fddffff           call 0x541d90
// 00544021  83c404               add esp, 4
// 00544024  c60001               mov byte ptr [eax], 1
// 00544027  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054402a  e8c1e3ffff           call 0x5423f0
// 0054402f  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00544032  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00544035  8910                 mov dword ptr [eax], edx
// 00544037  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054403a  e8a1c80000           call 0x5508e0
// 0054403f  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00544042  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00544045  8910                 mov dword ptr [eax], edx
// 00544047  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054404a  e8718e0000           call 0x54cec0
// 0054404f  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00544052  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00544055  8910                 mov dword ptr [eax], edx
// 00544057  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054405a  c7401c00000000       mov dword ptr [eax + 0x1c], 0
// 00544061  8be5                 mov esp, ebp
// 00544063  5d                   pop ebp
// 00544064  c3                   ret 

#pragma optimize("", off)

struct VChunk;
extern char* __cdecl flagPointer(VChunk* p);

struct S {
    char pad[0x18];
    VChunk* pointer;
    int state;

    VChunk* acquire();
    char* getPointer();
    VChunk** getSecondPointer();
    char* getThirdPointer();
    void initialize();
};

void S::initialize()
{
    pointer = acquire();
    *flagPointer(pointer) = 1;
    *reinterpret_cast<VChunk**>(getPointer()) = pointer;
    *getSecondPointer() = pointer;
    *reinterpret_cast<VChunk**>(getThirdPointer()) = pointer;
    state = 0;
}

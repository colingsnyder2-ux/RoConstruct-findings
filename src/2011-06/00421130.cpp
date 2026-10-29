// roc 2011-06 00421130  unit: RBX::DSVideoCaptureEngine  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00421130
//
// 00421130  56                   push esi
// 00421131  8bf1                 mov esi, ecx
// 00421133  8b06                 mov eax, dword ptr [esi]
// 00421135  8b08                 mov ecx, dword ptr [eax]
// 00421137  8b4904               mov ecx, dword ptr [ecx + 4]
// 0042113a  03c8                 add ecx, eax
// 0042113c  ff152404a400         call dword ptr [0xa40424]
// 00421142  85c0                 test eax, eax
// 00421144  7418                 je 0x42115e
// 00421146  8b06                 mov eax, dword ptr [esi]
// 00421148  8b10                 mov edx, dword ptr [eax]
// 0042114a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0042114d  03c8                 add ecx, eax
// 0042114f  ff152404a400         call dword ptr [0xa40424]
// 00421155  8bc8                 mov ecx, eax
// 00421157  5e                   pop esi
// 00421158  ff252004a400         jmp dword ptr [0xa40420]
// 0042115e  5e                   pop esi
// 0042115f  c3                   ret 
// copied from an identical function in another client (function ?Unlock@CIDEDocManager@@QAEXXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Stream {
    int* offsets;
};

struct Buffer;

extern Buffer* (__thiscall* rdbuf)(const void*);
extern void (__thiscall* unlock)(Buffer*);

struct CIDEDocManager {
    Stream* stream;
    void Unlock();
};

void CIDEDocManager::Unlock()
{
    if (rdbuf(reinterpret_cast<const char*>(stream) + stream->offsets[1]))
        unlock(rdbuf(reinterpret_cast<const char*>(stream) + stream->offsets[1]));
}
// roc 2010-06 0044d230  unit: CRobloxApp  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0044d230
//
// 0044d230  56                   push esi
// 0044d231  8bf1                 mov esi, ecx
// 0044d233  8b06                 mov eax, dword ptr [esi]
// 0044d235  8b08                 mov ecx, dword ptr [eax]
// 0044d237  8b4904               mov ecx, dword ptr [ecx + 4]
// 0044d23a  03c8                 add ecx, eax
// 0044d23c  ff15a8a49e00         call dword ptr [0x9ea4a8]
// 0044d242  85c0                 test eax, eax
// 0044d244  7418                 je 0x44d25e
// 0044d246  8b06                 mov eax, dword ptr [esi]
// 0044d248  8b10                 mov edx, dword ptr [eax]
// 0044d24a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0044d24d  03c8                 add ecx, eax
// 0044d24f  ff15a8a49e00         call dword ptr [0x9ea4a8]
// 0044d255  8bc8                 mov ecx, eax
// 0044d257  5e                   pop esi
// 0044d258  ff25aca49e00         jmp dword ptr [0x9ea4ac]
// 0044d25e  5e                   pop esi
// 0044d25f  c3                   ret 
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
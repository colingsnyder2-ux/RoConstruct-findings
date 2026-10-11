// from server: 44% by atomic.potato
// roc 2007-08 006cbb80  unit: CXTPReportPaintManager  size: 335 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006cbb80
//
// 006cbb80  6aff                 push -1
// 006cbb82  6824647600           push 0x766424
// 006cbb87  64a100000000         mov eax, dword ptr fs:[0]
// 006cbb8d  50                   push eax
// 006cbb8e  51                   push ecx
// 006cbb8f  56                   push esi
// 006cbb90  a188518b00           mov eax, dword ptr [0x8b5188]
// 006cbb95  33c4                 xor eax, esp
// 006cbb97  50                   push eax
// 006cbb98  8d44240c             lea eax, [esp + 0xc]
// 006cbb9c  64a300000000         mov dword ptr fs:[0], eax
// 006cbba2  8bf1                 mov esi, ecx
// 006cbba4  89742408             mov dword ptr [esp + 8], esi
// 006cbba8  c7068c7a7d00         mov dword ptr [esi], 0x7d7a8c
// 006cbbae  8d8ea4020000         lea ecx, [esi + 0x2a4]
// 006cbbb4  c74424140e000000     mov dword ptr [esp + 0x14], 0xe
// 006cbbbc  e89f35fdff           call 0x69f160
// 006cbbc1  8d8e9c020000         lea ecx, [esi + 0x29c]
// 006cbbc7  c64424140d           mov byte ptr [esp + 0x14], 0xd
// 006cbbcc  e88f35fdff           call 0x69f160
// 006cbbd1  8d8e94020000         lea ecx, [esi + 0x294]
// 006cbbd7  c64424140c           mov byte ptr [esp + 0x14], 0xc
// 006cbbdc  e87f35fdff           call 0x69f160
// 006cbbe1  8d8e74020000         lea ecx, [esi + 0x274]
// 006cbbe7  c64424140b           mov byte ptr [esp + 0x14], 0xb
// 006cbbec  c701e0647800         mov dword ptr [ecx], 0x7864e0
// 006cbbf2  e8893ad5ff           call 0x41f680
// 006cbbf7  8d8e6c020000         lea ecx, [esi + 0x26c]
// 006cbbfd  c64424140a           mov byte ptr [esp + 0x14], 0xa
// 006cbc02  c701e0647800         mov dword ptr [ecx], 0x7864e0
// 006cbc08  e8733ad5ff           call 0x41f680
// 006cbc0d  8d8e64020000         lea ecx, [esi + 0x264]
// 006cbc13  c644241409           mov byte ptr [esp + 0x14], 9
// 006cbc18  c701e0647800         mov dword ptr [ecx], 0x7864e0
// 006cbc1e  e85d3ad5ff           call 0x41f680
// 006cbc23  8d8e48020000         lea ecx, [esi + 0x248]
// 006cbc29  c644241408           mov byte ptr [esp + 0x14], 8
// 006cbc2e  e88748f6ff           call 0x6304ba
// 006cbc33  8d8e04020000         lea ecx, [esi + 0x204]
// 006cbc39  ff15bcdd7700         call dword ptr [0x77ddbc]
// 006cbc3f  8d8e00020000         lea ecx, [esi + 0x200]
// 006cbc45  ff15bcdd7700         call dword ptr [0x77ddbc]
// 006cbc4b  8d8efc010000         lea ecx, [esi + 0x1fc]
// 006cbc51  ff15bcdd7700         call dword ptr [0x77ddbc]
// 006cbc57  8d8ef8010000         lea ecx, [esi + 0x1f8]
// 006cbc5d  ff15bcdd7700         call dword ptr [0x77ddbc]
// 006cbc63  8d4e38               lea ecx, [esi + 0x38]
// 006cbc66  c644241403           mov byte ptr [esp + 0x14], 3
// 006cbc6b  c701084a7900         mov dword ptr [ecx], 0x794a08
// 006cbc71  e80a3ad5ff           call 0x41f680
// 006cbc76  8d4e30               lea ecx, [esi + 0x30]
// 006cbc79  c644241402           mov byte ptr [esp + 0x14], 2
// 006cbc7e  c701084a7900         mov dword ptr [ecx], 0x794a08
// 006cbc84  e8f739d5ff           call 0x41f680
// 006cbc89  8d4e28               lea ecx, [esi + 0x28]
// 006cbc8c  c644241401           mov byte ptr [esp + 0x14], 1
// 006cbc91  c701084a7900         mov dword ptr [ecx], 0x794a08
// 006cbc97  e8e439d5ff           call 0x41f680
// 006cbc9c  8d4e20               lea ecx, [esi + 0x20]
// 006cbc9f  c644241400           mov byte ptr [esp + 0x14], 0
// 006cbca4  c701084a7900         mov dword ptr [ecx], 0x794a08
// 006cbcaa  e8d139d5ff           call 0x41f680
// 006cbcaf  8bce                 mov ecx, esi
// 006cbcb1  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006cbcb9  e8dc49f6ff           call 0x63069a
// 006cbcbe  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006cbcc2  64890d00000000       mov dword ptr fs:[0], ecx
// 006cbcc9  59                   pop ecx
// 006cbcca  5e                   pop esi
// 006cbccb  83c410               add esp, 0x10
// 006cbcce  c3                   ret 

struct B_func_0041f680 { virtual ~B_func_0041f680(); };
struct S_func_0041f680 : B_func_0041f680 { ~S_func_0041f680(); };
struct B_func_0069f160 { virtual ~B_func_0069f160(); };
struct S_func_0069f160 : B_func_0069f160 { ~S_func_0069f160(); };

extern "C" void __stdcall sub_006304ba();
extern "C" void __stdcall sub_0063069a();
extern "C" void __stdcall sub_77ddbc();

struct CXTPReportPaintManager {
    char pad0[0x20];
    S_func_0041f680 m20;
    S_func_0041f680 m28;
    S_func_0041f680 m30;
    S_func_0041f680 m38;
    char pad3c[0x1bc];
    S_func_0041f680 m1f8;
    S_func_0041f680 m200;
    S_func_0041f680 m208;
    S_func_0041f680 m210;
    char pad218[0x30];
    S_func_0069f160 m248;
    char pad24c[0x18];
    S_func_0041f680 m264;
    S_func_0041f680 m26c;
    S_func_0041f680 m274;
    char pad27c[0x18];
    S_func_0069f160 m294;
    S_func_0069f160 m29c;
    S_func_0069f160 m2a4;
    ~CXTPReportPaintManager();
};

CXTPReportPaintManager::~CXTPReportPaintManager()
{
    m2a4.~S_func_0069f160();
    m29c.~S_func_0069f160();
    m294.~S_func_0069f160();
    m274.~S_func_0041f680();
    m26c.~S_func_0041f680();
    m264.~S_func_0041f680();
    sub_006304ba();
    sub_77ddbc();
    sub_77ddbc();
    sub_77ddbc();
    sub_77ddbc();
    m38.~S_func_0041f680();
    m30.~S_func_0041f680();
    m28.~S_func_0041f680();
    m20.~S_func_0041f680();
    sub_0063069a();
}

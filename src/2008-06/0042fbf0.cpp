// from server: 100% by king_originala
// roc 2008-06 0042fbf0  unit: CMainFrame  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042fbf0
//
// 0042fbf0  64a100000000         mov eax, dword ptr fs:[0]
// 0042fbf6  6aff                 push -1
// 0042fbf8  6876fa7b00           push 0x7bfa76
// 0042fbfd  50                   push eax
// 0042fbfe  64892500000000       mov dword ptr fs:[0], esp
// 0042fc05  8b81ec000000         mov eax, dword ptr [ecx + 0xec]
// 0042fc0b  81ec7c020000         sub esp, 0x27c
// 0042fc11  85c0                 test eax, eax
// 0042fc13  0f84b8000000         je 0x42fcd1
// 0042fc19  56                   push esi
// 0042fc1a  6a00                 push 0
// 0042fc1c  50                   push eax
// 0042fc1d  8d4c240c             lea ecx, [esp + 0xc]
// 0042fc21  e8aac22b00           call 0x6ebed0
// 0042fc26  8d442404             lea eax, [esp + 4]
// 0042fc2a  50                   push eax
// 0042fc2b  8d8c24cc000000       lea ecx, [esp + 0xcc]
// 0042fc32  c784248c02000000000000 mov dword ptr [esp + 0x28c], 0
// 0042fc3d  e80ed02b00           call 0x6ecc50
// 0042fc42  8d8c24c8000000       lea ecx, [esp + 0xc8]
// 0042fc49  51                   push ecx
// 0042fc4a  8d4c2408             lea ecx, [esp + 8]
// 0042fc4e  c684248c02000001     mov byte ptr [esp + 0x28c], 1
// 0042fc56  e855682d00           call 0x7064b0
// 0042fc5b  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 0042fc62  6a00                 push 0
// 0042fc64  6881000000           push 0x81
// 0042fc69  8bf1                 mov esi, ecx
// 0042fc6b  e880e12b00           call 0x6eddf0
// 0042fc70  6aff                 push -1
// 0042fc72  68d1230000           push 0x23d1
// 0042fc77  8bce                 mov ecx, esi
// 0042fc79  e802de2b00           call 0x6eda80
// 0042fc7e  6aff                 push -1
// 0042fc80  68d6230000           push 0x23d6
// 0042fc85  6881000000           push 0x81
// 0042fc8a  8bce                 mov ecx, esi
// 0042fc8c  e8bfda2b00           call 0x6ed750
// 0042fc91  6aff                 push -1
// 0042fc93  68ca230000           push 0x23ca
// 0042fc98  8bce                 mov ecx, esi
// 0042fc9a  e821dc2b00           call 0x6ed8c0
// 0042fc9f  8d4c2404             lea ecx, [esp + 4]
// 0042fca3  e858c42b00           call 0x6ec100
// 0042fca8  8d8c24c8000000       lea ecx, [esp + 0xc8]
// 0042fcaf  c684248802000000     mov byte ptr [esp + 0x288], 0
// 0042fcb7  e864c92b00           call 0x6ec620
// 0042fcbc  8d4c2404             lea ecx, [esp + 4]
// 0042fcc0  c7842488020000ffffffff mov dword ptr [esp + 0x288], 0xffffffff
// 0042fccb  e8b0a42b00           call 0x6ea180
// 0042fcd0  5e                   pop esi
// 0042fcd1  8b8c247c020000       mov ecx, dword ptr [esp + 0x27c]
// 0042fcd8  64890d00000000       mov dword ptr fs:[0], ecx
// 0042fcdf  81c488020000         add esp, 0x288
// 0042fce5  c3                   ret 

struct CommandBars;

struct CommandsPage
{
    void Initialize(int resource, int category);
    void AddCategories(int resource, int position);
    void AddMenuCategory(int menu, int resource, int position);
    void AddAllCommandsCategory(int resource, int position);
};

struct OptionsPage;

struct CustomizeSheet
{
    unsigned char reserved0[176];
    CommandsPage* commandsPage;
    unsigned char reserved1[16];

    CustomizeSheet(CommandBars* bars, int flags);
    ~CustomizeSheet();
    void AddPage(OptionsPage* page);
    int DoModal();
};

struct OptionsPage
{
    int reserved[110];

    OptionsPage(CustomizeSheet* sheet);
    ~OptionsPage();
};

struct CMainFrame
{
    unsigned char reserved[236];
    CommandBars* commandBars;

    void Customize();
};

void CMainFrame::Customize()
{
    if (commandBars)
    {
        CustomizeSheet sheet(commandBars, 0);
        OptionsPage options(&sheet);
        sheet.AddPage(&options);

        CommandsPage* page = sheet.commandsPage;
        page->Initialize(0x81, 0);
        page->AddCategories(0x23d1, -1);
        page->AddMenuCategory(0x81, 0x23d6, -1);
        page->AddAllCommandsCategory(0x23ca, -1);

        sheet.DoModal();
    }
}

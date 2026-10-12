// from server: 100% by king_originala
// roc 2008-06 00463430  unit: Scintilla::CScintillaView  size: 311 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00463430
//
// 00463430  6aff                 push -1
// 00463432  68eb317c00           push 0x7c31eb
// 00463437  64a100000000         mov eax, dword ptr fs:[0]
// 0046343d  50                   push eax
// 0046343e  64892500000000       mov dword ptr fs:[0], esp
// 00463445  81ec0c010000         sub esp, 0x10c
// 0046344b  56                   push esi
// 0046344c  57                   push edi
// 0046344d  33ff                 xor edi, edi
// 0046344f  57                   push edi
// 00463450  8bf1                 mov esi, ecx
// 00463452  6a02                 push 2
// 00463454  8d4c2410             lea ecx, [esp + 0x10]
// 00463458  e80fe02300           call 0x6a146c
// 0046345d  838c248c00000002     or dword ptr [esp + 0x8c], 2
// 00463465  89bc241c010000       mov dword ptr [esp + 0x11c], edi
// 0046346c  39bee8000000         cmp dword ptr [esi + 0xe8], edi
// 00463472  740a                 je 0x46347e
// 00463474  838c248c00000008     or dword ptr [esp + 0x8c], 8
// 0046347c  eb08                 jmp 0x463486
// 0046347e  838c248c00000004     or dword ptr [esp + 0x8c], 4
// 00463486  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 0046348c  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 00463492  8b96d0000000         mov edx, dword ptr [esi + 0xd0]
// 00463498  81c6c8000000         add esi, 0xc8
// 0046349e  898424a8000000       mov dword ptr [esp + 0xa8], eax
// 004634a5  8b460c               mov eax, dword ptr [esi + 0xc]
// 004634a8  898c24ac000000       mov dword ptr [esp + 0xac], ecx
// 004634af  899424b0000000       mov dword ptr [esp + 0xb0], edx
// 004634b6  898424b4000000       mov dword ptr [esp + 0xb4], eax
// 004634bd  89bc24dc000000       mov dword ptr [esp + 0xdc], edi
// 004634c4  89bc24d8000000       mov dword ptr [esp + 0xd8], edi
// 004634cb  e856d42300           call 0x6a0926
// 004634d0  8b7804               mov edi, dword ptr [eax + 4]
// 004634d3  8d8c24d0000000       lea ecx, [esp + 0xd0]
// 004634da  51                   push ecx
// 004634db  8bcf                 mov ecx, edi
// 004634dd  e884df2300           call 0x6a1466
// 004634e2  8b9424dc000000       mov edx, dword ptr [esp + 0xdc]
// 004634e9  8b8424d8000000       mov eax, dword ptr [esp + 0xd8]
// 004634f0  8d4c2408             lea ecx, [esp + 8]
// 004634f4  89942488000000       mov dword ptr [esp + 0x88], edx
// 004634fb  89842484000000       mov dword ptr [esp + 0x84], eax
// 00463502  e859df2300           call 0x6a1460
// 00463507  83f801               cmp eax, 1
// 0046350a  7528                 jne 0x463534
// 0046350c  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 00463513  51                   push ecx
// 00463514  56                   push esi
// 00463515  ff15702d8000         call dword ptr [0x802d70]
// 0046351b  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 00463522  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 00463529  6a01                 push 1
// 0046352b  52                   push edx
// 0046352c  50                   push eax
// 0046352d  8bcf                 mov ecx, edi
// 0046352f  e826df2300           call 0x6a145a
// 00463534  8d4c2408             lea ecx, [esp + 8]
// 00463538  c784241c010000ffffffff mov dword ptr [esp + 0x11c], 0xffffffff
// 00463543  c7442408eca88100     mov dword ptr [esp + 8], 0x81a8ec
// 0046354b  e882d92300           call 0x6a0ed2
// 00463550  8b8c2414010000       mov ecx, dword ptr [esp + 0x114]
// 00463557  5f                   pop edi
// 00463558  5e                   pop esi
// 00463559  64890d00000000       mov dword ptr fs:[0], ecx
// 00463560  81c418010000         add esp, 0x118
// 00463566  c3                   ret 

typedef unsigned long DWORD;

struct RECT {
    long left, top, right, bottom;
};

struct POINT {
    long x, y;
};

struct PAGESETUPDLG {
    DWORD lStructSize;
    void* hwndOwner;
    void* hDevMode;
    void* hDevNames;
    DWORD Flags;
    POINT ptPaperSize;
    RECT rtMinMargin;
    RECT rtMargin;
    void* hInstance;
    long lCustData;
    void* lpfnPageSetupHook;
    void* lpfnPagePaintHook;
    const char* lpPageSetupTemplateName;
    void* hPageSetupTemplate;
};

struct PRINTDLG {
    char prefix[8];
    void* hDevMode;
    void* hDevNames;
    char suffix[50];
};

struct Dialog {
    virtual ~Dialog();
    char data[0x70];
};

struct PageSetupDialog : Dialog {
    PAGESETUPDLG psd;
    PageSetupDialog(DWORD flags, void* parent);
    virtual ~PageSetupDialog();
    virtual int DoModal();
};

inline PageSetupDialog::~PageSetupDialog()
{
}

struct Printer {
    int GetPrinterDeviceDefaults(PRINTDLG*);
    void SelectPrinter(void* names, void* mode, int freePrevious);
};

struct Application {
    void* reserved;
    Printer* printer;
};

Application* __cdecl GetApplication();

extern "C" int (__stdcall *CopyRect)(RECT*, const RECT*);

struct View {
    char prefix[0xc8];
    RECT margins;
    char padding[0x10];
    int metric;
    void PageSetup();
};

void View::PageSetup()
{
    PageSetupDialog dialog(2, 0);
    dialog.psd.Flags |= 2;
    if (metric)
        dialog.psd.Flags |= 8;
    else
        dialog.psd.Flags |= 4;

    dialog.psd.rtMargin = margins;

    PRINTDLG defaults;
    defaults.hDevNames = 0;
    defaults.hDevMode = 0;

    Printer* printer = GetApplication()->printer;
    printer->GetPrinterDeviceDefaults(&defaults);
    dialog.psd.hDevNames = defaults.hDevNames;
    dialog.psd.hDevMode = defaults.hDevMode;

    if (dialog.DoModal() == 1) {
        CopyRect(&margins, &dialog.psd.rtMargin);
        printer->SelectPrinter(dialog.psd.hDevNames,
                               dialog.psd.hDevMode, 1);
    }
}

// from server: 93% by king_originala
extern "C" int (__cdecl * _mbscmp)(const unsigned char *,
                                  const unsigned char *);

struct CommandBars;

struct PopupBar {
    static PopupBar * __cdecl CreatePopupBar(CommandBars *);
    void SetTitle(const char *, unsigned int, int);
};

struct PopupRequest {
    PopupBar *popup;
    int enabled;
    unsigned char reserved[12];
    const char *title;
};

struct CMainFrame {
    unsigned char reserved[0xec];
    CommandBars *commandBars;

    int CreatePopup(PopupRequest *);
};

int CMainFrame::CreatePopup(PopupRequest *request)
{
    if (request->enabled &&
        _mbscmp((const unsigned char *)request->title,
                (const unsigned char *)"Camera Positioning") == 0)
    {
        PopupBar *popup = PopupBar::CreatePopupBar(commandBars);
        popup->SetTitle(request->title, 1001, 400);
        request->popup = popup;
        return 1;
    }
    return 0;
}

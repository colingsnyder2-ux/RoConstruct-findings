// from server: 65% by atomic.potato
extern "C" int __cdecl isalpha(int c);

struct TwoDManager {
    bool isAbsolutePath();
};

bool TwoDManager::isAbsolutePath() {
    char* s = (char*)this;
    if (isalpha((unsigned char)s[0]) && s[1] == ':') {
        return true;
    }
    char c = s[0];
    if (c == '/' || c == '\\') {
        return true;
    }
    return false;
}

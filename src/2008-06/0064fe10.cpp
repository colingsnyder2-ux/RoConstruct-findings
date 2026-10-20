// from server: 66% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espeon_chatdequeloop3b5cceb7e8a31ea0.cpp

// Candidate translation unit (score above; library headers required).
#pragma float_control(precise,off,push)
#include <deque>
struct ChatLine {char prefix[0x44];float dieTime;};
struct Heartbeat{const float time,step;};
struct ChatOutput {char prefix[0x174];std::deque<ChatLine*> fifo;float time;void removeOldest();};
struct Tick {char prefix[0x4c];float time;void onEvent(const void*,Heartbeat);};
void Tick::onEvent(const void*,Heartbeat event){time=event.step+time;ChatOutput*self=reinterpret_cast<ChatOutput*>(reinterpret_cast<char*>(this)-0x148);for(;;){if(self->fifo.empty())break;ChatLine*oldest=self->fifo.front();if(self->time>oldest->dieTime)self->removeOldest();else break;}}

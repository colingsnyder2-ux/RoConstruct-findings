# Match functions with your own Claude Code or Codex plan

`roc agent` lets a coding agent you already pay for do the matching work. It
leases a function from the group server, puts it in `src/<client>/<addr>.cpp`
(starting from the server's best source), and runs the agent CLI on it. The
agent edits that one file and re-runs `roc check` until it matches or stops
improving. RoConstruct then re-scores the file itself: a gain is submitted
under the lease (the server verifies it again), and a regression is rolled back.

Usage is billed to whatever the CLI is signed in with on your PC: your Claude
Pro/Max plan for `claude`, your ChatGPT plan for `codex`, or an API key if you
set one (`ANTHROPIC_API_KEY` / `OPENAI_API_KEY` take precedence in those CLIs).

## Set up

1. Finish the normal setup (`install.cmd` or `./install.sh`) and `roc config`
   with your username and the server.
2. Install and sign in to one CLI:
   - Claude Code: `npm install -g @anthropic-ai/claude-code`, then run `claude` once and log in.
   - Codex: `npm install -g @openai/codex`, then run `codex` once and sign in with ChatGPT.

## Run

```text
roc agent claude --jobs 5
roc agent codex --client 2008-06 --jobs 10 --max-size 128
roc agent claude --model sonnet --minutes 30
```

`--minutes` caps each function (default 20); `--jobs` is how many functions to
do one after another.

### Interactive mode (the maintainer workflow)

```text
roc agent claude --interactive --goal "match as many 2008-06 RakNet functions as you can"
```

This opens a normal Claude Code (or Codex) session in the repo with your goal
as its first message. It reads `CLAUDE.md` (Codex: `AGENTS.md`), which holds the
same setup steps and workflow the maintainers' sessions use: it can download
compilers and clients, add research recipes to `benchmarks/research.json`, add library recipes,
and submit gains. You watch, answer its permission prompts and steer. The menu
(`roc.cmd` with no arguments) starts this mode.

### Goal mode (unattended)

Give the agent a task in plain words instead of one leased function:

```text
roc agent claude --goal "match as many 2008-06 RakNet functions as you can"
roc agent codex --goal "finish the zlib functions in 2008-06" --minutes 60
```

The agent picks its own functions with `roc next`/`claim`/`check`, may run any
`roc.py` command, searches the web for the original library source, and submits
gains with `roc submit`. A session runs up to `--minutes` (default 120),
and Claude's steps stream to the console and the dashboard (Commands, Agent setup).
Unattended runs are limited to `roc.py` commands, `src/` edits and append-only
trial records in `work/agent-memory/attempts.jsonl`; anything
broader (scripts, downloads, new recipes) is for interactive mode, where you
approve it.

What the agent may do: Claude runs with `acceptEdits`; per function it may only
run `roc.py check`, in goal mode any `roc.py` command plus web search/fetch.
Codex runs with `--full-auto` (writes limited to this folder). Submissions are
always re-verified by the server before they count.

## Experiment memory

Workers → Experiment memory shows ranked lessons from `docs/agent-memory.json`,
shared attempts from other PCs and the latest 20 local attempts. XTP lessons include vendor prelude (+321
verified exacts), imported CString GetLength (+123), proven boundaries (+69),
and the rejected `/GS-` profile. Counts are sequential campaign gains; see
`docs/investigations/xtp-2008-coverage-20261011.md` for cohort limits.

Every launch directs the agent to `docs/AGENT_GUIDE.md`: search earlier trials,
reuse relevant verified lessons, measure one hypothesis, log failures and gains,
propagate winners, and park exhausted profiles. Unattended prompts include
shared lessons and recent local records directly; interactive sessions read them.
Leased runs automatically append fresh session scores, source hashes and the
server response. Individual trial records in goal/interactive sessions depend
on the agent following the workflow. Leased, goal, interactive and automatic runs
sync attempts with the group server before and after the session. This reuses
context across sessions and PCs; it does not retrain models.

## Automatic batches

Use **Workers → New → Agent worker → Preview best areas**, then choose the CLI/model,
worker count, target cap and time limits. Preview does not launch paid agents.
Start Automatic refreshes server sources and gives disjoint leased batches to
workers. Existing dashboard jobs still queue serially; an Auto run itself has
multiple workers. Output, tool summaries, areas and outcomes reuse the Workers
chat terminal, session tabs and loop filters. Agent workers support immediate
stop; worker/time settings are fixed for that run.

```text
roc agent claude --plan
roc agent claude --automatic --workers 2 --jobs 24 --minutes 120
roc agent codex --automatic --workers 4 --batch-size 4 --batch-minutes 10
```

Every selected area gets free compiler-backed donor/recipe reuse and compiler
gates (both 2008 builds; kept flags, `/O2`, `/O1`) for >=90% targets before model
work starts. Source variants that already failed on any PC are skipped. Batch prompts seek reusable fixes. Individual function mining is
off; `--individual` allows it only after shared hypotheses fail. The planner
currently focuses on 2008-06. Labels and stored scores guide ranking; fresh
compilation and server code/data checks establish actual gains.

Candidates live under `work/agent-auto/<run>/`. `roc agent-check` logs every
requested trial, including failed compilation, and preserves the highest-scoring
source. Auto submits improvements from that preserved source, reverified by the
server, and avoids concurrent edits to canonical `src/` and `scores.json`.
An unchanged source/profile family parks after two independent zero-gain repair
batches. New source/extent evidence or a different model profile reopens it.
Missing leases/setup/CLI failures are reported separately from quality losses.
The selected CLI uses its signed-in plan/key; these limits do not enforce dollars.

Workers → Experiment memory shows shared lessons and attempts from other PCs.
Sync attempts & refresh uploads pending local trials. Automatic runs sync before
and after work. Upgrade/restart the group server for `/v1/agent-memory` support;
older servers leave reports queued locally. Missing docs are cached from the
server; essential docs also ship in worker packages. See `docs/AGENT_GUIDE.md`
and `docs/workspace-layout.md` for sharing and local organization.

## Claude Code cloud sessions (claude.ai/code)

A cloud session is Claude Code running in an Anthropic Linux VM, paid from your
Claude plan or cloud session credits. There, Claude itself is the agent, so it
uses the manual loop instead of `roc agent` (see `CLAUDE.md`). It needs:

- **Network access: Full** (or a custom allowlist) in the environment settings.
  The VM must reach the compiler downloads, the client download source and the
  group server. A Tailscale-only server address is not reachable from the cloud;
  it needs a public address (for example Tailscale Funnel).
- **Setup script** for the environment (not yet proven end to end; Wine runs the
  old 32-bit `cl.exe`):

  ```sh
  sudo dpkg --add-architecture i386 && sudo apt-get update
  sudo apt-get install -y wine wine32 msitools cabextract p7zip-full
  ./install.sh
  ```

Then ask the session, for example: "Set up with `./roc.sh doctor`, then match
open 2008-06 functions following CLAUDE.md and submit any gains."

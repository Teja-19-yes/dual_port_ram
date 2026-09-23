# 256×8 Dual-Port RAM — Verilog-to-GDSII Results

This directory contains the important outputs from the completed
256×8 dual-port RAM physical-design flow.

## Flow

RTL
→ Simulation
→ Synthesis
→ Constraints
→ Floorplan
→ PDN
→ Placement
→ CTS
→ Routing
→ Parasitic Extraction
→ Signoff STA
→ DRC
→ LVS
→ Antenna
→ Final Layout
→ GDSII

## Result directories

| Directory | Stage |
|---|---|
| 01_rtl | RTL design and testbench |
| 02_simulation | Simulation and waveform |
| 03_synthesis | Synthesized netlist |
| 04_constraints | Timing constraints |
| 05_floorplan | Floorplan |
| 06_pdn | Power distribution |
| 07_placement | Placement |
| 08_cts | Clock tree synthesis |
| 09_routing | Routing |
| 10_parasitic_extraction | SPEF |
| 11_signoff_sta | Signoff timing |
| 12_drc | Design rule check |
| 13_lvs | Layout versus schematic |
| 14_antenna | Antenna verification |
| 15_final_layout | Final DEF/LEF/LIB/SDF |
| 16_gds | Final GDSII |

See `FINAL_RESULTS.md` for the consolidated numerical results.

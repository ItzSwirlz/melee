# Linker order for every file, passed to the Metrowerks linker.

INIT_O_FILES := 						            \
	$(BUILD_DIR)/src/Runtime/__mem.o	            \
    $(BUILD_DIR)/asm/init.o

EXTAB_O_FILES :=                                    \
    $(BUILD_DIR)/asm/extab.o

EXTABINDEX_O_FILES :=                               \
    $(BUILD_DIR)/asm/extabindex.o

TEXT_O_FILES := 						            \
	$(BUILD_DIR)/src/melee/lb/lbcommands.o			\
	$(BUILD_DIR)/asm/melee/lb/lbcommands.o  	    \
	$(BUILD_DIR)/asm/melee/lb/code_80005BB0.o  	    \
	$(BUILD_DIR)/asm/melee/lb/code_80008D30.o  	    \
	$(BUILD_DIR)/asm/melee/lb/code_8000B1CC.o  	    \
	$(BUILD_DIR)/asm/melee/lb/code_8000CE50.o  	    \
	$(BUILD_DIR)/asm/melee/lb/lbvector.o		 	\
	                                                \
	$(BUILD_DIR)/asm/melee/text_1.o 		 	            \
	                                                \
	$(BUILD_DIR)/asm/melee/pl/player.o 		 	        \
	                                                \
	$(BUILD_DIR)/asm/melee/text_2.o 		 	            \
	$(BUILD_DIR)/asm/melee/text_3.o 		 	            \
													\
	$(BUILD_DIR)/asm/melee/ft/ftdonkey_1.o 		    \
	$(BUILD_DIR)/asm/melee/ft/ftmario.o 			            \
	$(BUILD_DIR)/asm/melee/ft/ftfalcon.o 		            \
	$(BUILD_DIR)/asm/melee/ft/ftfox.o 			            \
	$(BUILD_DIR)/asm/melee/ft/ftlink.o 			            \
	$(BUILD_DIR)/asm/melee/ft/ftkirby.o 			            \
	$(BUILD_DIR)/asm/melee/ft/ftdonkey_2.o 		            \
	$(BUILD_DIR)/asm/melee/ft/ftseak.o 			            \
	$(BUILD_DIR)/asm/melee/ft/ftness.o 			            \
	$(BUILD_DIR)/asm/melee/ft/ftpeach.o 			            \
	$(BUILD_DIR)/asm/melee/ft/fticeclimber.o 	            \
	$(BUILD_DIR)/asm/melee/ft/ftpikachu.o 		            \
	$(BUILD_DIR)/asm/melee/ft/ftsamus.o 		 	            \
	$(BUILD_DIR)/asm/melee/ft/ftyoshi.o 		 	            \
	$(BUILD_DIR)/asm/melee/ft/ftkoopa.o 		 	            \
	$(BUILD_DIR)/asm/melee/ft/ftmars.o 		 	            \
	$(BUILD_DIR)/asm/melee/ft/ftzelda.o 		 	            \
	$(BUILD_DIR)/asm/melee/ft/ftpurin.o 		 	            \
	$(BUILD_DIR)/asm/melee/ft/ftluigi.o 		 	            \
	$(BUILD_DIR)/asm/melee/ft/ftmewtwo.o 		            \
	$(BUILD_DIR)/asm/melee/ft/ftclink.o 					\
	$(BUILD_DIR)/asm/melee/ft/ftdrmario.o 		            \
	$(BUILD_DIR)/asm/melee/ft/ftfalco.o 					\
	$(BUILD_DIR)/asm/melee/ft/ftpichu.o 					\
	$(BUILD_DIR)/asm/melee/ft/ftgamewatch.o 				\
	$(BUILD_DIR)/asm/melee/ft/ftganon.o 					\
	$(BUILD_DIR)/asm/melee/ft/ftemblem.o 		            \
	$(BUILD_DIR)/asm/melee/ft/ftzakoboy.o 		            \
	$(BUILD_DIR)/asm/melee/ft/ftzakogirl.o 		            \
	$(BUILD_DIR)/asm/melee/ft/ftgigakoopa.o 				\
	$(BUILD_DIR)/asm/melee/ft/ftsandbag.o 		            \
	$(BUILD_DIR)/asm/melee/ft/ftmasterhand.o 	            \
	$(BUILD_DIR)/asm/melee/ft/ftcrazyhand.o 				\
	$(BUILD_DIR)/asm/melee/ft/ftbosslib.o 		            \
															\
	$(BUILD_DIR)/asm/melee/text_4.o 		 	            \
															\
	$(BUILD_DIR)/asm/melee/gm/gmtitle.o 		 			\
	$(BUILD_DIR)/asm/melee/gm/gmsinglebutton.o 		 		\
															\
	$(BUILD_DIR)/asm/melee/text_5.o 		 	            \
															\
	$(BUILD_DIR)/asm/melee/gr/grfzerocar.o 					\
	$(BUILD_DIR)/asm/melee/gr/grizumi.o 		 			\
	$(BUILD_DIR)/asm/melee/gr/grcastle.o 		            \
	$(BUILD_DIR)/asm/melee/gr/grstadium.o 	 	            \
	$(BUILD_DIR)/asm/melee/gr/grkongo.o 		 			\
	$(BUILD_DIR)/asm/melee/gr/grzebes.o 		 			\
	$(BUILD_DIR)/asm/melee/gr/grcorneria.o 	 	            \
	$(BUILD_DIR)/asm/melee/gr/grstory.o 		 			\
	$(BUILD_DIR)/asm/melee/gr/gronett.o 		 			\
	$(BUILD_DIR)/asm/melee/gr/grbigblue.o 	 	            \
	$(BUILD_DIR)/asm/melee/gr/grmutecity.o 	 	            \
	$(BUILD_DIR)/asm/melee/gr/grfourside.o 	 	            \
	$(BUILD_DIR)/asm/melee/gr/grgreatbay.o 	 	            \
	$(BUILD_DIR)/asm/melee/gr/gricemt.o 		 			\
	$(BUILD_DIR)/asm/melee/gr/grinishie1.o 		            \
	$(BUILD_DIR)/asm/melee/gr/grinishie2.o 	 	            \
	$(BUILD_DIR)/asm/melee/gr/grkraid_.o 		            \
	$(BUILD_DIR)/asm/melee/gr/grrcruise.o 	 	            \
	$(BUILD_DIR)/asm/melee/gr/grshrine.o 		            \
	$(BUILD_DIR)/asm/melee/gr/gryorster.o 	 	            \
	$(BUILD_DIR)/asm/melee/gr/grgarden.o 		            \
	$(BUILD_DIR)/asm/melee/gr/grvenom.o 		 			\
	$(BUILD_DIR)/asm/melee/gr/grtest.o 		 	            \
	$(BUILD_DIR)/asm/melee/gr/grkinokoroute.o  	            \
	$(BUILD_DIR)/asm/melee/gr/grshrineroute.o  	            \
	$(BUILD_DIR)/asm/melee/gr/grzebesroute.o   	            \
	$(BUILD_DIR)/asm/melee/gr/grbigblueroute.o 	            \
	$(BUILD_DIR)/asm/melee/gr/grfigure1.o 	 	            \
	$(BUILD_DIR)/asm/melee/gr/grfigure2.o 	 	            \
	$(BUILD_DIR)/asm/melee/gr/grfigure3.o		            \
	$(BUILD_DIR)/asm/melee/gr/groldyoshi.o 		            \
	$(BUILD_DIR)/asm/melee/gr/groldkongo.o 		            \
	$(BUILD_DIR)/asm/melee/gr/groldpupupu.o 				\
	$(BUILD_DIR)/asm/melee/gr/grpura.o 			            \
	$(BUILD_DIR)/asm/melee/gr/grgreens.o 		            \
	$(BUILD_DIR)/asm/melee/gr/grflatzone.o 		            \
	$(BUILD_DIR)/asm/melee/gr/grpushon.o 		            \
	$(BUILD_DIR)/asm/melee/gr/grfigureget.o 				\
	$(BUILD_DIR)/asm/melee/gr/grbattle.o 		            \
	$(BUILD_DIR)/asm/melee/gr/grlast.o 			            \
	$(BUILD_DIR)/asm/melee/gr/grhomerun.o 		            \
	$(BUILD_DIR)/asm/melee/gr/grheal.o 			            \
	$(BUILD_DIR)/asm/melee/gr/grtmario.o 		            \
	$(BUILD_DIR)/asm/melee/gr/grtfalcon.o 		            \
	$(BUILD_DIR)/asm/melee/gr/grtclink.o 		            \
	$(BUILD_DIR)/asm/melee/gr/grtdonkey.o 		            \
	$(BUILD_DIR)/asm/melee/gr/grtdrmario.o 		            \
	$(BUILD_DIR)/asm/melee/gr/grtfalco.o 		            \
	$(BUILD_DIR)/asm/melee/gr/grtfox.o 			            \
	$(BUILD_DIR)/asm/melee/gr/grticeclimber.o 	            \
	$(BUILD_DIR)/asm/melee/gr/grtkirby.o 		            \
	$(BUILD_DIR)/asm/melee/gr/grtkoopa.o 		            \
	$(BUILD_DIR)/asm/melee/gr/grtlink.o 					\
	$(BUILD_DIR)/asm/melee/gr/grtluigi.o 		            \
	$(BUILD_DIR)/asm/melee/gr/grtmars.o 					\
	$(BUILD_DIR)/asm/melee/gr/grtmewtwo.o 		            \
	$(BUILD_DIR)/asm/melee/gr/grtness.o 					\
	$(BUILD_DIR)/asm/melee/gr/grtpeach.o 		            \
	$(BUILD_DIR)/asm/melee/gr/grtpichu.o 		            \
	$(BUILD_DIR)/asm/melee/gr/grtpikachu.o 		            \
	$(BUILD_DIR)/asm/melee/gr/grtpurin.o 		            \
	$(BUILD_DIR)/asm/melee/gr/grtsamus.o 		            \
	$(BUILD_DIR)/asm/melee/gr/grtseak.o 					\
	$(BUILD_DIR)/asm/melee/gr/grtyoshi.o 		            \
	$(BUILD_DIR)/asm/melee/gr/grtzelda.o 		            \
	$(BUILD_DIR)/asm/melee/gr/grtgamewatch.o 	            \
	$(BUILD_DIR)/asm/melee/gr/grtemblem.o 		            \
	$(BUILD_DIR)/asm/melee/gr/grtganon.o 		            \
															\
	$(BUILD_DIR)/asm/melee/code_80224A54.o 	            \
	$(BUILD_DIR)/asm/melee/text_6.o                       \
                                                    \
	$(BUILD_DIR)/asm/Runtime/__va_arg.o             	\
	$(BUILD_DIR)/asm/Runtime/NMWException.o         	\
	$(BUILD_DIR)/asm/Runtime/Gecko_setjmp.o         	\
	$(BUILD_DIR)/asm/Runtime/runtime.o              	\
	$(BUILD_DIR)/src/Runtime/__init_cpp_exceptions.o	\
													\
	$(BUILD_DIR)/asm/MSL/abort_exit.o               \
	$(BUILD_DIR)/asm/MSL/ansi_fp.o                  \
	$(BUILD_DIR)/asm/MSL/buffer_io.o                \
	$(BUILD_DIR)/src/MSL/ppc_eabi/critical_regions.gamecube.o 	\
	$(BUILD_DIR)/asm/MSL/ctype.o                    \
	$(BUILD_DIR)/asm/MSL/direct_io.o                \
	$(BUILD_DIR)/asm/MSL/cstring.o                  \
	$(BUILD_DIR)/asm/MSL/mem_funcs.o                \
	$(BUILD_DIR)/asm/MSL/printf.o                   \
	$(BUILD_DIR)/src/MSL/rand.o                     \
	$(BUILD_DIR)/asm/MSL/string.o                   \
	$(BUILD_DIR)/asm/MSL/strtoul.o                  \
	$(BUILD_DIR)/asm/MSL/console_io.o               \
	$(BUILD_DIR)/asm/MSL/wchar_io.o                 \
	$(BUILD_DIR)/asm/MSL/math.o                     \
                                                    \
	$(BUILD_DIR)/asm/MetroTRK/mainloop.o            \
	$(BUILD_DIR)/asm/MetroTRK/nubevent.o            \
	$(BUILD_DIR)/asm/MetroTRK/nubinit.o             \
	$(BUILD_DIR)/asm/MetroTRK/msg.o                 \
	$(BUILD_DIR)/asm/MetroTRK/msgbuf.o              \
	$(BUILD_DIR)/asm/MetroTRK/serpoll.o             \
	$(BUILD_DIR)/asm/MetroTRK/dispatch.o            \
	$(BUILD_DIR)/asm/MetroTRK/msghndlr.o            \
	$(BUILD_DIR)/asm/MetroTRK/flush_cache.o         \
	$(BUILD_DIR)/asm/MetroTRK/mem_TRK.o             \
	$(BUILD_DIR)/asm/MetroTRK/targimpl.o            \
	$(BUILD_DIR)/asm/MetroTRK/dolphin_trk.o         \
	$(BUILD_DIR)/asm/MetroTRK/mpc_7xx_603e.o        \
	$(BUILD_DIR)/asm/MetroTRK/main_TRK.o            \
	$(BUILD_DIR)/asm/MetroTRK/dolphin_trk_glue.o    \
	$(BUILD_DIR)/asm/MetroTRK/targcont.o            \
													\
	$(BUILD_DIR)/asm/dolphin/amcstubs/AmcExi2Stubs.o		\
	$(BUILD_DIR)/asm/dolphin/DebuggerDriver.o               \
	$(BUILD_DIR)/asm/dolphin/hio/hio.o              \
	$(BUILD_DIR)/asm/dolphin/mcc/mcc.o              \
	$(BUILD_DIR)/asm/dolphin/mcc/fio.o              \
	$(BUILD_DIR)/asm/dolphin/thp/THPDec.o           \
	$(BUILD_DIR)/asm/dolphin/jpeg/jpegdec.o         \
	$(BUILD_DIR)/asm/dolphin/base/PPCArch.o	        \
	$(BUILD_DIR)/asm/dolphin/db/db.o                \
	$(BUILD_DIR)/asm/dolphin/dsp/dsp.o              \
	$(BUILD_DIR)/asm/dolphin/dsp/dsp_debug.o        \
	$(BUILD_DIR)/asm/dolphin/dsp/dsp_task.o         \
	$(BUILD_DIR)/asm/dolphin/dvd/dvdlow.o           \
	$(BUILD_DIR)/asm/dolphin/dvd/dvdqueue.o         \
	$(BUILD_DIR)/asm/dolphin/dvd/dvderror.o         \
	$(BUILD_DIR)/asm/dolphin/dvd/fstload.o          \
	$(BUILD_DIR)/asm/dolphin/gx/GXInit.o            \
	$(BUILD_DIR)/asm/dolphin/gx/GXFifo.o            \
	$(BUILD_DIR)/asm/dolphin/mtx/mtxvec.o           \
                                                    \
	$(BUILD_DIR)/asm/dolphin/dolphin_sdk_1.o                \
                                                    \
	$(BUILD_DIR)/asm/dolphin/os/init/__ppc_eabi_init.o      \
                                                    \
	$(BUILD_DIR)/asm/dolphin/pad/Padclamp.o  		\
                                                    \
	$(BUILD_DIR)/asm/dolphin/dolphin_sdk_2.o                \
                                                    \
	$(BUILD_DIR)/asm/dolphin/vi/vi.o  				\
	$(BUILD_DIR)/asm/dolphin/ai/ai.o                \
	$(BUILD_DIR)/asm/dolphin/ar/ar.o                \
	$(BUILD_DIR)/asm/dolphin/ar/arq.o               \
                                                    \
	$(BUILD_DIR)/asm/dolphin/card/CARD.o			\
                                                    \
	$(BUILD_DIR)/asm/dolphin/ax/AX.o 				\
                                                    \
	$(BUILD_DIR)/asm/sysdolphin/baselib/dobj.o		\
	$(BUILD_DIR)/asm/sysdolphin/baselib/tobj.o		\
	$(BUILD_DIR)/asm/sysdolphin/baselib/state.o		\
	$(BUILD_DIR)/src/sysdolphin/baselib/tev.o		\
	$(BUILD_DIR)/asm/sysdolphin/baselib/tev.o		\
	$(BUILD_DIR)/asm/sysdolphin/baselib/mobj.o		\
	$(BUILD_DIR)/src/sysdolphin/baselib/aobj.o	    \
	$(BUILD_DIR)/asm/sysdolphin/baselib/lobj.o		\
	$(BUILD_DIR)/asm/sysdolphin/baselib/cobj.o		\
	$(BUILD_DIR)/src/sysdolphin/baselib/fobj.o      \
	$(BUILD_DIR)/asm/sysdolphin/baselib/fobj.o		\
	$(BUILD_DIR)/src/sysdolphin/baselib/pobj.o      \
	$(BUILD_DIR)/asm/sysdolphin/baselib/pobj.o		\
	$(BUILD_DIR)/asm/sysdolphin/baselib/jobj.o		\
	$(BUILD_DIR)/src/sysdolphin/baselib/displayfunc.o       \
	$(BUILD_DIR)/asm/sysdolphin/baselib/displayfunc.o		\
	$(BUILD_DIR)/src/sysdolphin/baselib/initialize.o 		\
	$(BUILD_DIR)/asm/sysdolphin/baselib/initialize.o		\
	$(BUILD_DIR)/asm/sysdolphin/baselib/video.o				\
	$(BUILD_DIR)/asm/sysdolphin/baselib/controller.o		\
	$(BUILD_DIR)/asm/sysdolphin/baselib/rumble.o			\
	$(BUILD_DIR)/asm/sysdolphin/baselib/spline.o	\
	$(BUILD_DIR)/asm/sysdolphin/baselib/mtx.o		\
	$(BUILD_DIR)/asm/sysdolphin/baselib/util.o		\
	$(BUILD_DIR)/src/sysdolphin/baselib/objalloc.o  	\
	$(BUILD_DIR)/asm/sysdolphin/baselib/objalloc.o		\
	$(BUILD_DIR)/src/sysdolphin/baselib/robj.o		\
	$(BUILD_DIR)/asm/sysdolphin/baselib/robj.o		\
	$(BUILD_DIR)/src/sysdolphin/baselib/id.o        \
	$(BUILD_DIR)/src/sysdolphin/baselib/wobj.o      \
	$(BUILD_DIR)/asm/sysdolphin/baselib/wobj.o		\
	$(BUILD_DIR)/asm/sysdolphin/baselib/fog.o	    \
	$(BUILD_DIR)/asm/sysdolphin/baselib/perf.o		\
	$(BUILD_DIR)/asm/sysdolphin/baselib/list.o		\
	$(BUILD_DIR)/src/sysdolphin/baselib/object.o    \
	$(BUILD_DIR)/asm/sysdolphin/baselib/quatlib.o   \
	$(BUILD_DIR)/asm/sysdolphin/baselib/memory.o	\
	$(BUILD_DIR)/asm/sysdolphin/baselib/shadow.o	\
	$(BUILD_DIR)/asm/sysdolphin/baselib/archive.o	\
	$(BUILD_DIR)/src/sysdolphin/baselib/random.o	\
	$(BUILD_DIR)/asm/sysdolphin/baselib/bytecode.o		\
	$(BUILD_DIR)/asm/sysdolphin/baselib/class.o			\
	$(BUILD_DIR)/asm/sysdolphin/baselib/hash.o		\
	$(BUILD_DIR)/asm/sysdolphin/baselib/texp.o			\
	$(BUILD_DIR)/asm/sysdolphin/baselib/texpdag.o		\
	$(BUILD_DIR)/asm/sysdolphin/baselib/leak.o			\
	$(BUILD_DIR)/asm/sysdolphin/baselib/debug.o			\
	$(BUILD_DIR)/asm/sysdolphin/baselib/synth.o			\
	$(BUILD_DIR)/asm/sysdolphin/baselib/AXDriver.o		\
	$(BUILD_DIR)/asm/sysdolphin/baselib/devcom.o		\
	$(BUILD_DIR)/asm/sysdolphin/baselib/gobjproc.o			\
	$(BUILD_DIR)/asm/sysdolphin/baselib/gobjplink.o			\
	$(BUILD_DIR)/asm/sysdolphin/baselib/gobjgxlink.o		\
	$(BUILD_DIR)/asm/sysdolphin/baselib/gobjobject.o		\
	$(BUILD_DIR)/asm/sysdolphin/baselib/gobjuserdata.o		\
	$(BUILD_DIR)/src/sysdolphin/baselib/gobj.o	    \
	$(BUILD_DIR)/asm/sysdolphin/baselib/gobj.o	    \
	$(BUILD_DIR)/asm/sysdolphin/baselib/code_80391580.o		\
	$(BUILD_DIR)/asm/sysdolphin/baselib/psdisp.o			\
	$(BUILD_DIR)/asm/sysdolphin/baselib/psdisptev.o			\
	$(BUILD_DIR)/asm/sysdolphin/baselib/psappsrt.o			\
	$(BUILD_DIR)/asm/sysdolphin/baselib/sobj.o				\
	$(BUILD_DIR)/asm/sysdolphin/baselib/sislib.o			\
	$(BUILD_DIR)/asm/sysdolphin/baselib/code_803A949C.o		\

RODATA_O_FILES :=                                   \
    $(BUILD_DIR)/asm/rodata.o

DATA_O_FILES :=                                     \
    $(BUILD_DIR)/asm/data.o

BSS_O_FILES :=                                      \
    $(BUILD_DIR)/asm/bss.o

SDATA_O_FILES :=                                    \
    $(BUILD_DIR)/asm/sdata.o

# Previously defined in bss.o
SBSS_O_FILES :=

SDATA2_O_FILES :=                                   \
    $(BUILD_DIR)/asm/sdata2.o
